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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRUSERVERIFYREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRUSERVERIFYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateCRUserVerify请求参数结构体
                */
                class CreateCRUserVerifyRequest : public AbstractModel
                {
                public:
                    CreateCRUserVerifyRequest();
                    ~CreateCRUserVerifyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户真实姓名
                     * @return UserName 用户真实姓名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户真实姓名
                     * @param _userName 用户真实姓名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户身份证号
                     * @return UserID 用户身份证号
                     * 
                     */
                    std::string GetUserID() const;

                    /**
                     * 设置用户身份证号
                     * @param _userID 用户身份证号
                     * 
                     */
                    void SetUserID(const std::string& _userID);

                    /**
                     * 判断参数 UserID 是否已赋值
                     * @return UserID 是否已赋值
                     * 
                     */
                    bool UserIDHasBeenSet() const;

                    /**
                     * 获取用户手机号码
                     * @return UserPhone 用户手机号码
                     * 
                     */
                    std::string GetUserPhone() const;

                    /**
                     * 设置用户手机号码
                     * @param _userPhone 用户手机号码
                     * 
                     */
                    void SetUserPhone(const std::string& _userPhone);

                    /**
                     * 判断参数 UserPhone 是否已赋值
                     * @return UserPhone 是否已赋值
                     * 
                     */
                    bool UserPhoneHasBeenSet() const;

                    /**
                     * 获取短信验证码，接口接入可以置空
                     * @return VerificationCode 短信验证码，接口接入可以置空
                     * 
                     */
                    std::string GetVerificationCode() const;

                    /**
                     * 设置短信验证码，接口接入可以置空
                     * @param _verificationCode 短信验证码，接口接入可以置空
                     * 
                     */
                    void SetVerificationCode(const std::string& _verificationCode);

                    /**
                     * 判断参数 VerificationCode 是否已赋值
                     * @return VerificationCode 是否已赋值
                     * 
                     */
                    bool VerificationCodeHasBeenSet() const;

                    /**
                     * 获取字段已废弃，认证类型
                     * @return Type 字段已废弃，认证类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置字段已废弃，认证类型
                     * @param _type 字段已废弃，认证类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 用户真实姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户身份证号
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * 用户手机号码
                     */
                    std::string m_userPhone;
                    bool m_userPhoneHasBeenSet;

                    /**
                     * 短信验证码，接口接入可以置空
                     */
                    std::string m_verificationCode;
                    bool m_verificationCodeHasBeenSet;

                    /**
                     * 字段已废弃，认证类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRUSERVERIFYREQUEST_H_
