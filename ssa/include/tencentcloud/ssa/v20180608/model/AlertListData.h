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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_ALERTLISTDATA_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_ALERTLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/AlertType.h>
#include <tencentcloud/ssa/v20180608/model/AlertListAggregations.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 告警列表响应数据
                */
                class AlertListData : public AbstractModel
                {
                public:
                    AlertListData();
                    ~AlertListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取返回列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertList 返回列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlertType> GetAlertList() const;

                    /**
                     * 设置返回列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertList 返回列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertList(const std::vector<AlertType>& _alertList);

                    /**
                     * 判断参数 AlertList 是否已赋值
                     * @return AlertList 是否已赋值
                     * 
                     */
                    bool AlertListHasBeenSet() const;

                    /**
                     * 获取聚合参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Aggregations 聚合参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlertListAggregations GetAggregations() const;

                    /**
                     * 设置聚合参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aggregations 聚合参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAggregations(const AlertListAggregations& _aggregations);

                    /**
                     * 判断参数 Aggregations 是否已赋值
                     * @return Aggregations 是否已赋值
                     * 
                     */
                    bool AggregationsHasBeenSet() const;

                private:

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 返回列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlertType> m_alertList;
                    bool m_alertListHasBeenSet;

                    /**
                     * 聚合参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlertListAggregations m_aggregations;
                    bool m_aggregationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_ALERTLISTDATA_H_
