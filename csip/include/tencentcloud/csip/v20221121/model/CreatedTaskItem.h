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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDTASKITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 创建任务返回项
                */
                class CreatedTaskItem : public AbstractModel
                {
                public:
                    CreatedTaskItem();
                    ~CreatedTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型：HOST-主机扫描/CONTAINER-容器扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType <p>任务类型：HOST-主机扫描/CONTAINER-容器扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型：HOST-主机扫描/CONTAINER-容器扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType <p>任务类型：HOST-主机扫描/CONTAINER-容器扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>任务所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>任务所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>任务所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务类型：HOST-主机扫描/CONTAINER-容器扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDTASKITEM_H_
