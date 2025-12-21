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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_COSSTORAGESOURCE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_COSSTORAGESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 沙箱实例对象存储挂载配置
                */
                class CosStorageSource : public AbstractModel
                {
                public:
                    CosStorageSource();
                    ~CosStorageSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象存储访问域名
                     * @return Endpoint 对象存储访问域名
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置对象存储访问域名
                     * @param _endpoint 对象存储访问域名
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
                     * 获取对象存储桶名称
                     * @return BucketName 对象存储桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置对象存储桶名称
                     * @param _bucketName 对象存储桶名称
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取对象存储桶路径，必须为以/起始的绝对路径
                     * @return BucketPath 对象存储桶路径，必须为以/起始的绝对路径
                     * 
                     */
                    std::string GetBucketPath() const;

                    /**
                     * 设置对象存储桶路径，必须为以/起始的绝对路径
                     * @param _bucketPath 对象存储桶路径，必须为以/起始的绝对路径
                     * 
                     */
                    void SetBucketPath(const std::string& _bucketPath);

                    /**
                     * 判断参数 BucketPath 是否已赋值
                     * @return BucketPath 是否已赋值
                     * 
                     */
                    bool BucketPathHasBeenSet() const;

                private:

                    /**
                     * 对象存储访问域名
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 对象存储桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 对象存储桶路径，必须为以/起始的绝对路径
                     */
                    std::string m_bucketPath;
                    bool m_bucketPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_COSSTORAGESOURCE_H_
