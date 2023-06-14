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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEENVIRONMENTRESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEENVIRONMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * CreateEnvironment返回参数结构体
                */
                class CreateEnvironmentResponse : public AbstractModel
                {
                public:
                    CreateEnvironmentResponse();
                    ~CreateEnvironmentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID。
                     * @return EnvironmentId 环境ID。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取工作流UUID。
                     * @return WorkflowUuid 工作流UUID。
                     * 
                     */
                    std::string GetWorkflowUuid() const;

                    /**
                     * 判断参数 WorkflowUuid 是否已赋值
                     * @return WorkflowUuid 是否已赋值
                     * 
                     */
                    bool WorkflowUuidHasBeenSet() const;

                private:

                    /**
                     * 环境ID。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 工作流UUID。
                     */
                    std::string m_workflowUuid;
                    bool m_workflowUuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEENVIRONMENTRESPONSE_H_
