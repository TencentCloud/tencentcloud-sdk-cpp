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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTSTREAMINGESTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTSTREAMINGESTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VideoEncodeParams.h>
#include <tencentcloud/trtc/v20190722/model/AudioEncodeParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartStreamIngest请求参数结构体
                */
                class StartStreamIngestRequest : public AbstractModel
                {
                public:
                    StartStreamIngestRequest();
                    ~StartStreamIngestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和TRTC的房间所对应的SdkAppId相同。
                     * @return SdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和TRTC的房间所对应的SdkAppId相同。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和TRTC的房间所对应的SdkAppId相同。
                     * @param _sdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和TRTC的房间所对应的SdkAppId相同。
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
                     * 获取TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，录制的TRTC房间所对应的RoomId。
                     * @return RoomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，录制的TRTC房间所对应的RoomId。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，录制的TRTC房间所对应的RoomId。
                     * @param _roomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，录制的TRTC房间所对应的RoomId。
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
                     * 获取TRTC房间号的类型。
【*注意】必须和录制的房间所对应的RoomId类型相同:
0: 字符串类型的RoomId
1: 32位整型的RoomId（默认）
                     * @return RoomIdType TRTC房间号的类型。
【*注意】必须和录制的房间所对应的RoomId类型相同:
0: 字符串类型的RoomId
1: 32位整型的RoomId（默认）
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置TRTC房间号的类型。
【*注意】必须和录制的房间所对应的RoomId类型相同:
0: 字符串类型的RoomId
1: 32位整型的RoomId（默认）
                     * @param _roomIdType TRTC房间号的类型。
【*注意】必须和录制的房间所对应的RoomId类型相同:
0: 字符串类型的RoomId
1: 32位整型的RoomId（默认）
                     * 
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取输入在线媒体流机器人的UserId，用于进房发起拉流转推任务。
                     * @return UserId 输入在线媒体流机器人的UserId，用于进房发起拉流转推任务。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置输入在线媒体流机器人的UserId，用于进房发起拉流转推任务。
                     * @param _userId 输入在线媒体流机器人的UserId，用于进房发起拉流转推任务。
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
                     * 获取输入在线媒体流机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @return UserSig 输入在线媒体流机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置输入在线媒体流机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @param _userSig 输入在线媒体流机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取源流URL【必填】。如果是视频流，分辨率请保持不变。
                     * @return StreamUrl 源流URL【必填】。如果是视频流，分辨率请保持不变。
                     * 
                     */
                    std::string GetStreamUrl() const;

                    /**
                     * 设置源流URL【必填】。如果是视频流，分辨率请保持不变。
                     * @param _streamUrl 源流URL【必填】。如果是视频流，分辨率请保持不变。
                     * 
                     */
                    void SetStreamUrl(const std::string& _streamUrl);

                    /**
                     * 判断参数 StreamUrl 是否已赋值
                     * @return StreamUrl 是否已赋值
                     * 
                     */
                    bool StreamUrlHasBeenSet() const;

                    /**
                     * 获取TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey] 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。
                     * @return PrivateMapKey TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey] 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。
                     * 
                     */
                    std::string GetPrivateMapKey() const;

                    /**
                     * 设置TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey] 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。
                     * @param _privateMapKey TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey] 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。
                     * 
                     */
                    void SetPrivateMapKey(const std::string& _privateMapKey);

                    /**
                     * 判断参数 PrivateMapKey 是否已赋值
                     * @return PrivateMapKey 是否已赋值
                     * 
                     */
                    bool PrivateMapKeyHasBeenSet() const;

                    /**
                     * 获取【本字段已废弃】视频编码参数。可选，如果不填，保持原始流的参数。
                     * @return VideoEncodeParams 【本字段已废弃】视频编码参数。可选，如果不填，保持原始流的参数。
                     * @deprecated
                     */
                    VideoEncodeParams GetVideoEncodeParams() const;

                    /**
                     * 设置【本字段已废弃】视频编码参数。可选，如果不填，保持原始流的参数。
                     * @param _videoEncodeParams 【本字段已废弃】视频编码参数。可选，如果不填，保持原始流的参数。
                     * @deprecated
                     */
                    void SetVideoEncodeParams(const VideoEncodeParams& _videoEncodeParams);

                    /**
                     * 判断参数 VideoEncodeParams 是否已赋值
                     * @return VideoEncodeParams 是否已赋值
                     * @deprecated
                     */
                    bool VideoEncodeParamsHasBeenSet() const;

                    /**
                     * 获取【本字段已废弃】音频编码参数。可选，如果不填，保持原始流的参数。
                     * @return AudioEncodeParams 【本字段已废弃】音频编码参数。可选，如果不填，保持原始流的参数。
                     * @deprecated
                     */
                    AudioEncodeParams GetAudioEncodeParams() const;

                    /**
                     * 设置【本字段已废弃】音频编码参数。可选，如果不填，保持原始流的参数。
                     * @param _audioEncodeParams 【本字段已废弃】音频编码参数。可选，如果不填，保持原始流的参数。
                     * @deprecated
                     */
                    void SetAudioEncodeParams(const AudioEncodeParams& _audioEncodeParams);

                    /**
                     * 判断参数 AudioEncodeParams 是否已赋值
                     * @return AudioEncodeParams 是否已赋值
                     * @deprecated
                     */
                    bool AudioEncodeParamsHasBeenSet() const;

                    /**
                     * 获取【本字段已废弃，请使用 StreamUrl 字段】源流URL，支持一个地址。
                     * @return SourceUrl 【本字段已废弃，请使用 StreamUrl 字段】源流URL，支持一个地址。
                     * @deprecated
                     */
                    std::vector<std::string> GetSourceUrl() const;

                    /**
                     * 设置【本字段已废弃，请使用 StreamUrl 字段】源流URL，支持一个地址。
                     * @param _sourceUrl 【本字段已废弃，请使用 StreamUrl 字段】源流URL，支持一个地址。
                     * @deprecated
                     */
                    void SetSourceUrl(const std::vector<std::string>& _sourceUrl);

                    /**
                     * 判断参数 SourceUrl 是否已赋值
                     * @return SourceUrl 是否已赋值
                     * @deprecated
                     */
                    bool SourceUrlHasBeenSet() const;

                    /**
                     * 获取指定视频从某个秒时间戳播放
                     * @return SeekSecond 指定视频从某个秒时间戳播放
                     * 
                     */
                    int64_t GetSeekSecond() const;

                    /**
                     * 设置指定视频从某个秒时间戳播放
                     * @param _seekSecond 指定视频从某个秒时间戳播放
                     * 
                     */
                    void SetSeekSecond(const int64_t& _seekSecond);

                    /**
                     * 判断参数 SeekSecond 是否已赋值
                     * @return SeekSecond 是否已赋值
                     * 
                     */
                    bool SeekSecondHasBeenSet() const;

                    /**
                     * 获取开启自动旁路推流，请确认控制台已经开启该功能。
                     * @return AutoPush 开启自动旁路推流，请确认控制台已经开启该功能。
                     * 
                     */
                    bool GetAutoPush() const;

                    /**
                     * 设置开启自动旁路推流，请确认控制台已经开启该功能。
                     * @param _autoPush 开启自动旁路推流，请确认控制台已经开启该功能。
                     * 
                     */
                    void SetAutoPush(const bool& _autoPush);

                    /**
                     * 判断参数 AutoPush 是否已赋值
                     * @return AutoPush 是否已赋值
                     * 
                     */
                    bool AutoPushHasBeenSet() const;

                    /**
                     * 获取循环播放次数, 取值范围[-1, 1000],  默认1次。
 - 0 无效值
 - -1 循环播放, 需要主动调用停止接口或设置MaxDuration

                     * @return RepeatNum 循环播放次数, 取值范围[-1, 1000],  默认1次。
 - 0 无效值
 - -1 循环播放, 需要主动调用停止接口或设置MaxDuration

                     * 
                     */
                    int64_t GetRepeatNum() const;

                    /**
                     * 设置循环播放次数, 取值范围[-1, 1000],  默认1次。
 - 0 无效值
 - -1 循环播放, 需要主动调用停止接口或设置MaxDuration

                     * @param _repeatNum 循环播放次数, 取值范围[-1, 1000],  默认1次。
 - 0 无效值
 - -1 循环播放, 需要主动调用停止接口或设置MaxDuration

                     * 
                     */
                    void SetRepeatNum(const int64_t& _repeatNum);

                    /**
                     * 判断参数 RepeatNum 是否已赋值
                     * @return RepeatNum 是否已赋值
                     * 
                     */
                    bool RepeatNumHasBeenSet() const;

                    /**
                     * 获取循环播放最大时长,仅支持RepeatNum设置-1时生效，取值范围[1, 10080]，单位分钟。
                     * @return MaxDuration 循环播放最大时长,仅支持RepeatNum设置-1时生效，取值范围[1, 10080]，单位分钟。
                     * 
                     */
                    int64_t GetMaxDuration() const;

                    /**
                     * 设置循环播放最大时长,仅支持RepeatNum设置-1时生效，取值范围[1, 10080]，单位分钟。
                     * @param _maxDuration 循环播放最大时长,仅支持RepeatNum设置-1时生效，取值范围[1, 10080]，单位分钟。
                     * 
                     */
                    void SetMaxDuration(const int64_t& _maxDuration);

                    /**
                     * 判断参数 MaxDuration 是否已赋值
                     * @return MaxDuration 是否已赋值
                     * 
                     */
                    bool MaxDurationHasBeenSet() const;

                    /**
                     * 获取音量，取值范围[0, 100]，默认100，表示原音量。
                     * @return Volume 音量，取值范围[0, 100]，默认100，表示原音量。
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置音量，取值范围[0, 100]，默认100，表示原音量。
                     * @param _volume 音量，取值范围[0, 100]，默认100，表示原音量。
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和TRTC的房间所对应的SdkAppId相同。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，录制的TRTC房间所对应的RoomId。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * TRTC房间号的类型。
【*注意】必须和录制的房间所对应的RoomId类型相同:
0: 字符串类型的RoomId
1: 32位整型的RoomId（默认）
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * 输入在线媒体流机器人的UserId，用于进房发起拉流转推任务。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 输入在线媒体流机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * 源流URL【必填】。如果是视频流，分辨率请保持不变。
                     */
                    std::string m_streamUrl;
                    bool m_streamUrlHasBeenSet;

                    /**
                     * TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey] 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。
                     */
                    std::string m_privateMapKey;
                    bool m_privateMapKeyHasBeenSet;

                    /**
                     * 【本字段已废弃】视频编码参数。可选，如果不填，保持原始流的参数。
                     */
                    VideoEncodeParams m_videoEncodeParams;
                    bool m_videoEncodeParamsHasBeenSet;

                    /**
                     * 【本字段已废弃】音频编码参数。可选，如果不填，保持原始流的参数。
                     */
                    AudioEncodeParams m_audioEncodeParams;
                    bool m_audioEncodeParamsHasBeenSet;

                    /**
                     * 【本字段已废弃，请使用 StreamUrl 字段】源流URL，支持一个地址。
                     */
                    std::vector<std::string> m_sourceUrl;
                    bool m_sourceUrlHasBeenSet;

                    /**
                     * 指定视频从某个秒时间戳播放
                     */
                    int64_t m_seekSecond;
                    bool m_seekSecondHasBeenSet;

                    /**
                     * 开启自动旁路推流，请确认控制台已经开启该功能。
                     */
                    bool m_autoPush;
                    bool m_autoPushHasBeenSet;

                    /**
                     * 循环播放次数, 取值范围[-1, 1000],  默认1次。
 - 0 无效值
 - -1 循环播放, 需要主动调用停止接口或设置MaxDuration

                     */
                    int64_t m_repeatNum;
                    bool m_repeatNumHasBeenSet;

                    /**
                     * 循环播放最大时长,仅支持RepeatNum设置-1时生效，取值范围[1, 10080]，单位分钟。
                     */
                    int64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                    /**
                     * 音量，取值范围[0, 100]，默认100，表示原音量。
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTSTREAMINGESTREQUEST_H_
