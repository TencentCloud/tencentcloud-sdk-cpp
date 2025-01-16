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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWALARMINFORESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWALARMINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetFlowAlarmInfo返回参数结构体
                */
                class GetFlowAlarmInfoResponse : public AbstractModel
                {
                public:
                    GetFlowAlarmInfoResponse();
                    ~GetFlowAlarmInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流量包的告警阈值
                     * @return AlarmValue 流量包的告警阈值
                     * 
                     */
                    int64_t GetAlarmValue() const;

                    /**
                     * 判断参数 AlarmValue 是否已赋值
                     * @return AlarmValue 是否已赋值
                     * 
                     */
                    bool AlarmValueHasBeenSet() const;

                    /**
                     * 获取告警通知回调url
                     * @return NotifyUrl 告警通知回调url
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取告警通知回调key
                     * @return CallbackKey 告警通知回调key
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                private:

                    /**
                     * 流量包的告警阈值
                     */
                    int64_t m_alarmValue;
                    bool m_alarmValueHasBeenSet;

                    /**
                     * 告警通知回调url
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 告警通知回调key
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWALARMINFORESPONSE_H_
