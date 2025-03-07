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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_COSUPLOADINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_COSUPLOADINFO_H_

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
                * cos上传所需信息
                */
                class CosUploadInfo : public AbstractModel
                {
                public:
                    CosUploadInfo();
                    ~CosUploadInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取程序包ID
                     * @return PkgId 程序包ID
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置程序包ID
                     * @param _pkgId 程序包ID
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取桶
                     * @return Bucket 桶
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置桶
                     * @param _bucket 桶
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
                     * 获取目标地域
                     * @return Region 目标地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置目标地域
                     * @param _region 目标地域
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
                     * 获取存储路径
                     * @return Path 存储路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置存储路径
                     * @param _path 存储路径
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
                     * 程序包ID
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 桶
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 目标地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 存储路径
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

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_COSUPLOADINFO_H_
