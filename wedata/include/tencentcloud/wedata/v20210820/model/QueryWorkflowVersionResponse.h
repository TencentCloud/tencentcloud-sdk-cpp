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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_QUERYWORKFLOWVERSIONRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_QUERYWORKFLOWVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/WorkflowVersionInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * QueryWorkflowVersion返回参数结构体
                */
                class QueryWorkflowVersionResponse : public AbstractModel
                {
                public:
                    QueryWorkflowVersionResponse();
                    ~QueryWorkflowVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取项目编号
                     * @return ProjectId 项目编号
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取工作流编号
                     * @return WorkflowId 工作流编号
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取版本信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionInfos 版本信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowVersionInfo> GetVersionInfos() const;

                    /**
                     * 判断参数 VersionInfos 是否已赋值
                     * @return VersionInfos 是否已赋值
                     * 
                     */
                    bool VersionInfosHasBeenSet() const;

                private:

                    /**
                     * 项目编号
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流编号
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 版本信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowVersionInfo> m_versionInfos;
                    bool m_versionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_QUERYWORKFLOWVERSIONRESPONSE_H_
