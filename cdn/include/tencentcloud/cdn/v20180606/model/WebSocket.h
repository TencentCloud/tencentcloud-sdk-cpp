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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_WEBSOCKET_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_WEBSOCKET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * WebSocket配置
WebSocket 为ECDN产品功能，如需使用请通过ECDN域名配置.
                */
                class WebSocket : public AbstractModel
                {
                public:
                    WebSocket();
                    ~WebSocket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取WebSocket 超时配置开关，取值有：
on：开启，可以调整超时时间
off：关闭，平台仍支持WebSocket连接，此时超时时间默认为15秒

                     * @return Switch WebSocket 超时配置开关，取值有：
on：开启，可以调整超时时间
off：关闭，平台仍支持WebSocket连接，此时超时时间默认为15秒

                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置WebSocket 超时配置开关，取值有：
on：开启，可以调整超时时间
off：关闭，平台仍支持WebSocket连接，此时超时时间默认为15秒

                     * @param _switch WebSocket 超时配置开关，取值有：
on：开启，可以调整超时时间
off：关闭，平台仍支持WebSocket连接，此时超时时间默认为15秒

                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取设置超时时间，单位为秒，最大超时时间300秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout 设置超时时间，单位为秒，最大超时时间300秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置设置超时时间，单位为秒，最大超时时间300秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout 设置超时时间，单位为秒，最大超时时间300秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * WebSocket 超时配置开关，取值有：
on：开启，可以调整超时时间
off：关闭，平台仍支持WebSocket连接，此时超时时间默认为15秒

                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 设置超时时间，单位为秒，最大超时时间300秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_WEBSOCKET_H_
