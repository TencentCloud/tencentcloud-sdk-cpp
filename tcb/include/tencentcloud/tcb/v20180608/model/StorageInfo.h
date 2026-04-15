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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_STORAGEINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_STORAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/ExternalStorage.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
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
                     * 获取<p>资源所属地域。<br>当前支持ap-shanghai</p>
                     * @return Region <p>资源所属地域。<br>当前支持ap-shanghai</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>资源所属地域。<br>当前支持ap-shanghai</p>
                     * @param _region <p>资源所属地域。<br>当前支持ap-shanghai</p>
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
                     * 获取<p>桶名，存储资源的唯一标识</p>
                     * @return Bucket <p>桶名，存储资源的唯一标识</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>桶名，存储资源的唯一标识</p>
                     * @param _bucket <p>桶名，存储资源的唯一标识</p>
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
                     * 获取<p>cdn 域名</p>
                     * @return CdnDomain <p>cdn 域名</p>
                     * 
                     */
                    std::string GetCdnDomain() const;

                    /**
                     * 设置<p>cdn 域名</p>
                     * @param _cdnDomain <p>cdn 域名</p>
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
                     * 获取<p>资源所属用户的腾讯云appId</p>
                     * @return AppId <p>资源所属用户的腾讯云appId</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>资源所属用户的腾讯云appId</p>
                     * @param _appId <p>资源所属用户的腾讯云appId</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>外部存储介质相关信息。</p>
                     * @return ExternalStorage <p>外部存储介质相关信息。</p>
                     * 
                     */
                    ExternalStorage GetExternalStorage() const;

                    /**
                     * 设置<p>外部存储介质相关信息。</p>
                     * @param _externalStorage <p>外部存储介质相关信息。</p>
                     * 
                     */
                    void SetExternalStorage(const ExternalStorage& _externalStorage);

                    /**
                     * 判断参数 ExternalStorage 是否已赋值
                     * @return ExternalStorage 是否已赋值
                     * 
                     */
                    bool ExternalStorageHasBeenSet() const;

                private:

                    /**
                     * <p>资源所属地域。<br>当前支持ap-shanghai</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>桶名，存储资源的唯一标识</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>cdn 域名</p>
                     */
                    std::string m_cdnDomain;
                    bool m_cdnDomainHasBeenSet;

                    /**
                     * <p>资源所属用户的腾讯云appId</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>外部存储介质相关信息。</p>
                     */
                    ExternalStorage m_externalStorage;
                    bool m_externalStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_STORAGEINFO_H_
