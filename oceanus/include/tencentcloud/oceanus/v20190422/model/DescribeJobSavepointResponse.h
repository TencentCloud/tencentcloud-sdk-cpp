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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSAVEPOINTRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSAVEPOINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Savepoint.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeJobSavepoint返回参数结构体
                */
                class DescribeJobSavepointResponse : public AbstractModel
                {
                public:
                    DescribeJobSavepointResponse();
                    ~DescribeJobSavepointResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取快照列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalNumber 快照列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalNumber() const;

                    /**
                     * 判断参数 TotalNumber 是否已赋值
                     * @return TotalNumber 是否已赋值
                     * 
                     */
                    bool TotalNumberHasBeenSet() const;

                    /**
                     * 获取快照列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Savepoint 快照列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Savepoint> GetSavepoint() const;

                    /**
                     * 判断参数 Savepoint 是否已赋值
                     * @return Savepoint 是否已赋值
                     * 
                     */
                    bool SavepointHasBeenSet() const;

                    /**
                     * 获取进行中的快照列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningSavepoint 进行中的快照列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Savepoint> GetRunningSavepoint() const;

                    /**
                     * 判断参数 RunningSavepoint 是否已赋值
                     * @return RunningSavepoint 是否已赋值
                     * 
                     */
                    bool RunningSavepointHasBeenSet() const;

                    /**
                     * 获取进行中的快照列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningTotalNumber 进行中的快照列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunningTotalNumber() const;

                    /**
                     * 判断参数 RunningTotalNumber 是否已赋值
                     * @return RunningTotalNumber 是否已赋值
                     * 
                     */
                    bool RunningTotalNumberHasBeenSet() const;

                private:

                    /**
                     * 快照列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalNumber;
                    bool m_totalNumberHasBeenSet;

                    /**
                     * 快照列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Savepoint> m_savepoint;
                    bool m_savepointHasBeenSet;

                    /**
                     * 进行中的快照列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Savepoint> m_runningSavepoint;
                    bool m_runningSavepointHasBeenSet;

                    /**
                     * 进行中的快照列表总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runningTotalNumber;
                    bool m_runningTotalNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSAVEPOINTRESPONSE_H_
