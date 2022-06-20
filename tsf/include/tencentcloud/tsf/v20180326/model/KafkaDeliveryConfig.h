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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigId 配置项id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置项id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigId 配置项id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigName 配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigName 配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectPath 采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetCollectPath() const;

                    /**
                     * 设置采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CollectPath 采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCollectPath(const std::vector<std::string>& _collectPath);

                    /**
                     * 判断参数 CollectPath 是否已赋值
                     * @return CollectPath 是否已赋值
                     */
                    bool CollectPathHasBeenSet() const;

                    /**
                     * 获取kafka vip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaVIp kafka vip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKafkaVIp() const;

                    /**
                     * 设置kafka vip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KafkaVIp kafka vip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKafkaVIp(const std::string& _kafkaVIp);

                    /**
                     * 判断参数 KafkaVIp 是否已赋值
                     * @return KafkaVIp 是否已赋值
                     */
                    bool KafkaVIpHasBeenSet() const;

                    /**
                     * 获取kafka vport
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaVPort kafka vport
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKafkaVPort() const;

                    /**
                     * 设置kafka vport
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KafkaVPort kafka vport
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKafkaVPort(const std::string& _kafkaVPort);

                    /**
                     * 判断参数 KafkaVPort 是否已赋值
                     * @return KafkaVPort 是否已赋值
                     */
                    bool KafkaVPortHasBeenSet() const;

                    /**
                     * 获取kafka topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic kafka topic
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置kafka topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Topic kafka topic
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取换行规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LineRule 换行规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLineRule() const;

                    /**
                     * 设置换行规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LineRule 换行规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLineRule(const std::string& _lineRule);

                    /**
                     * 判断参数 LineRule 是否已赋值
                     * @return LineRule 是否已赋值
                     */
                    bool LineRuleHasBeenSet() const;

                private:

                    /**
                     * 配置项id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_collectPath;
                    bool m_collectPathHasBeenSet;

                    /**
                     * kafka vip
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 换行规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lineRule;
                    bool m_lineRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_KAFKADELIVERYCONFIG_H_
