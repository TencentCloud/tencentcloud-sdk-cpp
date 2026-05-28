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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_AGENTPLUGINCONFIG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_AGENTPLUGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * AgentPlugin 安装配置，包含域名、Chart 版本和外部 PostgreSQL 连接信息
                */
                class AgentPluginConfig : public AbstractModel
                {
                public:
                    AgentPluginConfig();
                    ~AgentPluginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Helm Chart 版本，一般无需指定
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChartVersion Helm Chart 版本，一般无需指定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChartVersion() const;

                    /**
                     * 设置Helm Chart 版本，一般无需指定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chartVersion Helm Chart 版本，一般无需指定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChartVersion(const std::string& _chartVersion);

                    /**
                     * 判断参数 ChartVersion 是否已赋值
                     * @return ChartVersion 是否已赋值
                     * 
                     */
                    bool ChartVersionHasBeenSet() const;

                    /**
                     * 获取外部 PostgreSQL 内网地址；配置后跳过内置 PostgreSQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host 外部 PostgreSQL 内网地址；配置后跳过内置 PostgreSQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置外部 PostgreSQL 内网地址；配置后跳过内置 PostgreSQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _host 外部 PostgreSQL 内网地址；配置后跳过内置 PostgreSQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取外部 PostgreSQL 密码，配置 Host 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password 外部 PostgreSQL 密码，配置 Host 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置外部 PostgreSQL 密码，配置 Host 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password 外部 PostgreSQL 密码，配置 Host 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取外部 PostgreSQL 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 外部 PostgreSQL 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置外部 PostgreSQL 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 外部 PostgreSQL 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取SSL 模式，取值：disable / require / verify-full
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSLMode SSL 模式，取值：disable / require / verify-full
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置SSL 模式，取值：disable / require / verify-full
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSLMode SSL 模式，取值：disable / require / verify-full
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     * 
                     */
                    bool SSLModeHasBeenSet() const;

                    /**
                     * 获取Agent 实例访问域名，不填则不创建域名路由
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDomain Agent 实例访问域名，不填则不创建域名路由
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceDomain() const;

                    /**
                     * 设置Agent 实例访问域名，不填则不创建域名路由
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDomain Agent 实例访问域名，不填则不创建域名路由
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceDomain(const std::string& _serviceDomain);

                    /**
                     * 判断参数 ServiceDomain 是否已赋值
                     * @return ServiceDomain 是否已赋值
                     * 
                     */
                    bool ServiceDomainHasBeenSet() const;

                    /**
                     * 获取外部 PostgreSQL 用户名，配置 Host 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Username 外部 PostgreSQL 用户名，配置 Host 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置外部 PostgreSQL 用户名，配置 Host 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _username 外部 PostgreSQL 用户名，配置 Host 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                private:

                    /**
                     * Helm Chart 版本，一般无需指定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chartVersion;
                    bool m_chartVersionHasBeenSet;

                    /**
                     * 外部 PostgreSQL 内网地址；配置后跳过内置 PostgreSQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 外部 PostgreSQL 密码，配置 Host 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 外部 PostgreSQL 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * SSL 模式，取值：disable / require / verify-full
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * Agent 实例访问域名，不填则不创建域名路由
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceDomain;
                    bool m_serviceDomainHasBeenSet;

                    /**
                     * 外部 PostgreSQL 用户名，配置 Host 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_AGENTPLUGINCONFIG_H_
