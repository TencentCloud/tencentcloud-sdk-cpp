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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CustomAgentRunModePolicy.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAgentRunPolicy请求参数结构体
                */
                class ModifyAgentRunPolicyRequest : public AbstractModel
                {
                public:
                    ModifyAgentRunPolicyRequest();
                    ~ModifyAgentRunPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义运行策略（CPU/Memory/NetworkPps），不传则不修改</p>
                     * @return CustomPolicy <p>自定义运行策略（CPU/Memory/NetworkPps），不传则不修改</p>
                     * 
                     */
                    CustomAgentRunModePolicy GetCustomPolicy() const;

                    /**
                     * 设置<p>自定义运行策略（CPU/Memory/NetworkPps），不传则不修改</p>
                     * @param _customPolicy <p>自定义运行策略（CPU/Memory/NetworkPps），不传则不修改</p>
                     * 
                     */
                    void SetCustomPolicy(const CustomAgentRunModePolicy& _customPolicy);

                    /**
                     * 判断参数 CustomPolicy 是否已赋值
                     * @return CustomPolicy 是否已赋值
                     * 
                     */
                    bool CustomPolicyHasBeenSet() const;

                    /**
                     * 获取<p>高级模式机器instance_id列表，后台自动转为quuid存储</p>
                     * @return AdvanceModeInstanceIDs <p>高级模式机器instance_id列表，后台自动转为quuid存储</p>
                     * 
                     */
                    std::vector<std::string> GetAdvanceModeInstanceIDs() const;

                    /**
                     * 设置<p>高级模式机器instance_id列表，后台自动转为quuid存储</p>
                     * @param _advanceModeInstanceIDs <p>高级模式机器instance_id列表，后台自动转为quuid存储</p>
                     * 
                     */
                    void SetAdvanceModeInstanceIDs(const std::vector<std::string>& _advanceModeInstanceIDs);

                    /**
                     * 判断参数 AdvanceModeInstanceIDs 是否已赋值
                     * @return AdvanceModeInstanceIDs 是否已赋值
                     * 
                     */
                    bool AdvanceModeInstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>自定义模式机器instance_id列表，后台自动转为quuid存储</p>
                     * @return CustomModeInstanceIDs <p>自定义模式机器instance_id列表，后台自动转为quuid存储</p>
                     * 
                     */
                    std::vector<std::string> GetCustomModeInstanceIDs() const;

                    /**
                     * 设置<p>自定义模式机器instance_id列表，后台自动转为quuid存储</p>
                     * @param _customModeInstanceIDs <p>自定义模式机器instance_id列表，后台自动转为quuid存储</p>
                     * 
                     */
                    void SetCustomModeInstanceIDs(const std::vector<std::string>& _customModeInstanceIDs);

                    /**
                     * 判断参数 CustomModeInstanceIDs 是否已赋值
                     * @return CustomModeInstanceIDs 是否已赋值
                     * 
                     */
                    bool CustomModeInstanceIDsHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>自定义运行策略（CPU/Memory/NetworkPps），不传则不修改</p>
                     */
                    CustomAgentRunModePolicy m_customPolicy;
                    bool m_customPolicyHasBeenSet;

                    /**
                     * <p>高级模式机器instance_id列表，后台自动转为quuid存储</p>
                     */
                    std::vector<std::string> m_advanceModeInstanceIDs;
                    bool m_advanceModeInstanceIDsHasBeenSet;

                    /**
                     * <p>自定义模式机器instance_id列表，后台自动转为quuid存储</p>
                     */
                    std::vector<std::string> m_customModeInstanceIDs;
                    bool m_customModeInstanceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNPOLICYREQUEST_H_
