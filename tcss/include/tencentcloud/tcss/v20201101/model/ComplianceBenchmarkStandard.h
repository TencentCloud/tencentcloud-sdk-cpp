/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARD_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 表示一个合规标准的信息。
                */
                class ComplianceBenchmarkStandard : public AbstractModel
                {
                public:
                    ComplianceBenchmarkStandard();
                    ~ComplianceBenchmarkStandard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合规标准的ID
                     * @return StandardId 合规标准的ID
                     * 
                     */
                    uint64_t GetStandardId() const;

                    /**
                     * 设置合规标准的ID
                     * @param _standardId 合规标准的ID
                     * 
                     */
                    void SetStandardId(const uint64_t& _standardId);

                    /**
                     * 判断参数 StandardId 是否已赋值
                     * @return StandardId 是否已赋值
                     * 
                     */
                    bool StandardIdHasBeenSet() const;

                    /**
                     * 获取合规标准的名称
                     * @return Name 合规标准的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置合规标准的名称
                     * @param _name 合规标准的名称
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
                     * 获取合规标准包含的数目
                     * @return PolicyItemCount 合规标准包含的数目
                     * 
                     */
                    uint64_t GetPolicyItemCount() const;

                    /**
                     * 设置合规标准包含的数目
                     * @param _policyItemCount 合规标准包含的数目
                     * 
                     */
                    void SetPolicyItemCount(const uint64_t& _policyItemCount);

                    /**
                     * 判断参数 PolicyItemCount 是否已赋值
                     * @return PolicyItemCount 是否已赋值
                     * 
                     */
                    bool PolicyItemCountHasBeenSet() const;

                    /**
                     * 获取是否启用此标准
                     * @return Enabled 是否启用此标准
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用此标准
                     * @param _enabled 是否启用此标准
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取标准的描述
                     * @return Description 标准的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置标准的描述
                     * @param _description 标准的描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 合规标准的ID
                     */
                    uint64_t m_standardId;
                    bool m_standardIdHasBeenSet;

                    /**
                     * 合规标准的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 合规标准包含的数目
                     */
                    uint64_t m_policyItemCount;
                    bool m_policyItemCountHasBeenSet;

                    /**
                     * 是否启用此标准
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 标准的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARD_H_
