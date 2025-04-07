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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_S3OPTIONS_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_S3OPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * S3协议参数
                */
                class S3Options : public AbstractModel
                {
                public:
                    S3Options();
                    ~S3Options() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储节点
                     * @return EndPoint 存储节点
                     * 
                     */
                    std::string GetEndPoint() const;

                    /**
                     * 设置存储节点
                     * @param _endPoint 存储节点
                     * 
                     */
                    void SetEndPoint(const std::string& _endPoint);

                    /**
                     * 判断参数 EndPoint 是否已赋值
                     * @return EndPoint 是否已赋值
                     * 
                     */
                    bool EndPointHasBeenSet() const;

                    /**
                     * 获取存储桶
                     * @return Bucket 存储桶
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置存储桶
                     * @param _bucket 存储桶
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
                     * 获取密钥 ID
                     * @return AccessKeyId 密钥 ID
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置密钥 ID
                     * @param _accessKeyId 密钥 ID
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
                     * 获取密钥 Key
                     * @return SecretAccessKey 密钥 Key
                     * 
                     */
                    std::string GetSecretAccessKey() const;

                    /**
                     * 设置密钥 Key
                     * @param _secretAccessKey 密钥 Key
                     * 
                     */
                    void SetSecretAccessKey(const std::string& _secretAccessKey);

                    /**
                     * 判断参数 SecretAccessKey 是否已赋值
                     * @return SecretAccessKey 是否已赋值
                     * 
                     */
                    bool SecretAccessKeyHasBeenSet() const;

                private:

                    /**
                     * 存储节点
                     */
                    std::string m_endPoint;
                    bool m_endPointHasBeenSet;

                    /**
                     * 存储桶
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 密钥 ID
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * 密钥 Key
                     */
                    std::string m_secretAccessKey;
                    bool m_secretAccessKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_S3OPTIONS_H_
