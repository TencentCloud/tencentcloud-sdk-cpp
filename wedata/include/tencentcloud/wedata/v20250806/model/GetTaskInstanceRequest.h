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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTASKINSTANCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTASKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * GetTaskInstance请求参数结构体
                */
                class GetTaskInstanceRequest : public AbstractModel
                {
                public:
                    GetTaskInstanceRequest();
                    ~GetTaskInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属项目id
                     * @return ProjectId 所属项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属项目id
                     * @param _projectId 所属项目id
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
                     * 获取实例唯一标识，可以通过ListInstances获取
                     * @return InstanceKey 实例唯一标识，可以通过ListInstances获取
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置实例唯一标识，可以通过ListInstances获取
                     * @param _instanceKey 实例唯一标识，可以通过ListInstances获取
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
                     * 获取**时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * @return TimeZone **时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置**时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * @param _timeZone **时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 所属项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例唯一标识，可以通过ListInstances获取
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTASKINSTANCEREQUEST_H_
