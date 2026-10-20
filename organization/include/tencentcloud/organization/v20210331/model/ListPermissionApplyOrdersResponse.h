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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPERMISSIONAPPLYORDERSRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPERMISSIONAPPLYORDERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/PermissionApplyOrder.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListPermissionApplyOrders返回参数结构体
                */
                class ListPermissionApplyOrdersResponse : public AbstractModel
                {
                public:
                    ListPermissionApplyOrdersResponse();
                    ~ListPermissionApplyOrdersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>申请单列表</p>
                     * @return ApplyOrders <p>申请单列表</p>
                     * 
                     */
                    std::vector<PermissionApplyOrder> GetApplyOrders() const;

                    /**
                     * 判断参数 ApplyOrders 是否已赋值
                     * @return ApplyOrders 是否已赋值
                     * 
                     */
                    bool ApplyOrdersHasBeenSet() const;

                    /**
                     * 获取<p>总数</p>
                     * @return TotalCounts <p>总数</p>
                     * 
                     */
                    int64_t GetTotalCounts() const;

                    /**
                     * 判断参数 TotalCounts 是否已赋值
                     * @return TotalCounts 是否已赋值
                     * 
                     */
                    bool TotalCountsHasBeenSet() const;

                    /**
                     * 获取<p>翻页游标</p>
                     * @return NextToken <p>翻页游标</p>
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
                     * 获取<p>是否还有下一页</p>
                     * @return IsTruncated <p>是否还有下一页</p>
                     * 
                     */
                    bool GetIsTruncated() const;

                    /**
                     * 判断参数 IsTruncated 是否已赋值
                     * @return IsTruncated 是否已赋值
                     * 
                     */
                    bool IsTruncatedHasBeenSet() const;

                    /**
                     * 获取<p>每页条数</p>
                     * @return MaxResults <p>每页条数</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                private:

                    /**
                     * <p>申请单列表</p>
                     */
                    std::vector<PermissionApplyOrder> m_applyOrders;
                    bool m_applyOrdersHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_totalCounts;
                    bool m_totalCountsHasBeenSet;

                    /**
                     * <p>翻页游标</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>是否还有下一页</p>
                     */
                    bool m_isTruncated;
                    bool m_isTruncatedHasBeenSet;

                    /**
                     * <p>每页条数</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTPERMISSIONAPPLYORDERSRESPONSE_H_
