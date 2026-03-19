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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_GENERATELIVEAVATARSCRIPTBROADCASTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_GENERATELIVEAVATARSCRIPTBROADCASTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * GenerateLiveAvatarScriptBroadcast请求参数结构体
                */
                class GenerateLiveAvatarScriptBroadcastRequest : public AbstractModel
                {
                public:
                    GenerateLiveAvatarScriptBroadcastRequest();
                    ~GenerateLiveAvatarScriptBroadcastRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数字人直播间 ID。
                     * @return RoomId 数字人直播间 ID。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置数字人直播间 ID。
                     * @param _roomId 数字人直播间 ID。
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取话术 ID。
                     * @return ScriptId 话术 ID。
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置话术 ID。
                     * @param _scriptId 话术 ID。
                     * 
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     * 
                     */
                    bool ScriptIdHasBeenSet() const;

                    /**
                     * 获取音色 Key。如果不填，则默认使用数字人直播已经保存的音色。
                     * @return TimbreKey 音色 Key。如果不填，则默认使用数字人直播已经保存的音色。
                     * 
                     */
                    std::string GetTimbreKey() const;

                    /**
                     * 设置音色 Key。如果不填，则默认使用数字人直播已经保存的音色。
                     * @param _timbreKey 音色 Key。如果不填，则默认使用数字人直播已经保存的音色。
                     * 
                     */
                    void SetTimbreKey(const std::string& _timbreKey);

                    /**
                     * 判断参数 TimbreKey 是否已赋值
                     * @return TimbreKey 是否已赋值
                     * 
                     */
                    bool TimbreKeyHasBeenSet() const;

                    /**
                     * 获取语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。不传默认使用数字人直播间已设置的语速。
                     * @return SpeechSpeed 语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。不传默认使用数字人直播间已设置的语速。
                     * 
                     */
                    double GetSpeechSpeed() const;

                    /**
                     * 设置语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。不传默认使用数字人直播间已设置的语速。
                     * @param _speechSpeed 语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。不传默认使用数字人直播间已设置的语速。
                     * 
                     */
                    void SetSpeechSpeed(const double& _speechSpeed);

                    /**
                     * 判断参数 SpeechSpeed 是否已赋值
                     * @return SpeechSpeed 是否已赋值
                     * 
                     */
                    bool SpeechSpeedHasBeenSet() const;

                    /**
                     * 获取音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。不传使用数字人直播已设置的音量。
                     * @return SpeechVolume 音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。不传使用数字人直播已设置的音量。
                     * 
                     */
                    int64_t GetSpeechVolume() const;

                    /**
                     * 设置音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。不传使用数字人直播已设置的音量。
                     * @param _speechVolume 音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。不传使用数字人直播已设置的音量。
                     * 
                     */
                    void SetSpeechVolume(const int64_t& _speechVolume);

                    /**
                     * 判断参数 SpeechVolume 是否已赋值
                     * @return SpeechVolume 是否已赋值
                     * 
                     */
                    bool SpeechVolumeHasBeenSet() const;

                private:

                    /**
                     * 数字人直播间 ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 话术 ID。
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 音色 Key。如果不填，则默认使用数字人直播已经保存的音色。
                     */
                    std::string m_timbreKey;
                    bool m_timbreKeyHasBeenSet;

                    /**
                     * 语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。不传默认使用数字人直播间已设置的语速。
                     */
                    double m_speechSpeed;
                    bool m_speechSpeedHasBeenSet;

                    /**
                     * 音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。不传使用数字人直播已设置的音量。
                     */
                    int64_t m_speechVolume;
                    bool m_speechVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_GENERATELIVEAVATARSCRIPTBROADCASTREQUEST_H_
