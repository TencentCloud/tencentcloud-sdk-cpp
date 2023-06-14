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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_KTVROBOTINFO_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_KTVROBOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/SetAudioParamCommandInput.h>
#include <tencentcloud/ame/v20190916/model/JoinRoomInput.h>
#include <tencentcloud/ame/v20190916/model/SetPlayModeCommandInput.h>
#include <tencentcloud/ame/v20190916/model/SetVolumeCommandInput.h>
#include <tencentcloud/ame/v20190916/model/SetRealVolumeCommandInput.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 机器人信息
                */
                class KTVRobotInfo : public AbstractModel
                {
                public:
                    KTVRobotInfo();
                    ~KTVRobotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器人Id。
                     * @return RobotId 机器人Id。
                     * 
                     */
                    std::string GetRobotId() const;

                    /**
                     * 设置机器人Id。
                     * @param _robotId 机器人Id。
                     * 
                     */
                    void SetRobotId(const std::string& _robotId);

                    /**
                     * 判断参数 RobotId 是否已赋值
                     * @return RobotId 是否已赋值
                     * 
                     */
                    bool RobotIdHasBeenSet() const;

                    /**
                     * 获取状态，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>Destroy：销毁</li>
                     * @return Status 状态，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>Destroy：销毁</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>Destroy：销毁</li>
                     * @param _status 状态，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>Destroy：销毁</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取播放列表。
                     * @return Playlists 播放列表。
                     * 
                     */
                    std::vector<std::string> GetPlaylists() const;

                    /**
                     * 设置播放列表。
                     * @param _playlists 播放列表。
                     * 
                     */
                    void SetPlaylists(const std::vector<std::string>& _playlists);

                    /**
                     * 判断参数 Playlists 是否已赋值
                     * @return Playlists 是否已赋值
                     * 
                     */
                    bool PlaylistsHasBeenSet() const;

                    /**
                     * 获取当前歌单索引位置。
                     * @return CurIndex 当前歌单索引位置。
                     * 
                     */
                    int64_t GetCurIndex() const;

                    /**
                     * 设置当前歌单索引位置。
                     * @param _curIndex 当前歌单索引位置。
                     * 
                     */
                    void SetCurIndex(const int64_t& _curIndex);

                    /**
                     * 判断参数 CurIndex 是否已赋值
                     * @return CurIndex 是否已赋值
                     * 
                     */
                    bool CurIndexHasBeenSet() const;

                    /**
                     * 获取播放进度，单位：毫秒。
                     * @return Position 播放进度，单位：毫秒。
                     * 
                     */
                    uint64_t GetPosition() const;

                    /**
                     * 设置播放进度，单位：毫秒。
                     * @param _position 播放进度，单位：毫秒。
                     * 
                     */
                    void SetPosition(const uint64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取音频参数。
                     * @return SetAudioParamInput 音频参数。
                     * 
                     */
                    SetAudioParamCommandInput GetSetAudioParamInput() const;

                    /**
                     * 设置音频参数。
                     * @param _setAudioParamInput 音频参数。
                     * 
                     */
                    void SetSetAudioParamInput(const SetAudioParamCommandInput& _setAudioParamInput);

                    /**
                     * 判断参数 SetAudioParamInput 是否已赋值
                     * @return SetAudioParamInput 是否已赋值
                     * 
                     */
                    bool SetAudioParamInputHasBeenSet() const;

                    /**
                     * 获取进房信息。
                     * @return JoinRoomInput 进房信息。
                     * 
                     */
                    JoinRoomInput GetJoinRoomInput() const;

                    /**
                     * 设置进房信息。
                     * @param _joinRoomInput 进房信息。
                     * 
                     */
                    void SetJoinRoomInput(const JoinRoomInput& _joinRoomInput);

                    /**
                     * 判断参数 JoinRoomInput 是否已赋值
                     * @return JoinRoomInput 是否已赋值
                     * 
                     */
                    bool JoinRoomInputHasBeenSet() const;

                    /**
                     * 获取RTC厂商类型，取值有：
<li>TRTC</li>
                     * @return RTCSystem RTC厂商类型，取值有：
<li>TRTC</li>
                     * 
                     */
                    std::string GetRTCSystem() const;

                    /**
                     * 设置RTC厂商类型，取值有：
<li>TRTC</li>
                     * @param _rTCSystem RTC厂商类型，取值有：
<li>TRTC</li>
                     * 
                     */
                    void SetRTCSystem(const std::string& _rTCSystem);

                    /**
                     * 判断参数 RTCSystem 是否已赋值
                     * @return RTCSystem 是否已赋值
                     * 
                     */
                    bool RTCSystemHasBeenSet() const;

                    /**
                     * 获取播放模式，PlayMode取值有：
<li>RepeatPlaylist：列表循环</li>
<li>Order：顺序播放</li>
<li>RepeatSingle：单曲循环</li>
<li>Shuffle：随机播放</li>
                     * @return SetPlayModeInput 播放模式，PlayMode取值有：
<li>RepeatPlaylist：列表循环</li>
<li>Order：顺序播放</li>
<li>RepeatSingle：单曲循环</li>
<li>Shuffle：随机播放</li>
                     * 
                     */
                    SetPlayModeCommandInput GetSetPlayModeInput() const;

                    /**
                     * 设置播放模式，PlayMode取值有：
<li>RepeatPlaylist：列表循环</li>
<li>Order：顺序播放</li>
<li>RepeatSingle：单曲循环</li>
<li>Shuffle：随机播放</li>
                     * @param _setPlayModeInput 播放模式，PlayMode取值有：
<li>RepeatPlaylist：列表循环</li>
<li>Order：顺序播放</li>
<li>RepeatSingle：单曲循环</li>
<li>Shuffle：随机播放</li>
                     * 
                     */
                    void SetSetPlayModeInput(const SetPlayModeCommandInput& _setPlayModeInput);

                    /**
                     * 判断参数 SetPlayModeInput 是否已赋值
                     * @return SetPlayModeInput 是否已赋值
                     * 
                     */
                    bool SetPlayModeInputHasBeenSet() const;

                    /**
                     * 获取<del>音量，范围 0~100，默认为 50。</del>（已废弃，请采用 SetRealVolumeInput ）
                     * @return SetVolumeInput <del>音量，范围 0~100，默认为 50。</del>（已废弃，请采用 SetRealVolumeInput ）
                     * 
                     */
                    SetVolumeCommandInput GetSetVolumeInput() const;

                    /**
                     * 设置<del>音量，范围 0~100，默认为 50。</del>（已废弃，请采用 SetRealVolumeInput ）
                     * @param _setVolumeInput <del>音量，范围 0~100，默认为 50。</del>（已废弃，请采用 SetRealVolumeInput ）
                     * 
                     */
                    void SetSetVolumeInput(const SetVolumeCommandInput& _setVolumeInput);

                    /**
                     * 判断参数 SetVolumeInput 是否已赋值
                     * @return SetVolumeInput 是否已赋值
                     * 
                     */
                    bool SetVolumeInputHasBeenSet() const;

                    /**
                     * 获取真实音量，范围 0~100，默认为 50。
                     * @return SetRealVolumeInput 真实音量，范围 0~100，默认为 50。
                     * 
                     */
                    SetRealVolumeCommandInput GetSetRealVolumeInput() const;

                    /**
                     * 设置真实音量，范围 0~100，默认为 50。
                     * @param _setRealVolumeInput 真实音量，范围 0~100，默认为 50。
                     * 
                     */
                    void SetSetRealVolumeInput(const SetRealVolumeCommandInput& _setRealVolumeInput);

                    /**
                     * 判断参数 SetRealVolumeInput 是否已赋值
                     * @return SetRealVolumeInput 是否已赋值
                     * 
                     */
                    bool SetRealVolumeInputHasBeenSet() const;

                private:

                    /**
                     * 机器人Id。
                     */
                    std::string m_robotId;
                    bool m_robotIdHasBeenSet;

                    /**
                     * 状态，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>Destroy：销毁</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 播放列表。
                     */
                    std::vector<std::string> m_playlists;
                    bool m_playlistsHasBeenSet;

                    /**
                     * 当前歌单索引位置。
                     */
                    int64_t m_curIndex;
                    bool m_curIndexHasBeenSet;

                    /**
                     * 播放进度，单位：毫秒。
                     */
                    uint64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 音频参数。
                     */
                    SetAudioParamCommandInput m_setAudioParamInput;
                    bool m_setAudioParamInputHasBeenSet;

                    /**
                     * 进房信息。
                     */
                    JoinRoomInput m_joinRoomInput;
                    bool m_joinRoomInputHasBeenSet;

                    /**
                     * RTC厂商类型，取值有：
<li>TRTC</li>
                     */
                    std::string m_rTCSystem;
                    bool m_rTCSystemHasBeenSet;

                    /**
                     * 播放模式，PlayMode取值有：
<li>RepeatPlaylist：列表循环</li>
<li>Order：顺序播放</li>
<li>RepeatSingle：单曲循环</li>
<li>Shuffle：随机播放</li>
                     */
                    SetPlayModeCommandInput m_setPlayModeInput;
                    bool m_setPlayModeInputHasBeenSet;

                    /**
                     * <del>音量，范围 0~100，默认为 50。</del>（已废弃，请采用 SetRealVolumeInput ）
                     */
                    SetVolumeCommandInput m_setVolumeInput;
                    bool m_setVolumeInputHasBeenSet;

                    /**
                     * 真实音量，范围 0~100，默认为 50。
                     */
                    SetRealVolumeCommandInput m_setRealVolumeInput;
                    bool m_setRealVolumeInputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_KTVROBOTINFO_H_
