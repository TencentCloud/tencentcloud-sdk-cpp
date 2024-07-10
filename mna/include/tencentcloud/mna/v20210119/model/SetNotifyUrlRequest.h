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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_SETNOTIFYURLREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_SETNOTIFYURLREQUEST_H_

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
                * SetNotifyUrl请求参数结构体
                */
                class SetNotifyUrlRequest : public AbstractModel
                {
                public:
                    SetNotifyUrlRequest();
                    ~SetNotifyUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警通知回调url
                     * @return NotifyUrl 告警通知回调url
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置告警通知回调url
                     * @param _notifyUrl 告警通知回调url
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

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
                     * 设置告警通知回调key
                     * @param _callbackKey 告警通知回调key
                     * 
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                    /**
                     * 获取流量包的告警阈值
                     * @return AlarmValue 流量包的告警阈值
                     * 
                     */
                    int64_t GetAlarmValue() const;

                    /**
                     * 设置流量包的告警阈值
                     * @param _alarmValue 流量包的告警阈值
                     * 
                     */
                    void SetAlarmValue(const int64_t& _alarmValue);

                    /**
                     * 判断参数 AlarmValue 是否已赋值
                     * @return AlarmValue 是否已赋值
                     * 
                     */
                    bool AlarmValueHasBeenSet() const;

                private:

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

                    /**
                     * 流量包的告警阈值
                     */
                    int64_t m_alarmValue;
                    bool m_alarmValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_SETNOTIFYURLREQUEST_H_
