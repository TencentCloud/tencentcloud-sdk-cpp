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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWSTATISTICS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/FlowVideo.h>
#include <tencentcloud/mps/v20190612/model/FlowAudio.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 流的统计数据。
                */
                class FlowStatistics : public AbstractModel
                {
                public:
                    FlowStatistics();
                    ~FlowStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话Id。
                     * @return SessionId 会话Id。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话Id。
                     * @param _sessionId 会话Id。
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
                     * 获取对端IP。
                     * @return ClientIp 对端IP。
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置对端IP。
                     * @param _clientIp 对端IP。
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

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
                     * 获取视频数据。
                     * @return Video 视频数据。
                     * 
                     */
                    std::vector<FlowVideo> GetVideo() const;

                    /**
                     * 设置视频数据。
                     * @param _video 视频数据。
                     * 
                     */
                    void SetVideo(const std::vector<FlowVideo>& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取音频数据。
                     * @return Audio 音频数据。
                     * 
                     */
                    std::vector<FlowAudio> GetAudio() const;

                    /**
                     * 设置音频数据。
                     * @param _audio 音频数据。
                     * 
                     */
                    void SetAudio(const std::vector<FlowAudio>& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                private:

                    /**
                     * 会话Id。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 对端IP。
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 总带宽。
                     */
                    int64_t m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * 视频数据。
                     */
                    std::vector<FlowVideo> m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * 音频数据。
                     */
                    std::vector<FlowAudio> m_audio;
                    bool m_audioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWSTATISTICS_H_
