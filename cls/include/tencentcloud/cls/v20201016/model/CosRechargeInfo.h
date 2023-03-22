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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_COSRECHARGEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_COSRECHARGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ExtractRuleInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * cos导入配置信息
                */
                class CosRechargeInfo : public AbstractModel
                {
                public:
                    CosRechargeInfo();
                    ~CosRechargeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取COS导入配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id COS导入配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetId() const;

                    /**
                     * 设置COS导入配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Id COS导入配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TopicId 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogsetId 日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogsetId 日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取COS导入任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name COS导入任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置COS导入任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name COS导入任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取COS存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket COS存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Bucket COS存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取COS存储桶所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketRegion COS存储桶所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置COS存储桶所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BucketRegion COS存储桶所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取COS文件所在文件夹的前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Prefix COS文件所在文件夹的前缀
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置COS文件所在文件夹的前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Prefix COS文件所在文件夹的前缀
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；
默认为minimalist_log
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；
默认为minimalist_log
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；
默认为minimalist_log
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；
默认为minimalist_log
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取状态   status 0: 已创建, 1: 运行中, 2: 已停止, 3: 已完成, 4: 运行失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态   status 0: 已创建, 1: 运行中, 2: 已停止, 3: 已完成, 4: 运行失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态   status 0: 已创建, 1: 运行中, 2: 已停止, 3: 已完成, 4: 运行失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 状态   status 0: 已创建, 1: 运行中, 2: 已停止, 3: 已完成, 4: 运行失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否启用:   0： 未启用  ， 1：启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 是否启用:   0： 未启用  ， 1：启用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置是否启用:   0： 未启用  ， 1：启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Enable 是否启用:   0： 未启用  ， 1：启用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取进度条百分值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Progress 进度条百分值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置进度条百分值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Progress 进度条百分值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取supported: "", "gzip", "lzop", "snappy”; 默认空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compress supported: "", "gzip", "lzop", "snappy”; 默认空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置supported: "", "gzip", "lzop", "snappy”; 默认空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Compress supported: "", "gzip", "lzop", "snappy”; 默认空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompress(const std::string& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取见： ExtractRuleInfo 结构描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtractRuleInfo 见： ExtractRuleInfo 结构描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractRuleInfo GetExtractRuleInfo() const;

                    /**
                     * 设置见： ExtractRuleInfo 结构描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExtractRuleInfo 见： ExtractRuleInfo 结构描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExtractRuleInfo(const ExtractRuleInfo& _extractRuleInfo);

                    /**
                     * 判断参数 ExtractRuleInfo 是否已赋值
                     * @return ExtractRuleInfo 是否已赋值
                     */
                    bool ExtractRuleInfoHasBeenSet() const;

                private:

                    /**
                     * COS导入配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * COS导入任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * COS存储桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS存储桶所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * COS文件所在文件夹的前缀
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；
默认为minimalist_log
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 状态   status 0: 已创建, 1: 运行中, 2: 已停止, 3: 已完成, 4: 运行失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否启用:   0： 未启用  ， 1：启用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 进度条百分值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * supported: "", "gzip", "lzop", "snappy”; 默认空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 见： ExtractRuleInfo 结构描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractRuleInfo m_extractRuleInfo;
                    bool m_extractRuleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_COSRECHARGEINFO_H_
