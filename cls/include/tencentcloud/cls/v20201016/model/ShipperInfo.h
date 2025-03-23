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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/FilterRuleInfo.h>
#include <tencentcloud/cls/v20201016/model/CompressInfo.h>
#include <tencentcloud/cls/v20201016/model/ContentInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 投递规则
                */
                class ShipperInfo : public AbstractModel
                {
                public:
                    ShipperInfo();
                    ~ShipperInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投递规则ID
                     * @return ShipperId 投递规则ID
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置投递规则ID
                     * @param _shipperId 投递规则ID
                     * 
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     * 
                     */
                    bool ShipperIdHasBeenSet() const;

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
                     * 获取投递的bucket地址
                     * @return Bucket 投递的bucket地址
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置投递的bucket地址
                     * @param _bucket 投递的bucket地址
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取投递的前缀目录
                     * @return Prefix 投递的前缀目录
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置投递的前缀目录
                     * @param _prefix 投递的前缀目录
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取投递规则的名字
                     * @return ShipperName 投递规则的名字
                     * 
                     */
                    std::string GetShipperName() const;

                    /**
                     * 设置投递规则的名字
                     * @param _shipperName 投递规则的名字
                     * 
                     */
                    void SetShipperName(const std::string& _shipperName);

                    /**
                     * 判断参数 ShipperName 是否已赋值
                     * @return ShipperName 是否已赋值
                     * 
                     */
                    bool ShipperNameHasBeenSet() const;

                    /**
                     * 获取投递的时间间隔，单位 秒
                     * @return Interval 投递的时间间隔，单位 秒
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置投递的时间间隔，单位 秒
                     * @param _interval 投递的时间间隔，单位 秒
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取投递的文件的最大值，单位 MB
                     * @return MaxSize 投递的文件的最大值，单位 MB
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置投递的文件的最大值，单位 MB
                     * @param _maxSize 投递的文件的最大值，单位 MB
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取是否生效
                     * @return Status 是否生效
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置是否生效
                     * @param _status 是否生效
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
                     * 获取投递日志的过滤规则
                     * @return FilterRules 投递日志的过滤规则
                     * 
                     */
                    std::vector<FilterRuleInfo> GetFilterRules() const;

                    /**
                     * 设置投递日志的过滤规则
                     * @param _filterRules 投递日志的过滤规则
                     * 
                     */
                    void SetFilterRules(const std::vector<FilterRuleInfo>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     * 
                     */
                    bool FilterRulesHasBeenSet() const;

                    /**
                     * 获取投递日志的分区规则，支持strftime的时间格式表示
                     * @return Partition 投递日志的分区规则，支持strftime的时间格式表示
                     * 
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置投递日志的分区规则，支持strftime的时间格式表示
                     * @param _partition 投递日志的分区规则，支持strftime的时间格式表示
                     * 
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取投递日志的压缩配置
                     * @return Compress 投递日志的压缩配置
                     * 
                     */
                    CompressInfo GetCompress() const;

                    /**
                     * 设置投递日志的压缩配置
                     * @param _compress 投递日志的压缩配置
                     * 
                     */
                    void SetCompress(const CompressInfo& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取投递日志的内容格式配置
                     * @return Content 投递日志的内容格式配置
                     * 
                     */
                    ContentInfo GetContent() const;

                    /**
                     * 设置投递日志的内容格式配置
                     * @param _content 投递日志的内容格式配置
                     * 
                     */
                    void SetContent(const ContentInfo& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取投递日志的创建时间
                     * @return CreateTime 投递日志的创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置投递日志的创建时间
                     * @param _createTime 投递日志的创建时间
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
                     * 获取投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）
                     * @return FilenameMode 投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）
                     * 
                     */
                    uint64_t GetFilenameMode() const;

                    /**
                     * 设置投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）
                     * @param _filenameMode 投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）
                     * 
                     */
                    void SetFilenameMode(const uint64_t& _filenameMode);

                    /**
                     * 判断参数 FilenameMode 是否已赋值
                     * @return FilenameMode 是否已赋值
                     * 
                     */
                    bool FilenameModeHasBeenSet() const;

                    /**
                     * 获取投递数据范围的开始时间点
                     * @return StartTime 投递数据范围的开始时间点
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置投递数据范围的开始时间点
                     * @param _startTime 投递数据范围的开始时间点
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取投递数据范围的结束时间点
                     * @return EndTime 投递数据范围的结束时间点
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置投递数据范围的结束时间点
                     * @param _endTime 投递数据范围的结束时间点
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取历史数据投递的进度（仅当用户选择的数据内中历史数据时才有效）
                     * @return Progress 历史数据投递的进度（仅当用户选择的数据内中历史数据时才有效）
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置历史数据投递的进度（仅当用户选择的数据内中历史数据时才有效）
                     * @param _progress 历史数据投递的进度（仅当用户选择的数据内中历史数据时才有效）
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取历史数据全部投递完成剩余的时间（仅当用户选择的数据中有历史数据时才有效）
                     * @return RemainTime 历史数据全部投递完成剩余的时间（仅当用户选择的数据中有历史数据时才有效）
                     * 
                     */
                    int64_t GetRemainTime() const;

                    /**
                     * 设置历史数据全部投递完成剩余的时间（仅当用户选择的数据中有历史数据时才有效）
                     * @param _remainTime 历史数据全部投递完成剩余的时间（仅当用户选择的数据中有历史数据时才有效）
                     * 
                     */
                    void SetRemainTime(const int64_t& _remainTime);

                    /**
                     * 判断参数 RemainTime 是否已赋值
                     * @return RemainTime 是否已赋值
                     * 
                     */
                    bool RemainTimeHasBeenSet() const;

                    /**
                     * 获取历史任务状态：
0：实时任务
1：任务准备中
2：任务运行中
3：任务运行异常
4：任务运行结束
                     * @return HistoryStatus 历史任务状态：
0：实时任务
1：任务准备中
2：任务运行中
3：任务运行异常
4：任务运行结束
                     * 
                     */
                    int64_t GetHistoryStatus() const;

                    /**
                     * 设置历史任务状态：
0：实时任务
1：任务准备中
2：任务运行中
3：任务运行异常
4：任务运行结束
                     * @param _historyStatus 历史任务状态：
0：实时任务
1：任务准备中
2：任务运行中
3：任务运行异常
4：任务运行结束
                     * 
                     */
                    void SetHistoryStatus(const int64_t& _historyStatus);

                    /**
                     * 判断参数 HistoryStatus 是否已赋值
                     * @return HistoryStatus 是否已赋值
                     * 
                     */
                    bool HistoryStatusHasBeenSet() const;

                    /**
                     * 获取cos桶类型
                     * @return StorageType cos桶类型
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置cos桶类型
                     * @param _storageType cos桶类型
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * 投递规则ID
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 投递的bucket地址
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 投递的前缀目录
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 投递规则的名字
                     */
                    std::string m_shipperName;
                    bool m_shipperNameHasBeenSet;

                    /**
                     * 投递的时间间隔，单位 秒
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 投递的文件的最大值，单位 MB
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 是否生效
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 投递日志的过滤规则
                     */
                    std::vector<FilterRuleInfo> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                    /**
                     * 投递日志的分区规则，支持strftime的时间格式表示
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 投递日志的压缩配置
                     */
                    CompressInfo m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 投递日志的内容格式配置
                     */
                    ContentInfo m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 投递日志的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）
                     */
                    uint64_t m_filenameMode;
                    bool m_filenameModeHasBeenSet;

                    /**
                     * 投递数据范围的开始时间点
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 投递数据范围的结束时间点
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 历史数据投递的进度（仅当用户选择的数据内中历史数据时才有效）
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 历史数据全部投递完成剩余的时间（仅当用户选择的数据中有历史数据时才有效）
                     */
                    int64_t m_remainTime;
                    bool m_remainTimeHasBeenSet;

                    /**
                     * 历史任务状态：
0：实时任务
1：任务准备中
2：任务运行中
3：任务运行异常
4：任务运行结束
                     */
                    int64_t m_historyStatus;
                    bool m_historyStatusHasBeenSet;

                    /**
                     * cos桶类型
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_
