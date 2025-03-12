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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTOPIC_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * cmq topic返回信息展示字段
                */
                class CmqTopic : public AbstractModel
                {
                public:
                    CmqTopic();
                    ~CmqTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题的 ID。
                     * @return TopicId 主题的 ID。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题的 ID。
                     * @param _topicId 主题的 ID。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取主题名称。
                     * @return TopicName 主题名称。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称。
                     * @param _topicName 主题名称。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取消息在主题中最长存活时间，从发送到该主题开始经过此参数指定的时间后，不论消息是否被成功推送给用户都将被删除，单位为秒。固定为一天（86400秒），该属性不能修改。
                     * @return MsgRetentionSeconds 消息在主题中最长存活时间，从发送到该主题开始经过此参数指定的时间后，不论消息是否被成功推送给用户都将被删除，单位为秒。固定为一天（86400秒），该属性不能修改。
                     * 
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置消息在主题中最长存活时间，从发送到该主题开始经过此参数指定的时间后，不论消息是否被成功推送给用户都将被删除，单位为秒。固定为一天（86400秒），该属性不能修改。
                     * @param _msgRetentionSeconds 消息在主题中最长存活时间，从发送到该主题开始经过此参数指定的时间后，不论消息是否被成功推送给用户都将被删除，单位为秒。固定为一天（86400秒），该属性不能修改。
                     * 
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     * 
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取消息最大长度。取值范围1024 - 1048576Byte（即1 - 1024K），默认值为1048576。
                     * @return MaxMsgSize 消息最大长度。取值范围1024 - 1048576Byte（即1 - 1024K），默认值为1048576。
                     * 
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置消息最大长度。取值范围1024 - 1048576Byte（即1 - 1024K），默认值为1048576。
                     * @param _maxMsgSize 消息最大长度。取值范围1024 - 1048576Byte（即1 - 1024K），默认值为1048576。
                     * 
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     * 
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取每秒钟发布消息的条数。
                     * @return Qps 每秒钟发布消息的条数。
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置每秒钟发布消息的条数。
                     * @param _qps 每秒钟发布消息的条数。
                     * 
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取描述用户创建订阅时选择的过滤策略：
FilterType = 1表示用户使用 FilterTag 标签过滤;
FilterType = 2表示用户使用 BindingKey 过滤。
                     * @return FilterType 描述用户创建订阅时选择的过滤策略：
FilterType = 1表示用户使用 FilterTag 标签过滤;
FilterType = 2表示用户使用 BindingKey 过滤。
                     * 
                     */
                    uint64_t GetFilterType() const;

                    /**
                     * 设置描述用户创建订阅时选择的过滤策略：
FilterType = 1表示用户使用 FilterTag 标签过滤;
FilterType = 2表示用户使用 BindingKey 过滤。
                     * @param _filterType 描述用户创建订阅时选择的过滤策略：
FilterType = 1表示用户使用 FilterTag 标签过滤;
FilterType = 2表示用户使用 BindingKey 过滤。
                     * 
                     */
                    void SetFilterType(const uint64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取主题的创建时间。返回 Unix 时间戳，精确到毫秒。
                     * @return CreateTime 主题的创建时间。返回 Unix 时间戳，精确到毫秒。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置主题的创建时间。返回 Unix 时间戳，精确到毫秒。
                     * @param _createTime 主题的创建时间。返回 Unix 时间戳，精确到毫秒。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后一次修改主题属性的时间。返回 Unix 时间戳，精确到毫秒。
                     * @return LastModifyTime 最后一次修改主题属性的时间。返回 Unix 时间戳，精确到毫秒。
                     * 
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置最后一次修改主题属性的时间。返回 Unix 时间戳，精确到毫秒。
                     * @param _lastModifyTime 最后一次修改主题属性的时间。返回 Unix 时间戳，精确到毫秒。
                     * 
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     * 
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取当前该主题中消息数目（消息堆积数）。
                     * @return MsgCount 当前该主题中消息数目（消息堆积数）。
                     * 
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置当前该主题中消息数目（消息堆积数）。
                     * @param _msgCount 当前该主题中消息数目（消息堆积数）。
                     * 
                     */
                    void SetMsgCount(const uint64_t& _msgCount);

                    /**
                     * 判断参数 MsgCount 是否已赋值
                     * @return MsgCount 是否已赋值
                     * 
                     */
                    bool MsgCountHasBeenSet() const;

                    /**
                     * 获取创建者 Uin，CAM 鉴权 resource 由该字段组合而成。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin 创建者 Uin，CAM 鉴权 resource 由该字段组合而成。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置创建者 Uin，CAM 鉴权 resource 由该字段组合而成。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUin 创建者 Uin，CAM 鉴权 resource 由该字段组合而成。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取关联的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 关联的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置关联的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 关联的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取消息轨迹。true表示开启，false表示不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Trace 消息轨迹。true表示开启，false表示不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTrace() const;

                    /**
                     * 设置消息轨迹。true表示开启，false表示不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trace 消息轨迹。true表示开启，false表示不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     * 
                     */
                    bool TraceHasBeenSet() const;

                    /**
                     * 获取租户id
                     * @return TenantId 租户id
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户id
                     * @param _tenantId 租户id
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

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
                     * 获取集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
                     * @return Status 集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
                     * @param _status 集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取0表示pulsar，1表示rocketmq
                     * @return BrokerType 0表示pulsar，1表示rocketmq
                     * 
                     */
                    int64_t GetBrokerType() const;

                    /**
                     * 设置0表示pulsar，1表示rocketmq
                     * @param _brokerType 0表示pulsar，1表示rocketmq
                     * 
                     */
                    void SetBrokerType(const int64_t& _brokerType);

                    /**
                     * 判断参数 BrokerType 是否已赋值
                     * @return BrokerType 是否已赋值
                     * 
                     */
                    bool BrokerTypeHasBeenSet() const;

                    /**
                     * 获取订阅数量
                     * @return SubscriptionCount 订阅数量
                     * 
                     */
                    int64_t GetSubscriptionCount() const;

                    /**
                     * 设置订阅数量
                     * @param _subscriptionCount 订阅数量
                     * 
                     */
                    void SetSubscriptionCount(const int64_t& _subscriptionCount);

                    /**
                     * 判断参数 SubscriptionCount 是否已赋值
                     * @return SubscriptionCount 是否已赋值
                     * 
                     */
                    bool SubscriptionCountHasBeenSet() const;

                private:

                    /**
                     * 主题的 ID。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 主题名称。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 消息在主题中最长存活时间，从发送到该主题开始经过此参数指定的时间后，不论消息是否被成功推送给用户都将被删除，单位为秒。固定为一天（86400秒），该属性不能修改。
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * 消息最大长度。取值范围1024 - 1048576Byte（即1 - 1024K），默认值为1048576。
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * 每秒钟发布消息的条数。
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 描述用户创建订阅时选择的过滤策略：
FilterType = 1表示用户使用 FilterTag 标签过滤;
FilterType = 2表示用户使用 BindingKey 过滤。
                     */
                    uint64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * 主题的创建时间。返回 Unix 时间戳，精确到毫秒。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后一次修改主题属性的时间。返回 Unix 时间戳，精确到毫秒。
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * 当前该主题中消息数目（消息堆积数）。
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * 创建者 Uin，CAM 鉴权 resource 由该字段组合而成。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 关联的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 消息轨迹。true表示开启，false表示不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                    /**
                     * 租户id
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0表示pulsar，1表示rocketmq
                     */
                    int64_t m_brokerType;
                    bool m_brokerTypeHasBeenSet;

                    /**
                     * 订阅数量
                     */
                    int64_t m_subscriptionCount;
                    bool m_subscriptionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTOPIC_H_
