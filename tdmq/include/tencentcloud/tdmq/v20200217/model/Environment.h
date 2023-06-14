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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENT_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RetentionPolicy.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 命名空间信息
                */
                class Environment : public AbstractModel
                {
                public:
                    Environment();
                    ~Environment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间名称
                     * @return EnvironmentId 命名空间名称
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置命名空间名称
                     * @param _environmentId 命名空间名称
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取说明
                     * @return Remark 说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明
                     * @param _remark 说明
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取未消费消息过期时间，单位：秒，最大1296000（15天）
                     * @return MsgTTL 未消费消息过期时间，单位：秒，最大1296000（15天）
                     * 
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 设置未消费消息过期时间，单位：秒，最大1296000（15天）
                     * @param _msgTTL 未消费消息过期时间，单位：秒，最大1296000（15天）
                     * 
                     */
                    void SetMsgTTL(const int64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

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
                     * 获取最近修改时间
                     * @return UpdateTime 最近修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近修改时间
                     * @param _updateTime 最近修改时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param _namespaceId 命名空间ID
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Topic数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicNum Topic数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Topic数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicNum Topic数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取消息保留策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionPolicy 消息保留策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RetentionPolicy GetRetentionPolicy() const;

                    /**
                     * 设置消息保留策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionPolicy 消息保留策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionPolicy(const RetentionPolicy& _retentionPolicy);

                    /**
                     * 判断参数 RetentionPolicy 是否已赋值
                     * @return RetentionPolicy 是否已赋值
                     * 
                     */
                    bool RetentionPolicyHasBeenSet() const;

                    /**
                     * 获取是否自动创建订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoSubscriptionCreation 是否自动创建订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoSubscriptionCreation() const;

                    /**
                     * 设置是否自动创建订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoSubscriptionCreation 是否自动创建订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoSubscriptionCreation(const bool& _autoSubscriptionCreation);

                    /**
                     * 判断参数 AutoSubscriptionCreation 是否已赋值
                     * @return AutoSubscriptionCreation 是否已赋值
                     * 
                     */
                    bool AutoSubscriptionCreationHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 未消费消息过期时间，单位：秒，最大1296000（15天）
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Topic数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * 消息保留策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RetentionPolicy m_retentionPolicy;
                    bool m_retentionPolicyHasBeenSet;

                    /**
                     * 是否自动创建订阅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoSubscriptionCreation;
                    bool m_autoSubscriptionCreationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENT_H_
