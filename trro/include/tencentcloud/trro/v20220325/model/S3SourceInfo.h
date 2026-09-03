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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_S3SOURCEINFO_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_S3SOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trro/v20220325/model/SecretInfo.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 单文件 COS 输入源
                */
                class S3SourceInfo : public AbstractModel
                {
                public:
                    S3SourceInfo();
                    ~S3SourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储桶名称</p>
                     * @return Bucket <p>存储桶名称</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>存储桶名称</p>
                     * @param _bucket <p>存储桶名称</p>
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
                     * 获取<p>存储服务地址</p>
                     * @return Endpoint <p>存储服务地址</p>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>存储服务地址</p>
                     * @param _endpoint <p>存储服务地址</p>
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
                     * 获取<p>存储区域</p>
                     * @return Region <p>存储区域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>存储区域</p>
                     * @param _region <p>存储区域</p>
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
                     * 获取<p>视频文件路径</p>
                     * @return Key <p>视频文件路径</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>视频文件路径</p>
                     * @param _key <p>视频文件路径</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>访问凭证，需对该桶有读取权限</p>
                     * @return Secret <p>访问凭证，需对该桶有读取权限</p>
                     * 
                     */
                    SecretInfo GetSecret() const;

                    /**
                     * 设置<p>访问凭证，需对该桶有读取权限</p>
                     * @param _secret <p>访问凭证，需对该桶有读取权限</p>
                     * 
                     */
                    void SetSecret(const SecretInfo& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                    /**
                     * 获取<p>是否腾讯云 COS：1 是，0 否。使用腾讯云 COS 时必须传 1</p><p>取值范围：[0, 1]</p>
                     * @return IsCos <p>是否腾讯云 COS：1 是，0 否。使用腾讯云 COS 时必须传 1</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    int64_t GetIsCos() const;

                    /**
                     * 设置<p>是否腾讯云 COS：1 是，0 否。使用腾讯云 COS 时必须传 1</p><p>取值范围：[0, 1]</p>
                     * @param _isCos <p>是否腾讯云 COS：1 是，0 否。使用腾讯云 COS 时必须传 1</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    void SetIsCos(const int64_t& _isCos);

                    /**
                     * 判断参数 IsCos 是否已赋值
                     * @return IsCos 是否已赋值
                     * 
                     */
                    bool IsCosHasBeenSet() const;

                private:

                    /**
                     * <p>存储桶名称</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>存储服务地址</p>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>存储区域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>视频文件路径</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>访问凭证，需对该桶有读取权限</p>
                     */
                    SecretInfo m_secret;
                    bool m_secretHasBeenSet;

                    /**
                     * <p>是否腾讯云 COS：1 是，0 否。使用腾讯云 COS 时必须传 1</p><p>取值范围：[0, 1]</p>
                     */
                    int64_t m_isCos;
                    bool m_isCosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_S3SOURCEINFO_H_
