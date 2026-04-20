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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYDATAHUBTASKREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYDATAHUBTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyDatahubTask请求参数结构体
                */
                class ModifyDatahubTaskRequest : public AbstractModel
                {
                public:
                    ModifyDatahubTaskRequest();
                    ~ModifyDatahubTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务id</p>
                     * @return TaskId <p>任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _taskId <p>任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>任务描述信息</p>
                     * @return Description <p>任务描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>任务描述信息</p>
                     * @param _description <p>任务描述信息</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>任务并发上限</p>
                     * @return TasksMax <p>任务并发上限</p>
                     * 
                     */
                    int64_t GetTasksMax() const;

                    /**
                     * 设置<p>任务并发上限</p>
                     * @param _tasksMax <p>任务并发上限</p>
                     * 
                     */
                    void SetTasksMax(const int64_t& _tasksMax);

                    /**
                     * 判断参数 TasksMax 是否已赋值
                     * @return TasksMax 是否已赋值
                     * 
                     */
                    bool TasksMaxHasBeenSet() const;

                    /**
                     * 获取<p>数据同步限流值上限</p>单位：MB/s
                     * @return SyncThrottleLimit <p>数据同步限流值上限</p>单位：MB/s
                     * 
                     */
                    int64_t GetSyncThrottleLimit() const;

                    /**
                     * 设置<p>数据同步限流值上限</p>单位：MB/s
                     * @param _syncThrottleLimit <p>数据同步限流值上限</p>单位：MB/s
                     * 
                     */
                    void SetSyncThrottleLimit(const int64_t& _syncThrottleLimit);

                    /**
                     * 判断参数 SyncThrottleLimit 是否已赋值
                     * @return SyncThrottleLimit 是否已赋值
                     * 
                     */
                    bool SyncThrottleLimitHasBeenSet() const;

                    /**
                     * 获取<p>开启自动扩容</p>枚举值：<ul><li> true： 自动扩容</li><li> false： 手动扩容</li></ul>
                     * @return AutoExpandFlag <p>开启自动扩容</p>枚举值：<ul><li> true： 自动扩容</li><li> false： 手动扩容</li></ul>
                     * 
                     */
                    bool GetAutoExpandFlag() const;

                    /**
                     * 设置<p>开启自动扩容</p>枚举值：<ul><li> true： 自动扩容</li><li> false： 手动扩容</li></ul>
                     * @param _autoExpandFlag <p>开启自动扩容</p>枚举值：<ul><li> true： 自动扩容</li><li> false： 手动扩容</li></ul>
                     * 
                     */
                    void SetAutoExpandFlag(const bool& _autoExpandFlag);

                    /**
                     * 判断参数 AutoExpandFlag 是否已赋值
                     * @return AutoExpandFlag 是否已赋值
                     * 
                     */
                    bool AutoExpandFlagHasBeenSet() const;

                private:

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>任务并发上限</p>
                     */
                    int64_t m_tasksMax;
                    bool m_tasksMaxHasBeenSet;

                    /**
                     * <p>数据同步限流值上限</p>单位：MB/s
                     */
                    int64_t m_syncThrottleLimit;
                    bool m_syncThrottleLimitHasBeenSet;

                    /**
                     * <p>开启自动扩容</p>枚举值：<ul><li> true： 自动扩容</li><li> false： 手动扩容</li></ul>
                     */
                    bool m_autoExpandFlag;
                    bool m_autoExpandFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYDATAHUBTASKREQUEST_H_
