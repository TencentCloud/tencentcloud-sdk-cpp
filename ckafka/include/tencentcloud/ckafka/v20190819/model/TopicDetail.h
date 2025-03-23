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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAIL_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Config.h>
#include <tencentcloud/ckafka/v20190819/model/TopicRetentionTimeConfigRsp.h>
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
                * 主题详情
                */
                class TopicDetail : public AbstractModel
                {
                public:
                    TopicDetail();
                    ~TopicDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取主题Id
                     * @return TopicId 主题Id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题Id
                     * @param _topicId 主题Id
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
                     * 获取分区数
                     * @return PartitionNum 分区数
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置分区数
                     * @param _partitionNum 分区数
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

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
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
                     * 获取是否开启ip鉴权白名单，true表示开启，false表示不开启
                     * @return EnableWhiteList 是否开启ip鉴权白名单，true表示开启，false表示不开启
                     * 
                     */
                    bool GetEnableWhiteList() const;

                    /**
                     * 设置是否开启ip鉴权白名单，true表示开启，false表示不开启
                     * @param _enableWhiteList 是否开启ip鉴权白名单，true表示开启，false表示不开启
                     * 
                     */
                    void SetEnableWhiteList(const bool& _enableWhiteList);

                    /**
                     * 判断参数 EnableWhiteList 是否已赋值
                     * @return EnableWhiteList 是否已赋值
                     * 
                     */
                    bool EnableWhiteListHasBeenSet() const;

                    /**
                     * 获取ip白名单中ip个数
                     * @return IpWhiteListCount ip白名单中ip个数
                     * 
                     */
                    int64_t GetIpWhiteListCount() const;

                    /**
                     * 设置ip白名单中ip个数
                     * @param _ipWhiteListCount ip白名单中ip个数
                     * 
                     */
                    void SetIpWhiteListCount(const int64_t& _ipWhiteListCount);

                    /**
                     * 判断参数 IpWhiteListCount 是否已赋值
                     * @return IpWhiteListCount 是否已赋值
                     * 
                     */
                    bool IpWhiteListCountHasBeenSet() const;

                    /**
                     * 获取数据备份cos bucket: 转存到cos 的bucket地址
                     * @return ForwardCosBucket 数据备份cos bucket: 转存到cos 的bucket地址
                     * 
                     */
                    std::string GetForwardCosBucket() const;

                    /**
                     * 设置数据备份cos bucket: 转存到cos 的bucket地址
                     * @param _forwardCosBucket 数据备份cos bucket: 转存到cos 的bucket地址
                     * 
                     */
                    void SetForwardCosBucket(const std::string& _forwardCosBucket);

                    /**
                     * 判断参数 ForwardCosBucket 是否已赋值
                     * @return ForwardCosBucket 是否已赋值
                     * 
                     */
                    bool ForwardCosBucketHasBeenSet() const;

                    /**
                     * 获取数据备份cos 状态： 1 不开启数据备份，0 开启数据备份
                     * @return ForwardStatus 数据备份cos 状态： 1 不开启数据备份，0 开启数据备份
                     * 
                     */
                    int64_t GetForwardStatus() const;

                    /**
                     * 设置数据备份cos 状态： 1 不开启数据备份，0 开启数据备份
                     * @param _forwardStatus 数据备份cos 状态： 1 不开启数据备份，0 开启数据备份
                     * 
                     */
                    void SetForwardStatus(const int64_t& _forwardStatus);

                    /**
                     * 判断参数 ForwardStatus 是否已赋值
                     * @return ForwardStatus 是否已赋值
                     * 
                     */
                    bool ForwardStatusHasBeenSet() const;

                    /**
                     * 获取数据备份到cos的周期频率
                     * @return ForwardInterval 数据备份到cos的周期频率
                     * 
                     */
                    int64_t GetForwardInterval() const;

                    /**
                     * 设置数据备份到cos的周期频率
                     * @param _forwardInterval 数据备份到cos的周期频率
                     * 
                     */
                    void SetForwardInterval(const int64_t& _forwardInterval);

                    /**
                     * 判断参数 ForwardInterval 是否已赋值
                     * @return ForwardInterval 是否已赋值
                     * 
                     */
                    bool ForwardIntervalHasBeenSet() const;

                    /**
                     * 获取高级配置
                     * @return Config 高级配置
                     * 
                     */
                    Config GetConfig() const;

                    /**
                     * 设置高级配置
                     * @param _config 高级配置
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
                     * 获取消息保留时间配置(用于动态配置变更记录)
                     * @return RetentionTimeConfig 消息保留时间配置(用于动态配置变更记录)
                     * 
                     */
                    TopicRetentionTimeConfigRsp GetRetentionTimeConfig() const;

                    /**
                     * 设置消息保留时间配置(用于动态配置变更记录)
                     * @param _retentionTimeConfig 消息保留时间配置(用于动态配置变更记录)
                     * 
                     */
                    void SetRetentionTimeConfig(const TopicRetentionTimeConfigRsp& _retentionTimeConfig);

                    /**
                     * 判断参数 RetentionTimeConfig 是否已赋值
                     * @return RetentionTimeConfig 是否已赋值
                     * 
                     */
                    bool RetentionTimeConfigHasBeenSet() const;

                    /**
                     * 获取0:正常，1：已删除，2：删除中
                     * @return Status 0:正常，1：已删除，2：删除中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0:正常，1：已删除，2：删除中
                     * @param _status 0:正常，1：已删除，2：删除中
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
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签列表
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

                private:

                    /**
                     * 主题名
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 主题Id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 分区数
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * topic副本数  最小值 1,最大值 3
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否开启ip鉴权白名单，true表示开启，false表示不开启
                     */
                    bool m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * ip白名单中ip个数
                     */
                    int64_t m_ipWhiteListCount;
                    bool m_ipWhiteListCountHasBeenSet;

                    /**
                     * 数据备份cos bucket: 转存到cos 的bucket地址
                     */
                    std::string m_forwardCosBucket;
                    bool m_forwardCosBucketHasBeenSet;

                    /**
                     * 数据备份cos 状态： 1 不开启数据备份，0 开启数据备份
                     */
                    int64_t m_forwardStatus;
                    bool m_forwardStatusHasBeenSet;

                    /**
                     * 数据备份到cos的周期频率
                     */
                    int64_t m_forwardInterval;
                    bool m_forwardIntervalHasBeenSet;

                    /**
                     * 高级配置
                     */
                    Config m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 消息保留时间配置(用于动态配置变更记录)
                     */
                    TopicRetentionTimeConfigRsp m_retentionTimeConfig;
                    bool m_retentionTimeConfigHasBeenSet;

                    /**
                     * 0:正常，1：已删除，2：删除中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAIL_H_
