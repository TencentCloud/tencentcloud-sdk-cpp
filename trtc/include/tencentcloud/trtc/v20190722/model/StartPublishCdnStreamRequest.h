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
                     * 获取<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和转推的房间所对应的SdkAppId相同。</p>
                     * @return SdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和转推的房间所对应的SdkAppId相同。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和转推的房间所对应的SdkAppId相同。</p>
                     * @param _sdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和转推的房间所对应的SdkAppId相同。</p>
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
                     * 获取<p>主房间信息RoomId，转推的TRTC房间所对应的RoomId。</p>
                     * @return RoomId <p>主房间信息RoomId，转推的TRTC房间所对应的RoomId。</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>主房间信息RoomId，转推的TRTC房间所对应的RoomId。</p>
                     * @param _roomId <p>主房间信息RoomId，转推的TRTC房间所对应的RoomId。</p>
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
                     * 获取<p>主房间信息RoomType，必须和转推的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p>
                     * @return RoomIdType <p>主房间信息RoomType，必须和转推的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p>
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置<p>主房间信息RoomType，必须和转推的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p>
                     * @param _roomIdType <p>主房间信息RoomType，必须和转推的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p>
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
                     * 获取<p>转推服务加入TRTC房间的机器人参数。</p>
                     * @return AgentParams <p>转推服务加入TRTC房间的机器人参数。</p>
                     * 
                     */
                    AgentParams GetAgentParams() const;

                    /**
                     * 设置<p>转推服务加入TRTC房间的机器人参数。</p>
                     * @param _agentParams <p>转推服务加入TRTC房间的机器人参数。</p>
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
                     * 获取<p>是否转码，0表示无需转码，1表示需要转码。<br>WithTranscoding为0，表示旁路转推，默认不转码；WithTranscoding为1，表示混流转推，此时一定会转码，并收取转码费用。<br>注：<br>1，混流是必须转码的，这个参数需设置为1。<br>2，WithTranscoding=0时，视频输出Codec默认跟随上行视频Codec，如果上行视频Codec发生变化，CDN会断流重推。</p>
                     * @return WithTranscoding <p>是否转码，0表示无需转码，1表示需要转码。<br>WithTranscoding为0，表示旁路转推，默认不转码；WithTranscoding为1，表示混流转推，此时一定会转码，并收取转码费用。<br>注：<br>1，混流是必须转码的，这个参数需设置为1。<br>2，WithTranscoding=0时，视频输出Codec默认跟随上行视频Codec，如果上行视频Codec发生变化，CDN会断流重推。</p>
                     * 
                     */
                    uint64_t GetWithTranscoding() const;

                    /**
                     * 设置<p>是否转码，0表示无需转码，1表示需要转码。<br>WithTranscoding为0，表示旁路转推，默认不转码；WithTranscoding为1，表示混流转推，此时一定会转码，并收取转码费用。<br>注：<br>1，混流是必须转码的，这个参数需设置为1。<br>2，WithTranscoding=0时，视频输出Codec默认跟随上行视频Codec，如果上行视频Codec发生变化，CDN会断流重推。</p>
                     * @param _withTranscoding <p>是否转码，0表示无需转码，1表示需要转码。<br>WithTranscoding为0，表示旁路转推，默认不转码；WithTranscoding为1，表示混流转推，此时一定会转码，并收取转码费用。<br>注：<br>1，混流是必须转码的，这个参数需设置为1。<br>2，WithTranscoding=0时，视频输出Codec默认跟随上行视频Codec，如果上行视频Codec发生变化，CDN会断流重推。</p>
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
                     * 获取<p>转推流的音频编码参数。由于音频是必转码的（不会收取转码费用），所以启动任务的时候，必须填写。</p>
                     * @return AudioParams <p>转推流的音频编码参数。由于音频是必转码的（不会收取转码费用），所以启动任务的时候，必须填写。</p>
                     * 
                     */
                    McuAudioParams GetAudioParams() const;

                    /**
                     * 设置<p>转推流的音频编码参数。由于音频是必转码的（不会收取转码费用），所以启动任务的时候，必须填写。</p>
                     * @param _audioParams <p>转推流的音频编码参数。由于音频是必转码的（不会收取转码费用），所以启动任务的时候，必须填写。</p>
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
                     * 获取<p>转推流的视频编码参数，不填表示纯音频转推。</p>
                     * @return VideoParams <p>转推流的视频编码参数，不填表示纯音频转推。</p>
                     * 
                     */
                    McuVideoParams GetVideoParams() const;

                    /**
                     * 设置<p>转推流的视频编码参数，不填表示纯音频转推。</p>
                     * @param _videoParams <p>转推流的视频编码参数，不填表示纯音频转推。</p>
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
                     * 获取<p>需要单流旁路转推的用户上行参数，单流旁路转推时，WithTranscoding需要设置为0。</p>
                     * @return SingleSubscribeParams <p>需要单流旁路转推的用户上行参数，单流旁路转推时，WithTranscoding需要设置为0。</p>
                     * 
                     */
                    SingleSubscribeParams GetSingleSubscribeParams() const;

                    /**
                     * 设置<p>需要单流旁路转推的用户上行参数，单流旁路转推时，WithTranscoding需要设置为0。</p>
                     * @param _singleSubscribeParams <p>需要单流旁路转推的用户上行参数，单流旁路转推时，WithTranscoding需要设置为0。</p>
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
                     * 获取<p>转推的CDN参数，一个任务最多支持10个推流URL。和回推房间参数必须要有一个。</p>
                     * @return PublishCdnParams <p>转推的CDN参数，一个任务最多支持10个推流URL。和回推房间参数必须要有一个。</p>
                     * 
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置<p>转推的CDN参数，一个任务最多支持10个推流URL。和回推房间参数必须要有一个。</p>
                     * @param _publishCdnParams <p>转推的CDN参数，一个任务最多支持10个推流URL。和回推房间参数必须要有一个。</p>
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
                     * 获取<p>混流SEI参数</p>
                     * @return SeiParams <p>混流SEI参数</p>
                     * 
                     */
                    McuSeiParams GetSeiParams() const;

                    /**
                     * 设置<p>混流SEI参数</p>
                     * @param _seiParams <p>混流SEI参数</p>
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
                     * 获取<p>回推房间信息，一个任务最多支持回推10个房间，和转推CDN参数必须要有一个。注：回推房间需使用10.4及以上SDK版本，如您有需求，请联系腾讯云技术支持。</p>
                     * @return FeedBackRoomParams <p>回推房间信息，一个任务最多支持回推10个房间，和转推CDN参数必须要有一个。注：回推房间需使用10.4及以上SDK版本，如您有需求，请联系腾讯云技术支持。</p>
                     * 
                     */
                    std::vector<McuFeedBackRoomParams> GetFeedBackRoomParams() const;

                    /**
                     * 设置<p>回推房间信息，一个任务最多支持回推10个房间，和转推CDN参数必须要有一个。注：回推房间需使用10.4及以上SDK版本，如您有需求，请联系腾讯云技术支持。</p>
                     * @param _feedBackRoomParams <p>回推房间信息，一个任务最多支持回推10个房间，和转推CDN参数必须要有一个。注：回推房间需使用10.4及以上SDK版本，如您有需求，请联系腾讯云技术支持。</p>
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
                     * 获取<p>转推录制参数，<a href="https://cloud.tencent.com/document/product/647/111748">参考文档</a>。</p>
                     * @return RecordParams <p>转推录制参数，<a href="https://cloud.tencent.com/document/product/647/111748">参考文档</a>。</p>
                     * 
                     */
                    McuRecordParams GetRecordParams() const;

                    /**
                     * 设置<p>转推录制参数，<a href="https://cloud.tencent.com/document/product/647/111748">参考文档</a>。</p>
                     * @param _recordParams <p>转推录制参数，<a href="https://cloud.tencent.com/document/product/647/111748">参考文档</a>。</p>
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
                     * <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和转推的房间所对应的SdkAppId相同。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>主房间信息RoomId，转推的TRTC房间所对应的RoomId。</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>主房间信息RoomType，必须和转推的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p>
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * <p>转推服务加入TRTC房间的机器人参数。</p>
                     */
                    AgentParams m_agentParams;
                    bool m_agentParamsHasBeenSet;

                    /**
                     * <p>是否转码，0表示无需转码，1表示需要转码。<br>WithTranscoding为0，表示旁路转推，默认不转码；WithTranscoding为1，表示混流转推，此时一定会转码，并收取转码费用。<br>注：<br>1，混流是必须转码的，这个参数需设置为1。<br>2，WithTranscoding=0时，视频输出Codec默认跟随上行视频Codec，如果上行视频Codec发生变化，CDN会断流重推。</p>
                     */
                    uint64_t m_withTranscoding;
                    bool m_withTranscodingHasBeenSet;

                    /**
                     * <p>转推流的音频编码参数。由于音频是必转码的（不会收取转码费用），所以启动任务的时候，必须填写。</p>
                     */
                    McuAudioParams m_audioParams;
                    bool m_audioParamsHasBeenSet;

                    /**
                     * <p>转推流的视频编码参数，不填表示纯音频转推。</p>
                     */
                    McuVideoParams m_videoParams;
                    bool m_videoParamsHasBeenSet;

                    /**
                     * <p>需要单流旁路转推的用户上行参数，单流旁路转推时，WithTranscoding需要设置为0。</p>
                     */
                    SingleSubscribeParams m_singleSubscribeParams;
                    bool m_singleSubscribeParamsHasBeenSet;

                    /**
                     * <p>转推的CDN参数，一个任务最多支持10个推流URL。和回推房间参数必须要有一个。</p>
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                    /**
                     * <p>混流SEI参数</p>
                     */
                    McuSeiParams m_seiParams;
                    bool m_seiParamsHasBeenSet;

                    /**
                     * <p>回推房间信息，一个任务最多支持回推10个房间，和转推CDN参数必须要有一个。注：回推房间需使用10.4及以上SDK版本，如您有需求，请联系腾讯云技术支持。</p>
                     */
                    std::vector<McuFeedBackRoomParams> m_feedBackRoomParams;
                    bool m_feedBackRoomParamsHasBeenSet;

                    /**
                     * <p>转推录制参数，<a href="https://cloud.tencent.com/document/product/647/111748">参考文档</a>。</p>
                     */
                    McuRecordParams m_recordParams;
                    bool m_recordParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTPUBLISHCDNSTREAMREQUEST_H_
