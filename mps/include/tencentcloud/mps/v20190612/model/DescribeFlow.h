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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEFLOW_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DescribeInput.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询Flow的配置信息。
                */
                class DescribeFlow : public AbstractModel
                {
                public:
                    DescribeFlow();
                    ~DescribeFlow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流Id。
                     * @return FlowId 流Id。
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流Id。
                     * @param FlowId 流Id。
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取流名称。
                     * @return FlowName 流名称。
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置流名称。
                     * @param FlowName 流名称。
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取流状态，目前有IDLE/RUNNING。
                     * @return State 流状态，目前有IDLE/RUNNING。
                     */
                    std::string GetState() const;

                    /**
                     * 设置流状态，目前有IDLE/RUNNING。
                     * @param State 流状态，目前有IDLE/RUNNING。
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取最大带宽值。
                     * @return MaxBandwidth 最大带宽值。
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置最大带宽值。
                     * @param MaxBandwidth 最大带宽值。
                     */
                    void SetMaxBandwidth(const int64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取输入组。
                     * @return InputGroup 输入组。
                     */
                    std::vector<DescribeInput> GetInputGroup() const;

                    /**
                     * 设置输入组。
                     * @param InputGroup 输入组。
                     */
                    void SetInputGroup(const std::vector<DescribeInput>& _inputGroup);

                    /**
                     * 判断参数 InputGroup 是否已赋值
                     * @return InputGroup 是否已赋值
                     */
                    bool InputGroupHasBeenSet() const;

                    /**
                     * 获取输出组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputGroup 输出组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeOutput> GetOutputGroup() const;

                    /**
                     * 设置输出组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OutputGroup 输出组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutputGroup(const std::vector<DescribeOutput>& _outputGroup);

                    /**
                     * 判断参数 OutputGroup 是否已赋值
                     * @return OutputGroup 是否已赋值
                     */
                    bool OutputGroupHasBeenSet() const;

                private:

                    /**
                     * 流Id。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 流状态，目前有IDLE/RUNNING。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 最大带宽值。
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * 输入组。
                     */
                    std::vector<DescribeInput> m_inputGroup;
                    bool m_inputGroupHasBeenSet;

                    /**
                     * 输出组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeOutput> m_outputGroup;
                    bool m_outputGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEFLOW_H_
