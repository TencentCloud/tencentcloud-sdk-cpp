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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATECLUSTERRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATECLUSTERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * IsolateCluster返回参数结构体
                */
                class IsolateClusterResponse : public AbstractModel
                {
                public:
                    IsolateClusterResponse();
                    ~IsolateClusterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务流ID(后付费或者serverless资源返回，如果需要同步任务状态，请使用DescribeFlow接口)
                     * @return FlowId 任务流ID(后付费或者serverless资源返回，如果需要同步任务状态，请使用DescribeFlow接口)
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取退款订单号(预付费资源返回，如果需要同步订单状态，请使用计费产品的DescribeDealsByCond同步订单状态)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealNames 退款订单号(预付费资源返回，如果需要同步订单状态，请使用计费产品的DescribeDealsByCond同步订单状态)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * 任务流ID(后付费或者serverless资源返回，如果需要同步任务状态，请使用DescribeFlow接口)
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 退款订单号(预付费资源返回，如果需要同步订单状态，请使用计费产品的DescribeDealsByCond同步订单状态)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATECLUSTERRESPONSE_H_
