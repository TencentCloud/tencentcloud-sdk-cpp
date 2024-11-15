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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_AUDITAPPLYCLIENTRESPONSE_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_AUDITAPPLYCLIENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * AuditApplyClient返回参数结构体
                */
                class AuditApplyClientResponse : public AbstractModel
                {
                public:
                    AuditApplyClientResponse();
                    ~AuditApplyClientResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取代理商账号ID
                     * @return Uin 代理商账号ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取客户账号ID
                     * @return ClientUin 客户账号ID
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取审核结果，包括accept/reject/qcloudaudit（腾讯云审核）
                     * @return AuditResult 审核结果，包括accept/reject/qcloudaudit（腾讯云审核）
                     * 
                     */
                    std::string GetAuditResult() const;

                    /**
                     * 判断参数 AuditResult 是否已赋值
                     * @return AuditResult 是否已赋值
                     * 
                     */
                    bool AuditResultHasBeenSet() const;

                    /**
                     * 获取关联时间对应的时间戳
                     * @return AgentTime 关联时间对应的时间戳
                     * 
                     */
                    uint64_t GetAgentTime() const;

                    /**
                     * 判断参数 AgentTime 是否已赋值
                     * @return AgentTime 是否已赋值
                     * 
                     */
                    bool AgentTimeHasBeenSet() const;

                private:

                    /**
                     * 代理商账号ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 客户账号ID
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 审核结果，包括accept/reject/qcloudaudit（腾讯云审核）
                     */
                    std::string m_auditResult;
                    bool m_auditResultHasBeenSet;

                    /**
                     * 关联时间对应的时间戳
                     */
                    uint64_t m_agentTime;
                    bool m_agentTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_AUDITAPPLYCLIENTRESPONSE_H_
