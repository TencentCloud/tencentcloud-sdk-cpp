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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_DELETESITESREQUEST_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_DELETESITESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * DeleteSites请求参数结构体
                */
                class DeleteSitesRequest : public AbstractModel
                {
                public:
                    DeleteSitesRequest();
                    ~DeleteSitesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID列表
                     * @return SiteIds 站点ID列表
                     * 
                     */
                    std::vector<uint64_t> GetSiteIds() const;

                    /**
                     * 设置站点ID列表
                     * @param _siteIds 站点ID列表
                     * 
                     */
                    void SetSiteIds(const std::vector<uint64_t>& _siteIds);

                    /**
                     * 判断参数 SiteIds 是否已赋值
                     * @return SiteIds 是否已赋值
                     * 
                     */
                    bool SiteIdsHasBeenSet() const;

                private:

                    /**
                     * 站点ID列表
                     */
                    std::vector<uint64_t> m_siteIds;
                    bool m_siteIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_DELETESITESREQUEST_H_
