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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRUNRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRUNRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowRun.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 查询工作流运行详情响应。
                */
                class GetWorkflowRunRsp : public AbstractModel
                {
                public:
                    GetWorkflowRunRsp();
                    ~GetWorkflowRunRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流运行信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowRun 工作流运行信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowRun GetWorkflowRun() const;

                    /**
                     * 设置工作流运行信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowRun 工作流运行信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowRun(const WorkflowRun& _workflowRun);

                    /**
                     * 判断参数 WorkflowRun 是否已赋值
                     * @return WorkflowRun 是否已赋值
                     * 
                     */
                    bool WorkflowRunHasBeenSet() const;

                private:

                    /**
                     * 工作流运行信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowRun m_workflowRun;
                    bool m_workflowRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRUNRSP_H_
