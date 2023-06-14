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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTSREQUEST_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/CreateCameraAlertAlert.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * CreateCameraAlerts请求参数结构体
                */
                class CreateCameraAlertsRequest : public AbstractModel
                {
                public:
                    CreateCameraAlertsRequest();
                    ~CreateCameraAlertsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警信息列表
                     * @return Alerts 告警信息列表
                     * 
                     */
                    std::vector<CreateCameraAlertAlert> GetAlerts() const;

                    /**
                     * 设置告警信息列表
                     * @param _alerts 告警信息列表
                     * 
                     */
                    void SetAlerts(const std::vector<CreateCameraAlertAlert>& _alerts);

                    /**
                     * 判断参数 Alerts 是否已赋值
                     * @return Alerts 是否已赋值
                     * 
                     */
                    bool AlertsHasBeenSet() const;

                private:

                    /**
                     * 告警信息列表
                     */
                    std::vector<CreateCameraAlertAlert> m_alerts;
                    bool m_alertsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTSREQUEST_H_
