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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITORNOTIFYPOLICY_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITORNOTIFYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播流监播通知策略
                */
                class LiveStreamMonitorNotifyPolicy : public AbstractModel
                {
                public:
                    LiveStreamMonitorNotifyPolicy();
                    ~LiveStreamMonitorNotifyPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知策略类型：范围[0,1]
0:代表不使用任何通知策略
1:代表使用全局回调策略，所有事件通知到CallbackUrl。
                     * @return NotifyPolicyType 通知策略类型：范围[0,1]
0:代表不使用任何通知策略
1:代表使用全局回调策略，所有事件通知到CallbackUrl。
                     * 
                     */
                    uint64_t GetNotifyPolicyType() const;

                    /**
                     * 设置通知策略类型：范围[0,1]
0:代表不使用任何通知策略
1:代表使用全局回调策略，所有事件通知到CallbackUrl。
                     * @param _notifyPolicyType 通知策略类型：范围[0,1]
0:代表不使用任何通知策略
1:代表使用全局回调策略，所有事件通知到CallbackUrl。
                     * 
                     */
                    void SetNotifyPolicyType(const uint64_t& _notifyPolicyType);

                    /**
                     * 判断参数 NotifyPolicyType 是否已赋值
                     * @return NotifyPolicyType 是否已赋值
                     * 
                     */
                    bool NotifyPolicyTypeHasBeenSet() const;

                    /**
                     * 获取回调URL：长度[0,512]
只支持http和https类型的url。
                     * @return CallbackUrl 回调URL：长度[0,512]
只支持http和https类型的url。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调URL：长度[0,512]
只支持http和https类型的url。
                     * @param _callbackUrl 回调URL：长度[0,512]
只支持http和https类型的url。
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 通知策略类型：范围[0,1]
0:代表不使用任何通知策略
1:代表使用全局回调策略，所有事件通知到CallbackUrl。
                     */
                    uint64_t m_notifyPolicyType;
                    bool m_notifyPolicyTypeHasBeenSet;

                    /**
                     * 回调URL：长度[0,512]
只支持http和https类型的url。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITORNOTIFYPOLICY_H_
