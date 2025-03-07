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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_COSDOWNLOADINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_COSDOWNLOADINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/CosCredentials.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * Cos下载所需信息
                */
                class CosDownloadInfo : public AbstractModel
                {
                public:
                    CosDownloadInfo();
                    ~CosDownloadInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取桶名称
                     * @return Bucket 桶名称
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置桶名称
                     * @param _bucket 桶名称
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取路径
                     * @return Path 路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径
                     * @param _path 路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取鉴权信息
                     * @return Credentials 鉴权信息
                     * 
                     */
                    CosCredentials GetCredentials() const;

                    /**
                     * 设置鉴权信息
                     * @param _credentials 鉴权信息
                     * 
                     */
                    void SetCredentials(const CosCredentials& _credentials);

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                private:

                    /**
                     * 桶名称
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 鉴权信息
                     */
                    CosCredentials m_credentials;
                    bool m_credentialsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_COSDOWNLOADINFO_H_
