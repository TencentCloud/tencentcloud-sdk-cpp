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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECOSRECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECOSRECHARGEREQUEST_H_

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
                * CreateCosRecharge请求参数结构体
                */
                class CreateCosRechargeRequest : public AbstractModel
                {
                public:
                    CreateCosRechargeRequest();
                    ~CreateCosRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题 ID
                     * @return TopicId 日志主题 ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题 ID
                     * @param _topicId 日志主题 ID
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
                     * 获取投递任务名称
                     * @return Name 投递任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置投递任务名称
                     * @param _name 投递任务名称
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
                     * 获取COS存储桶
                     * @return Bucket COS存储桶
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS存储桶
                     * @param _bucket COS存储桶
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
                     * 获取COS存储桶所在地域
                     * @return BucketRegion COS存储桶所在地域
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置COS存储桶所在地域
                     * @param _bucketRegion COS存储桶所在地域
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取COS文件所在文件夹的前缀
                     * @return Prefix COS文件所在文件夹的前缀
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置COS文件所在文件夹的前缀
                     * @param _prefix COS文件所在文件夹的前缀
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
                     * 获取采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；
默认为minimalist_log
                     * @return LogType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；
默认为minimalist_log
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；
默认为minimalist_log
                     * @param _logType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；
默认为minimalist_log
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
                     * 获取supported: "", "gzip", "lzop", "snappy”; 默认空
                     * @return Compress supported: "", "gzip", "lzop", "snappy”; 默认空
                     * 
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置supported: "", "gzip", "lzop", "snappy”; 默认空
                     * @param _compress supported: "", "gzip", "lzop", "snappy”; 默认空
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
                     * 获取提取规则，如果设置了ExtractRule，则必须设置LogType
                     * @return ExtractRuleInfo 提取规则，如果设置了ExtractRule，则必须设置LogType
                     * 
                     */
                    ExtractRuleInfo GetExtractRuleInfo() const;

                    /**
                     * 设置提取规则，如果设置了ExtractRule，则必须设置LogType
                     * @param _extractRuleInfo 提取规则，如果设置了ExtractRule，则必须设置LogType
                     * 
                     */
                    void SetExtractRuleInfo(const ExtractRuleInfo& _extractRuleInfo);

                    /**
                     * 判断参数 ExtractRuleInfo 是否已赋值
                     * @return ExtractRuleInfo 是否已赋值
                     * 
                     */
                    bool ExtractRuleInfoHasBeenSet() const;

                private:

                    /**
                     * 日志主题 ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 投递任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * COS存储桶
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS存储桶所在地域
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * COS文件所在文件夹的前缀
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文；
默认为minimalist_log
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * supported: "", "gzip", "lzop", "snappy”; 默认空
                     */
                    std::string m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 提取规则，如果设置了ExtractRule，则必须设置LogType
                     */
                    ExtractRuleInfo m_extractRuleInfo;
                    bool m_extractRuleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECOSRECHARGEREQUEST_H_
