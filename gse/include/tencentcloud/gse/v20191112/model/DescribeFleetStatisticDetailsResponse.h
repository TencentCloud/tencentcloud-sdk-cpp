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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETSTATISTICDETAILSRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETSTATISTICDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/FleetStatisticDetail.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeFleetStatisticDetails返回参数结构体
                */
                class DescribeFleetStatisticDetailsResponse : public AbstractModel
                {
                public:
                    DescribeFleetStatisticDetailsResponse();
                    ~DescribeFleetStatisticDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务部署统计详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailList 服务部署统计详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FleetStatisticDetail> GetDetailList() const;

                    /**
                     * 判断参数 DetailList 是否已赋值
                     * @return DetailList 是否已赋值
                     * 
                     */
                    bool DetailListHasBeenSet() const;

                    /**
                     * 获取记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 记录总数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取统计时间类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeType 统计时间类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeType() const;

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                private:

                    /**
                     * 服务部署统计详情列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FleetStatisticDetail> m_detailList;
                    bool m_detailListHasBeenSet;

                    /**
                     * 记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 统计时间类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeType;
                    bool m_timeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETSTATISTICDETAILSRESPONSE_H_
