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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONAUTHSTATUSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONAUTHSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/AuthRecord.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeOrganizationAuthStatus返回参数结构体
                */
                class DescribeOrganizationAuthStatusResponse : public AbstractModel
                {
                public:
                    DescribeOrganizationAuthStatusResponse();
                    ~DescribeOrganizationAuthStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业是否已认证
                     * @return IsVerified 企业是否已认证
                     * 
                     */
                    bool GetIsVerified() const;

                    /**
                     * 判断参数 IsVerified 是否已赋值
                     * @return IsVerified 是否已赋值
                     * 
                     */
                    bool IsVerifiedHasBeenSet() const;

                    /**
                     * 获取企业认证状态 0-未认证 1-认证中 2-已认证
                     * @return AuthStatus 企业认证状态 0-未认证 1-认证中 2-已认证
                     * 
                     */
                    int64_t GetAuthStatus() const;

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取企业认证信息
                     * @return AuthRecords 企业认证信息
                     * 
                     */
                    std::vector<AuthRecord> GetAuthRecords() const;

                    /**
                     * 判断参数 AuthRecords 是否已赋值
                     * @return AuthRecords 是否已赋值
                     * 
                     */
                    bool AuthRecordsHasBeenSet() const;

                    /**
                     * 获取企业在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多"->"企业设置"->"企业中心"- 中查看企业电子签账号。
p.s. 只有当前企业认证成功的时候返回
                     * @return OrganizationId 企业在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多"->"企业设置"->"企业中心"- 中查看企业电子签账号。
p.s. 只有当前企业认证成功的时候返回
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                private:

                    /**
                     * 企业是否已认证
                     */
                    bool m_isVerified;
                    bool m_isVerifiedHasBeenSet;

                    /**
                     * 企业认证状态 0-未认证 1-认证中 2-已认证
                     */
                    int64_t m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * 企业认证信息
                     */
                    std::vector<AuthRecord> m_authRecords;
                    bool m_authRecordsHasBeenSet;

                    /**
                     * 企业在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多"->"企业设置"->"企业中心"- 中查看企业电子签账号。
p.s. 只有当前企业认证成功的时候返回
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONAUTHSTATUSRESPONSE_H_
