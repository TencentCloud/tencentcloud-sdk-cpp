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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_KAFKADELIVERYCONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_KAFKADELIVERYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/DeliveryKafkaInfo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 投递kafka配置项
                */
                class KafkaDeliveryConfig : public AbstractModel
                {
                public:
                    KafkaDeliveryConfig();
                    ~KafkaDeliveryConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项id
                     * @return ConfigId 配置项id
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置项id
                     * @param _configId 配置项id
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取配置名称
                     * @return ConfigName 配置名称
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置名称
                     * @param _configName 配置名称
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取采集路径
                     * @return CollectPath 采集路径
                     * 
                     */
                    std::vector<std::string> GetCollectPath() const;

                    /**
                     * 设置采集路径
                     * @param _collectPath 采集路径
                     * 
                     */
                    void SetCollectPath(const std::vector<std::string>& _collectPath);

                    /**
                     * 判断参数 CollectPath 是否已赋值
                     * @return CollectPath 是否已赋值
                     * 
                     */
                    bool CollectPathHasBeenSet() const;

                    /**
                     * 获取kafka vip
                     * @return KafkaVIp kafka vip
                     * 
                     */
                    std::string GetKafkaVIp() const;

                    /**
                     * 设置kafka vip
                     * @param _kafkaVIp kafka vip
                     * 
                     */
                    void SetKafkaVIp(const std::string& _kafkaVIp);

                    /**
                     * 判断参数 KafkaVIp 是否已赋值
                     * @return KafkaVIp 是否已赋值
                     * 
                     */
                    bool KafkaVIpHasBeenSet() const;

                    /**
                     * 获取kafka vport
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaVPort kafka vport
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKafkaVPort() const;

                    /**
                     * 设置kafka vport
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaVPort kafka vport
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKafkaVPort(const std::string& _kafkaVPort);

                    /**
                     * 判断参数 KafkaVPort 是否已赋值
                     * @return KafkaVPort 是否已赋值
                     * 
                     */
                    bool KafkaVPortHasBeenSet() const;

                    /**
                     * 获取kafka topic
                     * @return Topic kafka topic
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置kafka topic
                     * @param _topic kafka topic
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取换行规则
                     * @return LineRule 换行规则
                     * 
                     */
                    std::string GetLineRule() const;

                    /**
                     * 设置换行规则
                     * @param _lineRule 换行规则
                     * 
                     */
                    void SetLineRule(const std::string& _lineRule);

                    /**
                     * 判断参数 LineRule 是否已赋值
                     * @return LineRule 是否已赋值
                     * 
                     */
                    bool LineRuleHasBeenSet() const;

                    /**
                     * 获取是否需要认证
                     * @return EnableAuth 是否需要认证
                     * 
                     */
                    bool GetEnableAuth() const;

                    /**
                     * 设置是否需要认证
                     * @param _enableAuth 是否需要认证
                     * 
                     */
                    void SetEnableAuth(const bool& _enableAuth);

                    /**
                     * 判断参数 EnableAuth 是否已赋值
                     * @return EnableAuth 是否已赋值
                     * 
                     */
                    bool EnableAuthHasBeenSet() const;

                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Username 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _username 用户名
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

                    /**
                     * 获取密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password 密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password 密码
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
                     * 获取投递的topic和path
                     * @return KafkaInfos 投递的topic和path
                     * 
                     */
                    std::vector<DeliveryKafkaInfo> GetKafkaInfos() const;

                    /**
                     * 设置投递的topic和path
                     * @param _kafkaInfos 投递的topic和path
                     * 
                     */
                    void SetKafkaInfos(const std::vector<DeliveryKafkaInfo>& _kafkaInfos);

                    /**
                     * 判断参数 KafkaInfos 是否已赋值
                     * @return KafkaInfos 是否已赋值
                     * 
                     */
                    bool KafkaInfosHasBeenSet() const;

                    /**
                     * 获取是否应用单行规则
                     * @return EnableGlobalLineRule 是否应用单行规则
                     * 
                     */
                    bool GetEnableGlobalLineRule() const;

                    /**
                     * 设置是否应用单行规则
                     * @param _enableGlobalLineRule 是否应用单行规则
                     * 
                     */
                    void SetEnableGlobalLineRule(const bool& _enableGlobalLineRule);

                    /**
                     * 判断参数 EnableGlobalLineRule 是否已赋值
                     * @return EnableGlobalLineRule 是否已赋值
                     * 
                     */
                    bool EnableGlobalLineRuleHasBeenSet() const;

                    /**
                     * 获取自定义分行规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomRule 自定义分行规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomRule() const;

                    /**
                     * 设置自定义分行规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customRule 自定义分行规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomRule(const std::string& _customRule);

                    /**
                     * 判断参数 CustomRule 是否已赋值
                     * @return CustomRule 是否已赋值
                     * 
                     */
                    bool CustomRuleHasBeenSet() const;

                    /**
                     * 获取KafkaAddress
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaAddress KafkaAddress
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKafkaAddress() const;

                    /**
                     * 设置KafkaAddress
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaAddress KafkaAddress
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKafkaAddress(const std::string& _kafkaAddress);

                    /**
                     * 判断参数 KafkaAddress 是否已赋值
                     * @return KafkaAddress 是否已赋值
                     * 
                     */
                    bool KafkaAddressHasBeenSet() const;

                private:

                    /**
                     * 配置项id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 配置名称
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 采集路径
                     */
                    std::vector<std::string> m_collectPath;
                    bool m_collectPathHasBeenSet;

                    /**
                     * kafka vip
                     */
                    std::string m_kafkaVIp;
                    bool m_kafkaVIpHasBeenSet;

                    /**
                     * kafka vport
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kafkaVPort;
                    bool m_kafkaVPortHasBeenSet;

                    /**
                     * kafka topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 换行规则
                     */
                    std::string m_lineRule;
                    bool m_lineRuleHasBeenSet;

                    /**
                     * 是否需要认证
                     */
                    bool m_enableAuth;
                    bool m_enableAuthHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 投递的topic和path
                     */
                    std::vector<DeliveryKafkaInfo> m_kafkaInfos;
                    bool m_kafkaInfosHasBeenSet;

                    /**
                     * 是否应用单行规则
                     */
                    bool m_enableGlobalLineRule;
                    bool m_enableGlobalLineRuleHasBeenSet;

                    /**
                     * 自定义分行规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customRule;
                    bool m_customRuleHasBeenSet;

                    /**
                     * KafkaAddress
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kafkaAddress;
                    bool m_kafkaAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_KAFKADELIVERYCONFIG_H_
