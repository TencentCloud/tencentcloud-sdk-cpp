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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_FLOWTYPE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_FLOWTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 任务类型信息，供前端下拉筛选使用
                */
                class FlowType : public AbstractModel
                {
                public:
                    FlowType();
                    ~FlowType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务类型名称，后续可以对 DescribeFlows 出参中的 FlowName 进行筛选</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowName <p>任务类型名称，后续可以对 DescribeFlows 出参中的 FlowName 进行筛选</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置<p>任务类型名称，后续可以对 DescribeFlows 出参中的 FlowName 进行筛选</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowName <p>任务类型名称，后续可以对 DescribeFlows 出参中的 FlowName 进行筛选</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取<p>任务类型中文描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowDesc <p>任务类型中文描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlowDesc() const;

                    /**
                     * 设置<p>任务类型中文描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowDesc <p>任务类型中文描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowDesc(const std::string& _flowDesc);

                    /**
                     * 判断参数 FlowDesc 是否已赋值
                     * @return FlowDesc 是否已赋值
                     * 
                     */
                    bool FlowDescHasBeenSet() const;

                private:

                    /**
                     * <p>任务类型名称，后续可以对 DescribeFlows 出参中的 FlowName 进行筛选</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * <p>任务类型中文描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowDesc;
                    bool m_flowDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_FLOWTYPE_H_
