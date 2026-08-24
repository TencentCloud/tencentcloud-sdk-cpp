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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SENDDSPMCKAFKATESTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SENDDSPMCKAFKATESTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * SendDspmCkafkaTest请求参数结构体
                */
                class SendDspmCkafkaTestRequest : public AbstractModel
                {
                public:
                    SendDspmCkafkaTestRequest();
                    ~SendDspmCkafkaTestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1为外网，7为支撑环境接入
                     * @return VipType 1为外网，7为支撑环境接入
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置1为外网，7为支撑环境接入
                     * @param _vipType 1为外网，7为支撑环境接入
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取ckafka实例id
                     * @return InstanceId ckafka实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka实例id
                     * @param _instanceId ckafka实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取为7有效
                     * @return Vip 为7有效
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置为7有效
                     * @param _vip 为7有效
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取为7有效
                     * @return Vport 为7有效
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置为7有效
                     * @param _vport 为7有效
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取域名，VipType为1有效
                     * @return Domain 域名，VipType为1有效
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名，VipType为1有效
                     * @param _domain 域名，VipType为1有效
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名端口，VipType为1有效
                     * @return DomainPort 域名端口，VipType为1有效
                     * 
                     */
                    std::string GetDomainPort() const;

                    /**
                     * 设置域名端口，VipType为1有效
                     * @param _domainPort 域名端口，VipType为1有效
                     * 
                     */
                    void SetDomainPort(const std::string& _domainPort);

                    /**
                     * 判断参数 DomainPort 是否已赋值
                     * @return DomainPort 是否已赋值
                     * 
                     */
                    bool DomainPortHasBeenSet() const;

                    /**
                     * 获取用户名，VipType为1有效
                     * @return Username 用户名，VipType为1有效
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名，VipType为1有效
                     * @param _username 用户名，VipType为1有效
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
                     * 获取用户密码，VipType为1有效
                     * @return Password 用户密码，VipType为1有效
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置用户密码，VipType为1有效
                     * @param _password 用户密码，VipType为1有效
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 1为外网，7为支撑环境接入
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * ckafka实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 为7有效
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 为7有效
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 域名，VipType为1有效
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名端口，VipType为1有效
                     */
                    std::string m_domainPort;
                    bool m_domainPortHasBeenSet;

                    /**
                     * 用户名，VipType为1有效
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 用户密码，VipType为1有效
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SENDDSPMCKAFKATESTREQUEST_H_
