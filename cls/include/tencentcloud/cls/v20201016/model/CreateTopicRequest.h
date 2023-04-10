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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
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
                     * 获取日志集ID
                     * @return LogsetId 日志集ID
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
                     * @param LogsetId 日志集ID
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志主题名称
                     * @return TopicName 日志主题名称
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志主题名称
                     * @param TopicName 日志主题名称
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取日志主题分区个数。默认创建1个，最大支持创建10个分区。
                     * @return PartitionCount 日志主题分区个数。默认创建1个，最大支持创建10个分区。
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置日志主题分区个数。默认创建1个，最大支持创建10个分区。
                     * @param PartitionCount 日志主题分区个数。默认创建1个，最大支持创建10个分区。
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     * @return Tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     * @param Tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否开启自动分裂，默认值为true
                     * @return AutoSplit 是否开启自动分裂，默认值为true
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置是否开启自动分裂，默认值为true
                     * @param AutoSplit 是否开启自动分裂，默认值为true
                     */
                    void SetAutoSplit(const bool& _autoSplit);

                    /**
                     * 判断参数 AutoSplit 是否已赋值
                     * @return AutoSplit 是否已赋值
                     */
                    bool AutoSplitHasBeenSet() const;

                    /**
                     * 获取开启自动分裂后，每个主题能够允许的最大分区数，默认值为50
                     * @return MaxSplitPartitions 开启自动分裂后，每个主题能够允许的最大分区数，默认值为50
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置开启自动分裂后，每个主题能够允许的最大分区数，默认值为50
                     * @param MaxSplitPartitions 开启自动分裂后，每个主题能够允许的最大分区数，默认值为50
                     */
                    void SetMaxSplitPartitions(const int64_t& _maxSplitPartitions);

                    /**
                     * 判断参数 MaxSplitPartitions 是否已赋值
                     * @return MaxSplitPartitions 是否已赋值
                     */
                    bool MaxSplitPartitionsHasBeenSet() const;

                    /**
                     * 获取日志主题的存储类型，可选值 hot（标准存储），cold（低频存储）；默认为hot。
                     * @return StorageType 日志主题的存储类型，可选值 hot（标准存储），cold（低频存储）；默认为hot。
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置日志主题的存储类型，可选值 hot（标准存储），cold（低频存储）；默认为hot。
                     * @param StorageType 日志主题的存储类型，可选值 hot（标准存储），cold（低频存储）；默认为hot。
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取生命周期，单位天，标准存储取值范围1\~3600，低频存储取值范围7\~3600天。取值为3640时代表永久保存
                     * @return Period 生命周期，单位天，标准存储取值范围1\~3600，低频存储取值范围7\~3600天。取值为3640时代表永久保存
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置生命周期，单位天，标准存储取值范围1\~3600，低频存储取值范围7\~3600天。取值为3640时代表永久保存
                     * @param Period 生命周期，单位天，标准存储取值范围1\~3600，低频存储取值范围7\~3600天。取值为3640时代表永久保存
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取日志主题描述
                     * @return Describes 日志主题描述
                     */
                    std::string GetDescribes() const;

                    /**
                     * 设置日志主题描述
                     * @param Describes 日志主题描述
                     */
                    void SetDescribes(const std::string& _describes);

                    /**
                     * 判断参数 Describes 是否已赋值
                     * @return Describes 是否已赋值
                     */
                    bool DescribesHasBeenSet() const;

                    /**
                     * 获取0：关闭日志沉降。
非0：开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。仅在StorageType为 hot 时生效
                     * @return HotPeriod 0：关闭日志沉降。
非0：开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。仅在StorageType为 hot 时生效
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置0：关闭日志沉降。
非0：开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。仅在StorageType为 hot 时生效
                     * @param HotPeriod 0：关闭日志沉降。
非0：开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。仅在StorageType为 hot 时生效
                     */
                    void SetHotPeriod(const uint64_t& _hotPeriod);

                    /**
                     * 判断参数 HotPeriod 是否已赋值
                     * @return HotPeriod 是否已赋值
                     */
                    bool HotPeriodHasBeenSet() const;

                private:

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 日志主题分区个数。默认创建1个，最大支持创建10个分区。
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * 标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否开启自动分裂，默认值为true
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * 开启自动分裂后，每个主题能够允许的最大分区数，默认值为50
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * 日志主题的存储类型，可选值 hot（标准存储），cold（低频存储）；默认为hot。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 生命周期，单位天，标准存储取值范围1\~3600，低频存储取值范围7\~3600天。取值为3640时代表永久保存
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 日志主题描述
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * 0：关闭日志沉降。
非0：开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。仅在StorageType为 hot 时生效
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_
