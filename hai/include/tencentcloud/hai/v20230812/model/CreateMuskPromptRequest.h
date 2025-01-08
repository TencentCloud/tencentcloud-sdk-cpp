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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_CREATEMUSKPROMPTREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_CREATEMUSKPROMPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * CreateMuskPrompt请求参数结构体
                */
                class CreateMuskPromptRequest : public AbstractModel
                {
                public:
                    CreateMuskPromptRequest();
                    ~CreateMuskPromptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取workgroup id
                     * @return WorkgroupId workgroup id
                     * 
                     */
                    std::string GetWorkgroupId() const;

                    /**
                     * 设置workgroup id
                     * @param _workgroupId workgroup id
                     * 
                     */
                    void SetWorkgroupId(const std::string& _workgroupId);

                    /**
                     * 判断参数 WorkgroupId 是否已赋值
                     * @return WorkgroupId 是否已赋值
                     * 
                     */
                    bool WorkgroupIdHasBeenSet() const;

                    /**
                     * 获取workflow id
                     * @return WorkflowId workflow id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置workflow id
                     * @param _workflowId workflow id
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
                     * 获取prompt 参数
                     * @return PromptParams prompt 参数
                     * 
                     */
                    std::string GetPromptParams() const;

                    /**
                     * 设置prompt 参数
                     * @param _promptParams prompt 参数
                     * 
                     */
                    void SetPromptParams(const std::string& _promptParams);

                    /**
                     * 判断参数 PromptParams 是否已赋值
                     * @return PromptParams 是否已赋值
                     * 
                     */
                    bool PromptParamsHasBeenSet() const;

                private:

                    /**
                     * workgroup id
                     */
                    std::string m_workgroupId;
                    bool m_workgroupIdHasBeenSet;

                    /**
                     * workflow id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * prompt 参数
                     */
                    std::string m_promptParams;
                    bool m_promptParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_CREATEMUSKPROMPTREQUEST_H_
