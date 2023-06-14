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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWMEDIAINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWMEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/FlowMediaVideo.h>
#include <tencentcloud/mps/v20190612/model/FlowMediaAudio.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 传输流的媒体数据。
                */
                class FlowMediaInfo : public AbstractModel
                {
                public:
                    FlowMediaInfo();
                    ~FlowMediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间戳，单位是秒。
                     * @return Timestamp 时间戳，单位是秒。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置时间戳，单位是秒。
                     * @param _timestamp 时间戳，单位是秒。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取总带宽。
                     * @return Network 总带宽。
                     * 
                     */
                    int64_t GetNetwork() const;

                    /**
                     * 设置总带宽。
                     * @param _network 总带宽。
                     * 
                     */
                    void SetNetwork(const int64_t& _network);

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取传输流的视频数据。
                     * @return Video 传输流的视频数据。
                     * 
                     */
                    std::vector<FlowMediaVideo> GetVideo() const;

                    /**
                     * 设置传输流的视频数据。
                     * @param _video 传输流的视频数据。
                     * 
                     */
                    void SetVideo(const std::vector<FlowMediaVideo>& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取传输流的音频数据。
                     * @return Audio 传输流的音频数据。
                     * 
                     */
                    std::vector<FlowMediaAudio> GetAudio() const;

                    /**
                     * 设置传输流的音频数据。
                     * @param _audio 传输流的音频数据。
                     * 
                     */
                    void SetAudio(const std::vector<FlowMediaAudio>& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取标志同一次推流。
                     * @return SessionId 标志同一次推流。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置标志同一次推流。
                     * @param _sessionId 标志同一次推流。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取客户端IP。
                     * @return ClientIp 客户端IP。
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端IP。
                     * @param _clientIp 客户端IP。
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                private:

                    /**
                     * 时间戳，单位是秒。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 总带宽。
                     */
                    int64_t m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * 传输流的视频数据。
                     */
                    std::vector<FlowMediaVideo> m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * 传输流的音频数据。
                     */
                    std::vector<FlowMediaAudio> m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * 标志同一次推流。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 客户端IP。
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWMEDIAINFO_H_
