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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLCOSTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLCOSTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/BatchSQLCostInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSparkSessionBatchSQLCost返回参数结构体
                */
                class DescribeSparkSessionBatchSQLCostResponse : public AbstractModel
                {
                public:
                    DescribeSparkSessionBatchSQLCostResponse();
                    ~DescribeSparkSessionBatchSQLCostResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostInfo 任务消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BatchSQLCostInfo> GetCostInfo() const;

                    /**
                     * 判断参数 CostInfo 是否已赋值
                     * @return CostInfo 是否已赋值
                     * 
                     */
                    bool CostInfoHasBeenSet() const;

                private:

                    /**
                     * 任务消耗
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BatchSQLCostInfo> m_costInfo;
                    bool m_costInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKSESSIONBATCHSQLCOSTRESPONSE_H_
