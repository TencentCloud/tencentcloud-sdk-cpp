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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DELETETIMERSCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DELETETIMERSCALINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DeleteTimerScalingPolicy请求参数结构体
                */
                class DeleteTimerScalingPolicyRequest : public AbstractModel
                {
                public:
                    DeleteTimerScalingPolicyRequest();
                    ~DeleteTimerScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取定时器ID, 进行encode
                     * @return TimerId 定时器ID, 进行encode
                     * 
                     */
                    std::string GetTimerId() const;

                    /**
                     * 设置定时器ID, 进行encode
                     * @param _timerId 定时器ID, 进行encode
                     * 
                     */
                    void SetTimerId(const std::string& _timerId);

                    /**
                     * 判断参数 TimerId 是否已赋值
                     * @return TimerId 是否已赋值
                     * 
                     */
                    bool TimerIdHasBeenSet() const;

                    /**
                     * 获取扩缩容配置服务器舰队ID
                     * @return FleetId 扩缩容配置服务器舰队ID
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置扩缩容配置服务器舰队ID
                     * @param _fleetId 扩缩容配置服务器舰队ID
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取定时器名称
                     * @return TimerName 定时器名称
                     * 
                     */
                    std::string GetTimerName() const;

                    /**
                     * 设置定时器名称
                     * @param _timerName 定时器名称
                     * 
                     */
                    void SetTimerName(const std::string& _timerName);

                    /**
                     * 判断参数 TimerName 是否已赋值
                     * @return TimerName 是否已赋值
                     * 
                     */
                    bool TimerNameHasBeenSet() const;

                private:

                    /**
                     * 定时器ID, 进行encode
                     */
                    std::string m_timerId;
                    bool m_timerIdHasBeenSet;

                    /**
                     * 扩缩容配置服务器舰队ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 定时器名称
                     */
                    std::string m_timerName;
                    bool m_timerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DELETETIMERSCALINGPOLICYREQUEST_H_
