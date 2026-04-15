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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_STATICSTORAGEINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_STATICSTORAGEINFO_H_

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
                * 静态CDN资源信息
                */
                class StaticStorageInfo : public AbstractModel
                {
                public:
                    StaticStorageInfo();
                    ~StaticStorageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>静态CDN域名</p>
                     * @return StaticDomain <p>静态CDN域名</p>
                     * 
                     */
                    std::string GetStaticDomain() const;

                    /**
                     * 设置<p>静态CDN域名</p>
                     * @param _staticDomain <p>静态CDN域名</p>
                     * 
                     */
                    void SetStaticDomain(const std::string& _staticDomain);

                    /**
                     * 判断参数 StaticDomain 是否已赋值
                     * @return StaticDomain 是否已赋值
                     * 
                     */
                    bool StaticDomainHasBeenSet() const;

                    /**
                     * 获取<p>静态CDN默认文件夹，当前为根目录</p>
                     * @return DefaultDirName <p>静态CDN默认文件夹，当前为根目录</p>
                     * 
                     */
                    std::string GetDefaultDirName() const;

                    /**
                     * 设置<p>静态CDN默认文件夹，当前为根目录</p>
                     * @param _defaultDirName <p>静态CDN默认文件夹，当前为根目录</p>
                     * 
                     */
                    void SetDefaultDirName(const std::string& _defaultDirName);

                    /**
                     * 判断参数 DefaultDirName 是否已赋值
                     * @return DefaultDirName 是否已赋值
                     * 
                     */
                    bool DefaultDirNameHasBeenSet() const;

                    /**
                     * 获取<p>资源状态(process/online/offline/init)</p>
                     * @return Status <p>资源状态(process/online/offline/init)</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>资源状态(process/online/offline/init)</p>
                     * @param _status <p>资源状态(process/online/offline/init)</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>cos所属区域</p>
                     * @return Region <p>cos所属区域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>cos所属区域</p>
                     * @param _region <p>cos所属区域</p>
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
                     * 获取<p>bucket信息</p>
                     * @return Bucket <p>bucket信息</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>bucket信息</p>
                     * @param _bucket <p>bucket信息</p>
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
                     * 获取<p>到期时间（秒级时间戳）</p>
                     * @return AccessExpire <p>到期时间（秒级时间戳）</p>
                     * 
                     */
                    int64_t GetAccessExpire() const;

                    /**
                     * 设置<p>到期时间（秒级时间戳）</p>
                     * @param _accessExpire <p>到期时间（秒级时间戳）</p>
                     * 
                     */
                    void SetAccessExpire(const int64_t& _accessExpire);

                    /**
                     * 判断参数 AccessExpire 是否已赋值
                     * @return AccessExpire 是否已赋值
                     * 
                     */
                    bool AccessExpireHasBeenSet() const;

                    /**
                     * 获取<p>外部存储。</p>
                     * @return ExternalStorage <p>外部存储。</p>
                     * 
                     */
                    ExternalStorage GetExternalStorage() const;

                    /**
                     * 设置<p>外部存储。</p>
                     * @param _externalStorage <p>外部存储。</p>
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
                     * <p>静态CDN域名</p>
                     */
                    std::string m_staticDomain;
                    bool m_staticDomainHasBeenSet;

                    /**
                     * <p>静态CDN默认文件夹，当前为根目录</p>
                     */
                    std::string m_defaultDirName;
                    bool m_defaultDirNameHasBeenSet;

                    /**
                     * <p>资源状态(process/online/offline/init)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>cos所属区域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>bucket信息</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>到期时间（秒级时间戳）</p>
                     */
                    int64_t m_accessExpire;
                    bool m_accessExpireHasBeenSet;

                    /**
                     * <p>外部存储。</p>
                     */
                    ExternalStorage m_externalStorage;
                    bool m_externalStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_STATICSTORAGEINFO_H_
