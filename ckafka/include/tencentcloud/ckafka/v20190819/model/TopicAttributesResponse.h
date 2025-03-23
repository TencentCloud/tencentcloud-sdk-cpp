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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Config.h>
#include <tencentcloud/ckafka/v20190819/model/TopicPartitionDO.h>
#include <tencentcloud/ckafka/v20190819/model/AclRule.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceQuotaConfigResp.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 主题属性返回结果实体
                */
                class TopicAttributesResponse : public AbstractModel
                {
                public:
                    TopicAttributesResponse();
                    ~TopicAttributesResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题 ID
                     * @return TopicId 主题 ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题 ID
                     * @param _topicId 主题 ID
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取主题备注
                     * @return Note 主题备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置主题备注
                     * @param _note 主题备注
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
                     * 获取分区个数
                     * @return PartitionNum 分区个数
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置分区个数
                     * @param _partitionNum 分区个数
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
                     * 获取IP 白名单开关，1：打开； 0：关闭
                     * @return EnableWhiteList IP 白名单开关，1：打开； 0：关闭
                     * 
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置IP 白名单开关，1：打开； 0：关闭
                     * @param _enableWhiteList IP 白名单开关，1：打开； 0：关闭
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
                     * 获取IP 白名单列表
                     * @return IpWhiteList IP 白名单列表
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置IP 白名单列表
                     * @param _ipWhiteList IP 白名单列表
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
                     * 获取topic 配置数组
                     * @return Config topic 配置数组
                     * 
                     */
                    Config GetConfig() const;

                    /**
                     * 设置topic 配置数组
                     * @param _config topic 配置数组
                     * 
                     */
                    void SetConfig(const Config& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取分区详情
                     * @return Partitions 分区详情
                     * 
                     */
                    std::vector<TopicPartitionDO> GetPartitions() const;

                    /**
                     * 设置分区详情
                     * @param _partitions 分区详情
                     * 
                     */
                    void SetPartitions(const std::vector<TopicPartitionDO>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取ACL预设策略开关，1：打开； 0：关闭
                     * @return EnableAclRule ACL预设策略开关，1：打开； 0：关闭
                     * 
                     */
                    int64_t GetEnableAclRule() const;

                    /**
                     * 设置ACL预设策略开关，1：打开； 0：关闭
                     * @param _enableAclRule ACL预设策略开关，1：打开； 0：关闭
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
                     * 获取预设策略列表
                     * @return AclRuleList 预设策略列表
                     * 
                     */
                    std::vector<AclRule> GetAclRuleList() const;

                    /**
                     * 设置预设策略列表
                     * @param _aclRuleList 预设策略列表
                     * 
                     */
                    void SetAclRuleList(const std::vector<AclRule>& _aclRuleList);

                    /**
                     * 判断参数 AclRuleList 是否已赋值
                     * @return AclRuleList 是否已赋值
                     * 
                     */
                    bool AclRuleListHasBeenSet() const;

                    /**
                     * 获取topic 限流策略
                     * @return QuotaConfig topic 限流策略
                     * 
                     */
                    InstanceQuotaConfigResp GetQuotaConfig() const;

                    /**
                     * 设置topic 限流策略
                     * @param _quotaConfig topic 限流策略
                     * 
                     */
                    void SetQuotaConfig(const InstanceQuotaConfigResp& _quotaConfig);

                    /**
                     * 判断参数 QuotaConfig 是否已赋值
                     * @return QuotaConfig 是否已赋值
                     * 
                     */
                    bool QuotaConfigHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return ReplicaNum 副本数
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置副本数
                     * @param _replicaNum 副本数
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
                     * 主题 ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 主题备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 分区个数
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * IP 白名单开关，1：打开； 0：关闭
                     */
                    int64_t m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * IP 白名单列表
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * topic 配置数组
                     */
                    Config m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 分区详情
                     */
                    std::vector<TopicPartitionDO> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * ACL预设策略开关，1：打开； 0：关闭
                     */
                    int64_t m_enableAclRule;
                    bool m_enableAclRuleHasBeenSet;

                    /**
                     * 预设策略列表
                     */
                    std::vector<AclRule> m_aclRuleList;
                    bool m_aclRuleListHasBeenSet;

                    /**
                     * topic 限流策略
                     */
                    InstanceQuotaConfigResp m_quotaConfig;
                    bool m_quotaConfigHasBeenSet;

                    /**
                     * 副本数
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICATTRIBUTESRESPONSE_H_
