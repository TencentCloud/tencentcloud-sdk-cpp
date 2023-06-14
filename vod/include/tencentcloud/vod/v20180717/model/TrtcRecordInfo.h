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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRTCRECORDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRTCRECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * TRTC伴生录制信息。
                */
                class TrtcRecordInfo : public AbstractModel
                {
                public:
                    TrtcRecordInfo();
                    ~TrtcRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TRTC 应用 ID。
                     * @return SdkAppId TRTC 应用 ID。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC 应用 ID。
                     * @param _sdkAppId TRTC 应用 ID。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取TRTC 房间 ID。
                     * @return RoomId TRTC 房间 ID。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置TRTC 房间 ID。
                     * @param _roomId TRTC 房间 ID。
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
                     * 获取录制任务 ID。
                     * @return TaskId 录制任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置录制任务 ID。
                     * @param _taskId 录制任务 ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取参与录制的用户 ID 列表。
                     * @return UserIds 参与录制的用户 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置参与录制的用户 ID 列表。
                     * @param _userIds 参与录制的用户 ID 列表。
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * TRTC 应用 ID。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC 房间 ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 录制任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 参与录制的用户 ID 列表。
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRTCRECORDINFO_H_
