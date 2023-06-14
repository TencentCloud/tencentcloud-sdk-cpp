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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_STATICSTORAGEINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_STATICSTORAGEINFO_H_

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
                     * 获取静态CDN域名
                     * @return StaticDomain 静态CDN域名
                     * 
                     */
                    std::string GetStaticDomain() const;

                    /**
                     * 设置静态CDN域名
                     * @param _staticDomain 静态CDN域名
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
                     * 获取静态CDN默认文件夹，当前为根目录
                     * @return DefaultDirName 静态CDN默认文件夹，当前为根目录
                     * 
                     */
                    std::string GetDefaultDirName() const;

                    /**
                     * 设置静态CDN默认文件夹，当前为根目录
                     * @param _defaultDirName 静态CDN默认文件夹，当前为根目录
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
                     * 获取资源状态(process/online/offline/init)
                     * @return Status 资源状态(process/online/offline/init)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资源状态(process/online/offline/init)
                     * @param _status 资源状态(process/online/offline/init)
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
                     * 获取cos所属区域
                     * @return Region cos所属区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置cos所属区域
                     * @param _region cos所属区域
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
                     * 获取bucket信息
                     * @return Bucket bucket信息
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置bucket信息
                     * @param _bucket bucket信息
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                private:

                    /**
                     * 静态CDN域名
                     */
                    std::string m_staticDomain;
                    bool m_staticDomainHasBeenSet;

                    /**
                     * 静态CDN默认文件夹，当前为根目录
                     */
                    std::string m_defaultDirName;
                    bool m_defaultDirNameHasBeenSet;

                    /**
                     * 资源状态(process/online/offline/init)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * cos所属区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * bucket信息
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_STATICSTORAGEINFO_H_
