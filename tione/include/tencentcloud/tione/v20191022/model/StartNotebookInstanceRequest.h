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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_STARTNOTEBOOKINSTANCEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_STARTNOTEBOOKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/StoppingCondition.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * StartNotebookInstance请求参数结构体
                */
                class StartNotebookInstanceRequest : public AbstractModel
                {
                public:
                    StartNotebookInstanceRequest();
                    ~StartNotebookInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook实例名称
                     * @return NotebookInstanceName Notebook实例名称
                     * 
                     */
                    std::string GetNotebookInstanceName() const;

                    /**
                     * 设置Notebook实例名称
                     * @param _notebookInstanceName Notebook实例名称
                     * 
                     */
                    void SetNotebookInstanceName(const std::string& _notebookInstanceName);

                    /**
                     * 判断参数 NotebookInstanceName 是否已赋值
                     * @return NotebookInstanceName 是否已赋值
                     * 
                     */
                    bool NotebookInstanceNameHasBeenSet() const;

                    /**
                     * 获取自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     * @return AutoStopping 自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     * 
                     */
                    std::string GetAutoStopping() const;

                    /**
                     * 设置自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     * @param _autoStopping 自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     * 
                     */
                    void SetAutoStopping(const std::string& _autoStopping);

                    /**
                     * 判断参数 AutoStopping 是否已赋值
                     * @return AutoStopping 是否已赋值
                     * 
                     */
                    bool AutoStoppingHasBeenSet() const;

                    /**
                     * 获取自动停止配置，只在AutoStopping为Enabled的时候生效
                     * @return StoppingCondition 自动停止配置，只在AutoStopping为Enabled的时候生效
                     * 
                     */
                    StoppingCondition GetStoppingCondition() const;

                    /**
                     * 设置自动停止配置，只在AutoStopping为Enabled的时候生效
                     * @param _stoppingCondition 自动停止配置，只在AutoStopping为Enabled的时候生效
                     * 
                     */
                    void SetStoppingCondition(const StoppingCondition& _stoppingCondition);

                    /**
                     * 判断参数 StoppingCondition 是否已赋值
                     * @return StoppingCondition 是否已赋值
                     * 
                     */
                    bool StoppingConditionHasBeenSet() const;

                private:

                    /**
                     * Notebook实例名称
                     */
                    std::string m_notebookInstanceName;
                    bool m_notebookInstanceNameHasBeenSet;

                    /**
                     * 自动停止，可取值Enabled/Disabled
取值为Disabled的时候StoppingCondition将被忽略
取值为Enabled的时候读取StoppingCondition作为自动停止的配置
                     */
                    std::string m_autoStopping;
                    bool m_autoStoppingHasBeenSet;

                    /**
                     * 自动停止配置，只在AutoStopping为Enabled的时候生效
                     */
                    StoppingCondition m_stoppingCondition;
                    bool m_stoppingConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_STARTNOTEBOOKINSTANCEREQUEST_H_
