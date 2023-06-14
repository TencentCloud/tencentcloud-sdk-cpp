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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskConfig.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateTaskFromTemplate请求参数结构体
                */
                class CreateTaskFromTemplateRequest : public AbstractModel
                {
                public:
                    CreateTaskFromTemplateRequest();
                    ~CreateTaskFromTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取从经验库中查询到的经验模板ID
                     * @return TemplateId 从经验库中查询到的经验模板ID
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置从经验库中查询到的经验模板ID
                     * @param _templateId 从经验库中查询到的经验模板ID
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取演练的配置参数
                     * @return TaskConfig 演练的配置参数
                     * 
                     */
                    TaskConfig GetTaskConfig() const;

                    /**
                     * 设置演练的配置参数
                     * @param _taskConfig 演练的配置参数
                     * 
                     */
                    void SetTaskConfig(const TaskConfig& _taskConfig);

                    /**
                     * 判断参数 TaskConfig 是否已赋值
                     * @return TaskConfig 是否已赋值
                     * 
                     */
                    bool TaskConfigHasBeenSet() const;

                private:

                    /**
                     * 从经验库中查询到的经验模板ID
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 演练的配置参数
                     */
                    TaskConfig m_taskConfig;
                    bool m_taskConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMTEMPLATEREQUEST_H_
