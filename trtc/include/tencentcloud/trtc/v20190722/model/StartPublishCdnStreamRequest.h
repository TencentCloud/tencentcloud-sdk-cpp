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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTPUBLISHCDNSTREAMREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTPUBLISHCDNSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AgentParams.h>
#include <tencentcloud/trtc/v20190722/model/McuAudioParams.h>
#include <tencentcloud/trtc/v20190722/model/McuVideoParams.h>
#include <tencentcloud/trtc/v20190722/model/SingleSubscribeParams.h>
#include <tencentcloud/trtc/v20190722/model/McuPublishCdnParam.h>
#include <tencentcloud/trtc/v20190722/model/McuSeiParams.h>
#include <tencentcloud/trtc/v20190722/model/McuFeedBackRoomParams.h>
#include <tencentcloud/trtc/v20190722/model/McuRecordParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartPublishCdnStream请求参数结构体
                */
                class StartPublishCdnStreamRequest : public AbstractModel
                {
                public:
                    StartPublishCdnStreamRequest();
                    ~StartPublishCdnStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转推的房间所对应的SdkAppId相同。
                     * @return SdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转推的房间所对应的SdkAppId相同。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转推的房间所对应的SdkAppId相同。
                     * @param _sdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转推的房间所对应的SdkAppId相同。
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
                     * 获取主房间信息RoomId，转推的TRTC房间所对应的RoomId。
                     * @return RoomId 主房间信息RoomId，转推的TRTC房间所对应的RoomId。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置主房间信息RoomId，转推的TRTC房间所对应的RoomId。
                     * @param _roomId 主房间信息RoomId，转推的TRTC房间所对应的RoomId。
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
                     * 获取主房间信息RoomType，必须和转推的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。
                     * @return RoomIdType 主房间信息RoomType，必须和转推的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置主房间信息RoomType，必须和转推的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。
                     * @param _roomIdType 主房间信息RoomType，必须和转推的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。
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
                     * 获取转推服务加入TRTC房间的机器人参数。
                     * @return AgentParams 转推服务加入TRTC房间的机器人参数。
                     * 
                     */
                    AgentParams GetAgentParams() const;

                    /**
                     * 设置转推服务加入TRTC房间的机器人参数。
                     * @param _agentParams 转推服务加入TRTC房间的机器人参数。
                     * 
                     */
                    void SetAgentParams(const AgentParams& _agentParams);

                    /**
                     * 判断参数 AgentParams 是否已赋值
                     * @return AgentParams 是否已赋值
                     * 
                     */
                    bool AgentParamsHasBeenSet() const;

                    /**
                     * 获取是否转码，0表示无需转码，1表示需要转码。是否收取转码费是由WithTranscoding参数决定的，WithTranscoding为0，表示旁路转推，不会收取转码费用，WithTranscoding为1，表示混流转推，会收取转码费用。
注：混流是必须转码，这个参数需设置为1。
                     * @return WithTranscoding 是否转码，0表示无需转码，1表示需要转码。是否收取转码费是由WithTranscoding参数决定的，WithTranscoding为0，表示旁路转推，不会收取转码费用，WithTranscoding为1，表示混流转推，会收取转码费用。
注：混流是必须转码，这个参数需设置为1。
                     * 
                     */
                    uint64_t GetWithTranscoding() const;

                    /**
                     * 设置是否转码，0表示无需转码，1表示需要转码。是否收取转码费是由WithTranscoding参数决定的，WithTranscoding为0，表示旁路转推，不会收取转码费用，WithTranscoding为1，表示混流转推，会收取转码费用。
注：混流是必须转码，这个参数需设置为1。
                     * @param _withTranscoding 是否转码，0表示无需转码，1表示需要转码。是否收取转码费是由WithTranscoding参数决定的，WithTranscoding为0，表示旁路转推，不会收取转码费用，WithTranscoding为1，表示混流转推，会收取转码费用。
注：混流是必须转码，这个参数需设置为1。
                     * 
                     */
                    void SetWithTranscoding(const uint64_t& _withTranscoding);

                    /**
                     * 判断参数 WithTranscoding 是否已赋值
                     * @return WithTranscoding 是否已赋值
                     * 
                     */
                    bool WithTranscodingHasBeenSet() const;

                    /**
                     * 获取转推流的音频编码参数。由于音频是必转码的（不会收取转码费用），所以启动任务的时候，必须填写。
                     * @return AudioParams 转推流的音频编码参数。由于音频是必转码的（不会收取转码费用），所以启动任务的时候，必须填写。
                     * 
                     */
                    McuAudioParams GetAudioParams() const;

                    /**
                     * 设置转推流的音频编码参数。由于音频是必转码的（不会收取转码费用），所以启动任务的时候，必须填写。
                     * @param _audioParams 转推流的音频编码参数。由于音频是必转码的（不会收取转码费用），所以启动任务的时候，必须填写。
                     * 
                     */
                    void SetAudioParams(const McuAudioParams& _audioParams);

                    /**
                     * 判断参数 AudioParams 是否已赋值
                     * @return AudioParams 是否已赋值
                     * 
                     */
                    bool AudioParamsHasBeenSet() const;

                    /**
                     * 获取转推流的视频编码参数，不填表示纯音频转推。
                     * @return VideoParams 转推流的视频编码参数，不填表示纯音频转推。
                     * 
                     */
                    McuVideoParams GetVideoParams() const;

                    /**
                     * 设置转推流的视频编码参数，不填表示纯音频转推。
                     * @param _videoParams 转推流的视频编码参数，不填表示纯音频转推。
                     * 
                     */
                    void SetVideoParams(const McuVideoParams& _videoParams);

                    /**
                     * 判断参数 VideoParams 是否已赋值
                     * @return VideoParams 是否已赋值
                     * 
                     */
                    bool VideoParamsHasBeenSet() const;

                    /**
                     * 获取需要单流旁路转推的用户上行参数，单流旁路转推时，WithTranscoding需要设置为0。
                     * @return SingleSubscribeParams 需要单流旁路转推的用户上行参数，单流旁路转推时，WithTranscoding需要设置为0。
                     * 
                     */
                    SingleSubscribeParams GetSingleSubscribeParams() const;

                    /**
                     * 设置需要单流旁路转推的用户上行参数，单流旁路转推时，WithTranscoding需要设置为0。
                     * @param _singleSubscribeParams 需要单流旁路转推的用户上行参数，单流旁路转推时，WithTranscoding需要设置为0。
                     * 
                     */
                    void SetSingleSubscribeParams(const SingleSubscribeParams& _singleSubscribeParams);

                    /**
                     * 判断参数 SingleSubscribeParams 是否已赋值
                     * @return SingleSubscribeParams 是否已赋值
                     * 
                     */
                    bool SingleSubscribeParamsHasBeenSet() const;

                    /**
                     * 获取转推的CDN参数，一个任务最多支持10个推流URL。和回推房间参数必须要有一个。
                     * @return PublishCdnParams 转推的CDN参数，一个任务最多支持10个推流URL。和回推房间参数必须要有一个。
                     * 
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置转推的CDN参数，一个任务最多支持10个推流URL。和回推房间参数必须要有一个。
                     * @param _publishCdnParams 转推的CDN参数，一个任务最多支持10个推流URL。和回推房间参数必须要有一个。
                     * 
                     */
                    void SetPublishCdnParams(const std::vector<McuPublishCdnParam>& _publishCdnParams);

                    /**
                     * 判断参数 PublishCdnParams 是否已赋值
                     * @return PublishCdnParams 是否已赋值
                     * 
                     */
                    bool PublishCdnParamsHasBeenSet() const;

                    /**
                     * 获取混流SEI参数
                     * @return SeiParams 混流SEI参数
                     * 
                     */
                    McuSeiParams GetSeiParams() const;

                    /**
                     * 设置混流SEI参数
                     * @param _seiParams 混流SEI参数
                     * 
                     */
                    void SetSeiParams(const McuSeiParams& _seiParams);

                    /**
                     * 判断参数 SeiParams 是否已赋值
                     * @return SeiParams 是否已赋值
                     * 
                     */
                    bool SeiParamsHasBeenSet() const;

                    /**
                     * 获取回推房间信息，一个任务最多支持回推10个房间，和转推CDN参数必须要有一个。注：回推房间需使用10.4及以上SDK版本，如您有需求，请联系腾讯云技术支持。
                     * @return FeedBackRoomParams 回推房间信息，一个任务最多支持回推10个房间，和转推CDN参数必须要有一个。注：回推房间需使用10.4及以上SDK版本，如您有需求，请联系腾讯云技术支持。
                     * 
                     */
                    std::vector<McuFeedBackRoomParams> GetFeedBackRoomParams() const;

                    /**
                     * 设置回推房间信息，一个任务最多支持回推10个房间，和转推CDN参数必须要有一个。注：回推房间需使用10.4及以上SDK版本，如您有需求，请联系腾讯云技术支持。
                     * @param _feedBackRoomParams 回推房间信息，一个任务最多支持回推10个房间，和转推CDN参数必须要有一个。注：回推房间需使用10.4及以上SDK版本，如您有需求，请联系腾讯云技术支持。
                     * 
                     */
                    void SetFeedBackRoomParams(const std::vector<McuFeedBackRoomParams>& _feedBackRoomParams);

                    /**
                     * 判断参数 FeedBackRoomParams 是否已赋值
                     * @return FeedBackRoomParams 是否已赋值
                     * 
                     */
                    bool FeedBackRoomParamsHasBeenSet() const;

                    /**
                     * 获取转推录制参数，[参考文档](https://cloud.tencent.com/document/product/647/111748)。
                     * @return RecordParams 转推录制参数，[参考文档](https://cloud.tencent.com/document/product/647/111748)。
                     * 
                     */
                    McuRecordParams GetRecordParams() const;

                    /**
                     * 设置转推录制参数，[参考文档](https://cloud.tencent.com/document/product/647/111748)。
                     * @param _recordParams 转推录制参数，[参考文档](https://cloud.tencent.com/document/product/647/111748)。
                     * 
                     */
                    void SetRecordParams(const McuRecordParams& _recordParams);

                    /**
                     * 判断参数 RecordParams 是否已赋值
                     * @return RecordParams 是否已赋值
                     * 
                     */
                    bool RecordParamsHasBeenSet() const;

                private:

                    /**
                     * TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转推的房间所对应的SdkAppId相同。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 主房间信息RoomId，转推的TRTC房间所对应的RoomId。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 主房间信息RoomType，必须和转推的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * 转推服务加入TRTC房间的机器人参数。
                     */
                    AgentParams m_agentParams;
                    bool m_agentParamsHasBeenSet;

                    /**
                     * 是否转码，0表示无需转码，1表示需要转码。是否收取转码费是由WithTranscoding参数决定的，WithTranscoding为0，表示旁路转推，不会收取转码费用，WithTranscoding为1，表示混流转推，会收取转码费用。
注：混流是必须转码，这个参数需设置为1。
                     */
                    uint64_t m_withTranscoding;
                    bool m_withTranscodingHasBeenSet;

                    /**
                     * 转推流的音频编码参数。由于音频是必转码的（不会收取转码费用），所以启动任务的时候，必须填写。
                     */
                    McuAudioParams m_audioParams;
                    bool m_audioParamsHasBeenSet;

                    /**
                     * 转推流的视频编码参数，不填表示纯音频转推。
                     */
                    McuVideoParams m_videoParams;
                    bool m_videoParamsHasBeenSet;

                    /**
                     * 需要单流旁路转推的用户上行参数，单流旁路转推时，WithTranscoding需要设置为0。
                     */
                    SingleSubscribeParams m_singleSubscribeParams;
                    bool m_singleSubscribeParamsHasBeenSet;

                    /**
                     * 转推的CDN参数，一个任务最多支持10个推流URL。和回推房间参数必须要有一个。
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                    /**
                     * 混流SEI参数
                     */
                    McuSeiParams m_seiParams;
                    bool m_seiParamsHasBeenSet;

                    /**
                     * 回推房间信息，一个任务最多支持回推10个房间，和转推CDN参数必须要有一个。注：回推房间需使用10.4及以上SDK版本，如您有需求，请联系腾讯云技术支持。
                     */
                    std::vector<McuFeedBackRoomParams> m_feedBackRoomParams;
                    bool m_feedBackRoomParamsHasBeenSet;

                    /**
                     * 转推录制参数，[参考文档](https://cloud.tencent.com/document/product/647/111748)。
                     */
                    McuRecordParams m_recordParams;
                    bool m_recordParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTPUBLISHCDNSTREAMREQUEST_H_
