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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_MODIFYTASKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_MODIFYTASKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Task.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyTaskTemplate请求参数结构体
                */
                class ModifyTaskTemplateRequest : public AbstractModel
                {
                public:
                    ModifyTaskTemplateRequest();
                    ~ModifyTaskTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务模板ID; 详见[任务模版](https://cloud.tencent.com/document/product/599/15902)。
                     * @return TaskTemplateId 任务模板ID; 详见[任务模版](https://cloud.tencent.com/document/product/599/15902)。
                     * 
                     */
                    std::string GetTaskTemplateId() const;

                    /**
                     * 设置任务模板ID; 详见[任务模版](https://cloud.tencent.com/document/product/599/15902)。
                     * @param _taskTemplateId 任务模板ID; 详见[任务模版](https://cloud.tencent.com/document/product/599/15902)。
                     * 
                     */
                    void SetTaskTemplateId(const std::string& _taskTemplateId);

                    /**
                     * 判断参数 TaskTemplateId 是否已赋值
                     * @return TaskTemplateId 是否已赋值
                     * 
                     */
                    bool TaskTemplateIdHasBeenSet() const;

                    /**
                     * 获取任务模板名称；字节长度限制60。
                     * @return TaskTemplateName 任务模板名称；字节长度限制60。
                     * 
                     */
                    std::string GetTaskTemplateName() const;

                    /**
                     * 设置任务模板名称；字节长度限制60。
                     * @param _taskTemplateName 任务模板名称；字节长度限制60。
                     * 
                     */
                    void SetTaskTemplateName(const std::string& _taskTemplateName);

                    /**
                     * 判断参数 TaskTemplateName 是否已赋值
                     * @return TaskTemplateName 是否已赋值
                     * 
                     */
                    bool TaskTemplateNameHasBeenSet() const;

                    /**
                     * 获取任务模板描述；字节长度限制200。
                     * @return TaskTemplateDescription 任务模板描述；字节长度限制200。
                     * 
                     */
                    std::string GetTaskTemplateDescription() const;

                    /**
                     * 设置任务模板描述；字节长度限制200。
                     * @param _taskTemplateDescription 任务模板描述；字节长度限制200。
                     * 
                     */
                    void SetTaskTemplateDescription(const std::string& _taskTemplateDescription);

                    /**
                     * 判断参数 TaskTemplateDescription 是否已赋值
                     * @return TaskTemplateDescription 是否已赋值
                     * 
                     */
                    bool TaskTemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取任务模板信息
                     * @return TaskTemplateInfo 任务模板信息
                     * 
                     */
                    Task GetTaskTemplateInfo() const;

                    /**
                     * 设置任务模板信息
                     * @param _taskTemplateInfo 任务模板信息
                     * 
                     */
                    void SetTaskTemplateInfo(const Task& _taskTemplateInfo);

                    /**
                     * 判断参数 TaskTemplateInfo 是否已赋值
                     * @return TaskTemplateInfo 是否已赋值
                     * 
                     */
                    bool TaskTemplateInfoHasBeenSet() const;

                private:

                    /**
                     * 任务模板ID; 详见[任务模版](https://cloud.tencent.com/document/product/599/15902)。
                     */
                    std::string m_taskTemplateId;
                    bool m_taskTemplateIdHasBeenSet;

                    /**
                     * 任务模板名称；字节长度限制60。
                     */
                    std::string m_taskTemplateName;
                    bool m_taskTemplateNameHasBeenSet;

                    /**
                     * 任务模板描述；字节长度限制200。
                     */
                    std::string m_taskTemplateDescription;
                    bool m_taskTemplateDescriptionHasBeenSet;

                    /**
                     * 任务模板信息
                     */
                    Task m_taskTemplateInfo;
                    bool m_taskTemplateInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_MODIFYTASKTEMPLATEREQUEST_H_
