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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEOPSALARMRULEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEOPSALARMRULEREQUEST_H_

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
                * DeleteOpsAlarmRule请求参数结构体
                */
                class DeleteOpsAlarmRuleRequest : public AbstractModel
                {
                public:
                    DeleteOpsAlarmRuleRequest();
                    ~DeleteOpsAlarmRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取告警规则唯一id，接口CreateAlarmRule返回
与AlarmRuleName二选一
                     * @return AlarmRuleId 告警规则唯一id，接口CreateAlarmRule返回
与AlarmRuleName二选一
                     * 
                     */
                    std::string GetAlarmRuleId() const;

                    /**
                     * 设置告警规则唯一id，接口CreateAlarmRule返回
与AlarmRuleName二选一
                     * @param _alarmRuleId 告警规则唯一id，接口CreateAlarmRule返回
与AlarmRuleName二选一
                     * 
                     */
                    void SetAlarmRuleId(const std::string& _alarmRuleId);

                    /**
                     * 判断参数 AlarmRuleId 是否已赋值
                     * @return AlarmRuleId 是否已赋值
                     * 
                     */
                    bool AlarmRuleIdHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 告警规则唯一id，接口CreateAlarmRule返回
与AlarmRuleName二选一
                     */
                    std::string m_alarmRuleId;
                    bool m_alarmRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEOPSALARMRULEREQUEST_H_
