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
                     * 获取<p>投递规则ID</p>
                     * @return ShipperId <p>投递规则ID</p>
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置<p>投递规则ID</p>
                     * @param _shipperId <p>投递规则ID</p>
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
                     * 获取<p>日志主题ID</p>
                     * @return TopicId <p>日志主题ID</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题ID</p>
                     * @param _topicId <p>日志主题ID</p>
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
                     * 获取<p>投递的bucket地址</p>
                     * @return Bucket <p>投递的bucket地址</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>投递的bucket地址</p>
                     * @param _bucket <p>投递的bucket地址</p>
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
                     * 获取<p>投递的前缀目录</p>
                     * @return Prefix <p>投递的前缀目录</p>
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置<p>投递的前缀目录</p>
                     * @param _prefix <p>投递的前缀目录</p>
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
                     * 获取<p>投递规则的名字</p>
                     * @return ShipperName <p>投递规则的名字</p>
                     * 
                     */
                    std::string GetShipperName() const;

                    /**
                     * 设置<p>投递规则的名字</p>
                     * @param _shipperName <p>投递规则的名字</p>
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
                     * 获取<p>投递的时间间隔，单位 秒</p>
                     * @return Interval <p>投递的时间间隔，单位 秒</p>
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置<p>投递的时间间隔，单位 秒</p>
                     * @param _interval <p>投递的时间间隔，单位 秒</p>
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
                     * 获取<p>投递的文件的最大值，单位 MB</p>
                     * @return MaxSize <p>投递的文件的最大值，单位 MB</p>
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置<p>投递的文件的最大值，单位 MB</p>
                     * @param _maxSize <p>投递的文件的最大值，单位 MB</p>
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
                     * 获取<p>是否生效</p>
                     * @return Status <p>是否生效</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>是否生效</p>
                     * @param _status <p>是否生效</p>
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
                     * 获取<p>投递日志的过滤规则</p>
                     * @return FilterRules <p>投递日志的过滤规则</p>
                     * 
                     */
                    std::vector<FilterRuleInfo> GetFilterRules() const;

                    /**
                     * 设置<p>投递日志的过滤规则</p>
                     * @param _filterRules <p>投递日志的过滤规则</p>
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
                     * 获取<p>投递日志的分区规则，支持strftime的时间格式表示</p>
                     * @return Partition <p>投递日志的分区规则，支持strftime的时间格式表示</p>
                     * 
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置<p>投递日志的分区规则，支持strftime的时间格式表示</p>
                     * @param _partition <p>投递日志的分区规则，支持strftime的时间格式表示</p>
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
                     * 获取<p>投递日志的压缩配置</p>
                     * @return Compress <p>投递日志的压缩配置</p>
                     * 
                     */
                    CompressInfo GetCompress() const;

                    /**
                     * 设置<p>投递日志的压缩配置</p>
                     * @param _compress <p>投递日志的压缩配置</p>
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
                     * 获取<p>投递日志的内容格式配置</p>
                     * @return Content <p>投递日志的内容格式配置</p>
                     * 
                     */
                    ContentInfo GetContent() const;

                    /**
                     * 设置<p>投递日志的内容格式配置</p>
                     * @param _content <p>投递日志的内容格式配置</p>
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
                     * 获取<p>投递日志的创建时间。格式：YYYY-MM-DD HH:MM:SS</p>
                     * @return CreateTime <p>投递日志的创建时间。格式：YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>投递日志的创建时间。格式：YYYY-MM-DD HH:MM:SS</p>
                     * @param _createTime <p>投递日志的创建时间。格式：YYYY-MM-DD HH:MM:SS</p>
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
                     * 获取<p>投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）</p>
                     * @return FilenameMode <p>投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）</p>
                     * 
                     */
                    uint64_t GetFilenameMode() const;

                    /**
                     * 设置<p>投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）</p>
                     * @param _filenameMode <p>投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）</p>
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
                     * 获取<p>投递数据范围的开始时间点</p>
                     * @return StartTime <p>投递数据范围的开始时间点</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>投递数据范围的开始时间点</p>
                     * @param _startTime <p>投递数据范围的开始时间点</p>
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
                     * 获取<p>投递数据范围的结束时间点</p>
                     * @return EndTime <p>投递数据范围的结束时间点</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>投递数据范围的结束时间点</p>
                     * @param _endTime <p>投递数据范围的结束时间点</p>
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
                     * 获取<p>历史数据投递的进度（仅当用户选择的数据内中历史数据时才有效）</p>
                     * @return Progress <p>历史数据投递的进度（仅当用户选择的数据内中历史数据时才有效）</p>
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置<p>历史数据投递的进度（仅当用户选择的数据内中历史数据时才有效）</p>
                     * @param _progress <p>历史数据投递的进度（仅当用户选择的数据内中历史数据时才有效）</p>
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
                     * 获取<p>历史数据全部投递完成剩余的时间（仅当用户选择的数据中有历史数据时才有效）</p><p>单位：秒</p>
                     * @return RemainTime <p>历史数据全部投递完成剩余的时间（仅当用户选择的数据中有历史数据时才有效）</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetRemainTime() const;

                    /**
                     * 设置<p>历史数据全部投递完成剩余的时间（仅当用户选择的数据中有历史数据时才有效）</p><p>单位：秒</p>
                     * @param _remainTime <p>历史数据全部投递完成剩余的时间（仅当用户选择的数据中有历史数据时才有效）</p><p>单位：秒</p>
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
                     * 获取<p>历史任务状态：<br>0：实时任务<br>1：任务准备中<br>2：任务运行中<br>3：任务运行异常<br>4：任务运行结束</p>
                     * @return HistoryStatus <p>历史任务状态：<br>0：实时任务<br>1：任务准备中<br>2：任务运行中<br>3：任务运行异常<br>4：任务运行结束</p>
                     * 
                     */
                    int64_t GetHistoryStatus() const;

                    /**
                     * 设置<p>历史任务状态：<br>0：实时任务<br>1：任务准备中<br>2：任务运行中<br>3：任务运行异常<br>4：任务运行结束</p>
                     * @param _historyStatus <p>历史任务状态：<br>0：实时任务<br>1：任务准备中<br>2：任务运行中<br>3：任务运行异常<br>4：任务运行结束</p>
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
                     * 获取<p>对象存储类型，默认值为 STANDARD。枚举值请参见<a href="https://cloud.tencent.com/document/product/436/33417"> 存储类型概述</a> 文档。<br>参考值有：<br>STANDARD：标准存储<br>STANDARD_IA：低频存储<br>ARCHIVE：归档存储<br>DEEP_ARCHIVE：深度归档存储<br>MAZ_STANDARD：标准存储（多 AZ）<br>MAZ_STANDARD_IA：低频存储（多 AZ）<br>INTELLIGENT_TIERING：智能分层存储<br>MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）</p>
                     * @return StorageType <p>对象存储类型，默认值为 STANDARD。枚举值请参见<a href="https://cloud.tencent.com/document/product/436/33417"> 存储类型概述</a> 文档。<br>参考值有：<br>STANDARD：标准存储<br>STANDARD_IA：低频存储<br>ARCHIVE：归档存储<br>DEEP_ARCHIVE：深度归档存储<br>MAZ_STANDARD：标准存储（多 AZ）<br>MAZ_STANDARD_IA：低频存储（多 AZ）<br>INTELLIGENT_TIERING：智能分层存储<br>MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>对象存储类型，默认值为 STANDARD。枚举值请参见<a href="https://cloud.tencent.com/document/product/436/33417"> 存储类型概述</a> 文档。<br>参考值有：<br>STANDARD：标准存储<br>STANDARD_IA：低频存储<br>ARCHIVE：归档存储<br>DEEP_ARCHIVE：深度归档存储<br>MAZ_STANDARD：标准存储（多 AZ）<br>MAZ_STANDARD_IA：低频存储（多 AZ）<br>INTELLIGENT_TIERING：智能分层存储<br>MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）</p>
                     * @param _storageType <p>对象存储类型，默认值为 STANDARD。枚举值请参见<a href="https://cloud.tencent.com/document/product/436/33417"> 存储类型概述</a> 文档。<br>参考值有：<br>STANDARD：标准存储<br>STANDARD_IA：低频存储<br>ARCHIVE：归档存储<br>DEEP_ARCHIVE：深度归档存储<br>MAZ_STANDARD：标准存储（多 AZ）<br>MAZ_STANDARD_IA：低频存储（多 AZ）<br>INTELLIGENT_TIERING：智能分层存储<br>MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）</p>
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
                     * 获取<p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * @return RoleArn <p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置<p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * @param _roleArn <p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取<p>外部ID</p>
                     * @return ExternalId <p>外部ID</p>
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置<p>外部ID</p>
                     * @param _externalId <p>外部ID</p>
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                    /**
                     * 获取<p>任务运行状态。支持<code>0</code>,<code>1</code>,<code>2</code></p><ul><li><code>0</code>: 停止</li><li><code>1</code>: 运行中</li><li><code>2</code>: 异常</li></ul>
                     * @return TaskStatus <p>任务运行状态。支持<code>0</code>,<code>1</code>,<code>2</code></p><ul><li><code>0</code>: 停止</li><li><code>1</code>: 运行中</li><li><code>2</code>: 异常</li></ul>
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置<p>任务运行状态。支持<code>0</code>,<code>1</code>,<code>2</code></p><ul><li><code>0</code>: 停止</li><li><code>1</code>: 运行中</li><li><code>2</code>: 异常</li></ul>
                     * @param _taskStatus <p>任务运行状态。支持<code>0</code>,<code>1</code>,<code>2</code></p><ul><li><code>0</code>: 停止</li><li><code>1</code>: 运行中</li><li><code>2</code>: 异常</li></ul>
                     * 
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * <p>投递规则ID</p>
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * <p>日志主题ID</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>投递的bucket地址</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>投递的前缀目录</p>
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * <p>投递规则的名字</p>
                     */
                    std::string m_shipperName;
                    bool m_shipperNameHasBeenSet;

                    /**
                     * <p>投递的时间间隔，单位 秒</p>
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>投递的文件的最大值，单位 MB</p>
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <p>是否生效</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>投递日志的过滤规则</p>
                     */
                    std::vector<FilterRuleInfo> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                    /**
                     * <p>投递日志的分区规则，支持strftime的时间格式表示</p>
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * <p>投递日志的压缩配置</p>
                     */
                    CompressInfo m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * <p>投递日志的内容格式配置</p>
                     */
                    ContentInfo m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>投递日志的创建时间。格式：YYYY-MM-DD HH:MM:SS</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）</p>
                     */
                    uint64_t m_filenameMode;
                    bool m_filenameModeHasBeenSet;

                    /**
                     * <p>投递数据范围的开始时间点</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>投递数据范围的结束时间点</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>历史数据投递的进度（仅当用户选择的数据内中历史数据时才有效）</p>
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>历史数据全部投递完成剩余的时间（仅当用户选择的数据中有历史数据时才有效）</p><p>单位：秒</p>
                     */
                    int64_t m_remainTime;
                    bool m_remainTimeHasBeenSet;

                    /**
                     * <p>历史任务状态：<br>0：实时任务<br>1：任务准备中<br>2：任务运行中<br>3：任务运行异常<br>4：任务运行结束</p>
                     */
                    int64_t m_historyStatus;
                    bool m_historyStatusHasBeenSet;

                    /**
                     * <p>对象存储类型，默认值为 STANDARD。枚举值请参见<a href="https://cloud.tencent.com/document/product/436/33417"> 存储类型概述</a> 文档。<br>参考值有：<br>STANDARD：标准存储<br>STANDARD_IA：低频存储<br>ARCHIVE：归档存储<br>DEEP_ARCHIVE：深度归档存储<br>MAZ_STANDARD：标准存储（多 AZ）<br>MAZ_STANDARD_IA：低频存储（多 AZ）<br>INTELLIGENT_TIERING：智能分层存储<br>MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>外部ID</p>
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * <p>任务运行状态。支持<code>0</code>,<code>1</code>,<code>2</code></p><ul><li><code>0</code>: 停止</li><li><code>1</code>: 运行中</li><li><code>2</code>: 异常</li></ul>
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_
