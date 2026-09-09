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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WECOMROBOTCHANNELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WECOMROBOTCHANNELCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/WecomRobotCallbackAccess.h>
#include <tencentcloud/adp/v20260520/model/WecomRobotWebsocketAccess.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 企微机器人渠道配置
                */
                class WecomRobotChannelConfig : public AbstractModel
                {
                public:
                    WecomRobotChannelConfig();
                    ~WecomRobotChannelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>回调接入配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Callback <p>回调接入配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WecomRobotCallbackAccess GetCallback() const;

                    /**
                     * 设置<p>回调接入配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callback <p>回调接入配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallback(const WecomRobotCallbackAccess& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取<p>WebSocket长连接配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Websocket <p>WebSocket长连接配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WecomRobotWebsocketAccess GetWebsocket() const;

                    /**
                     * 设置<p>WebSocket长连接配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _websocket <p>WebSocket长连接配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebsocket(const WecomRobotWebsocketAccess& _websocket);

                    /**
                     * 判断参数 Websocket 是否已赋值
                     * @return Websocket 是否已赋值
                     * 
                     */
                    bool WebsocketHasBeenSet() const;

                private:

                    /**
                     * <p>回调接入配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WecomRobotCallbackAccess m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * <p>WebSocket长连接配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WecomRobotWebsocketAccess m_websocket;
                    bool m_websocketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WECOMROBOTCHANNELCONFIG_H_
