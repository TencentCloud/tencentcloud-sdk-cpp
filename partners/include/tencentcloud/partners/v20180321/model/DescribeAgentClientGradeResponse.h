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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTCLIENTGRADERESPONSE_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTCLIENTGRADERESPONSE_H_

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
                * DescribeAgentClientGrade返回参数结构体
                */
                class DescribeAgentClientGradeResponse : public AbstractModel
                {
                public:
                    DescribeAgentClientGradeResponse();
                    ~DescribeAgentClientGradeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取审核状态：0待审核，1，已审核
                     * @return AuditStatus 审核状态：0待审核，1，已审核
                     * 
                     */
                    uint64_t GetAuditStatus() const;

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取实名认证状态：0，未实名认证，1实名认证
                     * @return AuthState 实名认证状态：0，未实名认证，1实名认证
                     * 
                     */
                    uint64_t GetAuthState() const;

                    /**
                     * 判断参数 AuthState 是否已赋值
                     * @return AuthState 是否已赋值
                     * 
                     */
                    bool AuthStateHasBeenSet() const;

                    /**
                     * 获取客户级别
                     * @return ClientGrade 客户级别
                     * 
                     */
                    std::string GetClientGrade() const;

                    /**
                     * 判断参数 ClientGrade 是否已赋值
                     * @return ClientGrade 是否已赋值
                     * 
                     */
                    bool ClientGradeHasBeenSet() const;

                    /**
                     * 获取客户类型：1，个人；2，企业；3，其他
                     * @return ClientType 客户类型：1，个人；2，企业；3，其他
                     * 
                     */
                    uint64_t GetClientType() const;

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                private:

                    /**
                     * 审核状态：0待审核，1，已审核
                     */
                    uint64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 实名认证状态：0，未实名认证，1实名认证
                     */
                    uint64_t m_authState;
                    bool m_authStateHasBeenSet;

                    /**
                     * 客户级别
                     */
                    std::string m_clientGrade;
                    bool m_clientGradeHasBeenSet;

                    /**
                     * 客户类型：1，个人；2，企业；3，其他
                     */
                    uint64_t m_clientType;
                    bool m_clientTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTCLIENTGRADERESPONSE_H_
