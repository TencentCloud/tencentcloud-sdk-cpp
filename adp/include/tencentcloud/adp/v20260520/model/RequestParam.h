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
                * 定义工具的请求参数
                */
                class RequestParam : public AbstractModel
                {
                public:
                    RequestParam();
                    ~RequestParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认值
                     * @return DefaultValue 默认值
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
                     * @param _defaultValue 默认值
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
                     * 获取参数描述
                     * @return Description 参数描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置参数描述
                     * @param _description 参数描述
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
                     * 获取全局隐藏不可见（区别于Agent场景的agent_hidden），true-全局隐藏不可见，false-可见
                     * @return IsGlobalHidden 全局隐藏不可见（区别于Agent场景的agent_hidden），true-全局隐藏不可见，false-可见
                     * 
                     */
                    bool GetIsGlobalHidden() const;

                    /**
                     * 设置全局隐藏不可见（区别于Agent场景的agent_hidden），true-全局隐藏不可见，false-可见
                     * @param _isGlobalHidden 全局隐藏不可见（区别于Agent场景的agent_hidden），true-全局隐藏不可见，false-可见
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
                     * 获取是否必选
                     * @return IsRequired 是否必选
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置是否必选
                     * @param _isRequired 是否必选
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
                     * 获取参数名称
                     * @return Name 参数名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名称
                     * @param _name 参数名称
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
                     * 获取参数类型

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 默认值是string，如果不填就按string处理 |
| 1 |  |
| 2 |  |
| 3 |  |
| 4 |  |
| 5 |  |
| 6 |  |
| 7 |  |
| 8 |  |
| 9 |  |
| 20 |  |
| 99 | 空值 |
| 100 | 未指定类型，用于类型为OneOf和AnyOf的场景 |
                     * @return Type 参数类型

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 默认值是string，如果不填就按string处理 |
| 1 |  |
| 2 |  |
| 3 |  |
| 4 |  |
| 5 |  |
| 6 |  |
| 7 |  |
| 8 |  |
| 9 |  |
| 20 |  |
| 99 | 空值 |
| 100 | 未指定类型，用于类型为OneOf和AnyOf的场景 |
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置参数类型

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 默认值是string，如果不填就按string处理 |
| 1 |  |
| 2 |  |
| 3 |  |
| 4 |  |
| 5 |  |
| 6 |  |
| 7 |  |
| 8 |  |
| 9 |  |
| 20 |  |
| 99 | 空值 |
| 100 | 未指定类型，用于类型为OneOf和AnyOf的场景 |
                     * @param _type 参数类型

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 默认值是string，如果不填就按string处理 |
| 1 |  |
| 2 |  |
| 3 |  |
| 4 |  |
| 5 |  |
| 6 |  |
| 7 |  |
| 8 |  |
| 9 |  |
| 20 |  |
| 99 | 空值 |
| 100 | 未指定类型，用于类型为OneOf和AnyOf的场景 |
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取AnyOf类型的参数
                     * @return AnyOf AnyOf类型的参数
                     * 
                     */
                    std::vector<RequestParam> GetAnyOf() const;

                    /**
                     * 设置AnyOf类型的参数
                     * @param _anyOf AnyOf类型的参数
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
                     * 获取OneOf类型的参数
                     * @return OneOf OneOf类型的参数
                     * 
                     */
                    std::vector<RequestParam> GetOneOf() const;

                    /**
                     * 设置OneOf类型的参数
                     * @param _oneOf OneOf类型的参数
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
                     * 获取子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * @return SubParams 子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * 
                     */
                    std::vector<RequestParam> GetSubParams() const;

                    /**
                     * 设置子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * @param _subParams 子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * 
                     */
                    void SetSubParams(const std::vector<RequestParam>& _subParams);

                    /**
                     * 判断参数 SubParams 是否已赋值
                     * @return SubParams 是否已赋值
                     * 
                     */
                    bool SubParamsHasBeenSet() const;

                private:

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 参数描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 全局隐藏不可见（区别于Agent场景的agent_hidden），true-全局隐藏不可见，false-可见
                     */
                    bool m_isGlobalHidden;
                    bool m_isGlobalHiddenHasBeenSet;

                    /**
                     * 是否必选
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * 参数名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数类型

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 默认值是string，如果不填就按string处理 |
| 1 |  |
| 2 |  |
| 3 |  |
| 4 |  |
| 5 |  |
| 6 |  |
| 7 |  |
| 8 |  |
| 9 |  |
| 20 |  |
| 99 | 空值 |
| 100 | 未指定类型，用于类型为OneOf和AnyOf的场景 |
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * AnyOf类型的参数
                     */
                    std::vector<RequestParam> m_anyOf;
                    bool m_anyOfHasBeenSet;

                    /**
                     * OneOf类型的参数
                     */
                    std::vector<RequestParam> m_oneOf;
                    bool m_oneOfHasBeenSet;

                    /**
                     * 子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     */
                    std::vector<RequestParam> m_subParams;
                    bool m_subParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_REQUESTPARAM_H_
