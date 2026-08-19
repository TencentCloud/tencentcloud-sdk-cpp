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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATETOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     * 获取<p>日志主题的名称。</p>
                     * @return TopicName <p>日志主题的名称。</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>日志主题的名称。</p>
                     * @param _topicName <p>日志主题的名称。</p>
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
                     * 获取<p>主题分区Partition的数量，不传参默认创建1个，最大创建允许10个，分裂/合并操作会改变分区数量，整体上限50个。</p>
                     * @return PartitionCount <p>主题分区Partition的数量，不传参默认创建1个，最大创建允许10个，分裂/合并操作会改变分区数量，整体上限50个。</p>
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置<p>主题分区Partition的数量，不传参默认创建1个，最大创建允许10个，分裂/合并操作会改变分区数量，整体上限50个。</p>
                     * @param _partitionCount <p>主题分区Partition的数量，不传参默认创建1个，最大创建允许10个，分裂/合并操作会改变分区数量，整体上限50个。</p>
                     * 
                     */
                    void SetPartitionCount(const uint64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取<p>日志类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。</p>
                     * @return TopicType <p>日志类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。</p>
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置<p>日志类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。</p>
                     * @param _topicType <p>日志类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。</p>
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
                     * 获取<p>存储时间，单位天，默认为 30。</p><ul><li>日志接入标准存储时，支持1至3600天，值为3640时代表永久保存。</li><li>日志接入低频存储时，支持7至3600天，值为3640时代表永久保存。</li></ul>
                     * @return Period <p>存储时间，单位天，默认为 30。</p><ul><li>日志接入标准存储时，支持1至3600天，值为3640时代表永久保存。</li><li>日志接入低频存储时，支持7至3600天，值为3640时代表永久保存。</li></ul>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>存储时间，单位天，默认为 30。</p><ul><li>日志接入标准存储时，支持1至3600天，值为3640时代表永久保存。</li><li>日志接入低频存储时，支持7至3600天，值为3640时代表永久保存。</li></ul>
                     * @param _period <p>存储时间，单位天，默认为 30。</p><ul><li>日志接入标准存储时，支持1至3600天，值为3640时代表永久保存。</li><li>日志接入低频存储时，支持7至3600天，值为3640时代表永久保存。</li></ul>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>日志主题的存储类型，可选值 HOT（标准存储），COLD（低频存储）；默认为HOT。</p>
                     * @return StorageType <p>日志主题的存储类型，可选值 HOT（标准存储），COLD（低频存储）；默认为HOT。</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>日志主题的存储类型，可选值 HOT（标准存储），COLD（低频存储）；默认为HOT。</p>
                     * @param _storageType <p>日志主题的存储类型，可选值 HOT（标准存储），COLD（低频存储）；默认为HOT。</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>标签</p><p>最多支持一次传入20个</p>
                     * @return Tags <p>标签</p><p>最多支持一次传入20个</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签</p><p>最多支持一次传入20个</p>
                     * @param _tags <p>标签</p><p>最多支持一次传入20个</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题的名称。</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>主题分区Partition的数量，不传参默认创建1个，最大创建允许10个，分裂/合并操作会改变分区数量，整体上限50个。</p>
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * <p>日志类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。</p>
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * <p>存储时间，单位天，默认为 30。</p><ul><li>日志接入标准存储时，支持1至3600天，值为3640时代表永久保存。</li><li>日志接入低频存储时，支持7至3600天，值为3640时代表永久保存。</li></ul>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>日志主题的存储类型，可选值 HOT（标准存储），COLD（低频存储）；默认为HOT。</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>标签</p><p>最多支持一次传入20个</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATETOPICREQUEST_H_
