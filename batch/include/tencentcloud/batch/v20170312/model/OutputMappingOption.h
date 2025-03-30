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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPINGOPTION_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPINGOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 输出映射选项
                */
                class OutputMappingOption : public AbstractModel
                {
                public:
                    OutputMappingOption();
                    ~OutputMappingOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器场景下,输出选项从实例映射到容器内的实例侧的工作空间。
BATCH_WORKSPACE: 工作空间为BATCH在实例内定义的工作空间，BATCH侧保证作业之间的隔离。（默认）
GLOBAL_WORKSPACE: 工作空间为实例操作系统空间。
                     * @return Workspace 容器场景下,输出选项从实例映射到容器内的实例侧的工作空间。
BATCH_WORKSPACE: 工作空间为BATCH在实例内定义的工作空间，BATCH侧保证作业之间的隔离。（默认）
GLOBAL_WORKSPACE: 工作空间为实例操作系统空间。
                     * 
                     */
                    std::string GetWorkspace() const;

                    /**
                     * 设置容器场景下,输出选项从实例映射到容器内的实例侧的工作空间。
BATCH_WORKSPACE: 工作空间为BATCH在实例内定义的工作空间，BATCH侧保证作业之间的隔离。（默认）
GLOBAL_WORKSPACE: 工作空间为实例操作系统空间。
                     * @param _workspace 容器场景下,输出选项从实例映射到容器内的实例侧的工作空间。
BATCH_WORKSPACE: 工作空间为BATCH在实例内定义的工作空间，BATCH侧保证作业之间的隔离。（默认）
GLOBAL_WORKSPACE: 工作空间为实例操作系统空间。
                     * 
                     */
                    void SetWorkspace(const std::string& _workspace);

                    /**
                     * 判断参数 Workspace 是否已赋值
                     * @return Workspace 是否已赋值
                     * 
                     */
                    bool WorkspaceHasBeenSet() const;

                private:

                    /**
                     * 容器场景下,输出选项从实例映射到容器内的实例侧的工作空间。
BATCH_WORKSPACE: 工作空间为BATCH在实例内定义的工作空间，BATCH侧保证作业之间的隔离。（默认）
GLOBAL_WORKSPACE: 工作空间为实例操作系统空间。
                     */
                    std::string m_workspace;
                    bool m_workspaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPINGOPTION_H_
