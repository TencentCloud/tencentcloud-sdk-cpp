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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DELETEGLOBALACCELERATORACLRULEREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DELETEGLOBALACCELERATORACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DeleteGlobalAcceleratorAclRule请求参数结构体
                */
                class DeleteGlobalAcceleratorAclRuleRequest : public AbstractModel
                {
                public:
                    DeleteGlobalAcceleratorAclRuleRequest();
                    ~DeleteGlobalAcceleratorAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全球加速实例ID。</p>
                     * @return GlobalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>全球加速实例ID。</p>
                     * @param _globalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>访问控制策略ID</p>
                     * @return GlobalAcceleratorAclPolicyId <p>访问控制策略ID</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorAclPolicyId() const;

                    /**
                     * 设置<p>访问控制策略ID</p>
                     * @param _globalAcceleratorAclPolicyId <p>访问控制策略ID</p>
                     * 
                     */
                    void SetGlobalAcceleratorAclPolicyId(const std::string& _globalAcceleratorAclPolicyId);

                    /**
                     * 判断参数 GlobalAcceleratorAclPolicyId 是否已赋值
                     * @return GlobalAcceleratorAclPolicyId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>访问规则ID</p>
                     * @return GlobalAcceleratorAclRuleIds <p>访问规则ID</p>
                     * 
                     */
                    std::vector<std::string> GetGlobalAcceleratorAclRuleIds() const;

                    /**
                     * 设置<p>访问规则ID</p>
                     * @param _globalAcceleratorAclRuleIds <p>访问规则ID</p>
                     * 
                     */
                    void SetGlobalAcceleratorAclRuleIds(const std::vector<std::string>& _globalAcceleratorAclRuleIds);

                    /**
                     * 判断参数 GlobalAcceleratorAclRuleIds 是否已赋值
                     * @return GlobalAcceleratorAclRuleIds 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclRuleIdsHasBeenSet() const;

                private:

                    /**
                     * <p>全球加速实例ID。</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>访问控制策略ID</p>
                     */
                    std::string m_globalAcceleratorAclPolicyId;
                    bool m_globalAcceleratorAclPolicyIdHasBeenSet;

                    /**
                     * <p>访问规则ID</p>
                     */
                    std::vector<std::string> m_globalAcceleratorAclRuleIds;
                    bool m_globalAcceleratorAclRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DELETEGLOBALACCELERATORACLRULEREQUEST_H_
