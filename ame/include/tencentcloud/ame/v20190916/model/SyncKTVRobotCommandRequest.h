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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_SYNCKTVROBOTCOMMANDREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_SYNCKTVROBOTCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/PlayCommandInput.h>
#include <tencentcloud/ame/v20190916/model/SetPlaylistCommandInput.h>
#include <tencentcloud/ame/v20190916/model/SeekCommandInput.h>
#include <tencentcloud/ame/v20190916/model/SetAudioParamCommandInput.h>
#include <tencentcloud/ame/v20190916/model/SendMessageCommandInput.h>
#include <tencentcloud/ame/v20190916/model/SetPlayModeCommandInput.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * SyncKTVRobotCommand请求参数结构体
                */
                class SyncKTVRobotCommandRequest : public AbstractModel
                {
                public:
                    SyncKTVRobotCommandRequest();
                    ~SyncKTVRobotCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器人Id。
                     * @return RobotId 机器人Id。
                     */
                    std::string GetRobotId() const;

                    /**
                     * 设置机器人Id。
                     * @param RobotId 机器人Id。
                     */
                    void SetRobotId(const std::string& _robotId);

                    /**
                     * 判断参数 RobotId 是否已赋值
                     * @return RobotId 是否已赋值
                     */
                    bool RobotIdHasBeenSet() const;

                    /**
                     * 获取指令，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>SwitchPrevious：上一首</li>
<li>SwitchNext：下一首</li>
<li>SetPlayMode：设置播放模式</li>
<li>Seek：调整播放进度</li>
<li>SetPlaylist：歌单变更</li>
<li>SetAudioParam：音频参数变更</li>
<li>SendMessage：发送自定义消息</li>
                     * @return Command 指令，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>SwitchPrevious：上一首</li>
<li>SwitchNext：下一首</li>
<li>SetPlayMode：设置播放模式</li>
<li>Seek：调整播放进度</li>
<li>SetPlaylist：歌单变更</li>
<li>SetAudioParam：音频参数变更</li>
<li>SendMessage：发送自定义消息</li>
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置指令，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>SwitchPrevious：上一首</li>
<li>SwitchNext：下一首</li>
<li>SetPlayMode：设置播放模式</li>
<li>Seek：调整播放进度</li>
<li>SetPlaylist：歌单变更</li>
<li>SetAudioParam：音频参数变更</li>
<li>SendMessage：发送自定义消息</li>
                     * @param Command 指令，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>SwitchPrevious：上一首</li>
<li>SwitchNext：下一首</li>
<li>SetPlayMode：设置播放模式</li>
<li>Seek：调整播放进度</li>
<li>SetPlaylist：歌单变更</li>
<li>SetAudioParam：音频参数变更</li>
<li>SendMessage：发送自定义消息</li>
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取播放参数。
                     * @return PlayCommandInput 播放参数。
                     */
                    PlayCommandInput GetPlayCommandInput() const;

                    /**
                     * 设置播放参数。
                     * @param PlayCommandInput 播放参数。
                     */
                    void SetPlayCommandInput(const PlayCommandInput& _playCommandInput);

                    /**
                     * 判断参数 PlayCommandInput 是否已赋值
                     * @return PlayCommandInput 是否已赋值
                     */
                    bool PlayCommandInputHasBeenSet() const;

                    /**
                     * 获取播放列表变更信息，当Command取SetPlaylist时，必填。
                     * @return SetPlaylistCommandInput 播放列表变更信息，当Command取SetPlaylist时，必填。
                     */
                    SetPlaylistCommandInput GetSetPlaylistCommandInput() const;

                    /**
                     * 设置播放列表变更信息，当Command取SetPlaylist时，必填。
                     * @param SetPlaylistCommandInput 播放列表变更信息，当Command取SetPlaylist时，必填。
                     */
                    void SetSetPlaylistCommandInput(const SetPlaylistCommandInput& _setPlaylistCommandInput);

                    /**
                     * 判断参数 SetPlaylistCommandInput 是否已赋值
                     * @return SetPlaylistCommandInput 是否已赋值
                     */
                    bool SetPlaylistCommandInputHasBeenSet() const;

                    /**
                     * 获取播放进度，当Command取Seek时，必填。
                     * @return SeekCommandInput 播放进度，当Command取Seek时，必填。
                     */
                    SeekCommandInput GetSeekCommandInput() const;

                    /**
                     * 设置播放进度，当Command取Seek时，必填。
                     * @param SeekCommandInput 播放进度，当Command取Seek时，必填。
                     */
                    void SetSeekCommandInput(const SeekCommandInput& _seekCommandInput);

                    /**
                     * 判断参数 SeekCommandInput 是否已赋值
                     * @return SeekCommandInput 是否已赋值
                     */
                    bool SeekCommandInputHasBeenSet() const;

                    /**
                     * 获取音频参数，当Command取SetAudioParam时，必填。
                     * @return SetAudioParamCommandInput 音频参数，当Command取SetAudioParam时，必填。
                     */
                    SetAudioParamCommandInput GetSetAudioParamCommandInput() const;

                    /**
                     * 设置音频参数，当Command取SetAudioParam时，必填。
                     * @param SetAudioParamCommandInput 音频参数，当Command取SetAudioParam时，必填。
                     */
                    void SetSetAudioParamCommandInput(const SetAudioParamCommandInput& _setAudioParamCommandInput);

                    /**
                     * 判断参数 SetAudioParamCommandInput 是否已赋值
                     * @return SetAudioParamCommandInput 是否已赋值
                     */
                    bool SetAudioParamCommandInputHasBeenSet() const;

                    /**
                     * 获取自定义消息，当Command取SendMessage时，必填。
                     * @return SendMessageCommandInput 自定义消息，当Command取SendMessage时，必填。
                     */
                    SendMessageCommandInput GetSendMessageCommandInput() const;

                    /**
                     * 设置自定义消息，当Command取SendMessage时，必填。
                     * @param SendMessageCommandInput 自定义消息，当Command取SendMessage时，必填。
                     */
                    void SetSendMessageCommandInput(const SendMessageCommandInput& _sendMessageCommandInput);

                    /**
                     * 判断参数 SendMessageCommandInput 是否已赋值
                     * @return SendMessageCommandInput 是否已赋值
                     */
                    bool SendMessageCommandInputHasBeenSet() const;

                    /**
                     * 获取播放模式，当Command取SetPlayMode时，必填。
                     * @return SetPlayModeCommandInput 播放模式，当Command取SetPlayMode时，必填。
                     */
                    SetPlayModeCommandInput GetSetPlayModeCommandInput() const;

                    /**
                     * 设置播放模式，当Command取SetPlayMode时，必填。
                     * @param SetPlayModeCommandInput 播放模式，当Command取SetPlayMode时，必填。
                     */
                    void SetSetPlayModeCommandInput(const SetPlayModeCommandInput& _setPlayModeCommandInput);

                    /**
                     * 判断参数 SetPlayModeCommandInput 是否已赋值
                     * @return SetPlayModeCommandInput 是否已赋值
                     */
                    bool SetPlayModeCommandInputHasBeenSet() const;

                private:

                    /**
                     * 机器人Id。
                     */
                    std::string m_robotId;
                    bool m_robotIdHasBeenSet;

                    /**
                     * 指令，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>SwitchPrevious：上一首</li>
<li>SwitchNext：下一首</li>
<li>SetPlayMode：设置播放模式</li>
<li>Seek：调整播放进度</li>
<li>SetPlaylist：歌单变更</li>
<li>SetAudioParam：音频参数变更</li>
<li>SendMessage：发送自定义消息</li>
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 播放参数。
                     */
                    PlayCommandInput m_playCommandInput;
                    bool m_playCommandInputHasBeenSet;

                    /**
                     * 播放列表变更信息，当Command取SetPlaylist时，必填。
                     */
                    SetPlaylistCommandInput m_setPlaylistCommandInput;
                    bool m_setPlaylistCommandInputHasBeenSet;

                    /**
                     * 播放进度，当Command取Seek时，必填。
                     */
                    SeekCommandInput m_seekCommandInput;
                    bool m_seekCommandInputHasBeenSet;

                    /**
                     * 音频参数，当Command取SetAudioParam时，必填。
                     */
                    SetAudioParamCommandInput m_setAudioParamCommandInput;
                    bool m_setAudioParamCommandInputHasBeenSet;

                    /**
                     * 自定义消息，当Command取SendMessage时，必填。
                     */
                    SendMessageCommandInput m_sendMessageCommandInput;
                    bool m_sendMessageCommandInputHasBeenSet;

                    /**
                     * 播放模式，当Command取SetPlayMode时，必填。
                     */
                    SetPlayModeCommandInput m_setPlayModeCommandInput;
                    bool m_setPlayModeCommandInputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_SYNCKTVROBOTCOMMANDREQUEST_H_
