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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_STOPWORKFLOWRUNLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_STOPWORKFLOWRUNLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * StopWorkflowRunList请求参数结构体
                */
                class StopWorkflowRunListRequest : public AbstractModel
                {
                public:
                    StopWorkflowRunListRequest();
                    ~StopWorkflowRunListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行实例ID列表</p>
                     * @return WorkflowRunIdList <p>工作流运行实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetWorkflowRunIdList() const;

                    /**
                     * 设置<p>工作流运行实例ID列表</p>
                     * @param _workflowRunIdList <p>工作流运行实例ID列表</p>
                     * 
                     */
                    void SetWorkflowRunIdList(const std::vector<std::string>& _workflowRunIdList);

                    /**
                     * 判断参数 WorkflowRunIdList 是否已赋值
                     * @return WorkflowRunIdList 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdListHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>工作流运行实例ID列表</p>
                     */
                    std::vector<std::string> m_workflowRunIdList;
                    bool m_workflowRunIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_STOPWORKFLOWRUNLISTREQUEST_H_
