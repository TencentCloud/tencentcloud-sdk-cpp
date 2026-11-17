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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCEGROUPSRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCEGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/GPUResourceGroup.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeGPUResourceGroups返回参数结构体
                */
                class DescribeGPUResourceGroupsResponse : public AbstractModel
                {
                public:
                    DescribeGPUResourceGroupsResponse();
                    ~DescribeGPUResourceGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配的资源组列表；无匹配时为 []。
                     * @return ResourceGroups 匹配的资源组列表；无匹配时为 []。
                     * 
                     */
                    std::vector<GPUResourceGroup> GetResourceGroups() const;

                    /**
                     * 判断参数 ResourceGroups 是否已赋值
                     * @return ResourceGroups 是否已赋值
                     * 
                     */
                    bool ResourceGroupsHasBeenSet() const;

                    /**
                     * 获取匹配的资源组总数，分页前计算。
                     * @return TotalCount 匹配的资源组总数，分页前计算。
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
                     * 匹配的资源组列表；无匹配时为 []。
                     */
                    std::vector<GPUResourceGroup> m_resourceGroups;
                    bool m_resourceGroupsHasBeenSet;

                    /**
                     * 匹配的资源组总数，分页前计算。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCEGROUPSRESPONSE_H_
