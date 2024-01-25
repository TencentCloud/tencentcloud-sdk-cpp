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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPERATORSDS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPERATORSDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * WorkflowCanvasOperatorDs
                */
                class WorkflowCanvasOperatorsDs : public AbstractModel
                {
                public:
                    WorkflowCanvasOperatorsDs();
                    ~WorkflowCanvasOperatorsDs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorId 操作人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOperatorId() const;

                    /**
                     * 设置操作人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorId 操作人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorId(const uint64_t& _operatorId);

                    /**
                     * 判断参数 OperatorId 是否已赋值
                     * @return OperatorId 是否已赋值
                     * 
                     */
                    bool OperatorIdHasBeenSet() const;

                    /**
                     * 获取操作人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorName 操作人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置操作人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorName 操作人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                private:

                    /**
                     * 操作人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operatorId;
                    bool m_operatorIdHasBeenSet;

                    /**
                     * 操作人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPERATORSDS_H_
