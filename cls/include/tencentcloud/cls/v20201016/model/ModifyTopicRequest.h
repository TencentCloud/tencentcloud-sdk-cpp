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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/TopicExtendInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyTopic请求参数结构体
                */
                class ModifyTopicRequest : public AbstractModel
                {
                public:
                    ModifyTopicRequest();
                    ~ModifyTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _topicId 日志主题ID
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
                     * 获取日志主题名称
                     * @return TopicName 日志主题名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志主题名称
                     * @param _topicName 日志主题名称
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
                     * 获取标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，并且不能有重复的键值对。
                     * @return Tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，并且不能有重复的键值对。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，并且不能有重复的键值对。
                     * @param _tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，并且不能有重复的键值对。
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
                     * 获取主题是否开启采集，true：开启采集；false：关闭采集。
控制台目前不支持修改此参数。
                     * @return Status 主题是否开启采集，true：开启采集；false：关闭采集。
控制台目前不支持修改此参数。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置主题是否开启采集，true：开启采集；false：关闭采集。
控制台目前不支持修改此参数。
                     * @param _status 主题是否开启采集，true：开启采集；false：关闭采集。
控制台目前不支持修改此参数。
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否开启自动分裂
                     * @return AutoSplit 是否开启自动分裂
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置是否开启自动分裂
                     * @param _autoSplit 是否开启自动分裂
                     * 
                     */
                    void SetAutoSplit(const bool& _autoSplit);

                    /**
                     * 判断参数 AutoSplit 是否已赋值
                     * @return AutoSplit 是否已赋值
                     * 
                     */
                    bool AutoSplitHasBeenSet() const;

                    /**
                     * 获取若开启最大分裂，该主题能够能够允许的最大分区数
                     * @return MaxSplitPartitions 若开启最大分裂，该主题能够能够允许的最大分区数
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置若开启最大分裂，该主题能够能够允许的最大分区数
                     * @param _maxSplitPartitions 若开启最大分裂，该主题能够能够允许的最大分区数
                     * 
                     */
                    void SetMaxSplitPartitions(const int64_t& _maxSplitPartitions);

                    /**
                     * 判断参数 MaxSplitPartitions 是否已赋值
                     * @return MaxSplitPartitions 是否已赋值
                     * 
                     */
                    bool MaxSplitPartitionsHasBeenSet() const;

                    /**
                     * 获取生命周期，单位天，标准存储取值范围1\~3600，低频存储取值范围7\~3600。取值为3640时代表永久保存
                     * @return Period 生命周期，单位天，标准存储取值范围1\~3600，低频存储取值范围7\~3600。取值为3640时代表永久保存
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置生命周期，单位天，标准存储取值范围1\~3600，低频存储取值范围7\~3600。取值为3640时代表永久保存
                     * @param _period 生命周期，单位天，标准存储取值范围1\~3600，低频存储取值范围7\~3600。取值为3640时代表永久保存
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取日志主题描述
                     * @return Describes 日志主题描述
                     * 
                     */
                    std::string GetDescribes() const;

                    /**
                     * 设置日志主题描述
                     * @param _describes 日志主题描述
                     * 
                     */
                    void SetDescribes(const std::string& _describes);

                    /**
                     * 判断参数 Describes 是否已赋值
                     * @return Describes 是否已赋值
                     * 
                     */
                    bool DescribesHasBeenSet() const;

                    /**
                     * 获取0：关闭日志沉降。
非0：开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。仅在StorageType为 hot 时生效
                     * @return HotPeriod 0：关闭日志沉降。
非0：开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。仅在StorageType为 hot 时生效
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置0：关闭日志沉降。
非0：开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。仅在StorageType为 hot 时生效
                     * @param _hotPeriod 0：关闭日志沉降。
非0：开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。仅在StorageType为 hot 时生效
                     * 
                     */
                    void SetHotPeriod(const uint64_t& _hotPeriod);

                    /**
                     * 判断参数 HotPeriod 是否已赋值
                     * @return HotPeriod 是否已赋值
                     * 
                     */
                    bool HotPeriodHasBeenSet() const;

                    /**
                     * 获取免鉴权开关。 false：关闭； true：开启。
开启后将支持指定操作匿名访问该日志主题。详情请参见[日志主题](https://cloud.tencent.com/document/product/614/41035)。
                     * @return IsWebTracking 免鉴权开关。 false：关闭； true：开启。
开启后将支持指定操作匿名访问该日志主题。详情请参见[日志主题](https://cloud.tencent.com/document/product/614/41035)。
                     * 
                     */
                    bool GetIsWebTracking() const;

                    /**
                     * 设置免鉴权开关。 false：关闭； true：开启。
开启后将支持指定操作匿名访问该日志主题。详情请参见[日志主题](https://cloud.tencent.com/document/product/614/41035)。
                     * @param _isWebTracking 免鉴权开关。 false：关闭； true：开启。
开启后将支持指定操作匿名访问该日志主题。详情请参见[日志主题](https://cloud.tencent.com/document/product/614/41035)。
                     * 
                     */
                    void SetIsWebTracking(const bool& _isWebTracking);

                    /**
                     * 判断参数 IsWebTracking 是否已赋值
                     * @return IsWebTracking 是否已赋值
                     * 
                     */
                    bool IsWebTrackingHasBeenSet() const;

                    /**
                     * 获取日志主题扩展信息
                     * @return Extends 日志主题扩展信息
                     * 
                     */
                    TopicExtendInfo GetExtends() const;

                    /**
                     * 设置日志主题扩展信息
                     * @param _extends 日志主题扩展信息
                     * 
                     */
                    void SetExtends(const TopicExtendInfo& _extends);

                    /**
                     * 判断参数 Extends 是否已赋值
                     * @return Extends 是否已赋值
                     * 
                     */
                    bool ExtendsHasBeenSet() const;

                    /**
                     * 获取日志主题分区数量
                     * @return PartitionCount 日志主题分区数量
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置日志主题分区数量
                     * @param _partitionCount 日志主题分区数量
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
                     * 获取取消切换存储任务的id
                     * @return CancelTopicAsyncTaskID 取消切换存储任务的id
                     * 
                     */
                    std::string GetCancelTopicAsyncTaskID() const;

                    /**
                     * 设置取消切换存储任务的id
                     * @param _cancelTopicAsyncTaskID 取消切换存储任务的id
                     * 
                     */
                    void SetCancelTopicAsyncTaskID(const std::string& _cancelTopicAsyncTaskID);

                    /**
                     * 判断参数 CancelTopicAsyncTaskID 是否已赋值
                     * @return CancelTopicAsyncTaskID 是否已赋值
                     * 
                     */
                    bool CancelTopicAsyncTaskIDHasBeenSet() const;

                private:

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，并且不能有重复的键值对。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 主题是否开启采集，true：开启采集；false：关闭采集。
控制台目前不支持修改此参数。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否开启自动分裂
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * 若开启最大分裂，该主题能够能够允许的最大分区数
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * 生命周期，单位天，标准存储取值范围1\~3600，低频存储取值范围7\~3600。取值为3640时代表永久保存
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

                    /**
                     * 免鉴权开关。 false：关闭； true：开启。
开启后将支持指定操作匿名访问该日志主题。详情请参见[日志主题](https://cloud.tencent.com/document/product/614/41035)。
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                    /**
                     * 日志主题扩展信息
                     */
                    TopicExtendInfo m_extends;
                    bool m_extendsHasBeenSet;

                    /**
                     * 日志主题分区数量
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * 取消切换存储任务的id
                     */
                    std::string m_cancelTopicAsyncTaskID;
                    bool m_cancelTopicAsyncTaskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_
