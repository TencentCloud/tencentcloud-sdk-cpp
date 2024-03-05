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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_S3_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_S3_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 实时日志投递到 AWS S3 兼容存储桶的配置信息。
                */
                class S3 : public AbstractModel
                {
                public:
                    S3();
                    ~S3() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取不包含存储桶名称或路径的 URL，例如：`https://storage.googleapis.com`、`https://s3.ap-northeast-2.amazonaws.com`、`https://cos.ap-nanjing.myqcloud.com`。
                     * @return Endpoint 不包含存储桶名称或路径的 URL，例如：`https://storage.googleapis.com`、`https://s3.ap-northeast-2.amazonaws.com`、`https://cos.ap-nanjing.myqcloud.com`。
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置不包含存储桶名称或路径的 URL，例如：`https://storage.googleapis.com`、`https://s3.ap-northeast-2.amazonaws.com`、`https://cos.ap-nanjing.myqcloud.com`。
                     * @param _endpoint 不包含存储桶名称或路径的 URL，例如：`https://storage.googleapis.com`、`https://s3.ap-northeast-2.amazonaws.com`、`https://cos.ap-nanjing.myqcloud.com`。
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
                     * 获取存储桶所在的地域，例如：`ap-northeast-2`。
                     * @return Region 存储桶所在的地域，例如：`ap-northeast-2`。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置存储桶所在的地域，例如：`ap-northeast-2`。
                     * @param _region 存储桶所在的地域，例如：`ap-northeast-2`。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取存储桶名称和日志存储目录，例如：`your_bucket_name/EO-logs/`。如果存储桶中无此目录则会自动创建。
                     * @return Bucket 存储桶名称和日志存储目录，例如：`your_bucket_name/EO-logs/`。如果存储桶中无此目录则会自动创建。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置存储桶名称和日志存储目录，例如：`your_bucket_name/EO-logs/`。如果存储桶中无此目录则会自动创建。
                     * @param _bucket 存储桶名称和日志存储目录，例如：`your_bucket_name/EO-logs/`。如果存储桶中无此目录则会自动创建。
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
                     * 获取访问存储桶使用的 Access Key ID。
                     * @return AccessId 访问存储桶使用的 Access Key ID。
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置访问存储桶使用的 Access Key ID。
                     * @param _accessId 访问存储桶使用的 Access Key ID。
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取访问存储桶使用的 secret key。
                     * @return AccessKey 访问存储桶使用的 secret key。
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置访问存储桶使用的 secret key。
                     * @param _accessKey 访问存储桶使用的 secret key。
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取数据压缩类型，取值有: <li> gzip：gzip压缩。</li>不填表示不启用压缩。
                     * @return CompressType 数据压缩类型，取值有: <li> gzip：gzip压缩。</li>不填表示不启用压缩。
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置数据压缩类型，取值有: <li> gzip：gzip压缩。</li>不填表示不启用压缩。
                     * @param _compressType 数据压缩类型，取值有: <li> gzip：gzip压缩。</li>不填表示不启用压缩。
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                private:

                    /**
                     * 不包含存储桶名称或路径的 URL，例如：`https://storage.googleapis.com`、`https://s3.ap-northeast-2.amazonaws.com`、`https://cos.ap-nanjing.myqcloud.com`。
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 存储桶所在的地域，例如：`ap-northeast-2`。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 存储桶名称和日志存储目录，例如：`your_bucket_name/EO-logs/`。如果存储桶中无此目录则会自动创建。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 访问存储桶使用的 Access Key ID。
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 访问存储桶使用的 secret key。
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 数据压缩类型，取值有: <li> gzip：gzip压缩。</li>不填表示不启用压缩。
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_S3_H_
