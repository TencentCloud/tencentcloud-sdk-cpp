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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATESTORAGEREGIONREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATESTORAGEREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateStorageRegion请求参数结构体
                */
                class CreateStorageRegionRequest : public AbstractModel
                {
                public:
                    CreateStorageRegionRequest();
                    ~CreateStorageRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待开通的存储地域，必须是系统支持的地域。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/266/9760">已支持地域列表</a></p>
                     * @return StorageRegion <p>待开通的存储地域，必须是系统支持的地域。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/266/9760">已支持地域列表</a></p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置<p>待开通的存储地域，必须是系统支持的地域。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/266/9760">已支持地域列表</a></p>
                     * @param _storageRegion <p>待开通的存储地域，必须是系统支持的地域。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/266/9760">已支持地域列表</a></p>
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
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>待开通的存储地域，必须是系统支持的地域。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/266/9760">已支持地域列表</a></p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESTORAGEREGIONREQUEST_H_
