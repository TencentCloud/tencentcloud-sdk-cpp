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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYCONFIGBINDGROUP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYCONFIGBINDGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/GroupInfo.h>
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
                * 描述投递配置项绑定的部署组
                */
                class DeliveryConfigBindGroup : public AbstractModel
                {
                public:
                    DeliveryConfigBindGroup();
                    ~DeliveryConfigBindGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置id
                     * @return ConfigId 配置id
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置id
                     * @param _configId 配置id
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
                     * 获取配置名
                     * @return ConfigName 配置名
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置名
                     * @param _configName 配置名
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
                     * 获取关联部署组信息
                     * @return Groups 关联部署组信息
                     * 
                     */
                    std::vector<GroupInfo> GetGroups() const;

                    /**
                     * 设置关联部署组信息
                     * @param _groups 关联部署组信息
                     * 
                     */
                    void SetGroups(const std::vector<GroupInfo>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取KafkaVIp
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaVIp KafkaVIp
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKafkaVIp() const;

                    /**
                     * 设置KafkaVIp
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaVIp KafkaVIp
注意：此字段可能返回 null，表示取不到有效值。
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

                    /**
                     * 获取KafkaVPort
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaVPort KafkaVPort
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKafkaVPort() const;

                    /**
                     * 设置KafkaVPort
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaVPort KafkaVPort
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
                     * 获取Topic
                     * @return Topic Topic
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic
                     * @param _topic Topic
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
                     * 获取LineRule
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LineRule LineRule
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLineRule() const;

                    /**
                     * 设置LineRule
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lineRule LineRule
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取CustomRule
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomRule CustomRule
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomRule() const;

                    /**
                     * 设置CustomRule
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customRule CustomRule
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
                     * 获取EnableGlobalLineRule
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableGlobalLineRule EnableGlobalLineRule
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableGlobalLineRule() const;

                    /**
                     * 设置EnableGlobalLineRule
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableGlobalLineRule EnableGlobalLineRule
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取EnableAuth
                     * @return EnableAuth EnableAuth
                     * 
                     */
                    bool GetEnableAuth() const;

                    /**
                     * 设置EnableAuth
                     * @param _enableAuth EnableAuth
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
                     * 获取Username
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Username Username
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _username Username
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
                     * 获取Password
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password Password
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password Password
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
                     * 获取KafkaInfos
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaInfos KafkaInfos
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeliveryKafkaInfo> GetKafkaInfos() const;

                    /**
                     * 设置KafkaInfos
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaInfos KafkaInfos
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKafkaInfos(const std::vector<DeliveryKafkaInfo>& _kafkaInfos);

                    /**
                     * 判断参数 KafkaInfos 是否已赋值
                     * @return KafkaInfos 是否已赋值
                     * 
                     */
                    bool KafkaInfosHasBeenSet() const;

                private:

                    /**
                     * 配置id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 配置名
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 采集路径
                     */
                    std::vector<std::string> m_collectPath;
                    bool m_collectPathHasBeenSet;

                    /**
                     * 关联部署组信息
                     */
                    std::vector<GroupInfo> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * KafkaVIp
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kafkaVIp;
                    bool m_kafkaVIpHasBeenSet;

                    /**
                     * KafkaAddress
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kafkaAddress;
                    bool m_kafkaAddressHasBeenSet;

                    /**
                     * KafkaVPort
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kafkaVPort;
                    bool m_kafkaVPortHasBeenSet;

                    /**
                     * Topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * LineRule
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lineRule;
                    bool m_lineRuleHasBeenSet;

                    /**
                     * CustomRule
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customRule;
                    bool m_customRuleHasBeenSet;

                    /**
                     * EnableGlobalLineRule
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableGlobalLineRule;
                    bool m_enableGlobalLineRuleHasBeenSet;

                    /**
                     * EnableAuth
                     */
                    bool m_enableAuth;
                    bool m_enableAuthHasBeenSet;

                    /**
                     * Username
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Password
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * KafkaInfos
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeliveryKafkaInfo> m_kafkaInfos;
                    bool m_kafkaInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYCONFIGBINDGROUP_H_
