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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 列表上的主题信息
                */
                class TopicItem : public AbstractModel
                {
                public:
                    TopicItem();
                    ~TopicItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取主题名称
                     * @return Topic 主题名称
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称
                     * @param _topic 主题名称
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
                     * 获取主题类型
NORMAL:普通消息,
FIFO:顺序消息,
DELAY:延时消息,
TRANSACTION:事务消息
                     * @return TopicType 主题类型
NORMAL:普通消息,
FIFO:顺序消息,
DELAY:延时消息,
TRANSACTION:事务消息
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置主题类型
NORMAL:普通消息,
FIFO:顺序消息,
DELAY:延时消息,
TRANSACTION:事务消息
                     * @param _topicType 主题类型
NORMAL:普通消息,
FIFO:顺序消息,
DELAY:延时消息,
TRANSACTION:事务消息
                     * 
                     */
                    void SetTopicType(const std::string& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取队列数量
                     * @return QueueNum 队列数量
                     * 
                     */
                    int64_t GetQueueNum() const;

                    /**
                     * 设置队列数量
                     * @param _queueNum 队列数量
                     * 
                     */
                    void SetQueueNum(const int64_t& _queueNum);

                    /**
                     * 判断参数 QueueNum 是否已赋值
                     * @return QueueNum 是否已赋值
                     * 
                     */
                    bool QueueNumHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Remark 描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置描述
                     * @param _remark 描述
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
                     * 获取4.x的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterIdV4 4.x的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterIdV4() const;

                    /**
                     * 设置4.x的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterIdV4 4.x的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterIdV4(const std::string& _clusterIdV4);

                    /**
                     * 判断参数 ClusterIdV4 是否已赋值
                     * @return ClusterIdV4 是否已赋值
                     * 
                     */
                    bool ClusterIdV4HasBeenSet() const;

                    /**
                     * 获取4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceV4 4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceV4() const;

                    /**
                     * 设置4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceV4 4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceV4(const std::string& _namespaceV4);

                    /**
                     * 判断参数 NamespaceV4 是否已赋值
                     * @return NamespaceV4 是否已赋值
                     * 
                     */
                    bool NamespaceV4HasBeenSet() const;

                    /**
                     * 获取4.x的主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicV4 4.x的主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicV4() const;

                    /**
                     * 设置4.x的主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicV4 4.x的主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicV4(const std::string& _topicV4);

                    /**
                     * 判断参数 TopicV4 是否已赋值
                     * @return TopicV4 是否已赋值
                     * 
                     */
                    bool TopicV4HasBeenSet() const;

                    /**
                     * 获取4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullNamespaceV4 4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullNamespaceV4() const;

                    /**
                     * 设置4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullNamespaceV4 4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullNamespaceV4(const std::string& _fullNamespaceV4);

                    /**
                     * 判断参数 FullNamespaceV4 是否已赋值
                     * @return FullNamespaceV4 是否已赋值
                     * 
                     */
                    bool FullNamespaceV4HasBeenSet() const;

                    /**
                     * 获取消息保留时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgTTL 消息保留时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 设置消息保留时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgTTL 消息保留时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgTTL(const int64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 主题类型
NORMAL:普通消息,
FIFO:顺序消息,
DELAY:延时消息,
TRANSACTION:事务消息
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * 队列数量
                     */
                    int64_t m_queueNum;
                    bool m_queueNumHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 4.x的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterIdV4;
                    bool m_clusterIdV4HasBeenSet;

                    /**
                     * 4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceV4;
                    bool m_namespaceV4HasBeenSet;

                    /**
                     * 4.x的主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicV4;
                    bool m_topicV4HasBeenSet;

                    /**
                     * 4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullNamespaceV4;
                    bool m_fullNamespaceV4HasBeenSet;

                    /**
                     * 消息保留时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICITEM_H_
