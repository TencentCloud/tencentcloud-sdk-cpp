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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCESRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/GPUResource.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeGPUResources返回参数结构体
                */
                class DescribeGPUResourcesResponse : public AbstractModel
                {
                public:
                    DescribeGPUResourcesResponse();
                    ~DescribeGPUResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>GPU 资源列表；每台一条，无匹配时为 []。</p>
                     * @return Resources <p>GPU 资源列表；每台一条，无匹配时为 []。</p>
                     * 
                     */
                    std::vector<GPUResource> GetResources() const;

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取<p>筛选后、分页前的总数。</p>
                     * @return TotalCount <p>筛选后、分页前的总数。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>GPU 资源列表；每台一条，无匹配时为 []。</p>
                     */
                    std::vector<GPUResource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>筛选后、分页前的总数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCESRESPONSE_H_
