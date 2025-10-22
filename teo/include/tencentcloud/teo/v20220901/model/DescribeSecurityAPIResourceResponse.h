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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYAPIRESOURCERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYAPIRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/APIResource.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityAPIResource返回参数结构体
                */
                class DescribeSecurityAPIResourceResponse : public AbstractModel
                {
                public:
                    DescribeSecurityAPIResourceResponse();
                    ~DescribeSecurityAPIResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API 资源总数量。
                     * @return TotalCount API 资源总数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取API 资源列表。	
                     * @return APIResources API 资源列表。	
                     * 
                     */
                    std::vector<APIResource> GetAPIResources() const;

                    /**
                     * 判断参数 APIResources 是否已赋值
                     * @return APIResources 是否已赋值
                     * 
                     */
                    bool APIResourcesHasBeenSet() const;

                private:

                    /**
                     * API 资源总数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * API 资源列表。	
                     */
                    std::vector<APIResource> m_aPIResources;
                    bool m_aPIResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYAPIRESOURCERESPONSE_H_
