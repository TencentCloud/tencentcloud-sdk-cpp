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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYBASELINEALARMSTATUSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYBASELINEALARMSTATUSREQUEST_H_

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
                * ModifyBaselineAlarmStatus请求参数结构体
                */
                class ModifyBaselineAlarmStatusRequest : public AbstractModel
                {
                public:
                    ModifyBaselineAlarmStatusRequest();
                    ~ModifyBaselineAlarmStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否告警. 取值范围:
- true: 开启告警;
- false: 关闭告警
                     * @return IsAlarm 是否告警. 取值范围:
- true: 开启告警;
- false: 关闭告警
                     * 
                     */
                    std::string GetIsAlarm() const;

                    /**
                     * 设置是否告警. 取值范围:
- true: 开启告警;
- false: 关闭告警
                     * @param _isAlarm 是否告警. 取值范围:
- true: 开启告警;
- false: 关闭告警
                     * 
                     */
                    void SetIsAlarm(const std::string& _isAlarm);

                    /**
                     * 判断参数 IsAlarm 是否已赋值
                     * @return IsAlarm 是否已赋值
                     * 
                     */
                    bool IsAlarmHasBeenSet() const;

                    /**
                     * 获取基线实例id
                     * @return Id 基线实例id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置基线实例id
                     * @param _id 基线实例id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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

                private:

                    /**
                     * 是否告警. 取值范围:
- true: 开启告警;
- false: 关闭告警
                     */
                    std::string m_isAlarm;
                    bool m_isAlarmHasBeenSet;

                    /**
                     * 基线实例id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYBASELINEALARMSTATUSREQUEST_H_
