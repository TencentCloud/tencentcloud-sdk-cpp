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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCESREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeGPUResources请求参数结构体
                */
                class DescribeGPUResourcesRequest : public AbstractModel
                {
                public:
                    DescribeGPUResourcesRequest();
                    ~DescribeGPUResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>按资源组 ID 过滤，可省略，最多 64 字节。</p>
                     * @return ResourceGroupId <p>按资源组 ID 过滤，可省略，最多 64 字节。</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>按资源组 ID 过滤，可省略，最多 64 字节。</p>
                     * @param _resourceGroupId <p>按资源组 ID 过滤，可省略，最多 64 字节。</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>按GPU资源 ID 过滤，最多 500 个，每个为非空字符串且最多 64 字节；值之间为 OR，与其他条件为 AND。</p>
                     * @return ResourceIds <p>按GPU资源 ID 过滤，最多 500 个，每个为非空字符串且最多 64 字节；值之间为 OR，与其他条件为 AND。</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置<p>按GPU资源 ID 过滤，最多 500 个，每个为非空字符串且最多 64 字节；值之间为 OR，与其他条件为 AND。</p>
                     * @param _resourceIds <p>按GPU资源 ID 过滤，最多 500 个，每个为非空字符串且最多 64 字节；值之间为 OR，与其他条件为 AND。</p>
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取<p>按GPU状态过滤，可省略。大小写敏感：Delivering、Active、Isolated、Destroying。</p>
                     * @return State <p>按GPU状态过滤，可省略。大小写敏感：Delivering、Active、Isolated、Destroying。</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>按GPU状态过滤，可省略。大小写敏感：Delivering、Active、Isolated、Destroying。</p>
                     * @param _state <p>按GPU状态过滤，可省略。大小写敏感：Delivering、Active、Isolated、Destroying。</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>按占用状态过滤，可省略。大小写敏感：Idle、Allocating、InUse、Returning、Unavailable。</p>
                     * @return AllocationState <p>按占用状态过滤，可省略。大小写敏感：Idle、Allocating、InUse、Returning、Unavailable。</p>
                     * 
                     */
                    std::string GetAllocationState() const;

                    /**
                     * 设置<p>按占用状态过滤，可省略。大小写敏感：Idle、Allocating、InUse、Returning、Unavailable。</p>
                     * @param _allocationState <p>按占用状态过滤，可省略。大小写敏感：Idle、Allocating、InUse、Returning、Unavailable。</p>
                     * 
                     */
                    void SetAllocationState(const std::string& _allocationState);

                    /**
                     * 判断参数 AllocationState 是否已赋值
                     * @return AllocationState 是否已赋值
                     * 
                     */
                    bool AllocationStateHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，默认为 0，必须大于等于 0。</p>
                     * @return Offset <p>分页偏移量，默认为 0，必须大于等于 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认为 0，必须大于等于 0。</p>
                     * @param _offset <p>分页偏移量，默认为 0，必须大于等于 0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页条数，省略或传 0 时取 100；非零取值范围 1–500。</p>
                     * @return Limit <p>每页条数，省略或传 0 时取 100；非零取值范围 1–500。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页条数，省略或传 0 时取 100；非零取值范围 1–500。</p>
                     * @param _limit <p>每页条数，省略或传 0 时取 100；非零取值范围 1–500。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>按资源组 ID 过滤，可省略，最多 64 字节。</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>按GPU资源 ID 过滤，最多 500 个，每个为非空字符串且最多 64 字节；值之间为 OR，与其他条件为 AND。</p>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>按GPU状态过滤，可省略。大小写敏感：Delivering、Active、Isolated、Destroying。</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>按占用状态过滤，可省略。大小写敏感：Idle、Allocating、InUse、Returning、Unavailable。</p>
                     */
                    std::string m_allocationState;
                    bool m_allocationStateHasBeenSet;

                    /**
                     * <p>分页偏移量，默认为 0，必须大于等于 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页条数，省略或传 0 时取 100；非零取值范围 1–500。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCESREQUEST_H_
