/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_REQUESTPARAM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_REQUESTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/RequestParam.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * RequestParam
                */
                class RequestParam : public AbstractModel
                {
                public:
                    RequestParam();
                    ~RequestParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AnyOf类型的参数</p>
                     * @return AnyOf <p>AnyOf类型的参数</p>
                     * 
                     */
                    std::vector<RequestParam> GetAnyOf() const;

                    /**
                     * 设置<p>AnyOf类型的参数</p>
                     * @param _anyOf <p>AnyOf类型的参数</p>
                     * 
                     */
                    void SetAnyOf(const std::vector<RequestParam>& _anyOf);

                    /**
                     * 判断参数 AnyOf 是否已赋值
                     * @return AnyOf 是否已赋值
                     * 
                     */
                    bool AnyOfHasBeenSet() const;

                    /**
                     * 获取<p>默认值</p>
                     * @return DefaultValue <p>默认值</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>默认值</p>
                     * @param _defaultValue <p>默认值</p>
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取<p>参数描述</p>
                     * @return Description <p>参数描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>参数描述</p>
                     * @param _description <p>参数描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>全局隐藏不可见（区别于Agent场景的agent_hidden），true-全局隐藏不可见，false-可见</p>
                     * @return IsGlobalHidden <p>全局隐藏不可见（区别于Agent场景的agent_hidden），true-全局隐藏不可见，false-可见</p>
                     * 
                     */
                    bool GetIsGlobalHidden() const;

                    /**
                     * 设置<p>全局隐藏不可见（区别于Agent场景的agent_hidden），true-全局隐藏不可见，false-可见</p>
                     * @param _isGlobalHidden <p>全局隐藏不可见（区别于Agent场景的agent_hidden），true-全局隐藏不可见，false-可见</p>
                     * 
                     */
                    void SetIsGlobalHidden(const bool& _isGlobalHidden);

                    /**
                     * 判断参数 IsGlobalHidden 是否已赋值
                     * @return IsGlobalHidden 是否已赋值
                     * 
                     */
                    bool IsGlobalHiddenHasBeenSet() const;

                    /**
                     * 获取<p>是否必选</p>
                     * @return IsRequired <p>是否必选</p>
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置<p>是否必选</p>
                     * @param _isRequired <p>是否必选</p>
                     * 
                     */
                    void SetIsRequired(const bool& _isRequired);

                    /**
                     * 判断参数 IsRequired 是否已赋值
                     * @return IsRequired 是否已赋值
                     * 
                     */
                    bool IsRequiredHasBeenSet() const;

                    /**
                     * 获取<p>参数名称</p>
                     * @return Name <p>参数名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>参数名称</p>
                     * @param _name <p>参数名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>OneOf类型的参数</p>
                     * @return OneOf <p>OneOf类型的参数</p>
                     * 
                     */
                    std::vector<RequestParam> GetOneOf() const;

                    /**
                     * 设置<p>OneOf类型的参数</p>
                     * @param _oneOf <p>OneOf类型的参数</p>
                     * 
                     */
                    void SetOneOf(const std::vector<RequestParam>& _oneOf);

                    /**
                     * 判断参数 OneOf 是否已赋值
                     * @return OneOf 是否已赋值
                     * 
                     */
                    bool OneOfHasBeenSet() const;

                    /**
                     * 获取<p>子参数,ParamType 是OBJECT 或 ARRAY&lt;&gt;类型有用</p>
                     * @return SubParams <p>子参数,ParamType 是OBJECT 或 ARRAY&lt;&gt;类型有用</p>
                     * 
                     */
                    std::vector<RequestParam> GetSubParams() const;

                    /**
                     * 设置<p>子参数,ParamType 是OBJECT 或 ARRAY&lt;&gt;类型有用</p>
                     * @param _subParams <p>子参数,ParamType 是OBJECT 或 ARRAY&lt;&gt;类型有用</p>
                     * 
                     */
                    void SetSubParams(const std::vector<RequestParam>& _subParams);

                    /**
                     * 判断参数 SubParams 是否已赋值
                     * @return SubParams 是否已赋值
                     * 
                     */
                    bool SubParamsHasBeenSet() const;

                    /**
                     * 获取<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>字符串</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>整数</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>浮点数</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>布尔值</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>对象</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>字符串数组</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>整数数组</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>浮点数数组</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>布尔值数组</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>对象数组</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>数组嵌套</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>空值</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>未指定类型，用于OneOf和AnyOf场景</td></tr></tbody></table>
                     * @return Type <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>字符串</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>整数</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>浮点数</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>布尔值</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>对象</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>字符串数组</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>整数数组</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>浮点数数组</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>布尔值数组</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>对象数组</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>数组嵌套</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>空值</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>未指定类型，用于OneOf和AnyOf场景</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>字符串</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>整数</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>浮点数</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>布尔值</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>对象</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>字符串数组</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>整数数组</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>浮点数数组</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>布尔值数组</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>对象数组</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>数组嵌套</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>空值</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>未指定类型，用于OneOf和AnyOf场景</td></tr></tbody></table>
                     * @param _type <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>字符串</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>整数</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>浮点数</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>布尔值</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>对象</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>字符串数组</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>整数数组</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>浮点数数组</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>布尔值数组</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>对象数组</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>数组嵌套</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>空值</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>未指定类型，用于OneOf和AnyOf场景</td></tr></tbody></table>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>AnyOf类型的参数</p>
                     */
                    std::vector<RequestParam> m_anyOf;
                    bool m_anyOfHasBeenSet;

                    /**
                     * <p>默认值</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>参数描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>全局隐藏不可见（区别于Agent场景的agent_hidden），true-全局隐藏不可见，false-可见</p>
                     */
                    bool m_isGlobalHidden;
                    bool m_isGlobalHiddenHasBeenSet;

                    /**
                     * <p>是否必选</p>
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * <p>参数名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>OneOf类型的参数</p>
                     */
                    std::vector<RequestParam> m_oneOf;
                    bool m_oneOfHasBeenSet;

                    /**
                     * <p>子参数,ParamType 是OBJECT 或 ARRAY&lt;&gt;类型有用</p>
                     */
                    std::vector<RequestParam> m_subParams;
                    bool m_subParamsHasBeenSet;

                    /**
                     * <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>字符串</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>整数</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>浮点数</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>布尔值</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>对象</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>字符串数组</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>整数数组</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>浮点数数组</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>布尔值数组</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>对象数组</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>数组嵌套</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>空值</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>未指定类型，用于OneOf和AnyOf场景</td></tr></tbody></table>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_REQUESTPARAM_H_
