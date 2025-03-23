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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 主题基本信息
                */
                class TopicInfo : public AbstractModel
                {
                public:
                    TopicInfo();
                    ~TopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志集ID
                     * @return LogsetId 日志集ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
                     * @param _logsetId 日志集ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取主题ID
                     * @return TopicId 主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题ID
                     * @param _topicId 主题ID
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
                     * 获取主题名称
                     * @return TopicName 主题名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称
                     * @param _topicName 主题名称
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
                     * 获取主题分区个数
                     * @return PartitionCount 主题分区个数
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置主题分区个数
                     * @param _partitionCount 主题分区个数
                     * 
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取主题是否开启索引（主题类型需为日志主题）
                     * @return Index 主题是否开启索引（主题类型需为日志主题）
                     * 
                     */
                    bool GetIndex() const;

                    /**
                     * 设置主题是否开启索引（主题类型需为日志主题）
                     * @param _index 主题是否开启索引（主题类型需为日志主题）
                     * 
                     */
                    void SetIndex(const bool& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取云产品标识，主题由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE
                     * @return AssumerName 云产品标识，主题由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置云产品标识，主题由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE
                     * @param _assumerName 云产品标识，主题由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE
                     * 
                     */
                    void SetAssumerName(const std::string& _assumerName);

                    /**
                     * 判断参数 AssumerName 是否已赋值
                     * @return AssumerName 是否已赋值
                     * 
                     */
                    bool AssumerNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取主题是否开启采集，true：开启采集；false：关闭采集。
创建日志主题时默认开启，可通过SDK调用ModifyTopic修改此字段。
控制台目前不支持修改此参数。
                     * @return Status 主题是否开启采集，true：开启采集；false：关闭采集。
创建日志主题时默认开启，可通过SDK调用ModifyTopic修改此字段。
控制台目前不支持修改此参数。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置主题是否开启采集，true：开启采集；false：关闭采集。
创建日志主题时默认开启，可通过SDK调用ModifyTopic修改此字段。
控制台目前不支持修改此参数。
                     * @param _status 主题是否开启采集，true：开启采集；false：关闭采集。
创建日志主题时默认开启，可通过SDK调用ModifyTopic修改此字段。
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
                     * 获取主题绑定的标签信息
                     * @return Tags 主题绑定的标签信息
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置主题绑定的标签信息
                     * @param _tags 主题绑定的标签信息
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
                     * 获取该主题是否开启自动分裂
                     * @return AutoSplit 该主题是否开启自动分裂
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置该主题是否开启自动分裂
                     * @param _autoSplit 该主题是否开启自动分裂
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
                     * 获取若开启自动分裂的话，该主题能够允许的最大分区数
                     * @return MaxSplitPartitions 若开启自动分裂的话，该主题能够允许的最大分区数
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置若开启自动分裂的话，该主题能够允许的最大分区数
                     * @param _maxSplitPartitions 若开启自动分裂的话，该主题能够允许的最大分区数
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
                     * 获取主题的存储类型

- hot: 标准存储
- cold: 低频存储
                     * @return StorageType 主题的存储类型

- hot: 标准存储
- cold: 低频存储
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置主题的存储类型

- hot: 标准存储
- cold: 低频存储
                     * @param _storageType 主题的存储类型

- hot: 标准存储
- cold: 低频存储
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
                     * 获取生命周期，单位天，可取值范围1~3600。取值为3640时代表永久保存
                     * @return Period 生命周期，单位天，可取值范围1~3600。取值为3640时代表永久保存
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置生命周期，单位天，可取值范围1~3600。取值为3640时代表永久保存
                     * @param _period 生命周期，单位天，可取值范围1~3600。取值为3640时代表永久保存
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
                     * 获取云产品二级标识，日志主题由其它云产品创建时，该字段会显示云产品名称及其日志类型的二级分类，例如TKE-Audit、TKE-Event。部分云产品仅有云产品标识(AssumerName)，无该字段。
                     * @return SubAssumerName 云产品二级标识，日志主题由其它云产品创建时，该字段会显示云产品名称及其日志类型的二级分类，例如TKE-Audit、TKE-Event。部分云产品仅有云产品标识(AssumerName)，无该字段。
                     * 
                     */
                    std::string GetSubAssumerName() const;

                    /**
                     * 设置云产品二级标识，日志主题由其它云产品创建时，该字段会显示云产品名称及其日志类型的二级分类，例如TKE-Audit、TKE-Event。部分云产品仅有云产品标识(AssumerName)，无该字段。
                     * @param _subAssumerName 云产品二级标识，日志主题由其它云产品创建时，该字段会显示云产品名称及其日志类型的二级分类，例如TKE-Audit、TKE-Event。部分云产品仅有云产品标识(AssumerName)，无该字段。
                     * 
                     */
                    void SetSubAssumerName(const std::string& _subAssumerName);

                    /**
                     * 判断参数 SubAssumerName 是否已赋值
                     * @return SubAssumerName 是否已赋值
                     * 
                     */
                    bool SubAssumerNameHasBeenSet() const;

                    /**
                     * 获取主题描述
                     * @return Describes 主题描述
                     * 
                     */
                    std::string GetDescribes() const;

                    /**
                     * 设置主题描述
                     * @param _describes 主题描述
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
                     * 获取开启日志沉降，标准存储的生命周期， hotPeriod < Period。
标准存储为 hotPeriod, 低频存储则为 Period-hotPeriod。（主题类型需为日志主题）
HotPeriod=0为没有开启日志沉降。
                     * @return HotPeriod 开启日志沉降，标准存储的生命周期， hotPeriod < Period。
标准存储为 hotPeriod, 低频存储则为 Period-hotPeriod。（主题类型需为日志主题）
HotPeriod=0为没有开启日志沉降。
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置开启日志沉降，标准存储的生命周期， hotPeriod < Period。
标准存储为 hotPeriod, 低频存储则为 Period-hotPeriod。（主题类型需为日志主题）
HotPeriod=0为没有开启日志沉降。
                     * @param _hotPeriod 开启日志沉降，标准存储的生命周期， hotPeriod < Period。
标准存储为 hotPeriod, 低频存储则为 Period-hotPeriod。（主题类型需为日志主题）
HotPeriod=0为没有开启日志沉降。
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
                     * 获取主题类型。
- 0: 日志主题 
- 1: 指标主题
                     * @return BizType 主题类型。
- 0: 日志主题 
- 1: 指标主题
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置主题类型。
- 0: 日志主题 
- 1: 指标主题
                     * @param _bizType 主题类型。
- 0: 日志主题 
- 1: 指标主题
                     * 
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

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
                     * 获取异步迁移任务ID
                     * @return TopicAsyncTaskID 异步迁移任务ID
                     * 
                     */
                    std::string GetTopicAsyncTaskID() const;

                    /**
                     * 设置异步迁移任务ID
                     * @param _topicAsyncTaskID 异步迁移任务ID
                     * 
                     */
                    void SetTopicAsyncTaskID(const std::string& _topicAsyncTaskID);

                    /**
                     * 判断参数 TopicAsyncTaskID 是否已赋值
                     * @return TopicAsyncTaskID 是否已赋值
                     * 
                     */
                    bool TopicAsyncTaskIDHasBeenSet() const;

                    /**
                     * 获取异步迁移状态
                     * @return MigrationStatus 异步迁移状态
                     * 
                     */
                    uint64_t GetMigrationStatus() const;

                    /**
                     * 设置异步迁移状态
                     * @param _migrationStatus 异步迁移状态
                     * 
                     */
                    void SetMigrationStatus(const uint64_t& _migrationStatus);

                    /**
                     * 判断参数 MigrationStatus 是否已赋值
                     * @return MigrationStatus 是否已赋值
                     * 
                     */
                    bool MigrationStatusHasBeenSet() const;

                    /**
                     * 获取异步迁移完成后，预计生效日期
                     * @return EffectiveDate 异步迁移完成后，预计生效日期
                     * 
                     */
                    std::string GetEffectiveDate() const;

                    /**
                     * 设置异步迁移完成后，预计生效日期
                     * @param _effectiveDate 异步迁移完成后，预计生效日期
                     * 
                     */
                    void SetEffectiveDate(const std::string& _effectiveDate);

                    /**
                     * 判断参数 EffectiveDate 是否已赋值
                     * @return EffectiveDate 是否已赋值
                     * 
                     */
                    bool EffectiveDateHasBeenSet() const;

                private:

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 主题分区个数
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * 主题是否开启索引（主题类型需为日志主题）
                     */
                    bool m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 云产品标识，主题由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 主题是否开启采集，true：开启采集；false：关闭采集。
创建日志主题时默认开启，可通过SDK调用ModifyTopic修改此字段。
控制台目前不支持修改此参数。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 主题绑定的标签信息
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 该主题是否开启自动分裂
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * 若开启自动分裂的话，该主题能够允许的最大分区数
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * 主题的存储类型

- hot: 标准存储
- cold: 低频存储
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 生命周期，单位天，可取值范围1~3600。取值为3640时代表永久保存
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 云产品二级标识，日志主题由其它云产品创建时，该字段会显示云产品名称及其日志类型的二级分类，例如TKE-Audit、TKE-Event。部分云产品仅有云产品标识(AssumerName)，无该字段。
                     */
                    std::string m_subAssumerName;
                    bool m_subAssumerNameHasBeenSet;

                    /**
                     * 主题描述
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * 开启日志沉降，标准存储的生命周期， hotPeriod < Period。
标准存储为 hotPeriod, 低频存储则为 Period-hotPeriod。（主题类型需为日志主题）
HotPeriod=0为没有开启日志沉降。
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                    /**
                     * 主题类型。
- 0: 日志主题 
- 1: 指标主题
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

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
                     * 异步迁移任务ID
                     */
                    std::string m_topicAsyncTaskID;
                    bool m_topicAsyncTaskIDHasBeenSet;

                    /**
                     * 异步迁移状态
                     */
                    uint64_t m_migrationStatus;
                    bool m_migrationStatusHasBeenSet;

                    /**
                     * 异步迁移完成后，预计生效日期
                     */
                    std::string m_effectiveDate;
                    bool m_effectiveDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_
