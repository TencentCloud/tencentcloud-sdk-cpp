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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_APPLYCHORUSREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_APPLYCHORUSREQUEST_H_

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
                * ApplyChorus请求参数结构体
                */
                class ApplyChorusRequest : public AbstractModel
                {
                public:
                    ApplyChorusRequest();
                    ~ApplyChorusRequest() = default;
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
                     * 获取房间号。
                     * @return RoomId 房间号。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间号。
                     * @param _roomId 房间号。
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
                     * 获取歌曲 Id。
                     * @return MusicId 歌曲 Id。
                     * 
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置歌曲 Id。
                     * @param _musicId 歌曲 Id。
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
                     * 获取最大合唱人数，默认值为 8，最大值为 20。
                     * @return MaxChorusNum 最大合唱人数，默认值为 8，最大值为 20。
                     * 
                     */
                    uint64_t GetMaxChorusNum() const;

                    /**
                     * 设置最大合唱人数，默认值为 8，最大值为 20。
                     * @param _maxChorusNum 最大合唱人数，默认值为 8，最大值为 20。
                     * 
                     */
                    void SetMaxChorusNum(const uint64_t& _maxChorusNum);

                    /**
                     * 判断参数 MaxChorusNum 是否已赋值
                     * @return MaxChorusNum 是否已赋值
                     * 
                     */
                    bool MaxChorusNumHasBeenSet() const;

                    /**
                     * 获取合唱用户标识列表。
                     * @return ChorusUserIds 合唱用户标识列表。
                     * 
                     */
                    std::vector<std::string> GetChorusUserIds() const;

                    /**
                     * 设置合唱用户标识列表。
                     * @param _chorusUserIds 合唱用户标识列表。
                     * 
                     */
                    void SetChorusUserIds(const std::vector<std::string>& _chorusUserIds);

                    /**
                     * 判断参数 ChorusUserIds 是否已赋值
                     * @return ChorusUserIds 是否已赋值
                     * 
                     */
                    bool ChorusUserIdsHasBeenSet() const;

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
                     * 房间号。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 歌曲 Id。
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * 最大合唱人数，默认值为 8，最大值为 20。
                     */
                    uint64_t m_maxChorusNum;
                    bool m_maxChorusNumHasBeenSet;

                    /**
                     * 合唱用户标识列表。
                     */
                    std::vector<std::string> m_chorusUserIds;
                    bool m_chorusUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_APPLYCHORUSREQUEST_H_
