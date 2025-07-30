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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEPOLICIESRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/LifecyclePolicy.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeLifecyclePolicies返回参数结构体
                */
                class DescribeLifecyclePoliciesResponse : public AbstractModel
                {
                public:
                    DescribeLifecyclePoliciesResponse();
                    ~DescribeLifecyclePoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取列表的分页页码
                     * @return PageNumber 列表的分页页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每个分页包含的生命周期管理策略个数
                     * @return PageSize 每个分页包含的生命周期管理策略个数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取生命周期管理策略总数
                     * @return TotalCount 生命周期管理策略总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取生命周期管理策略列表
                     * @return LifecyclePolicies 生命周期管理策略列表
                     * 
                     */
                    std::vector<LifecyclePolicy> GetLifecyclePolicies() const;

                    /**
                     * 判断参数 LifecyclePolicies 是否已赋值
                     * @return LifecyclePolicies 是否已赋值
                     * 
                     */
                    bool LifecyclePoliciesHasBeenSet() const;

                private:

                    /**
                     * 列表的分页页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每个分页包含的生命周期管理策略个数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 生命周期管理策略总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 生命周期管理策略列表
                     */
                    std::vector<LifecyclePolicy> m_lifecyclePolicies;
                    bool m_lifecyclePoliciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEPOLICIESRESPONSE_H_
