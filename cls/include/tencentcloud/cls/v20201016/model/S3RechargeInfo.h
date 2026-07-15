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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_S3RECHARGEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_S3RECHARGEINFO_H_

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
                * aws 导入信息
                */
                class S3RechargeInfo : public AbstractModel
                {
                public:
                    S3RechargeInfo();
                    ~S3RechargeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>导入任务Id</p>
                     * @return TaskId <p>导入任务Id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>导入任务Id</p>
                     * @param _taskId <p>导入任务Id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>日志主题Id。- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * @return TopicId <p>日志主题Id。- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题Id。- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * @param _topicId <p>日志主题Id。- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
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
                     * 获取<p>日志集Id。通过 <a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</p>
                     * @return LogsetId <p>日志集Id。通过 <a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集Id。通过 <a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</p>
                     * @param _logsetId <p>日志集Id。通过 <a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</p>
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
                     * 获取<p>任务名称</p>
                     * @return Name <p>任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _name <p>任务名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>s3存储桶</p>
                     * @return Bucket <p>s3存储桶</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>s3存储桶</p>
                     * @param _bucket <p>s3存储桶</p>
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
                     * 获取<p>地域</p>
                     * @return S3Region <p>地域</p>
                     * 
                     */
                    std::string GetS3Region() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _s3Region <p>地域</p>
                     * 
                     */
                    void SetS3Region(const std::string& _s3Region);

                    /**
                     * 判断参数 S3Region 是否已赋值
                     * @return S3Region 是否已赋值
                     * 
                     */
                    bool S3RegionHasBeenSet() const;

                    /**
                     * 获取<p>访问密钥 ID（Access Key ID）</p>
                     * @return AccessKeyId <p>访问密钥 ID（Access Key ID）</p>
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置<p>访问密钥 ID（Access Key ID）</p>
                     * @param _accessKeyId <p>访问密钥 ID（Access Key ID）</p>
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义端点</p>
                     * @return Endpoint <p>自定义端点</p>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>自定义端点</p>
                     * @param _endpoint <p>自定义端点</p>
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取<p>采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；默认为minimalist_log</p>
                     * @return LogType <p>采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；默认为minimalist_log</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；默认为minimalist_log</p>
                     * @param _logType <p>采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；默认为minimalist_log</p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>s3文件所在文件夹的前缀。默认为空，投递存储桶下所有的文件。</p>
                     * @return Prefix <p>s3文件所在文件夹的前缀。默认为空，投递存储桶下所有的文件。</p>
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置<p>s3文件所在文件夹的前缀。默认为空，投递存储桶下所有的文件。</p>
                     * @param _prefix <p>s3文件所在文件夹的前缀。默认为空，投递存储桶下所有的文件。</p>
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
                     * 获取<p>压缩模式。支持: &quot;&quot;, &quot;gzip&quot;, &quot;lzop&quot;, &quot;snappy&quot;。</p><p>默认值：不压缩</p>
                     * @return Compress <p>压缩模式。支持: &quot;&quot;, &quot;gzip&quot;, &quot;lzop&quot;, &quot;snappy&quot;。</p><p>默认值：不压缩</p>
                     * 
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置<p>压缩模式。支持: &quot;&quot;, &quot;gzip&quot;, &quot;lzop&quot;, &quot;snappy&quot;。</p><p>默认值：不压缩</p>
                     * @param _compress <p>压缩模式。支持: &quot;&quot;, &quot;gzip&quot;, &quot;lzop&quot;, &quot;snappy&quot;。</p><p>默认值：不压缩</p>
                     * 
                     */
                    void SetCompress(const std::string& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取<p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * @return ExtractRule <p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * 
                     */
                    ExtractRuleInfo GetExtractRule() const;

                    /**
                     * 设置<p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * @param _extractRule <p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * 
                     */
                    void SetExtractRule(const ExtractRuleInfo& _extractRule);

                    /**
                     * 判断参数 ExtractRule 是否已赋值
                     * @return ExtractRule 是否已赋值
                     * 
                     */
                    bool ExtractRuleHasBeenSet() const;

                    /**
                     * 获取<p>s3导入任务类型.</p><p>枚举值：</p><ul><li>1： 一次性导入任务</li><li>2： 持续性导入任务</li></ul>
                     * @return TaskType <p>s3导入任务类型.</p><p>枚举值：</p><ul><li>1： 一次性导入任务</li><li>2： 持续性导入任务</li></ul>
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置<p>s3导入任务类型.</p><p>枚举值：</p><ul><li>1： 一次性导入任务</li><li>2： 持续性导入任务</li></ul>
                     * @param _taskType <p>s3导入任务类型.</p><p>枚举值：</p><ul><li>1： 一次性导入任务</li><li>2： 持续性导入任务</li></ul>
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>元数据。</p><p>枚举值：</p><ul><li>bucket： 桶</li><li>object： 对象</li></ul><p>选中元数据将以 <strong>TAG</strong>.{元数据}:xxx 的形式与日志一起导入。如：<strong>TAG</strong>.object: csv/object.gz</p>
                     * @return Metadata <p>元数据。</p><p>枚举值：</p><ul><li>bucket： 桶</li><li>object： 对象</li></ul><p>选中元数据将以 <strong>TAG</strong>.{元数据}:xxx 的形式与日志一起导入。如：<strong>TAG</strong>.object: csv/object.gz</p>
                     * 
                     */
                    std::vector<std::string> GetMetadata() const;

                    /**
                     * 设置<p>元数据。</p><p>枚举值：</p><ul><li>bucket： 桶</li><li>object： 对象</li></ul><p>选中元数据将以 <strong>TAG</strong>.{元数据}:xxx 的形式与日志一起导入。如：<strong>TAG</strong>.object: csv/object.gz</p>
                     * @param _metadata <p>元数据。</p><p>枚举值：</p><ul><li>bucket： 桶</li><li>object： 对象</li></ul><p>选中元数据将以 <strong>TAG</strong>.{元数据}:xxx 的形式与日志一起导入。如：<strong>TAG</strong>.object: csv/object.gz</p>
                     * 
                     */
                    void SetMetadata(const std::vector<std::string>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>0： 已创建</li><li>1： 运行中</li><li>2： 已停止</li><li>3： 已完成</li><li>4： 运行失败</li></ul>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>0： 已创建</li><li>1： 运行中</li><li>2： 已停止</li><li>3： 已完成</li><li>4： 运行失败</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态</p><p>枚举值：</p><ul><li>0： 已创建</li><li>1： 运行中</li><li>2： 已停止</li><li>3： 已完成</li><li>4： 运行失败</li></ul>
                     * @param _status <p>任务状态</p><p>枚举值：</p><ul><li>0： 已创建</li><li>1： 运行中</li><li>2： 已停止</li><li>3： 已完成</li><li>4： 运行失败</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否启用</p><p>枚举值：</p><ul><li>0： 暂停</li><li>1： 启用</li></ul>
                     * @return Enable <p>是否启用</p><p>枚举值：</p><ul><li>0： 暂停</li><li>1： 启用</li></ul>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>是否启用</p><p>枚举值：</p><ul><li>0： 暂停</li><li>1： 启用</li></ul>
                     * @param _enable <p>是否启用</p><p>枚举值：</p><ul><li>0： 暂停</li><li>1： 启用</li></ul>
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>进度条百分值</p>
                     * @return Progress <p>进度条百分值</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>进度条百分值</p>
                     * @param _progress <p>进度条百分值</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * @return CreateTime <p>创建时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * @param _createTime <p>创建时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * @return UpdateTime <p>更新时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * @param _updateTime <p>更新时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>导入任务Id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>日志主题Id。- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>日志集Id。通过 <a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>s3存储桶</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_s3Region;
                    bool m_s3RegionHasBeenSet;

                    /**
                     * <p>访问密钥 ID（Access Key ID）</p>
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * <p>自定义端点</p>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；默认为minimalist_log</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>s3文件所在文件夹的前缀。默认为空，投递存储桶下所有的文件。</p>
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * <p>压缩模式。支持: &quot;&quot;, &quot;gzip&quot;, &quot;lzop&quot;, &quot;snappy&quot;。</p><p>默认值：不压缩</p>
                     */
                    std::string m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * <p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     */
                    ExtractRuleInfo m_extractRule;
                    bool m_extractRuleHasBeenSet;

                    /**
                     * <p>s3导入任务类型.</p><p>枚举值：</p><ul><li>1： 一次性导入任务</li><li>2： 持续性导入任务</li></ul>
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>元数据。</p><p>枚举值：</p><ul><li>bucket： 桶</li><li>object： 对象</li></ul><p>选中元数据将以 <strong>TAG</strong>.{元数据}:xxx 的形式与日志一起导入。如：<strong>TAG</strong>.object: csv/object.gz</p>
                     */
                    std::vector<std::string> m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>0： 已创建</li><li>1： 运行中</li><li>2： 已停止</li><li>3： 已完成</li><li>4： 运行失败</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否启用</p><p>枚举值：</p><ul><li>0： 暂停</li><li>1： 启用</li></ul>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>进度条百分值</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>创建时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>单位：秒</p><p>秒级时间戳</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_S3RECHARGEINFO_H_
