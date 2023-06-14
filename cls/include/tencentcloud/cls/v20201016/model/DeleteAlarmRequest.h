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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEALARMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEALARMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteAlarm请求参数结构体
                */
                class DeleteAlarmRequest : public AbstractModel
                {
                public:
                    DeleteAlarmRequest();
                    ~DeleteAlarmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警策略ID。
                     * @return AlarmId 告警策略ID。
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警策略ID。
                     * @param _alarmId 告警策略ID。
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                private:

                    /**
                     * 告警策略ID。
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEALARMREQUEST_H_
