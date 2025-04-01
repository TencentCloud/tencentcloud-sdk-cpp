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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_STORAGEINFO_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_STORAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * 专业版应用的存储信息。
                */
                class StorageInfo : public AbstractModel
                {
                public:
                    StorageInfo();
                    ~StorageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储桶 ID。
                     * @return BucketId 存储桶 ID。
                     * 
                     */
                    std::string GetBucketId() const;

                    /**
                     * 设置存储桶 ID。
                     * @param _bucketId 存储桶 ID。
                     * 
                     */
                    void SetBucketId(const std::string& _bucketId);

                    /**
                     * 判断参数 BucketId 是否已赋值
                     * @return BucketId 是否已赋值
                     * 
                     */
                    bool BucketIdHasBeenSet() const;

                    /**
                     * 获取存储名称。
                     * @return StorageName 存储名称。
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置存储名称。
                     * @param _storageName 存储名称。
                     * 
                     */
                    void SetStorageName(const std::string& _storageName);

                    /**
                     * 判断参数 StorageName 是否已赋值
                     * @return StorageName 是否已赋值
                     * 
                     */
                    bool StorageNameHasBeenSet() const;

                    /**
                     * 获取存储所在区域。
                     * @return StorageRegion 存储所在区域。
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置存储所在区域。
                     * @param _storageRegion 存储所在区域。
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取存储公网源站访问域名的状态，取值有：
<li>ONLINE：已生效；</li>
<li>DEPLOYING： 部署中。</li>
                     * @return InternetAccessDomainStatus 存储公网源站访问域名的状态，取值有：
<li>ONLINE：已生效；</li>
<li>DEPLOYING： 部署中。</li>
                     * 
                     */
                    std::string GetInternetAccessDomainStatus() const;

                    /**
                     * 设置存储公网源站访问域名的状态，取值有：
<li>ONLINE：已生效；</li>
<li>DEPLOYING： 部署中。</li>
                     * @param _internetAccessDomainStatus 存储公网源站访问域名的状态，取值有：
<li>ONLINE：已生效；</li>
<li>DEPLOYING： 部署中。</li>
                     * 
                     */
                    void SetInternetAccessDomainStatus(const std::string& _internetAccessDomainStatus);

                    /**
                     * 判断参数 InternetAccessDomainStatus 是否已赋值
                     * @return InternetAccessDomainStatus 是否已赋值
                     * 
                     */
                    bool InternetAccessDomainStatusHasBeenSet() const;

                    /**
                     * 获取存储公网源站访问域名。
                     * @return InternetAccessDomain 存储公网源站访问域名。
                     * 
                     */
                    std::string GetInternetAccessDomain() const;

                    /**
                     * 设置存储公网源站访问域名。
                     * @param _internetAccessDomain 存储公网源站访问域名。
                     * 
                     */
                    void SetInternetAccessDomain(const std::string& _internetAccessDomain);

                    /**
                     * 判断参数 InternetAccessDomain 是否已赋值
                     * @return InternetAccessDomain 是否已赋值
                     * 
                     */
                    bool InternetAccessDomainHasBeenSet() const;

                    /**
                     * 获取存储的创建时间。
                     * @return CreateTime 存储的创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置存储的创建时间。
                     * @param _createTime 存储的创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 存储桶 ID。
                     */
                    std::string m_bucketId;
                    bool m_bucketIdHasBeenSet;

                    /**
                     * 存储名称。
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                    /**
                     * 存储所在区域。
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 存储公网源站访问域名的状态，取值有：
<li>ONLINE：已生效；</li>
<li>DEPLOYING： 部署中。</li>
                     */
                    std::string m_internetAccessDomainStatus;
                    bool m_internetAccessDomainStatusHasBeenSet;

                    /**
                     * 存储公网源站访问域名。
                     */
                    std::string m_internetAccessDomain;
                    bool m_internetAccessDomainHasBeenSet;

                    /**
                     * 存储的创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_STORAGEINFO_H_
