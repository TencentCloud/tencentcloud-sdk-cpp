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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSCOMMON_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSCOMMON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 实时流状态查询的通用状态信息。
                */
                class FlowRealtimeStatusCommon : public AbstractModel
                {
                public:
                    FlowRealtimeStatusCommon();
                    ~FlowRealtimeStatusCommon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前连接状态，Connected|Waiting|Idle。
                     * @return State 当前连接状态，Connected|Waiting|Idle。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置当前连接状态，Connected|Waiting|Idle。
                     * @param _state 当前连接状态，Connected|Waiting|Idle。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取连接模式，Listener|Caller。
                     * @return Mode 连接模式，Listener|Caller。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置连接模式，Listener|Caller。
                     * @param _mode 连接模式，Listener|Caller。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取已连接时长，单位为ms。
                     * @return ConnectedTime 已连接时长，单位为ms。
                     * 
                     */
                    int64_t GetConnectedTime() const;

                    /**
                     * 设置已连接时长，单位为ms。
                     * @param _connectedTime 已连接时长，单位为ms。
                     * 
                     */
                    void SetConnectedTime(const int64_t& _connectedTime);

                    /**
                     * 判断参数 ConnectedTime 是否已赋值
                     * @return ConnectedTime 是否已赋值
                     * 
                     */
                    bool ConnectedTimeHasBeenSet() const;

                    /**
                     * 获取实时码率，单位为bps。
                     * @return Bitrate 实时码率，单位为bps。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置实时码率，单位为bps。
                     * @param _bitrate 实时码率，单位为bps。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取重试次数。
                     * @return Reconnections 重试次数。
                     * 
                     */
                    int64_t GetReconnections() const;

                    /**
                     * 设置重试次数。
                     * @param _reconnections 重试次数。
                     * 
                     */
                    void SetReconnections(const int64_t& _reconnections);

                    /**
                     * 判断参数 Reconnections 是否已赋值
                     * @return Reconnections 是否已赋值
                     * 
                     */
                    bool ReconnectionsHasBeenSet() const;

                private:

                    /**
                     * 当前连接状态，Connected|Waiting|Idle。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 连接模式，Listener|Caller。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 已连接时长，单位为ms。
                     */
                    int64_t m_connectedTime;
                    bool m_connectedTimeHasBeenSet;

                    /**
                     * 实时码率，单位为bps。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 重试次数。
                     */
                    int64_t m_reconnections;
                    bool m_reconnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSCOMMON_H_
