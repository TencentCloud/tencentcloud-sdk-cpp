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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDTASKINFO_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * etcd task信息
                */
                class EtcdTaskInfo : public AbstractModel
                {
                public:
                    EtcdTaskInfo();
                    ~EtcdTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskID 任务ID
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置任务ID
                     * @param _taskID 任务ID
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param _taskType 任务类型
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
                     * 获取资源ID
                     * @return ResourceID 资源ID
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置资源ID
                     * @param _resourceID 资源ID
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return LifeState 任务状态
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置任务状态
                     * @param _lifeState 任务状态
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreatedAt 任务创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置任务创建时间
                     * @param _createdAt 任务创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取任务更新时间
                     * @return UpdatedAt 任务更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置任务更新时间
                     * @param _updatedAt 任务更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 任务更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDTASKINFO_H_
