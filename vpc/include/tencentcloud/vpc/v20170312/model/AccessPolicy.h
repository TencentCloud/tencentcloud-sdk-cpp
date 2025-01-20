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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ACCESSPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ACCESSPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 策略信息
                */
                class AccessPolicy : public AbstractModel
                {
                public:
                    AccessPolicy();
                    ~AccessPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目的CIDR
                     * @return TargetCidr 目的CIDR
                     * 
                     */
                    std::string GetTargetCidr() const;

                    /**
                     * 设置目的CIDR
                     * @param _targetCidr 目的CIDR
                     * 
                     */
                    void SetTargetCidr(const std::string& _targetCidr);

                    /**
                     * 判断参数 TargetCidr 是否已赋值
                     * @return TargetCidr 是否已赋值
                     * 
                     */
                    bool TargetCidrHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return VpnGatewayIdSslAccessPolicyId 策略ID
                     * 
                     */
                    std::string GetVpnGatewayIdSslAccessPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _vpnGatewayIdSslAccessPolicyId 策略ID
                     * 
                     */
                    void SetVpnGatewayIdSslAccessPolicyId(const std::string& _vpnGatewayIdSslAccessPolicyId);

                    /**
                     * 判断参数 VpnGatewayIdSslAccessPolicyId 是否已赋值
                     * @return VpnGatewayIdSslAccessPolicyId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdSslAccessPolicyIdHasBeenSet() const;

                    /**
                     * 获取是否对所有用户都生效。1 生效 0不生效
                     * @return ForAllClient 是否对所有用户都生效。1 生效 0不生效
                     * 
                     */
                    uint64_t GetForAllClient() const;

                    /**
                     * 设置是否对所有用户都生效。1 生效 0不生效
                     * @param _forAllClient 是否对所有用户都生效。1 生效 0不生效
                     * 
                     */
                    void SetForAllClient(const uint64_t& _forAllClient);

                    /**
                     * 判断参数 ForAllClient 是否已赋值
                     * @return ForAllClient 是否已赋值
                     * 
                     */
                    bool ForAllClientHasBeenSet() const;

                    /**
                     * 获取用户组ID
                     * @return UserGroupIds 用户组ID
                     * 
                     */
                    std::vector<std::string> GetUserGroupIds() const;

                    /**
                     * 设置用户组ID
                     * @param _userGroupIds 用户组ID
                     * 
                     */
                    void SetUserGroupIds(const std::vector<std::string>& _userGroupIds);

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     * 
                     */
                    bool UserGroupIdsHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Remark
                     * @return Remark Remark
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remark
                     * @param _remark Remark
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 目的CIDR
                     */
                    std::string m_targetCidr;
                    bool m_targetCidrHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_vpnGatewayIdSslAccessPolicyId;
                    bool m_vpnGatewayIdSslAccessPolicyIdHasBeenSet;

                    /**
                     * 是否对所有用户都生效。1 生效 0不生效
                     */
                    uint64_t m_forAllClient;
                    bool m_forAllClientHasBeenSet;

                    /**
                     * 用户组ID
                     */
                    std::vector<std::string> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Remark
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ACCESSPOLICY_H_
