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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHECKLOGKAFKACONNECTIONSTATEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHECKLOGKAFKACONNECTIONSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CheckLogKafkaConnectionState请求参数结构体
                */
                class CheckLogKafkaConnectionStateRequest : public AbstractModel
                {
                public:
                    CheckLogKafkaConnectionStateRequest();
                    ~CheckLogKafkaConnectionStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接入方式,1公网域名接入，2支撑环境接入
                     * @return AccessType 接入方式,1公网域名接入，2支撑环境接入
                     * 
                     */
                    uint64_t GetAccessType() const;

                    /**
                     * 设置接入方式,1公网域名接入，2支撑环境接入
                     * @param _accessType 接入方式,1公网域名接入，2支撑环境接入
                     * 
                     */
                    void SetAccessType(const uint64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取接入地址，域名或ip，带端口
                     * @return AccessAddr 接入地址，域名或ip，带端口
                     * 
                     */
                    std::string GetAccessAddr() const;

                    /**
                     * 设置接入地址，域名或ip，带端口
                     * @param _accessAddr 接入地址，域名或ip，带端口
                     * 
                     */
                    void SetAccessAddr(const std::string& _accessAddr);

                    /**
                     * 判断参数 AccessAddr 是否已赋值
                     * @return AccessAddr 是否已赋值
                     * 
                     */
                    bool AccessAddrHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return Username 用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名
                     * @param _username 用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取0不用密码，1有密码
                     * @return HasPwd 0不用密码，1有密码
                     * 
                     */
                    uint64_t GetHasPwd() const;

                    /**
                     * 设置0不用密码，1有密码
                     * @param _hasPwd 0不用密码，1有密码
                     * 
                     */
                    void SetHasPwd(const uint64_t& _hasPwd);

                    /**
                     * 判断参数 HasPwd 是否已赋值
                     * @return HasPwd 是否已赋值
                     * 
                     */
                    bool HasPwdHasBeenSet() const;

                    /**
                     * 获取密码，使用aes加密
                     * @return Pwd 密码，使用aes加密
                     * 
                     */
                    std::string GetPwd() const;

                    /**
                     * 设置密码，使用aes加密
                     * @param _pwd 密码，使用aes加密
                     * 
                     */
                    void SetPwd(const std::string& _pwd);

                    /**
                     * 判断参数 Pwd 是否已赋值
                     * @return Pwd 是否已赋值
                     * 
                     */
                    bool PwdHasBeenSet() const;

                    /**
                     * 获取kafka实例id
                     * @return KafkaId kafka实例id
                     * 
                     */
                    std::string GetKafkaId() const;

                    /**
                     * 设置kafka实例id
                     * @param _kafkaId kafka实例id
                     * 
                     */
                    void SetKafkaId(const std::string& _kafkaId);

                    /**
                     * 判断参数 KafkaId 是否已赋值
                     * @return KafkaId 是否已赋值
                     * 
                     */
                    bool KafkaIdHasBeenSet() const;

                    /**
                     * 获取kafka版本
                     * @return InsVersion kafka版本
                     * 
                     */
                    std::string GetInsVersion() const;

                    /**
                     * 设置kafka版本
                     * @param _insVersion kafka版本
                     * 
                     */
                    void SetInsVersion(const std::string& _insVersion);

                    /**
                     * 判断参数 InsVersion 是否已赋值
                     * @return InsVersion 是否已赋值
                     * 
                     */
                    bool InsVersionHasBeenSet() const;

                private:

                    /**
                     * 接入方式,1公网域名接入，2支撑环境接入
                     */
                    uint64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 接入地址，域名或ip，带端口
                     */
                    std::string m_accessAddr;
                    bool m_accessAddrHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 0不用密码，1有密码
                     */
                    uint64_t m_hasPwd;
                    bool m_hasPwdHasBeenSet;

                    /**
                     * 密码，使用aes加密
                     */
                    std::string m_pwd;
                    bool m_pwdHasBeenSet;

                    /**
                     * kafka实例id
                     */
                    std::string m_kafkaId;
                    bool m_kafkaIdHasBeenSet;

                    /**
                     * kafka版本
                     */
                    std::string m_insVersion;
                    bool m_insVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHECKLOGKAFKACONNECTIONSTATEREQUEST_H_
