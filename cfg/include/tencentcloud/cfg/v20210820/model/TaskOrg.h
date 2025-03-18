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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKORG_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKORG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 演练人员组织
                */
                class TaskOrg : public AbstractModel
                {
                public:
                    TaskOrg();
                    ~TaskOrg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取演练角色
                     * @return TaskRole 演练角色
                     * 
                     */
                    std::string GetTaskRole() const;

                    /**
                     * 设置演练角色
                     * @param _taskRole 演练角色
                     * 
                     */
                    void SetTaskRole(const std::string& _taskRole);

                    /**
                     * 判断参数 TaskRole 是否已赋值
                     * @return TaskRole 是否已赋值
                     * 
                     */
                    bool TaskRoleHasBeenSet() const;

                    /**
                     * 获取负责人
                     * @return TaskOperator 负责人
                     * 
                     */
                    std::string GetTaskOperator() const;

                    /**
                     * 设置负责人
                     * @param _taskOperator 负责人
                     * 
                     */
                    void SetTaskOperator(const std::string& _taskOperator);

                    /**
                     * 判断参数 TaskOperator 是否已赋值
                     * @return TaskOperator 是否已赋值
                     * 
                     */
                    bool TaskOperatorHasBeenSet() const;

                private:

                    /**
                     * 演练角色
                     */
                    std::string m_taskRole;
                    bool m_taskRoleHasBeenSet;

                    /**
                     * 负责人
                     */
                    std::string m_taskOperator;
                    bool m_taskOperatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKORG_H_
