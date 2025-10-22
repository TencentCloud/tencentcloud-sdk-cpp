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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFOREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SearchCosRechargeInfo请求参数结构体
                */
                class SearchCosRechargeInfoRequest : public AbstractModel
                {
                public:
                    SearchCosRechargeInfoRequest();
                    ~SearchCosRechargeInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题Id。
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @return TopicId 日志主题Id。
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题Id。
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @param _topicId 日志主题Id。
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
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
                     * 获取日志集Id。

- 通过[获取日志集列表](https://cloud.tencent.com/document/product/614/58624)获取日志集Id。
                     * @return LogsetId 日志集Id。

- 通过[获取日志集列表](https://cloud.tencent.com/document/product/614/58624)获取日志集Id。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集Id。

- 通过[获取日志集列表](https://cloud.tencent.com/document/product/614/58624)获取日志集Id。
                     * @param _logsetId 日志集Id。

- 通过[获取日志集列表](https://cloud.tencent.com/document/product/614/58624)获取日志集Id。
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
                     * 获取COS导入任务名称,最大支持128个字节。
                     * @return Name COS导入任务名称,最大支持128个字节。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置COS导入任务名称,最大支持128个字节。
                     * @param _name COS导入任务名称,最大支持128个字节。
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
                     * 获取COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	

- 通过[GET Service（List Buckets）](https://cloud.tencent.com/document/product/436/8291)获取COS存储桶。
                     * @return Bucket COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	

- 通过[GET Service（List Buckets）](https://cloud.tencent.com/document/product/436/8291)获取COS存储桶。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	

- 通过[GET Service（List Buckets）](https://cloud.tencent.com/document/product/436/8291)获取COS存储桶。
                     * @param _bucket COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	

- 通过[GET Service（List Buckets）](https://cloud.tencent.com/document/product/436/8291)获取COS存储桶。
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
                     * 获取COS文件所在文件夹的前缀。默认为空，投递存储桶下所有的文件。
                     * @return Prefix COS文件所在文件夹的前缀。默认为空，投递存储桶下所有的文件。
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置COS文件所在文件夹的前缀。默认为空，投递存储桶下所有的文件。
                     * @param _prefix COS文件所在文件夹的前缀。默认为空，投递存储桶下所有的文件。
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
                     * 获取压缩模式:   "", "gzip", "lzop", "snappy"。  默认："" 不压缩
                     * @return Compress 压缩模式:   "", "gzip", "lzop", "snappy"。  默认："" 不压缩
                     * 
                     */
                    std::string GetCompress() const;

                    /**
                     * 设置压缩模式:   "", "gzip", "lzop", "snappy"。  默认："" 不压缩
                     * @param _compress 压缩模式:   "", "gzip", "lzop", "snappy"。  默认："" 不压缩
                     * 
                     */
                    void SetCompress(const std::string& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                private:

                    /**
                     * 日志主题Id。
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志集Id。

- 通过[获取日志集列表](https://cloud.tencent.com/document/product/614/58624)获取日志集Id。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * COS导入任务名称,最大支持128个字节。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	

- 通过[GET Service（List Buckets）](https://cloud.tencent.com/document/product/436/8291)获取COS存储桶。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS存储桶所在地域，详见产品支持的[地域列表](https://cloud.tencent.com/document/product/436/6224)。
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * COS文件所在文件夹的前缀。默认为空，投递存储桶下所有的文件。
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 压缩模式:   "", "gzip", "lzop", "snappy"。  默认："" 不压缩
                     */
                    std::string m_compress;
                    bool m_compressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHCOSRECHARGEINFOREQUEST_H_
