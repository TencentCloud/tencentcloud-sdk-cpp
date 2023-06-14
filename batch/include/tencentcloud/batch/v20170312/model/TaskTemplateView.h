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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASKTEMPLATEVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASKTEMPLATEVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Task.h>
#include <tencentcloud/batch/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 任务模板信息
                */
                class TaskTemplateView : public AbstractModel
                {
                public:
                    TaskTemplateView();
                    ~TaskTemplateView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务模板ID
                     * @return TaskTemplateId 任务模板ID
                     * 
                     */
                    std::string GetTaskTemplateId() const;

                    /**
                     * 设置任务模板ID
                     * @param _taskTemplateId 任务模板ID
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
                     * 获取任务模板名称
                     * @return TaskTemplateName 任务模板名称
                     * 
                     */
                    std::string GetTaskTemplateName() const;

                    /**
                     * 设置任务模板名称
                     * @param _taskTemplateName 任务模板名称
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
                     * 获取任务模板描述
                     * @return TaskTemplateDescription 任务模板描述
                     * 
                     */
                    std::string GetTaskTemplateDescription() const;

                    /**
                     * 设置任务模板描述
                     * @param _taskTemplateDescription 任务模板描述
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

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务模板绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 任务模板绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置任务模板绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 任务模板绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 任务模板ID
                     */
                    std::string m_taskTemplateId;
                    bool m_taskTemplateIdHasBeenSet;

                    /**
                     * 任务模板名称
                     */
                    std::string m_taskTemplateName;
                    bool m_taskTemplateNameHasBeenSet;

                    /**
                     * 任务模板描述
                     */
                    std::string m_taskTemplateDescription;
                    bool m_taskTemplateDescriptionHasBeenSet;

                    /**
                     * 任务模板信息
                     */
                    Task m_taskTemplateInfo;
                    bool m_taskTemplateInfoHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务模板绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASKTEMPLATEVIEW_H_
