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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_STORAGEINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_STORAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * StorageInfo 资源信息
                */
                class StorageInfo : public AbstractModel
                {
                public:
                    StorageInfo();
                    ~StorageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源所属地域。
当前支持ap-shanghai
                     * @return Region 资源所属地域。
当前支持ap-shanghai
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置资源所属地域。
当前支持ap-shanghai
                     * @param _region 资源所属地域。
当前支持ap-shanghai
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
                     * 获取桶名，存储资源的唯一标识
                     * @return Bucket 桶名，存储资源的唯一标识
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置桶名，存储资源的唯一标识
                     * @param _bucket 桶名，存储资源的唯一标识
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
                     * 获取cdn 域名
                     * @return CdnDomain cdn 域名
                     * 
                     */
                    std::string GetCdnDomain() const;

                    /**
                     * 设置cdn 域名
                     * @param _cdnDomain cdn 域名
                     * 
                     */
                    void SetCdnDomain(const std::string& _cdnDomain);

                    /**
                     * 判断参数 CdnDomain 是否已赋值
                     * @return CdnDomain 是否已赋值
                     * 
                     */
                    bool CdnDomainHasBeenSet() const;

                    /**
                     * 获取资源所属用户的腾讯云appId
                     * @return AppId 资源所属用户的腾讯云appId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置资源所属用户的腾讯云appId
                     * @param _appId 资源所属用户的腾讯云appId
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 资源所属地域。
当前支持ap-shanghai
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 桶名，存储资源的唯一标识
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * cdn 域名
                     */
                    std::string m_cdnDomain;
                    bool m_cdnDomainHasBeenSet;

                    /**
                     * 资源所属用户的腾讯云appId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_STORAGEINFO_H_
