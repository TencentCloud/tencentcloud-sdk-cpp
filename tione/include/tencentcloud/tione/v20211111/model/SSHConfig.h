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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SSHCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SSHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * notebook ssh端口配置
                */
                class SSHConfig : public AbstractModel
                {
                public:
                    SSHConfig();
                    ~SSHConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启ssh
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 是否开启ssh
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否开启ssh
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 是否开启ssh
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取公钥信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicKey 公钥信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置公钥信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicKey 公钥信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口号
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
                     * 获取登录命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoginCommand 登录命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoginCommand() const;

                    /**
                     * 设置登录命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loginCommand 登录命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoginCommand(const std::string& _loginCommand);

                    /**
                     * 判断参数 LoginCommand 是否已赋值
                     * @return LoginCommand 是否已赋值
                     * 
                     */
                    bool LoginCommandHasBeenSet() const;

                    /**
                     * 获取登录地址是否改变
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAddressChanged 登录地址是否改变
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAddressChanged() const;

                    /**
                     * 设置登录地址是否改变
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAddressChanged 登录地址是否改变
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAddressChanged(const bool& _isAddressChanged);

                    /**
                     * 判断参数 IsAddressChanged 是否已赋值
                     * @return IsAddressChanged 是否已赋值
                     * 
                     */
                    bool IsAddressChangedHasBeenSet() const;

                private:

                    /**
                     * 是否开启ssh
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 公钥信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 登录命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loginCommand;
                    bool m_loginCommandHasBeenSet;

                    /**
                     * 登录地址是否改变
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAddressChanged;
                    bool m_isAddressChangedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SSHCONFIG_H_
