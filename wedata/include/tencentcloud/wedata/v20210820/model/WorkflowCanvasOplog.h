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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPLOG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPLOG_H_

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
                * 工作流画布操作日志
                */
                class WorkflowCanvasOplog : public AbstractModel
                {
                public:
                    WorkflowCanvasOplog();
                    ~WorkflowCanvasOplog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间，时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTimestamp 创建时间，时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTimestamp() const;

                    /**
                     * 设置创建时间，时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTimestamp 创建时间，时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTimestamp(const uint64_t& _createTimestamp);

                    /**
                     * 判断参数 CreateTimestamp 是否已赋值
                     * @return CreateTimestamp 是否已赋值
                     * 
                     */
                    bool CreateTimestampHasBeenSet() const;

                    /**
                     * 获取工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

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

                    /**
                     * 获取操作日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 操作日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置操作日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 操作日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 创建时间，时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTimestamp;
                    bool m_createTimestampHasBeenSet;

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

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

                    /**
                     * 操作日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPLOG_H_
