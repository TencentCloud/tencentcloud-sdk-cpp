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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDORDERRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDORDERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CloudOrderReturn.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryCloudOrder返回参数结构体
                */
                class QueryCloudOrderResponse : public AbstractModel
                {
                public:
                    QueryCloudOrderResponse();
                    ~QueryCloudOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订单数量
                     * @return TotalNum 订单数量
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderList 订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudOrderReturn> GetOrderList() const;

                    /**
                     * 判断参数 OrderList 是否已赋值
                     * @return OrderList 是否已赋值
                     * 
                     */
                    bool OrderListHasBeenSet() const;

                private:

                    /**
                     * 订单数量
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 订单列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudOrderReturn> m_orderList;
                    bool m_orderListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDORDERRESPONSE_H_
