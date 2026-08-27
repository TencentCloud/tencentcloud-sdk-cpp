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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_PRODUCER_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_PRODUCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/DispenseGlobalTag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 转发目标对象信息
                */
                class Producer : public AbstractModel
                {
                public:
                    Producer();
                    ~Producer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发协议类型，0-stormRetPb, 1-tcbDispensePb, 2-stormRetJson, 3-ADPPb(废弃)，4-中台pb
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtocolType 转发协议类型，0-stormRetPb, 1-tcbDispensePb, 2-stormRetJson, 3-ADPPb(废弃)，4-中台pb
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProtocolType() const;

                    /**
                     * 设置转发协议类型，0-stormRetPb, 1-tcbDispensePb, 2-stormRetJson, 3-ADPPb(废弃)，4-中台pb
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocolType 转发协议类型，0-stormRetPb, 1-tcbDispensePb, 2-stormRetJson, 3-ADPPb(废弃)，4-中台pb
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocolType(const int64_t& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取目标类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 目标类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置目标类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 目标类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取转发kafka地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Brokers 转发kafka地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrokers() const;

                    /**
                     * 设置转发kafka地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokers 转发kafka地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrokers(const std::string& _brokers);

                    /**
                     * 判断参数 Brokers 是否已赋值
                     * @return Brokers 是否已赋值
                     * 
                     */
                    bool BrokersHasBeenSet() const;

                    /**
                     * 获取转发kafka topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic 转发kafka topic
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置转发kafka topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic 转发kafka topic
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否合并指标,默认是1，合并
                     * @return Merge 是否合并指标,默认是1，合并
                     * 
                     */
                    int64_t GetMerge() const;

                    /**
                     * 设置是否合并指标,默认是1，合并
                     * @param _merge 是否合并指标,默认是1，合并
                     * 
                     */
                    void SetMerge(const int64_t& _merge);

                    /**
                     * 判断参数 Merge 是否已赋值
                     * @return Merge 是否已赋值
                     * 
                     */
                    bool MergeHasBeenSet() const;

                    /**
                     * 获取全局维度组
                     * @return GlobalTags 全局维度组
                     * 
                     */
                    std::vector<DispenseGlobalTag> GetGlobalTags() const;

                    /**
                     * 设置全局维度组
                     * @param _globalTags 全局维度组
                     * 
                     */
                    void SetGlobalTags(const std::vector<DispenseGlobalTag>& _globalTags);

                    /**
                     * 判断参数 GlobalTags 是否已赋值
                     * @return GlobalTags 是否已赋值
                     * 
                     */
                    bool GlobalTagsHasBeenSet() const;

                    /**
                     * 获取默认维度组，只提供维度即可
                     * @return DefaultTags 默认维度组，只提供维度即可
                     * 
                     */
                    std::vector<std::string> GetDefaultTags() const;

                    /**
                     * 设置默认维度组，只提供维度即可
                     * @param _defaultTags 默认维度组，只提供维度即可
                     * 
                     */
                    void SetDefaultTags(const std::vector<std::string>& _defaultTags);

                    /**
                     * 判断参数 DefaultTags 是否已赋值
                     * @return DefaultTags 是否已赋值
                     * 
                     */
                    bool DefaultTagsHasBeenSet() const;

                    /**
                     * 获取Kafka用户名
                     * @return Username Kafka用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Kafka用户名
                     * @param _username Kafka用户名
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
                     * 获取Kafka密码
                     * @return Password Kafka密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Kafka密码
                     * @param _password Kafka密码
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
                     * 转发协议类型，0-stormRetPb, 1-tcbDispensePb, 2-stormRetJson, 3-ADPPb(废弃)，4-中台pb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * 目标类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 转发kafka地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokers;
                    bool m_brokersHasBeenSet;

                    /**
                     * 转发kafka topic
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 是否合并指标,默认是1，合并
                     */
                    int64_t m_merge;
                    bool m_mergeHasBeenSet;

                    /**
                     * 全局维度组
                     */
                    std::vector<DispenseGlobalTag> m_globalTags;
                    bool m_globalTagsHasBeenSet;

                    /**
                     * 默认维度组，只提供维度即可
                     */
                    std::vector<std::string> m_defaultTags;
                    bool m_defaultTagsHasBeenSet;

                    /**
                     * Kafka用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Kafka密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_PRODUCER_H_
