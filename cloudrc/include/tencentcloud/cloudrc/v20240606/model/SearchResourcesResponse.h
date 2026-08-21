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

#ifndef TENCENTCLOUD_CLOUDRC_V20240606_MODEL_SEARCHRESOURCESRESPONSE_H_
#define TENCENTCLOUD_CLOUDRC_V20240606_MODEL_SEARCHRESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudrc/v20240606/model/ResourceSummary.h>


namespace TencentCloud
{
    namespace Cloudrc
    {
        namespace V20240606
        {
            namespace Model
            {
                /**
                * SearchResources返回参数结构体
                */
                class SearchResourcesResponse : public AbstractModel
                {
                public:
                    SearchResourcesResponse();
                    ~SearchResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>下一页Token，为空时表示无更多数据</p>
                     * @return NextToken <p>下一页Token，为空时表示无更多数据</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取<p>资源列表</p>
                     * @return Resources <p>资源列表</p>
                     * 
                     */
                    std::vector<ResourceSummary> GetResources() const;

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * <p>下一页Token，为空时表示无更多数据</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>资源列表</p>
                     */
                    std::vector<ResourceSummary> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDRC_V20240606_MODEL_SEARCHRESOURCESRESPONSE_H_
