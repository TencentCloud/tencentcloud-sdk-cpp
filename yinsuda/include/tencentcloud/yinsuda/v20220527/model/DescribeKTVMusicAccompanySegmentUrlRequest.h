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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVMUSICACCOMPANYSEGMENTURLREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVMUSICACCOMPANYSEGMENTURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * DescribeKTVMusicAccompanySegmentUrl请求参数结构体
                */
                class DescribeKTVMusicAccompanySegmentUrlRequest : public AbstractModel
                {
                public:
                    DescribeKTVMusicAccompanySegmentUrlRequest();
                    ~DescribeKTVMusicAccompanySegmentUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取用户标识。
                     * @return UserId 用户标识。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户标识。
                     * @param _userId 用户标识。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取歌曲 Id 。
                     * @return MusicId 歌曲 Id 。
                     * 
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置歌曲 Id 。
                     * @param _musicId 歌曲 Id 。
                     * 
                     */
                    void SetMusicId(const std::string& _musicId);

                    /**
                     * 判断参数 MusicId 是否已赋值
                     * @return MusicId 是否已赋值
                     * 
                     */
                    bool MusicIdHasBeenSet() const;

                    /**
                     * 获取播放场景。默认为Chat
<li>Live：直播</li><li>Chat：语聊</li>
                     * @return PlayScene 播放场景。默认为Chat
<li>Live：直播</li><li>Chat：语聊</li>
                     * 
                     */
                    std::string GetPlayScene() const;

                    /**
                     * 设置播放场景。默认为Chat
<li>Live：直播</li><li>Chat：语聊</li>
                     * @param _playScene 播放场景。默认为Chat
<li>Live：直播</li><li>Chat：语聊</li>
                     * 
                     */
                    void SetPlayScene(const std::string& _playScene);

                    /**
                     * 判断参数 PlayScene 是否已赋值
                     * @return PlayScene 是否已赋值
                     * 
                     */
                    bool PlaySceneHasBeenSet() const;

                    /**
                     * 获取房间Id
                     * @return RoomId 房间Id
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间Id
                     * @param _roomId 房间Id
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 用户标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 歌曲 Id 。
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * 播放场景。默认为Chat
<li>Live：直播</li><li>Chat：语聊</li>
                     */
                    std::string m_playScene;
                    bool m_playSceneHasBeenSet;

                    /**
                     * 房间Id
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVMUSICACCOMPANYSEGMENTURLREQUEST_H_
