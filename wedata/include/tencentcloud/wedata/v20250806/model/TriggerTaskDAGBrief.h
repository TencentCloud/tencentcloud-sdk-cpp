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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKDAGBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKDAGBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskBrief.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskLinkBrief.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 工作流任务概要信息
                */
                class TriggerTaskDAGBrief : public AbstractModel
                {
                public:
                    TriggerTaskDAGBrief();
                    ~TriggerTaskDAGBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务信息合集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerTasks 任务信息合集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TriggerTaskBrief> GetTriggerTasks() const;

                    /**
                     * 设置任务信息合集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerTasks 任务信息合集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerTasks(const std::vector<TriggerTaskBrief>& _triggerTasks);

                    /**
                     * 判断参数 TriggerTasks 是否已赋值
                     * @return TriggerTasks 是否已赋值
                     * 
                     */
                    bool TriggerTasksHasBeenSet() const;

                    /**
                     * 获取任务连接信息合集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerTaskLinks 任务连接信息合集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TriggerTaskLinkBrief> GetTriggerTaskLinks() const;

                    /**
                     * 设置任务连接信息合集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerTaskLinks 任务连接信息合集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerTaskLinks(const std::vector<TriggerTaskLinkBrief>& _triggerTaskLinks);

                    /**
                     * 判断参数 TriggerTaskLinks 是否已赋值
                     * @return TriggerTaskLinks 是否已赋值
                     * 
                     */
                    bool TriggerTaskLinksHasBeenSet() const;

                private:

                    /**
                     * 任务信息合集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TriggerTaskBrief> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                    /**
                     * 任务连接信息合集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TriggerTaskLinkBrief> m_triggerTaskLinks;
                    bool m_triggerTaskLinksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKDAGBRIEF_H_
