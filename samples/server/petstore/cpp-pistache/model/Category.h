/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Category.h
 *
 * A category for a pet
 */

#ifndef Category_H_
#define Category_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// A category for a pet
/// </summary>
class  Category
{
public:
    Category();
    virtual ~Category() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const Category& rhs) const;
    bool operator!=(const Category& rhs) const;

    /////////////////////////////////////////////
    /// Category members

    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    void setId(int64_t const value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();

    friend  void to_json(nlohmann::json& j, const Category& o);
    friend  void from_json(const nlohmann::json& j, Category& o);
protected:
    int64_t m_Id;
    bool m_IdIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* Category_H_ */
