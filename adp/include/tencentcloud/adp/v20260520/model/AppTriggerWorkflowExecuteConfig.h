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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWORKFLOWEXECUTECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWORKFLOWEXECUTECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerParamBindingConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppTriggerWorkflowExecuteConfig
                */
                class AppTriggerWorkflowExecuteConfig : public AbstractModel
                {
                public:
                    AppTriggerWorkflowExecuteConfig();
                    ~AppTriggerWorkflowExecuteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>工作流API参数绑定</p>
                     * @return ParamBindingsApi <p>工作流API参数绑定</p>
                     * 
                     */
                    AppTriggerParamBindingConfig GetParamBindingsApi() const;

                    /**
                     * 设置<p>工作流API参数绑定</p>
                     * @param _paramBindingsApi <p>工作流API参数绑定</p>
                     * 
                     */
                    void SetParamBindingsApi(const AppTriggerParamBindingConfig& _paramBindingsApi);

                    /**
                     * 判断参数 ParamBindingsApi 是否已赋值
                     * @return ParamBindingsApi 是否已赋值
                     * 
                     */
                    bool ParamBindingsApiHasBeenSet() const;

                    /**
                     * 获取<p>工作流参数绑定</p>
                     * @return ParamBindingsWorkflow <p>工作流参数绑定</p>
                     * 
                     */
                    AppTriggerParamBindingConfig GetParamBindingsWorkflow() const;

                    /**
                     * 设置<p>工作流参数绑定</p>
                     * @param _paramBindingsWorkflow <p>工作流参数绑定</p>
                     * 
                     */
                    void SetParamBindingsWorkflow(const AppTriggerParamBindingConfig& _paramBindingsWorkflow);

                    /**
                     * 判断参数 ParamBindingsWorkflow 是否已赋值
                     * @return ParamBindingsWorkflow 是否已赋值
                     * 
                     */
                    bool ParamBindingsWorkflowHasBeenSet() const;

                    /**
                     * 获取<p>工作流ID</p>
                     * @return WorkflowId <p>工作流ID</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流ID</p>
                     * @param _workflowId <p>工作流ID</p>
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
                     * 获取<p>工作流名字</p>
                     * @return WorkflowName <p>工作流名字</p>
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置<p>工作流名字</p>
                     * @param _workflowName <p>工作流名字</p>
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                private:

                    /**
                     * <p>工作流API参数绑定</p>
                     */
                    AppTriggerParamBindingConfig m_paramBindingsApi;
                    bool m_paramBindingsApiHasBeenSet;

                    /**
                     * <p>工作流参数绑定</p>
                     */
                    AppTriggerParamBindingConfig m_paramBindingsWorkflow;
                    bool m_paramBindingsWorkflowHasBeenSet;

                    /**
                     * <p>工作流ID</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>工作流名字</p>
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWORKFLOWEXECUTECONFIG_H_
