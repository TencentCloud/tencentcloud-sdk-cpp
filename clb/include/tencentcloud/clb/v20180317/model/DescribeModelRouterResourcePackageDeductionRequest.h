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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERRESOURCEPACKAGEDEDUCTIONREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERRESOURCEPACKAGEDEDUCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelRouterResourcePackageDeduction请求参数结构体
                */
                class DescribeModelRouterResourcePackageDeductionRequest : public AbstractModel
                {
                public:
                    DescribeModelRouterResourcePackageDeductionRequest();
                    ~DescribeModelRouterResourcePackageDeductionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>抵扣起始时间</p>
                     * @return DeductionTimeBegin <p>抵扣起始时间</p>
                     * 
                     */
                    std::string GetDeductionTimeBegin() const;

                    /**
                     * 设置<p>抵扣起始时间</p>
                     * @param _deductionTimeBegin <p>抵扣起始时间</p>
                     * 
                     */
                    void SetDeductionTimeBegin(const std::string& _deductionTimeBegin);

                    /**
                     * 判断参数 DeductionTimeBegin 是否已赋值
                     * @return DeductionTimeBegin 是否已赋值
                     * 
                     */
                    bool DeductionTimeBeginHasBeenSet() const;

                    /**
                     * 获取<p>抵扣截止时间</p>
                     * @return DeductionTimeEnd <p>抵扣截止时间</p>
                     * 
                     */
                    std::string GetDeductionTimeEnd() const;

                    /**
                     * 设置<p>抵扣截止时间</p>
                     * @param _deductionTimeEnd <p>抵扣截止时间</p>
                     * 
                     */
                    void SetDeductionTimeEnd(const std::string& _deductionTimeEnd);

                    /**
                     * 判断参数 DeductionTimeEnd 是否已赋值
                     * @return DeductionTimeEnd 是否已赋值
                     * 
                     */
                    bool DeductionTimeEndHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包Id</p>
                     * @return ModelRouterResourcePackageId <p>模型路由资源包Id</p>
                     * 
                     */
                    std::string GetModelRouterResourcePackageId() const;

                    /**
                     * 设置<p>模型路由资源包Id</p>
                     * @param _modelRouterResourcePackageId <p>模型路由资源包Id</p>
                     * 
                     */
                    void SetModelRouterResourcePackageId(const std::string& _modelRouterResourcePackageId);

                    /**
                     * 判断参数 ModelRouterResourcePackageId 是否已赋值
                     * @return ModelRouterResourcePackageId 是否已赋值
                     * 
                     */
                    bool ModelRouterResourcePackageIdHasBeenSet() const;

                    /**
                     * 获取<p>返回的数量</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * @return Limit <p>返回的数量</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回的数量</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * @param _limit <p>返回的数量</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>数据偏移量</p><p>默认值：0</p>
                     * @return Offset <p>数据偏移量</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>数据偏移量</p><p>默认值：0</p>
                     * @param _offset <p>数据偏移量</p><p>默认值：0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>排序方式：asc，desc</p>
                     * @return SortBy <p>排序方式：asc，desc</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序方式：asc，desc</p>
                     * @param _sortBy <p>排序方式：asc，desc</p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                private:

                    /**
                     * <p>抵扣起始时间</p>
                     */
                    std::string m_deductionTimeBegin;
                    bool m_deductionTimeBeginHasBeenSet;

                    /**
                     * <p>抵扣截止时间</p>
                     */
                    std::string m_deductionTimeEnd;
                    bool m_deductionTimeEndHasBeenSet;

                    /**
                     * <p>模型路由资源包Id</p>
                     */
                    std::string m_modelRouterResourcePackageId;
                    bool m_modelRouterResourcePackageIdHasBeenSet;

                    /**
                     * <p>返回的数量</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>数据偏移量</p><p>默认值：0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序方式：asc，desc</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERRESOURCEPACKAGEDEDUCTIONREQUEST_H_
