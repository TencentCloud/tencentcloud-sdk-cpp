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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SUBEKS_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SUBEKS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 混合计费
                */
                class SubEks : public AbstractModel
                {
                public:
                    SubEks();
                    ~SubEks() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerialId(const std::string& _serialId);

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取cu数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CuNum cu数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCuNum() const;

                    /**
                     * 设置cu数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cuNum cu数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCuNum(const int64_t& _cuNum);

                    /**
                     * 判断参数 CuNum 是否已赋值
                     * @return CuNum 是否已赋值
                     * 
                     */
                    bool CuNumHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取运行cu
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCu 运行cu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningCu() const;

                    /**
                     * 设置运行cu
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCu 运行cu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningCu(const double& _runningCu);

                    /**
                     * 判断参数 RunningCu 是否已赋值
                     * @return RunningCu 是否已赋值
                     * 
                     */
                    bool RunningCuHasBeenSet() const;

                    /**
                     * 获取总的CPU
                     * @return TotalCpu 总的CPU
                     * 
                     */
                    double GetTotalCpu() const;

                    /**
                     * 设置总的CPU
                     * @param _totalCpu 总的CPU
                     * 
                     */
                    void SetTotalCpu(const double& _totalCpu);

                    /**
                     * 判断参数 TotalCpu 是否已赋值
                     * @return TotalCpu 是否已赋值
                     * 
                     */
                    bool TotalCpuHasBeenSet() const;

                    /**
                     * 获取总的内存
                     * @return TotalMem 总的内存
                     * 
                     */
                    double GetTotalMem() const;

                    /**
                     * 设置总的内存
                     * @param _totalMem 总的内存
                     * 
                     */
                    void SetTotalMem(const double& _totalMem);

                    /**
                     * 判断参数 TotalMem 是否已赋值
                     * @return TotalMem 是否已赋值
                     * 
                     */
                    bool TotalMemHasBeenSet() const;

                    /**
                     * 获取运行的CPU
                     * @return RunningCpu 运行的CPU
                     * 
                     */
                    double GetRunningCpu() const;

                    /**
                     * 设置运行的CPU
                     * @param _runningCpu 运行的CPU
                     * 
                     */
                    void SetRunningCpu(const double& _runningCpu);

                    /**
                     * 判断参数 RunningCpu 是否已赋值
                     * @return RunningCpu 是否已赋值
                     * 
                     */
                    bool RunningCpuHasBeenSet() const;

                    /**
                     * 获取运行的内存
                     * @return RunningMem 运行的内存
                     * 
                     */
                    double GetRunningMem() const;

                    /**
                     * 设置运行的内存
                     * @param _runningMem 运行的内存
                     * 
                     */
                    void SetRunningMem(const double& _runningMem);

                    /**
                     * 判断参数 RunningMem 是否已赋值
                     * @return RunningMem 是否已赋值
                     * 
                     */
                    bool RunningMemHasBeenSet() const;

                private:

                    /**
                     * 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * cu数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cuNum;
                    bool m_cuNumHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 运行cu
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCu;
                    bool m_runningCuHasBeenSet;

                    /**
                     * 总的CPU
                     */
                    double m_totalCpu;
                    bool m_totalCpuHasBeenSet;

                    /**
                     * 总的内存
                     */
                    double m_totalMem;
                    bool m_totalMemHasBeenSet;

                    /**
                     * 运行的CPU
                     */
                    double m_runningCpu;
                    bool m_runningCpuHasBeenSet;

                    /**
                     * 运行的内存
                     */
                    double m_runningMem;
                    bool m_runningMemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SUBEKS_H_
