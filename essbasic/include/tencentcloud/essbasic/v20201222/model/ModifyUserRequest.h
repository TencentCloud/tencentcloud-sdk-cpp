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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYUSERREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYUSERREQUEST_H_

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
                * ModifyUser请求参数结构体
                */
                class ModifyUserRequest : public AbstractModel
                {
                public:
                    ModifyUserRequest();
                    ~ModifyUserRequest() = default;
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
                     * 获取第三方平台用户唯一标识; OpenId 和 UserId 二选一填写, 两个都不为空则优先使用UserId
                     * @return OpenId 第三方平台用户唯一标识; OpenId 和 UserId 二选一填写, 两个都不为空则优先使用UserId
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置第三方平台用户唯一标识; OpenId 和 UserId 二选一填写, 两个都不为空则优先使用UserId
                     * @param _openId 第三方平台用户唯一标识; OpenId 和 UserId 二选一填写, 两个都不为空则优先使用UserId
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取腾讯电子签平台用户唯一标识; OpenId 和 UserId 二选一填写, 两个都不为空则优先使用UserId
                     * @return UserId 腾讯电子签平台用户唯一标识; OpenId 和 UserId 二选一填写, 两个都不为空则优先使用UserId
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置腾讯电子签平台用户唯一标识; OpenId 和 UserId 二选一填写, 两个都不为空则优先使用UserId
                     * @param _userId 腾讯电子签平台用户唯一标识; OpenId 和 UserId 二选一填写, 两个都不为空则优先使用UserId
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
                     * 获取用户手机号码，不要求唯一
                     * @return Mobile 用户手机号码，不要求唯一
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置用户手机号码，不要求唯一
                     * @param _mobile 用户手机号码，不要求唯一
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取用户邮箱，不要求唯一
                     * @return Email 用户邮箱，不要求唯一
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户邮箱，不要求唯一
                     * @param _email 用户邮箱，不要求唯一
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取用户姓名
                     * @return Name 用户姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户姓名
                     * @param _name 用户姓名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 第三方平台用户唯一标识; OpenId 和 UserId 二选一填写, 两个都不为空则优先使用UserId
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 腾讯电子签平台用户唯一标识; OpenId 和 UserId 二选一填写, 两个都不为空则优先使用UserId
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户手机号码，不要求唯一
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 用户邮箱，不要求唯一
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYUSERREQUEST_H_
