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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCOSRECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCOSRECHARGEREQUEST_H_

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
                * ModifyCosRecharge请求参数结构体
                */
                class ModifyCosRechargeRequest : public AbstractModel
                {
                public:
                    ModifyCosRechargeRequest();
                    ~ModifyCosRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取COS导入配置Id
                     * @return Id COS导入配置Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置COS导入配置Id
                     * @param _id COS导入配置Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取日志主题Id
                     * @return TopicId 日志主题Id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题Id
                     * @param _topicId 日志主题Id
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
                     * 获取COS导入任务名称
                     * @return Name COS导入任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置COS导入任务名称
                     * @param _name COS导入任务名称
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
                     * 获取任务状态   0： 停用 ， 1：启用
                     * @return Enable 任务状态   0： 停用 ， 1：启用
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置任务状态   0： 停用 ， 1：启用
                     * @param _enable 任务状态   0： 停用 ， 1：启用
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
                     * 获取COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	
                     * @return Bucket COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	
                     * @param _bucket COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	
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
                     * 获取COS存储桶所在地域，详见产品支持的[地域列表](https://cloud.tencent.com/document/product/436/6224)。
                     * @return BucketRegion COS存储桶所在地域，详见产品支持的[地域列表](https://cloud.tencent.com/document/product/436/6224)。
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置COS存储桶所在地域，详见产品支持的[地域列表](https://cloud.tencent.com/document/product/436/6224)。
                     * @param _bucketRegion COS存储桶所在地域，详见产品支持的[地域列表](https://cloud.tencent.com/document/product/436/6224)。
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
                     * 获取COS文件所在文件夹的前缀。为空串时投递存储桶下所有的文件。
                     * @return Prefix COS文件所在文件夹的前缀。为空串时投递存储桶下所有的文件。
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置COS文件所在文件夹的前缀。为空串时投递存储桶下所有的文件。
                     * @param _prefix COS文件所在文件夹的前缀。为空串时投递存储桶下所有的文件。
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
                     * 获取采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文； 默认为minimalist_log
                     * @return LogType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文； 默认为minimalist_log
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文； 默认为minimalist_log
                     * @param _logType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文； 默认为minimalist_log
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
                     * 获取解析格式。supported: "", "gzip", "lzop", "snappy"; 默认空
                     * @return Compress 解析格式。supported: "", "gzip", "lzop", "snappy"; 默认空
                     * 
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置解析格式。supported: "", "gzip", "lzop", "snappy"; 默认空
                     * @param _compress 解析格式。supported: "", "gzip", "lzop", "snappy"; 默认空
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

                    /**
                     * 获取COS导入任务类型。1：一次性导入任务；2：持续性导入任务。
                     * @return TaskType COS导入任务类型。1：一次性导入任务；2：持续性导入任务。
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置COS导入任务类型。1：一次性导入任务；2：持续性导入任务。
                     * @param _taskType COS导入任务类型。1：一次性导入任务；2：持续性导入任务。
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
                     * 获取元数据。支持 bucket，object。
                     * @return Metadata 元数据。支持 bucket，object。
                     * 
                     */
                    std::vector<std::string> GetMetadata() const;

                    /**
                     * 设置元数据。支持 bucket，object。
                     * @param _metadata 元数据。支持 bucket，object。
                     * 
                     */
                    void SetMetadata(const std::vector<std::string>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * COS导入配置Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 日志主题Id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * COS导入任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务状态   0： 停用 ， 1：启用
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS存储桶所在地域，详见产品支持的[地域列表](https://cloud.tencent.com/document/product/436/6224)。
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * COS文件所在文件夹的前缀。为空串时投递存储桶下所有的文件。
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表单行全文； 默认为minimalist_log
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 解析格式。supported: "", "gzip", "lzop", "snappy"; 默认空
                     */
                    std::string m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 提取规则，如果设置了ExtractRule，则必须设置LogType
                     */
                    ExtractRuleInfo m_extractRuleInfo;
                    bool m_extractRuleInfoHasBeenSet;

                    /**
                     * COS导入任务类型。1：一次性导入任务；2：持续性导入任务。
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 元数据。支持 bucket，object。
                     */
                    std::vector<std::string> m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCOSRECHARGEREQUEST_H_
