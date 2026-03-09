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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyTopicAttributes请求参数结构体
                */
                class ModifyTopicAttributesRequest : public AbstractModel
                {
                public:
                    ModifyTopicAttributesRequest();
                    ~ModifyTopicAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * @return InstanceId <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * @param _instanceId <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
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
                     * 获取<p>主题名</p>
                     * @return TopicName <p>主题名</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>主题名</p>
                     * @param _topicName <p>主题名</p>
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
                     * 获取<p>主题备注</p><p>入参限制：不超过64个字符</p><p>默认值：&quot;&quot;</p>
                     * @return Note <p>主题备注</p><p>入参限制：不超过64个字符</p><p>默认值：&quot;&quot;</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>主题备注</p><p>入参限制：不超过64个字符</p><p>默认值：&quot;&quot;</p>
                     * @param _note <p>主题备注</p><p>入参限制：不超过64个字符</p><p>默认值：&quot;&quot;</p>
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取<p>IP 白名单开关，1：打开；0：关闭。</p>
                     * @return EnableWhiteList <p>IP 白名单开关，1：打开；0：关闭。</p>
                     * 
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置<p>IP 白名单开关，1：打开；0：关闭。</p>
                     * @param _enableWhiteList <p>IP 白名单开关，1：打开；0：关闭。</p>
                     * 
                     */
                    void SetEnableWhiteList(const int64_t& _enableWhiteList);

                    /**
                     * 判断参数 EnableWhiteList 是否已赋值
                     * @return EnableWhiteList 是否已赋值
                     * 
                     */
                    bool EnableWhiteListHasBeenSet() const;

                    /**
                     * 获取<p>最小同步副本数</p><p>默认值：1</p><p>最小值为1</p>
                     * @return MinInsyncReplicas <p>最小同步副本数</p><p>默认值：1</p><p>最小值为1</p>
                     * 
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置<p>最小同步副本数</p><p>默认值：1</p><p>最小值为1</p>
                     * @param _minInsyncReplicas <p>最小同步副本数</p><p>默认值：1</p><p>最小值为1</p>
                     * 
                     */
                    void SetMinInsyncReplicas(const int64_t& _minInsyncReplicas);

                    /**
                     * 判断参数 MinInsyncReplicas 是否已赋值
                     * @return MinInsyncReplicas 是否已赋值
                     * 
                     */
                    bool MinInsyncReplicasHasBeenSet() const;

                    /**
                     * 获取<p>是否允许未同步的副本选为leader</p><p>枚举值：</p><ul><li>0： 不允许</li><li>1： 允许</li></ul><p>默认值：0</p>
                     * @return UncleanLeaderElectionEnable <p>是否允许未同步的副本选为leader</p><p>枚举值：</p><ul><li>0： 不允许</li><li>1： 允许</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置<p>是否允许未同步的副本选为leader</p><p>枚举值：</p><ul><li>0： 不允许</li><li>1： 允许</li></ul><p>默认值：0</p>
                     * @param _uncleanLeaderElectionEnable <p>是否允许未同步的副本选为leader</p><p>枚举值：</p><ul><li>0： 不允许</li><li>1： 允许</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable);

                    /**
                     * 判断参数 UncleanLeaderElectionEnable 是否已赋值
                     * @return UncleanLeaderElectionEnable 是否已赋值
                     * 
                     */
                    bool UncleanLeaderElectionEnableHasBeenSet() const;

                    /**
                     * 获取<p>Segment分片滚动的时长</p><p>单位：毫秒</p><p>默认值：86400000</p><p>最小值为86400000ms（1天）</p>
                     * @return RetentionMs <p>Segment分片滚动的时长</p><p>单位：毫秒</p><p>默认值：86400000</p><p>最小值为86400000ms（1天）</p>
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置<p>Segment分片滚动的时长</p><p>单位：毫秒</p><p>默认值：86400000</p><p>最小值为86400000ms（1天）</p>
                     * @param _retentionMs <p>Segment分片滚动的时长</p><p>单位：毫秒</p><p>默认值：86400000</p><p>最小值为86400000ms（1天）</p>
                     * 
                     */
                    void SetRetentionMs(const int64_t& _retentionMs);

                    /**
                     * 判断参数 RetentionMs 是否已赋值
                     * @return RetentionMs 是否已赋值
                     * 
                     */
                    bool RetentionMsHasBeenSet() const;

                    /**
                     * 获取<p>主题消息最大值</p><p>取值范围：[1024, 12582912]</p><p>单位：Bytes</p>
                     * @return MaxMessageBytes <p>主题消息最大值</p><p>取值范围：[1024, 12582912]</p><p>单位：Bytes</p>
                     * 
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置<p>主题消息最大值</p><p>取值范围：[1024, 12582912]</p><p>单位：Bytes</p>
                     * @param _maxMessageBytes <p>主题消息最大值</p><p>取值范围：[1024, 12582912]</p><p>单位：Bytes</p>
                     * 
                     */
                    void SetMaxMessageBytes(const int64_t& _maxMessageBytes);

                    /**
                     * 判断参数 MaxMessageBytes 是否已赋值
                     * @return MaxMessageBytes 是否已赋值
                     * 
                     */
                    bool MaxMessageBytesHasBeenSet() const;

                    /**
                     * 获取<p>Segment 分片滚动的时长</p><p>单位：毫秒</p><p>最小值为86400000ms（1天）</p>
                     * @return SegmentMs <p>Segment 分片滚动的时长</p><p>单位：毫秒</p><p>最小值为86400000ms（1天）</p>
                     * 
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置<p>Segment 分片滚动的时长</p><p>单位：毫秒</p><p>最小值为86400000ms（1天）</p>
                     * @param _segmentMs <p>Segment 分片滚动的时长</p><p>单位：毫秒</p><p>最小值为86400000ms（1天）</p>
                     * 
                     */
                    void SetSegmentMs(const int64_t& _segmentMs);

                    /**
                     * 判断参数 SegmentMs 是否已赋值
                     * @return SegmentMs 是否已赋值
                     * 
                     */
                    bool SegmentMsHasBeenSet() const;

                    /**
                     * 获取<p>消息删除策略，可以选择delete 或者compact</p>
                     * @return CleanUpPolicy <p>消息删除策略，可以选择delete 或者compact</p>
                     * 
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置<p>消息删除策略，可以选择delete 或者compact</p>
                     * @param _cleanUpPolicy <p>消息删除策略，可以选择delete 或者compact</p>
                     * 
                     */
                    void SetCleanUpPolicy(const std::string& _cleanUpPolicy);

                    /**
                     * 判断参数 CleanUpPolicy 是否已赋值
                     * @return CleanUpPolicy 是否已赋值
                     * 
                     */
                    bool CleanUpPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Ip白名单列表，配额限制，enableWhileList=1时必选</p>
                     * @return IpWhiteList <p>Ip白名单列表，配额限制，enableWhileList=1时必选</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置<p>Ip白名单列表，配额限制，enableWhileList=1时必选</p>
                     * @param _ipWhiteList <p>Ip白名单列表，配额限制，enableWhileList=1时必选</p>
                     * 
                     */
                    void SetIpWhiteList(const std::vector<std::string>& _ipWhiteList);

                    /**
                     * 判断参数 IpWhiteList 是否已赋值
                     * @return IpWhiteList 是否已赋值
                     * 
                     */
                    bool IpWhiteListHasBeenSet() const;

                    /**
                     * 获取<p>预设ACL规则, 1:打开  0:关闭，默认不打开</p>
                     * @return EnableAclRule <p>预设ACL规则, 1:打开  0:关闭，默认不打开</p>
                     * 
                     */
                    int64_t GetEnableAclRule() const;

                    /**
                     * 设置<p>预设ACL规则, 1:打开  0:关闭，默认不打开</p>
                     * @param _enableAclRule <p>预设ACL规则, 1:打开  0:关闭，默认不打开</p>
                     * 
                     */
                    void SetEnableAclRule(const int64_t& _enableAclRule);

                    /**
                     * 判断参数 EnableAclRule 是否已赋值
                     * @return EnableAclRule 是否已赋值
                     * 
                     */
                    bool EnableAclRuleHasBeenSet() const;

                    /**
                     * 获取<p>ACL规则名</p>
                     * @return AclRuleName <p>ACL规则名</p>
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置<p>ACL规则名</p>
                     * @param _aclRuleName <p>ACL规则名</p>
                     * 
                     */
                    void SetAclRuleName(const std::string& _aclRuleName);

                    /**
                     * 判断参数 AclRuleName 是否已赋值
                     * @return AclRuleName 是否已赋值
                     * 
                     */
                    bool AclRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>可选, 保留文件大小</p><p>取值范围：[1073741824, 1099511627776]</p><p>单位：Bytes</p><p>默认值：-1</p><p>特殊值：-1表示无限制</p>
                     * @return RetentionBytes <p>可选, 保留文件大小</p><p>取值范围：[1073741824, 1099511627776]</p><p>单位：Bytes</p><p>默认值：-1</p><p>特殊值：-1表示无限制</p>
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置<p>可选, 保留文件大小</p><p>取值范围：[1073741824, 1099511627776]</p><p>单位：Bytes</p><p>默认值：-1</p><p>特殊值：-1表示无限制</p>
                     * @param _retentionBytes <p>可选, 保留文件大小</p><p>取值范围：[1073741824, 1099511627776]</p><p>单位：Bytes</p><p>默认值：-1</p><p>特殊值：-1表示无限制</p>
                     * 
                     */
                    void SetRetentionBytes(const int64_t& _retentionBytes);

                    /**
                     * 判断参数 RetentionBytes 是否已赋值
                     * @return RetentionBytes 是否已赋值
                     * 
                     */
                    bool RetentionBytesHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
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
                     * 获取<p>生产限流，单位 MB/s；设置为-1，则生产不限流</p>
                     * @return QuotaProducerByteRate <p>生产限流，单位 MB/s；设置为-1，则生产不限流</p>
                     * 
                     */
                    int64_t GetQuotaProducerByteRate() const;

                    /**
                     * 设置<p>生产限流，单位 MB/s；设置为-1，则生产不限流</p>
                     * @param _quotaProducerByteRate <p>生产限流，单位 MB/s；设置为-1，则生产不限流</p>
                     * 
                     */
                    void SetQuotaProducerByteRate(const int64_t& _quotaProducerByteRate);

                    /**
                     * 判断参数 QuotaProducerByteRate 是否已赋值
                     * @return QuotaProducerByteRate 是否已赋值
                     * 
                     */
                    bool QuotaProducerByteRateHasBeenSet() const;

                    /**
                     * 获取<p>消费限流，单位 MB/s；设置为-1，则消费不限流</p>
                     * @return QuotaConsumerByteRate <p>消费限流，单位 MB/s；设置为-1，则消费不限流</p>
                     * 
                     */
                    int64_t GetQuotaConsumerByteRate() const;

                    /**
                     * 设置<p>消费限流，单位 MB/s；设置为-1，则消费不限流</p>
                     * @param _quotaConsumerByteRate <p>消费限流，单位 MB/s；设置为-1，则消费不限流</p>
                     * 
                     */
                    void SetQuotaConsumerByteRate(const int64_t& _quotaConsumerByteRate);

                    /**
                     * 判断参数 QuotaConsumerByteRate 是否已赋值
                     * @return QuotaConsumerByteRate 是否已赋值
                     * 
                     */
                    bool QuotaConsumerByteRateHasBeenSet() const;

                    /**
                     * 获取<p>topic副本数  最小值 1,最大值 3</p>
                     * @return ReplicaNum <p>topic副本数  最小值 1,最大值 3</p>
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置<p>topic副本数  最小值 1,最大值 3</p>
                     * @param _replicaNum <p>topic副本数  最小值 1,最大值 3</p>
                     * 
                     */
                    void SetReplicaNum(const int64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取<p>消息保存的时间类型：CreateTime/LogAppendTime</p>
                     * @return LogMsgTimestampType <p>消息保存的时间类型：CreateTime/LogAppendTime</p>
                     * 
                     */
                    std::string GetLogMsgTimestampType() const;

                    /**
                     * 设置<p>消息保存的时间类型：CreateTime/LogAppendTime</p>
                     * @param _logMsgTimestampType <p>消息保存的时间类型：CreateTime/LogAppendTime</p>
                     * 
                     */
                    void SetLogMsgTimestampType(const std::string& _logMsgTimestampType);

                    /**
                     * 判断参数 LogMsgTimestampType 是否已赋值
                     * @return LogMsgTimestampType 是否已赋值
                     * 
                     */
                    bool LogMsgTimestampTypeHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主题名</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>主题备注</p><p>入参限制：不超过64个字符</p><p>默认值：&quot;&quot;</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>IP 白名单开关，1：打开；0：关闭。</p>
                     */
                    int64_t m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * <p>最小同步副本数</p><p>默认值：1</p><p>最小值为1</p>
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * <p>是否允许未同步的副本选为leader</p><p>枚举值：</p><ul><li>0： 不允许</li><li>1： 允许</li></ul><p>默认值：0</p>
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * <p>Segment分片滚动的时长</p><p>单位：毫秒</p><p>默认值：86400000</p><p>最小值为86400000ms（1天）</p>
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * <p>主题消息最大值</p><p>取值范围：[1024, 12582912]</p><p>单位：Bytes</p>
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                    /**
                     * <p>Segment 分片滚动的时长</p><p>单位：毫秒</p><p>最小值为86400000ms（1天）</p>
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * <p>消息删除策略，可以选择delete 或者compact</p>
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * <p>Ip白名单列表，配额限制，enableWhileList=1时必选</p>
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * <p>预设ACL规则, 1:打开  0:关闭，默认不打开</p>
                     */
                    int64_t m_enableAclRule;
                    bool m_enableAclRuleHasBeenSet;

                    /**
                     * <p>ACL规则名</p>
                     */
                    std::string m_aclRuleName;
                    bool m_aclRuleNameHasBeenSet;

                    /**
                     * <p>可选, 保留文件大小</p><p>取值范围：[1073741824, 1099511627776]</p><p>单位：Bytes</p><p>默认值：-1</p><p>特殊值：-1表示无限制</p>
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>生产限流，单位 MB/s；设置为-1，则生产不限流</p>
                     */
                    int64_t m_quotaProducerByteRate;
                    bool m_quotaProducerByteRateHasBeenSet;

                    /**
                     * <p>消费限流，单位 MB/s；设置为-1，则消费不限流</p>
                     */
                    int64_t m_quotaConsumerByteRate;
                    bool m_quotaConsumerByteRateHasBeenSet;

                    /**
                     * <p>topic副本数  最小值 1,最大值 3</p>
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * <p>消息保存的时间类型：CreateTime/LogAppendTime</p>
                     */
                    std::string m_logMsgTimestampType;
                    bool m_logMsgTimestampTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_
