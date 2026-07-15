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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATES3RECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATES3RECHARGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateS3Recharge请求参数结构体
                */
                class CreateS3RechargeRequest : public AbstractModel
                {
                public:
                    CreateS3RechargeRequest();
                    ~CreateS3RechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志主题Id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @return TopicId <p>日志主题Id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题Id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @param _topicId <p>日志主题Id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
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
                     * 获取<p>s3导入任务名称,最大支持128个字节。</p><p>同一个TopicId下的s3任务Name必须唯一</p>
                     * @return Name <p>s3导入任务名称,最大支持128个字节。</p><p>同一个TopicId下的s3任务Name必须唯一</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>s3导入任务名称,最大支持128个字节。</p><p>同一个TopicId下的s3任务Name必须唯一</p>
                     * @param _name <p>s3导入任务名称,最大支持128个字节。</p><p>同一个TopicId下的s3任务Name必须唯一</p>
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
                     * 获取<p>访问密钥Key（Secret Access Key）</p>
                     * @return SecretAccessKey <p>访问密钥Key（Secret Access Key）</p>
                     * 
                     */
                    std::string GetSecretAccessKey() const;

                    /**
                     * 设置<p>访问密钥Key（Secret Access Key）</p>
                     * @param _secretAccessKey <p>访问密钥Key（Secret Access Key）</p>
                     * 
                     */
                    void SetSecretAccessKey(const std::string& _secretAccessKey);

                    /**
                     * 判断参数 SecretAccessKey 是否已赋值
                     * @return SecretAccessKey 是否已赋值
                     * 
                     */
                    bool SecretAccessKeyHasBeenSet() const;

                    /**
                     * 获取<p>采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；<br>默认为minimalist_log</p>
                     * @return LogType <p>采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；<br>默认为minimalist_log</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；<br>默认为minimalist_log</p>
                     * @param _logType <p>采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；<br>默认为minimalist_log</p>
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
                     * @return ExtractRuleInfo <p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * 
                     */
                    ExtractRuleInfo GetExtractRuleInfo() const;

                    /**
                     * 设置<p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * @param _extractRuleInfo <p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * 
                     */
                    void SetExtractRuleInfo(const ExtractRuleInfo& _extractRuleInfo);

                    /**
                     * 判断参数 ExtractRuleInfo 是否已赋值
                     * @return ExtractRuleInfo 是否已赋值
                     * 
                     */
                    bool ExtractRuleInfoHasBeenSet() const;

                    /**
                     * 获取<p>s3导入任务类型.</p><p>枚举值：</p><ul><li>1： 一次性导入任务</li><li>2： 持续性导入任务</li></ul><p>默认值：1</p>
                     * @return TaskType <p>s3导入任务类型.</p><p>枚举值：</p><ul><li>1： 一次性导入任务</li><li>2： 持续性导入任务</li></ul><p>默认值：1</p>
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置<p>s3导入任务类型.</p><p>枚举值：</p><ul><li>1： 一次性导入任务</li><li>2： 持续性导入任务</li></ul><p>默认值：1</p>
                     * @param _taskType <p>s3导入任务类型.</p><p>枚举值：</p><ul><li>1： 一次性导入任务</li><li>2： 持续性导入任务</li></ul><p>默认值：1</p>
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题Id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>s3导入任务名称,最大支持128个字节。</p><p>同一个TopicId下的s3任务Name必须唯一</p>
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
                     * <p>访问密钥Key（Secret Access Key）</p>
                     */
                    std::string m_secretAccessKey;
                    bool m_secretAccessKeyHasBeenSet;

                    /**
                     * <p>采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；<br>默认为minimalist_log</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>自定义端点</p>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

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
                    ExtractRuleInfo m_extractRuleInfo;
                    bool m_extractRuleInfoHasBeenSet;

                    /**
                     * <p>s3导入任务类型.</p><p>枚举值：</p><ul><li>1： 一次性导入任务</li><li>2： 持续性导入任务</li></ul><p>默认值：1</p>
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATES3RECHARGEREQUEST_H_
