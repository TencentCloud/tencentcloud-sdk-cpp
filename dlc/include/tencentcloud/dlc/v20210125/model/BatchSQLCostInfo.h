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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_BATCHSQLCOSTINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_BATCHSQLCOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * spark session batch SQL的消耗信息
                */
                class BatchSQLCostInfo : public AbstractModel
                {
                public:
                    BatchSQLCostInfo();
                    ~BatchSQLCostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngineName 引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngineName 引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取引擎id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngineId 引擎id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置引擎id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngineId 引擎id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取本次消耗，单位cu
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cost 本次消耗，单位cu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCost() const;

                    /**
                     * 设置本次消耗，单位cu
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cost 本次消耗，单位cu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCost(const double& _cost);

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     * 
                     */
                    bool CostHasBeenSet() const;

                    /**
                     * 获取时间开销，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeCost 时间开销，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeCost() const;

                    /**
                     * 设置时间开销，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeCost 时间开销，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeCost(const int64_t& _timeCost);

                    /**
                     * 判断参数 TimeCost 是否已赋值
                     * @return TimeCost 是否已赋值
                     * 
                     */
                    bool TimeCostHasBeenSet() const;

                    /**
                     * 获取操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 引擎id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 本次消耗，单位cu
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * 时间开销，秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeCost;
                    bool m_timeCostHasBeenSet;

                    /**
                     * 操作者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_BATCHSQLCOSTINFO_H_
