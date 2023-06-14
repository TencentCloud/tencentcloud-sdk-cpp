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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_STORAGEINFO_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_STORAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20200608/model/BucketInfo.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                *  数据存储信息
                */
                class StorageInfo : public AbstractModel
                {
                public:
                    StorageInfo();
                    ~StorageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型 可选：
URL 资源链接类型
COS 腾讯云对象存储类型
                     * @return Type 类型 可选：
URL 资源链接类型
COS 腾讯云对象存储类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型 可选：
URL 资源链接类型
COS 腾讯云对象存储类型
                     * @param _type 类型 可选：
URL 资源链接类型
COS 腾讯云对象存储类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取资源链接
                     * @return Url 资源链接
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置资源链接
                     * @param _url 资源链接
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取腾讯云存储桶信息
                     * @return BucketInfo 腾讯云存储桶信息
                     * 
                     */
                    BucketInfo GetBucketInfo() const;

                    /**
                     * 设置腾讯云存储桶信息
                     * @param _bucketInfo 腾讯云存储桶信息
                     * 
                     */
                    void SetBucketInfo(const BucketInfo& _bucketInfo);

                    /**
                     * 判断参数 BucketInfo 是否已赋值
                     * @return BucketInfo 是否已赋值
                     * 
                     */
                    bool BucketInfoHasBeenSet() const;

                private:

                    /**
                     * 类型 可选：
URL 资源链接类型
COS 腾讯云对象存储类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 资源链接
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 腾讯云存储桶信息
                     */
                    BucketInfo m_bucketInfo;
                    bool m_bucketInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_STORAGEINFO_H_
