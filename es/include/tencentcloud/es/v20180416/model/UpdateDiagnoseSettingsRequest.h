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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEDIAGNOSESETTINGSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEDIAGNOSESETTINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateDiagnoseSettings请求参数结构体
                */
                class UpdateDiagnoseSettingsRequest : public AbstractModel
                {
                public:
                    UpdateDiagnoseSettingsRequest();
                    ~UpdateDiagnoseSettingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES实例ID
                     * @return InstanceId ES实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES实例ID
                     * @param _instanceId ES实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取0：开启智能运维；-1：关闭智能运维
                     * @return Status 0：开启智能运维；-1：关闭智能运维
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0：开启智能运维；-1：关闭智能运维
                     * @param _status 0：开启智能运维；-1：关闭智能运维
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取智能运维每天定时巡检时间，时间格式为HH:00:00，例如15:00:00
                     * @return CronTime 智能运维每天定时巡检时间，时间格式为HH:00:00，例如15:00:00
                     * 
                     */
                    std::string GetCronTime() const;

                    /**
                     * 设置智能运维每天定时巡检时间，时间格式为HH:00:00，例如15:00:00
                     * @param _cronTime 智能运维每天定时巡检时间，时间格式为HH:00:00，例如15:00:00
                     * 
                     */
                    void SetCronTime(const std::string& _cronTime);

                    /**
                     * 判断参数 CronTime 是否已赋值
                     * @return CronTime 是否已赋值
                     * 
                     */
                    bool CronTimeHasBeenSet() const;

                private:

                    /**
                     * ES实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0：开启智能运维；-1：关闭智能运维
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 智能运维每天定时巡检时间，时间格式为HH:00:00，例如15:00:00
                     */
                    std::string m_cronTime;
                    bool m_cronTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEDIAGNOSESETTINGSREQUEST_H_
