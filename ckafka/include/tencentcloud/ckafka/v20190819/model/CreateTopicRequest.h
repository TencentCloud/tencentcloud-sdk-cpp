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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATETOPICREQUEST_H_

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
                * CreateTopic请求参数结构体
                */
                class CreateTopicRequest : public AbstractModel
                {
                public:
                    CreateTopicRequest();
                    ~CreateTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取主题名称，是一个不超过 128 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     * @return TopicName 主题名称，是一个不超过 128 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称，是一个不超过 128 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     * @param _topicName 主题名称，是一个不超过 128 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
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
                     * 获取Partition个数，大于0
                     * @return PartitionNum Partition个数，大于0
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Partition个数，大于0
                     * @param _partitionNum Partition个数，大于0
                     * 
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取副本个数，不能多于 broker 数，最大为3
                     * @return ReplicaNum 副本个数，不能多于 broker 数，最大为3
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置副本个数，不能多于 broker 数，最大为3
                     * @param _replicaNum 副本个数，不能多于 broker 数，最大为3
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
                     * 获取ip白名单开关, 1:打开  0:关闭，默认不打开
                     * @return EnableWhiteList ip白名单开关, 1:打开  0:关闭，默认不打开
                     * 
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置ip白名单开关, 1:打开  0:关闭，默认不打开
                     * @param _enableWhiteList ip白名单开关, 1:打开  0:关闭，默认不打开
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
                     * 获取清理日志策略，日志清理模式，默认为"delete"。"delete"：日志按保存时间删除，"compact"：日志按 key 压缩，"compact, delete"：日志按 key 压缩且会按保存时间删除。
                     * @return CleanUpPolicy 清理日志策略，日志清理模式，默认为"delete"。"delete"：日志按保存时间删除，"compact"：日志按 key 压缩，"compact, delete"：日志按 key 压缩且会按保存时间删除。
                     * 
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置清理日志策略，日志清理模式，默认为"delete"。"delete"：日志按保存时间删除，"compact"：日志按 key 压缩，"compact, delete"：日志按 key 压缩且会按保存时间删除。
                     * @param _cleanUpPolicy 清理日志策略，日志清理模式，默认为"delete"。"delete"：日志按保存时间删除，"compact"：日志按 key 压缩，"compact, delete"：日志按 key 压缩且会按保存时间删除。
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
                     * 获取主题备注，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     * @return Note 主题备注，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置主题备注，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     * @param _note 主题备注，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
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
                     * 获取默认为1
                     * @return MinInsyncReplicas 默认为1
                     * 
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置默认为1
                     * @param _minInsyncReplicas 默认为1
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
                     * 获取是否允许未同步的副本选为leader，false:不允许，true:允许，默认不允许
                     * @return UncleanLeaderElectionEnable 是否允许未同步的副本选为leader，false:不允许，true:允许，默认不允许
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置是否允许未同步的副本选为leader，false:不允许，true:允许，默认不允许
                     * @param _uncleanLeaderElectionEnable 是否允许未同步的副本选为leader，false:不允许，true:允许，默认不允许
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
                     * 获取可选参数。消息保留时间，单位ms，当前最小值为60000ms
                     * @return RetentionMs 可选参数。消息保留时间，单位ms，当前最小值为60000ms
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置可选参数。消息保留时间，单位ms，当前最小值为60000ms
                     * @param _retentionMs 可选参数。消息保留时间，单位ms，当前最小值为60000ms
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
                     * 获取Segment分片滚动的时长，单位ms，当前最小为3600000ms
                     * @return SegmentMs Segment分片滚动的时长，单位ms，当前最小为3600000ms
                     * 
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置Segment分片滚动的时长，单位ms，当前最小为3600000ms
                     * @param _segmentMs Segment分片滚动的时长，单位ms，当前最小为3600000ms
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
                     * 获取主题消息最大值，单位为 Byte，最小值1024Byte(即1KB)，最大值为12582912Byte（即12MB）
                     * @return MaxMessageBytes 主题消息最大值，单位为 Byte，最小值1024Byte(即1KB)，最大值为12582912Byte（即12MB）
                     * 
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置主题消息最大值，单位为 Byte，最小值1024Byte(即1KB)，最大值为12582912Byte（即12MB）
                     * @param _maxMessageBytes 主题消息最大值，单位为 Byte，最小值1024Byte(即1KB)，最大值为12582912Byte（即12MB）
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
                     * 获取预设ACL规则的名称
                     * @return AclRuleName 预设ACL规则的名称
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置预设ACL规则的名称
                     * @param _aclRuleName 预设ACL规则的名称
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

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名称，是一个不超过 128 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Partition个数，大于0
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * 副本个数，不能多于 broker 数，最大为3
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * ip白名单开关, 1:打开  0:关闭，默认不打开
                     */
                    int64_t m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * Ip白名单列表，配额限制，enableWhileList=1时必选
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * 清理日志策略，日志清理模式，默认为"delete"。"delete"：日志按保存时间删除，"compact"：日志按 key 压缩，"compact, delete"：日志按 key 压缩且会按保存时间删除。
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * 主题备注，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 默认为1
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * 是否允许未同步的副本选为leader，false:不允许，true:允许，默认不允许
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * 可选参数。消息保留时间，单位ms，当前最小值为60000ms
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * Segment分片滚动的时长，单位ms，当前最小为3600000ms
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * 主题消息最大值，单位为 Byte，最小值1024Byte(即1KB)，最大值为12582912Byte（即12MB）
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                    /**
                     * 预设ACL规则, 1:打开  0:关闭，默认不打开
                     */
                    int64_t m_enableAclRule;
                    bool m_enableAclRuleHasBeenSet;

                    /**
                     * 预设ACL规则的名称
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATETOPICREQUEST_H_
