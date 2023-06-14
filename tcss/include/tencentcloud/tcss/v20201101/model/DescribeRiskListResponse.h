/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKLISTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ClusterRiskItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeRiskList返回参数结构体
                */
                class DescribeRiskListResponse : public AbstractModel
                {
                public:
                    DescribeRiskListResponse();
                    ~DescribeRiskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险详情数组
                     * @return ClusterRiskItems 风险详情数组
                     * 
                     */
                    std::vector<ClusterRiskItem> GetClusterRiskItems() const;

                    /**
                     * 判断参数 ClusterRiskItems 是否已赋值
                     * @return ClusterRiskItems 是否已赋值
                     * 
                     */
                    bool ClusterRiskItemsHasBeenSet() const;

                    /**
                     * 获取风险项的总数
                     * @return TotalCount 风险项的总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 风险详情数组
                     */
                    std::vector<ClusterRiskItem> m_clusterRiskItems;
                    bool m_clusterRiskItemsHasBeenSet;

                    /**
                     * 风险项的总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKLISTRESPONSE_H_
