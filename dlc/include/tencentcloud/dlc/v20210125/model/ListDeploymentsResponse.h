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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTDEPLOYMENTSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTDEPLOYMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DeploymentInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ListDeployments返回参数结构体
                */
                class ListDeploymentsResponse : public AbstractModel
                {
                public:
                    ListDeploymentsResponse();
                    ~ListDeploymentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>部署列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items <p>部署列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeploymentInfo> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>总记录数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total <p>总记录数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>当前页码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Page <p>当前页码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize <p>每页数量</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>总页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalPages <p>总页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalPages() const;

                    /**
                     * 判断参数 TotalPages 是否已赋值
                     * @return TotalPages 是否已赋值
                     * 
                     */
                    bool TotalPagesHasBeenSet() const;

                private:

                    /**
                     * <p>部署列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeploymentInfo> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>总记录数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>当前页码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>总页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTDEPLOYMENTSRESPONSE_H_
