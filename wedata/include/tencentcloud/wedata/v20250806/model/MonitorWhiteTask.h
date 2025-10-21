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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_MONITORWHITETASK_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_MONITORWHITETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 告警规则监控白名单配置
                */
                class MonitorWhiteTask : public AbstractModel
                {
                public:
                    MonitorWhiteTask();
                    ~MonitorWhiteTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置白名单的对应的工作流/项目的id
                     * @return MonitorObjectId 配置白名单的对应的工作流/项目的id
                     * 
                     */
                    std::string GetMonitorObjectId() const;

                    /**
                     * 设置配置白名单的对应的工作流/项目的id
                     * @param _monitorObjectId 配置白名单的对应的工作流/项目的id
                     * 
                     */
                    void SetMonitorObjectId(const std::string& _monitorObjectId);

                    /**
                     * 判断参数 MonitorObjectId 是否已赋值
                     * @return MonitorObjectId 是否已赋值
                     * 
                     */
                    bool MonitorObjectIdHasBeenSet() const;

                    /**
                     * 获取白名单任务列表
                     * @return TaskIds 白名单任务列表
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置白名单任务列表
                     * @param _taskIds 白名单任务列表
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                private:

                    /**
                     * 配置白名单的对应的工作流/项目的id
                     */
                    std::string m_monitorObjectId;
                    bool m_monitorObjectIdHasBeenSet;

                    /**
                     * 白名单任务列表
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_MONITORWHITETASK_H_
