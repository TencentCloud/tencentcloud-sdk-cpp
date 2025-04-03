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
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
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
                     * 获取主题名
                     * @return TopicName 主题名
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名
                     * @param _topicName 主题名
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
                     * 获取主题备注，是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线-。
                     * @return Note 主题备注，是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线-。
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置主题备注，是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线-。
                     * @param _note 主题备注，是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线-。
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
                     * 获取IP 白名单开关，1：打开；0：关闭。
                     * @return EnableWhiteList IP 白名单开关，1：打开；0：关闭。
                     * 
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置IP 白名单开关，1：打开；0：关闭。
                     * @param _enableWhiteList IP 白名单开关，1：打开；0：关闭。
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
                     * 获取默认为1。
                     * @return MinInsyncReplicas 默认为1。
                     * 
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置默认为1。
                     * @param _minInsyncReplicas 默认为1。
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
                     * 获取默认为 0，0：false；1：true。
                     * @return UncleanLeaderElectionEnable 默认为 0，0：false；1：true。
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置默认为 0，0：false；1：true。
                     * @param _uncleanLeaderElectionEnable 默认为 0，0：false；1：true。
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
                     * 获取消息保留时间，单位：ms，当前最小值为60000ms。
                     * @return RetentionMs 消息保留时间，单位：ms，当前最小值为60000ms。
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置消息保留时间，单位：ms，当前最小值为60000ms。
                     * @param _retentionMs 消息保留时间，单位：ms，当前最小值为60000ms。
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
                     * 获取主题消息最大值，单位为 Byte，最大值为12582912Byte（即12MB）。
                     * @return MaxMessageBytes 主题消息最大值，单位为 Byte，最大值为12582912Byte（即12MB）。
                     * 
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置主题消息最大值，单位为 Byte，最大值为12582912Byte（即12MB）。
                     * @param _maxMessageBytes 主题消息最大值，单位为 Byte，最大值为12582912Byte（即12MB）。
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
                     * 获取Segment 分片滚动的时长，单位：ms，当前最小为300000ms。
                     * @return SegmentMs Segment 分片滚动的时长，单位：ms，当前最小为300000ms。
                     * 
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置Segment 分片滚动的时长，单位：ms，当前最小为300000ms。
                     * @param _segmentMs Segment 分片滚动的时长，单位：ms，当前最小为300000ms。
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
                     * 获取消息删除策略，可以选择delete 或者compact
                     * @return CleanUpPolicy 消息删除策略，可以选择delete 或者compact
                     * 
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置消息删除策略，可以选择delete 或者compact
                     * @param _cleanUpPolicy 消息删除策略，可以选择delete 或者compact
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
                     * 获取Ip白名单列表，配额限制，enableWhileList=1时必选
                     * @return IpWhiteList Ip白名单列表，配额限制，enableWhileList=1时必选
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置Ip白名单列表，配额限制，enableWhileList=1时必选
                     * @param _ipWhiteList Ip白名单列表，配额限制，enableWhileList=1时必选
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
                     * 获取预设ACL规则, 1:打开  0:关闭，默认不打开
                     * @return EnableAclRule 预设ACL规则, 1:打开  0:关闭，默认不打开
                     * 
                     */
                    int64_t GetEnableAclRule() const;

                    /**
                     * 设置预设ACL规则, 1:打开  0:关闭，默认不打开
                     * @param _enableAclRule 预设ACL规则, 1:打开  0:关闭，默认不打开
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
                     * 获取ACL规则名
                     * @return AclRuleName ACL规则名
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置ACL规则名
                     * @param _aclRuleName ACL规则名
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
                     * 获取可选, 保留文件大小. 默认为-1,单位bytes, 当前最小值为1048576B
                     * @return RetentionBytes 可选, 保留文件大小. 默认为-1,单位bytes, 当前最小值为1048576B
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置可选, 保留文件大小. 默认为-1,单位bytes, 当前最小值为1048576B
                     * @param _retentionBytes 可选, 保留文件大小. 默认为-1,单位bytes, 当前最小值为1048576B
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
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
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
                     * 获取生产限流，单位 MB/s；设置为-1，则生产不限流
                     * @return QuotaProducerByteRate 生产限流，单位 MB/s；设置为-1，则生产不限流
                     * 
                     */
                    int64_t GetQuotaProducerByteRate() const;

                    /**
                     * 设置生产限流，单位 MB/s；设置为-1，则生产不限流
                     * @param _quotaProducerByteRate 生产限流，单位 MB/s；设置为-1，则生产不限流
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
                     * 获取消费限流，单位 MB/s；设置为-1，则消费不限流
                     * @return QuotaConsumerByteRate 消费限流，单位 MB/s；设置为-1，则消费不限流
                     * 
                     */
                    int64_t GetQuotaConsumerByteRate() const;

                    /**
                     * 设置消费限流，单位 MB/s；设置为-1，则消费不限流
                     * @param _quotaConsumerByteRate 消费限流，单位 MB/s；设置为-1，则消费不限流
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
                     * 获取topic副本数  最小值 1,最大值 3
                     * @return ReplicaNum topic副本数  最小值 1,最大值 3
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置topic副本数  最小值 1,最大值 3
                     * @param _replicaNum topic副本数  最小值 1,最大值 3
                     * 
                     */
                    void SetReplicaNum(const int64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 主题备注，是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线-。
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * IP 白名单开关，1：打开；0：关闭。
                     */
                    int64_t m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * 默认为1。
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * 默认为 0，0：false；1：true。
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * 消息保留时间，单位：ms，当前最小值为60000ms。
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * 主题消息最大值，单位为 Byte，最大值为12582912Byte（即12MB）。
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                    /**
                     * Segment 分片滚动的时长，单位：ms，当前最小为300000ms。
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * 消息删除策略，可以选择delete 或者compact
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * Ip白名单列表，配额限制，enableWhileList=1时必选
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * 预设ACL规则, 1:打开  0:关闭，默认不打开
                     */
                    int64_t m_enableAclRule;
                    bool m_enableAclRuleHasBeenSet;

                    /**
                     * ACL规则名
                     */
                    std::string m_aclRuleName;
                    bool m_aclRuleNameHasBeenSet;

                    /**
                     * 可选, 保留文件大小. 默认为-1,单位bytes, 当前最小值为1048576B
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 生产限流，单位 MB/s；设置为-1，则生产不限流
                     */
                    int64_t m_quotaProducerByteRate;
                    bool m_quotaProducerByteRateHasBeenSet;

                    /**
                     * 消费限流，单位 MB/s；设置为-1，则消费不限流
                     */
                    int64_t m_quotaConsumerByteRate;
                    bool m_quotaConsumerByteRateHasBeenSet;

                    /**
                     * topic副本数  最小值 1,最大值 3
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_
