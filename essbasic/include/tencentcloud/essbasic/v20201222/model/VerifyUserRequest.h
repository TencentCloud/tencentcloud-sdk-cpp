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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_VERIFYUSERREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_VERIFYUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * VerifyUser请求参数结构体
                */
                class VerifyUserRequest : public AbstractModel
                {
                public:
                    VerifyUserRequest();
                    ~VerifyUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取电子签平台用户ID
                     * @return UserId 电子签平台用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置电子签平台用户ID
                     * @param _userId 电子签平台用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取是否需要下发个人长效证书，默认为false
注：如您有下发个人长效证书需求，请提前邮件至e-contract@oa.com进行申请。
                     * @return CertificateRequired 是否需要下发个人长效证书，默认为false
注：如您有下发个人长效证书需求，请提前邮件至e-contract@oa.com进行申请。
                     * 
                     */
                    bool GetCertificateRequired() const;

                    /**
                     * 设置是否需要下发个人长效证书，默认为false
注：如您有下发个人长效证书需求，请提前邮件至e-contract@oa.com进行申请。
                     * @param _certificateRequired 是否需要下发个人长效证书，默认为false
注：如您有下发个人长效证书需求，请提前邮件至e-contract@oa.com进行申请。
                     * 
                     */
                    void SetCertificateRequired(const bool& _certificateRequired);

                    /**
                     * 判断参数 CertificateRequired 是否已赋值
                     * @return CertificateRequired 是否已赋值
                     * 
                     */
                    bool CertificateRequiredHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 电子签平台用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 是否需要下发个人长效证书，默认为false
注：如您有下发个人长效证书需求，请提前邮件至e-contract@oa.com进行申请。
                     */
                    bool m_certificateRequired;
                    bool m_certificateRequiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_VERIFYUSERREQUEST_H_
