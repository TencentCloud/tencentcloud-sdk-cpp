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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_PARAMETERCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_PARAMETERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ParameterConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 参数配置列表
                */
                class ParameterConfig : public AbstractModel
                {
                public:
                    ParameterConfig();
                    ~ParameterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称
                     * @return Name 字段名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名称
                     * @param _name 字段名称
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
                     * 获取字段描述
                     * @return Description 字段描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置字段描述
                     * @param _description 字段描述
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
                     * 获取字段类型
                     * @return Type 字段类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置字段类型
                     * @param _type 字段类型
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
                     * 获取是否必填
                     * @return IsRequired 是否必填
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置是否必填
                     * @param _isRequired 是否必填
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
                     * 获取子参数
                     * @return SubParams 子参数
                     * 
                     */
                    std::vector<ParameterConfig> GetSubParams() const;

                    /**
                     * 设置子参数
                     * @param _subParams 子参数
                     * 
                     */
                    void SetSubParams(const std::vector<ParameterConfig>& _subParams);

                    /**
                     * 判断参数 SubParams 是否已赋值
                     * @return SubParams 是否已赋值
                     * 
                     */
                    bool SubParamsHasBeenSet() const;

                    /**
                     * 获取OneOf类型的参数
                     * @return OneOf OneOf类型的参数
                     * 
                     */
                    std::vector<ParameterConfig> GetOneOf() const;

                    /**
                     * 设置OneOf类型的参数
                     * @param _oneOf OneOf类型的参数
                     * 
                     */
                    void SetOneOf(const std::vector<ParameterConfig>& _oneOf);

                    /**
                     * 判断参数 OneOf 是否已赋值
                     * @return OneOf 是否已赋值
                     * 
                     */
                    bool OneOfHasBeenSet() const;

                    /**
                     * 获取AnyOf类型的参数
                     * @return AnyOf AnyOf类型的参数
                     * 
                     */
                    std::vector<ParameterConfig> GetAnyOf() const;

                    /**
                     * 设置AnyOf类型的参数
                     * @param _anyOf AnyOf类型的参数
                     * 
                     */
                    void SetAnyOf(const std::vector<ParameterConfig>& _anyOf);

                    /**
                     * 判断参数 AnyOf 是否已赋值
                     * @return AnyOf 是否已赋值
                     * 
                     */
                    bool AnyOfHasBeenSet() const;

                private:

                    /**
                     * 字段名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 字段类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否必填
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * 子参数
                     */
                    std::vector<ParameterConfig> m_subParams;
                    bool m_subParamsHasBeenSet;

                    /**
                     * OneOf类型的参数
                     */
                    std::vector<ParameterConfig> m_oneOf;
                    bool m_oneOfHasBeenSet;

                    /**
                     * AnyOf类型的参数
                     */
                    std::vector<ParameterConfig> m_anyOf;
                    bool m_anyOfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_PARAMETERCONFIG_H_
