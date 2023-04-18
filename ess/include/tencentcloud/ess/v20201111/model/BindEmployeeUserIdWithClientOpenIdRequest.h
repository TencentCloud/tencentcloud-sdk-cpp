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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_BINDEMPLOYEEUSERIDWITHCLIENTOPENIDREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_BINDEMPLOYEEUSERIDWITHCLIENTOPENIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * BindEmployeeUserIdWithClientOpenId请求参数结构体
                */
                class BindEmployeeUserIdWithClientOpenIdRequest : public AbstractModel
                {
                public:
                    BindEmployeeUserIdWithClientOpenIdRequest();
                    ~BindEmployeeUserIdWithClientOpenIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取OpenId与UserId二选一必填一个，当传入客户系统openId，传入的openId需与电子签员工userId绑定，且渠道channel必填，channel值为INTEGRATE，否则传入userId
                     * @return Operator OpenId与UserId二选一必填一个，当传入客户系统openId，传入的openId需与电子签员工userId绑定，且渠道channel必填，channel值为INTEGRATE，否则传入userId
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置OpenId与UserId二选一必填一个，当传入客户系统openId，传入的openId需与电子签员工userId绑定，且渠道channel必填，channel值为INTEGRATE，否则传入userId
                     * @param Operator OpenId与UserId二选一必填一个，当传入客户系统openId，传入的openId需与电子签员工userId绑定，且渠道channel必填，channel值为INTEGRATE，否则传入userId
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取电子签系统员工UserId
                     * @return UserId 电子签系统员工UserId
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置电子签系统员工UserId
                     * @param UserId 电子签系统员工UserId
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取客户系统OpenId
                     * @return OpenId 客户系统OpenId
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置客户系统OpenId
                     * @param OpenId 客户系统OpenId
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                private:

                    /**
                     * OpenId与UserId二选一必填一个，当传入客户系统openId，传入的openId需与电子签员工userId绑定，且渠道channel必填，channel值为INTEGRATE，否则传入userId
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 电子签系统员工UserId
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 客户系统OpenId
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_BINDEMPLOYEEUSERIDWITHCLIENTOPENIDREQUEST_H_
