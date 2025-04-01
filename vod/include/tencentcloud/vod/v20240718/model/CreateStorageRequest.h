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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_CREATESTORAGEREQUEST_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_CREATESTORAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateStorage请求参数结构体
                */
                class CreateStorageRequest : public AbstractModel
                {
                public:
                    CreateStorageRequest();
                    ~CreateStorageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>点播专业版[应用](/document/product/266/14574) ID。</b>
                     * @return SubAppId <b>点播专业版[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播专业版[应用](/document/product/266/14574) ID。</b>
                     * @param _subAppId <b>点播专业版[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取存储地域，必须是系统支持地域。
通过 [DescribeStorageRegions](https://cloud.tencent.com/document/product/266/72480) 接口可以查询到所有存储地域及已经开通存储桶的地域。
                     * @return StorageRegion 存储地域，必须是系统支持地域。
通过 [DescribeStorageRegions](https://cloud.tencent.com/document/product/266/72480) 接口可以查询到所有存储地域及已经开通存储桶的地域。
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置存储地域，必须是系统支持地域。
通过 [DescribeStorageRegions](https://cloud.tencent.com/document/product/266/72480) 接口可以查询到所有存储地域及已经开通存储桶的地域。
                     * @param _storageRegion 存储地域，必须是系统支持地域。
通过 [DescribeStorageRegions](https://cloud.tencent.com/document/product/266/72480) 接口可以查询到所有存储地域及已经开通存储桶的地域。
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
                     * 获取存储名称。
<li>仅支持小写英文字母、数字、中划线 “-” 及其组合；</li>
<li>存储命名不能以 “-” 开头或结尾；</li>
<li>存储命名最大长度为 64 字符。</li>
                     * @return StorageName 存储名称。
<li>仅支持小写英文字母、数字、中划线 “-” 及其组合；</li>
<li>存储命名不能以 “-” 开头或结尾；</li>
<li>存储命名最大长度为 64 字符。</li>
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置存储名称。
<li>仅支持小写英文字母、数字、中划线 “-” 及其组合；</li>
<li>存储命名不能以 “-” 开头或结尾；</li>
<li>存储命名最大长度为 64 字符。</li>
                     * @param _storageName 存储名称。
<li>仅支持小写英文字母、数字、中划线 “-” 及其组合；</li>
<li>存储命名不能以 “-” 开头或结尾；</li>
<li>存储命名最大长度为 64 字符。</li>
                     * 
                     */
                    void SetStorageName(const std::string& _storageName);

                    /**
                     * 判断参数 StorageName 是否已赋值
                     * @return StorageName 是否已赋值
                     * 
                     */
                    bool StorageNameHasBeenSet() const;

                private:

                    /**
                     * <b>点播专业版[应用](/document/product/266/14574) ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 存储地域，必须是系统支持地域。
通过 [DescribeStorageRegions](https://cloud.tencent.com/document/product/266/72480) 接口可以查询到所有存储地域及已经开通存储桶的地域。
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 存储名称。
<li>仅支持小写英文字母、数字、中划线 “-” 及其组合；</li>
<li>存储命名不能以 “-” 开头或结尾；</li>
<li>存储命名最大长度为 64 字符。</li>
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_CREATESTORAGEREQUEST_H_
