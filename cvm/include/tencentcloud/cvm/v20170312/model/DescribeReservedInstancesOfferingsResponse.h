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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESOFFERINGSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESOFFERINGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ReservedInstancesOffering.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeReservedInstancesOfferings返回参数结构体
                */
                class DescribeReservedInstancesOfferingsResponse : public AbstractModel
                {
                public:
                    DescribeReservedInstancesOfferingsResponse();
                    ~DescribeReservedInstancesOfferingsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的预留实例计费数量。
                     * @return TotalCount 符合条件的预留实例计费数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取符合条件的预留实例计费列表。
                     * @return ReservedInstancesOfferingsSet 符合条件的预留实例计费列表。
                     * 
                     */
                    std::vector<ReservedInstancesOffering> GetReservedInstancesOfferingsSet() const;

                    /**
                     * 判断参数 ReservedInstancesOfferingsSet 是否已赋值
                     * @return ReservedInstancesOfferingsSet 是否已赋值
                     * 
                     */
                    bool ReservedInstancesOfferingsSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的预留实例计费数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 符合条件的预留实例计费列表。
                     */
                    std::vector<ReservedInstancesOffering> m_reservedInstancesOfferingsSet;
                    bool m_reservedInstancesOfferingsSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESOFFERINGSRESPONSE_H_
