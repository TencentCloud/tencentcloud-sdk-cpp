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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTASKINSTANCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTASKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetTaskInstance请求参数结构体
                */
                class GetTaskInstanceRequest : public AbstractModel
                {
                public:
                    GetTaskInstanceRequest();
                    ~GetTaskInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**项目ID**
                     * @return ProjectId **项目ID**
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置**项目ID**
                     * @param _projectId **项目ID**
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取**实例唯一标识**
                     * @return InstanceKey **实例唯一标识**
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置**实例唯一标识**
                     * @param _instanceKey **实例唯一标识**
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取**时区**
timeZone, 默认UTC+8
                     * @return ScheduleTimeZone **时区**
timeZone, 默认UTC+8
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置**时区**
timeZone, 默认UTC+8
                     * @param _scheduleTimeZone **时区**
timeZone, 默认UTC+8
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                private:

                    /**
                     * **项目ID**
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * **实例唯一标识**
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **时区**
timeZone, 默认UTC+8
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETTASKINSTANCEREQUEST_H_
