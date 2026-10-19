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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Tag.h>


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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>主题名称</p>
                     * @return Topic <p>主题名称</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>主题名称</p>
                     * @param _topic <p>主题名称</p>
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
                     * 获取<p>主题类型<br>NORMAL:普通消息,<br>FIFO:顺序消息,<br>DELAY:延时消息,<br>TRANSACTION:事务消息</p>
                     * @return TopicType <p>主题类型<br>NORMAL:普通消息,<br>FIFO:顺序消息,<br>DELAY:延时消息,<br>TRANSACTION:事务消息</p>
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置<p>主题类型<br>NORMAL:普通消息,<br>FIFO:顺序消息,<br>DELAY:延时消息,<br>TRANSACTION:事务消息</p>
                     * @param _topicType <p>主题类型<br>NORMAL:普通消息,<br>FIFO:顺序消息,<br>DELAY:延时消息,<br>TRANSACTION:事务消息</p>
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
                     * 获取<p>队列数量</p>
                     * @return QueueNum <p>队列数量</p>
                     * 
                     */
                    int64_t GetQueueNum() const;

                    /**
                     * 设置<p>队列数量</p>
                     * @param _queueNum <p>队列数量</p>
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
                     * 获取<p>备注信息</p>
                     * @return Remark <p>备注信息</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息</p>
                     * @param _remark <p>备注信息</p>
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
                     * 获取<p>4.x的集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterIdV4 <p>4.x的集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterIdV4() const;

                    /**
                     * 设置<p>4.x的集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterIdV4 <p>4.x的集群id</p>
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
                     * 获取<p>4.x的命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceV4 <p>4.x的命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceV4() const;

                    /**
                     * 设置<p>4.x的命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceV4 <p>4.x的命名空间</p>
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
                     * 获取<p>4.x的主题名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicV4 <p>4.x的主题名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicV4() const;

                    /**
                     * 设置<p>4.x的主题名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicV4 <p>4.x的主题名称</p>
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
                     * 获取<p>4.x的完整命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullNamespaceV4 <p>4.x的完整命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullNamespaceV4() const;

                    /**
                     * 设置<p>4.x的完整命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullNamespaceV4 <p>4.x的完整命名空间</p>
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
                     * 获取<p>消息保留时长</p>
                     * @return MsgTTL <p>消息保留时长</p>
                     * 
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 设置<p>消息保留时长</p>
                     * @param _msgTTL <p>消息保留时长</p>
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
                     * 获取<p>绑定的标签列表</p>
                     * @return TagList <p>绑定的标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>绑定的标签列表</p>
                     * @param _tagList <p>绑定的标签列表</p>
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>LITE 类型 Topic 专用：是否开启自动过期删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoExpireDelete <p>LITE 类型 Topic 专用：是否开启自动过期删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoExpireDelete() const;

                    /**
                     * 设置<p>LITE 类型 Topic 专用：是否开启自动过期删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoExpireDelete <p>LITE 类型 Topic 专用：是否开启自动过期删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoExpireDelete(const bool& _autoExpireDelete);

                    /**
                     * 判断参数 AutoExpireDelete 是否已赋值
                     * @return AutoExpireDelete 是否已赋值
                     * 
                     */
                    bool AutoExpireDeleteHasBeenSet() const;

                    /**
                     * 获取<p>LITE 类型 Topic 专用：自动过期时间</p><p>单位：分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoExpireTime <p>LITE 类型 Topic 专用：自动过期时间</p><p>单位：分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAutoExpireTime() const;

                    /**
                     * 设置<p>LITE 类型 Topic 专用：自动过期时间</p><p>单位：分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoExpireTime <p>LITE 类型 Topic 专用：自动过期时间</p><p>单位：分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoExpireTime(const uint64_t& _autoExpireTime);

                    /**
                     * 判断参数 AutoExpireTime 是否已赋值
                     * @return AutoExpireTime 是否已赋值
                     * 
                     */
                    bool AutoExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主题名称</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>主题类型<br>NORMAL:普通消息,<br>FIFO:顺序消息,<br>DELAY:延时消息,<br>TRANSACTION:事务消息</p>
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * <p>队列数量</p>
                     */
                    int64_t m_queueNum;
                    bool m_queueNumHasBeenSet;

                    /**
                     * <p>备注信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>4.x的集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterIdV4;
                    bool m_clusterIdV4HasBeenSet;

                    /**
                     * <p>4.x的命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceV4;
                    bool m_namespaceV4HasBeenSet;

                    /**
                     * <p>4.x的主题名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicV4;
                    bool m_topicV4HasBeenSet;

                    /**
                     * <p>4.x的完整命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullNamespaceV4;
                    bool m_fullNamespaceV4HasBeenSet;

                    /**
                     * <p>消息保留时长</p>
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * <p>绑定的标签列表</p>
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>LITE 类型 Topic 专用：是否开启自动过期删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoExpireDelete;
                    bool m_autoExpireDeleteHasBeenSet;

                    /**
                     * <p>LITE 类型 Topic 专用：自动过期时间</p><p>单位：分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_autoExpireTime;
                    bool m_autoExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICITEM_H_
