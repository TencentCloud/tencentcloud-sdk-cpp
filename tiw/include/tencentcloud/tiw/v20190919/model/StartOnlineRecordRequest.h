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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_STARTONLINERECORDREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_STARTONLINERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Concat.h>
#include <tencentcloud/tiw/v20190919/model/Whiteboard.h>
#include <tencentcloud/tiw/v20190919/model/MixStream.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * StartOnlineRecord请求参数结构体
                */
                class StartOnlineRecordRequest : public AbstractModel
                {
                public:
                    StartOnlineRecordRequest();
                    ~StartOnlineRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param SdkAppId 客户的SdkAppId
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取需要录制的房间号
                     * @return RoomId 需要录制的房间号
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置需要录制的房间号
                     * @param RoomId 需要录制的房间号
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取用于实时录制服务进房的用户Id，格式为`tic_record_user_${RoomId}_${Random}`，其中 `${RoomId}` 与录制房间号对应，`${Random}`为一个随机字符串。
实时录制服务会使用这个用户Id进房进行录制房间内的音视频与白板，为了防止进房冲突，请保证此 用户Id不重复
                     * @return RecordUserId 用于实时录制服务进房的用户Id，格式为`tic_record_user_${RoomId}_${Random}`，其中 `${RoomId}` 与录制房间号对应，`${Random}`为一个随机字符串。
实时录制服务会使用这个用户Id进房进行录制房间内的音视频与白板，为了防止进房冲突，请保证此 用户Id不重复
                     */
                    std::string GetRecordUserId() const;

                    /**
                     * 设置用于实时录制服务进房的用户Id，格式为`tic_record_user_${RoomId}_${Random}`，其中 `${RoomId}` 与录制房间号对应，`${Random}`为一个随机字符串。
实时录制服务会使用这个用户Id进房进行录制房间内的音视频与白板，为了防止进房冲突，请保证此 用户Id不重复
                     * @param RecordUserId 用于实时录制服务进房的用户Id，格式为`tic_record_user_${RoomId}_${Random}`，其中 `${RoomId}` 与录制房间号对应，`${Random}`为一个随机字符串。
实时录制服务会使用这个用户Id进房进行录制房间内的音视频与白板，为了防止进房冲突，请保证此 用户Id不重复
                     */
                    void SetRecordUserId(const std::string& _recordUserId);

                    /**
                     * 判断参数 RecordUserId 是否已赋值
                     * @return RecordUserId 是否已赋值
                     */
                    bool RecordUserIdHasBeenSet() const;

                    /**
                     * 获取与RecordUserId对应的签名
                     * @return RecordUserSig 与RecordUserId对应的签名
                     */
                    std::string GetRecordUserSig() const;

                    /**
                     * 设置与RecordUserId对应的签名
                     * @param RecordUserSig 与RecordUserId对应的签名
                     */
                    void SetRecordUserSig(const std::string& _recordUserSig);

                    /**
                     * 判断参数 RecordUserSig 是否已赋值
                     * @return RecordUserSig 是否已赋值
                     */
                    bool RecordUserSigHasBeenSet() const;

                    /**
                     * 获取白板的 IM 群组 Id，默认同房间号
                     * @return GroupId 白板的 IM 群组 Id，默认同房间号
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置白板的 IM 群组 Id，默认同房间号
                     * @param GroupId 白板的 IM 群组 Id，默认同房间号
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取实时录制视频拼接参数
                     * @return Concat 实时录制视频拼接参数
                     */
                    Concat GetConcat() const;

                    /**
                     * 设置实时录制视频拼接参数
                     * @param Concat 实时录制视频拼接参数
                     */
                    void SetConcat(const Concat& _concat);

                    /**
                     * 判断参数 Concat 是否已赋值
                     * @return Concat 是否已赋值
                     */
                    bool ConcatHasBeenSet() const;

                    /**
                     * 获取实时录制白板参数，例如白板宽高等
                     * @return Whiteboard 实时录制白板参数，例如白板宽高等
                     */
                    Whiteboard GetWhiteboard() const;

                    /**
                     * 设置实时录制白板参数，例如白板宽高等
                     * @param Whiteboard 实时录制白板参数，例如白板宽高等
                     */
                    void SetWhiteboard(const Whiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     */
                    bool WhiteboardHasBeenSet() const;

                    /**
                     * 获取实时录制混流参数
特别说明：
1. 混流功能需要根据额外开通， 请联系腾讯云互动白板客服人员
2. 使用混流功能，必须提供 Extras 参数，且 Extras 参数中必须包含 "MIX_STREAM"
                     * @return MixStream 实时录制混流参数
特别说明：
1. 混流功能需要根据额外开通， 请联系腾讯云互动白板客服人员
2. 使用混流功能，必须提供 Extras 参数，且 Extras 参数中必须包含 "MIX_STREAM"
                     */
                    MixStream GetMixStream() const;

                    /**
                     * 设置实时录制混流参数
特别说明：
1. 混流功能需要根据额外开通， 请联系腾讯云互动白板客服人员
2. 使用混流功能，必须提供 Extras 参数，且 Extras 参数中必须包含 "MIX_STREAM"
                     * @param MixStream 实时录制混流参数
特别说明：
1. 混流功能需要根据额外开通， 请联系腾讯云互动白板客服人员
2. 使用混流功能，必须提供 Extras 参数，且 Extras 参数中必须包含 "MIX_STREAM"
                     */
                    void SetMixStream(const MixStream& _mixStream);

                    /**
                     * 判断参数 MixStream 是否已赋值
                     * @return MixStream 是否已赋值
                     */
                    bool MixStreamHasBeenSet() const;

                    /**
                     * 获取使用到的高级功能列表
可以选值列表：
MIX_STREAM - 混流功能
                     * @return Extras 使用到的高级功能列表
可以选值列表：
MIX_STREAM - 混流功能
                     */
                    std::vector<std::string> GetExtras() const;

                    /**
                     * 设置使用到的高级功能列表
可以选值列表：
MIX_STREAM - 混流功能
                     * @param Extras 使用到的高级功能列表
可以选值列表：
MIX_STREAM - 混流功能
                     */
                    void SetExtras(const std::vector<std::string>& _extras);

                    /**
                     * 判断参数 Extras 是否已赋值
                     * @return Extras 是否已赋值
                     */
                    bool ExtrasHasBeenSet() const;

                    /**
                     * 获取是否需要在结果回调中返回各路流的纯音频录制文件，文件格式为mp3
                     * @return AudioFileNeeded 是否需要在结果回调中返回各路流的纯音频录制文件，文件格式为mp3
                     */
                    bool GetAudioFileNeeded() const;

                    /**
                     * 设置是否需要在结果回调中返回各路流的纯音频录制文件，文件格式为mp3
                     * @param AudioFileNeeded 是否需要在结果回调中返回各路流的纯音频录制文件，文件格式为mp3
                     */
                    void SetAudioFileNeeded(const bool& _audioFileNeeded);

                    /**
                     * 判断参数 AudioFileNeeded 是否已赋值
                     * @return AudioFileNeeded 是否已赋值
                     */
                    bool AudioFileNeededHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需要录制的房间号
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 用于实时录制服务进房的用户Id，格式为`tic_record_user_${RoomId}_${Random}`，其中 `${RoomId}` 与录制房间号对应，`${Random}`为一个随机字符串。
实时录制服务会使用这个用户Id进房进行录制房间内的音视频与白板，为了防止进房冲突，请保证此 用户Id不重复
                     */
                    std::string m_recordUserId;
                    bool m_recordUserIdHasBeenSet;

                    /**
                     * 与RecordUserId对应的签名
                     */
                    std::string m_recordUserSig;
                    bool m_recordUserSigHasBeenSet;

                    /**
                     * 白板的 IM 群组 Id，默认同房间号
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 实时录制视频拼接参数
                     */
                    Concat m_concat;
                    bool m_concatHasBeenSet;

                    /**
                     * 实时录制白板参数，例如白板宽高等
                     */
                    Whiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                    /**
                     * 实时录制混流参数
特别说明：
1. 混流功能需要根据额外开通， 请联系腾讯云互动白板客服人员
2. 使用混流功能，必须提供 Extras 参数，且 Extras 参数中必须包含 "MIX_STREAM"
                     */
                    MixStream m_mixStream;
                    bool m_mixStreamHasBeenSet;

                    /**
                     * 使用到的高级功能列表
可以选值列表：
MIX_STREAM - 混流功能
                     */
                    std::vector<std::string> m_extras;
                    bool m_extrasHasBeenSet;

                    /**
                     * 是否需要在结果回调中返回各路流的纯音频录制文件，文件格式为mp3
                     */
                    bool m_audioFileNeeded;
                    bool m_audioFileNeededHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_STARTONLINERECORDREQUEST_H_
