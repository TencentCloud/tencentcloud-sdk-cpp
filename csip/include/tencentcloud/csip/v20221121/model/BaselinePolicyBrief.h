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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYBRIEF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 基线策略简要信息
                */
                class BaselinePolicyBrief : public AbstractModel
                {
                public:
                    BaselinePolicyBrief();
                    ~BaselinePolicyBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>基线策略 ID。</p>
                     * @return ID <p>基线策略 ID。</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>基线策略 ID。</p>
                     * @param _iD <p>基线策略 ID。</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>基线策略名称。</p>
                     * @return PolicyName <p>基线策略名称。</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>基线策略名称。</p>
                     * @param _policyName <p>基线策略名称。</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>是否为系统内置策略。true 是，false 否（用户自定义策略）。</p>
                     * @return IsSystem <p>是否为系统内置策略。true 是，false 否（用户自定义策略）。</p>
                     * 
                     */
                    bool GetIsSystem() const;

                    /**
                     * 设置<p>是否为系统内置策略。true 是，false 否（用户自定义策略）。</p>
                     * @param _isSystem <p>是否为系统内置策略。true 是，false 否（用户自定义策略）。</p>
                     * 
                     */
                    void SetIsSystem(const bool& _isSystem);

                    /**
                     * 判断参数 IsSystem 是否已赋值
                     * @return IsSystem 是否已赋值
                     * 
                     */
                    bool IsSystemHasBeenSet() const;

                private:

                    /**
                     * <p>基线策略 ID。</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>基线策略名称。</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>是否为系统内置策略。true 是，false 否（用户自定义策略）。</p>
                     */
                    bool m_isSystem;
                    bool m_isSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYBRIEF_H_
