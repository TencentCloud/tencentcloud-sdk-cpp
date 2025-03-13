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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEPUBLISHCDNSTREAMREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEPUBLISHCDNSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/McuAudioParams.h>
#include <tencentcloud/trtc/v20190722/model/McuVideoParams.h>
#include <tencentcloud/trtc/v20190722/model/SingleSubscribeParams.h>
#include <tencentcloud/trtc/v20190722/model/McuPublishCdnParam.h>
#include <tencentcloud/trtc/v20190722/model/McuSeiParams.h>
#include <tencentcloud/trtc/v20190722/model/McuFeedBackRoomParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * UpdatePublishCdnStream请求参数结构体
                */
                class UpdatePublishCdnStreamRequest : public AbstractModel
                {
                public:
                    UpdatePublishCdnStreamRequest();
                    ~UpdatePublishCdnStreamRequest() = default;
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
                     * 获取唯一标识转推任务。
                     * @return TaskId 唯一标识转推任务。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置唯一标识转推任务。
                     * @param _taskId 唯一标识转推任务。
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
                     * 获取客户保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。
                     * @return SequenceNumber 客户保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。
                     * 
                     */
                    uint64_t GetSequenceNumber() const;

                    /**
                     * 设置客户保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。
                     * @param _sequenceNumber 客户保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。
                     * 
                     */
                    void SetSequenceNumber(const uint64_t& _sequenceNumber);

                    /**
                     * 判断参数 SequenceNumber 是否已赋值
                     * @return SequenceNumber 是否已赋值
                     * 
                     */
                    bool SequenceNumberHasBeenSet() const;

                    /**
                     * 获取是否转码，0表示无需转码，1表示需要转码。
注：混流是必须转码，这个参数需设置为1。
                     * @return WithTranscoding 是否转码，0表示无需转码，1表示需要转码。
注：混流是必须转码，这个参数需设置为1。
                     * 
                     */
                    uint64_t GetWithTranscoding() const;

                    /**
                     * 设置是否转码，0表示无需转码，1表示需要转码。
注：混流是必须转码，这个参数需设置为1。
                     * @param _withTranscoding 是否转码，0表示无需转码，1表示需要转码。
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
                     * 获取更新相关参数，只支持更新参与混音的主播列表参数，不支持更新Codec、采样率、码率和声道数。不填表示不更新此参数。
                     * @return AudioParams 更新相关参数，只支持更新参与混音的主播列表参数，不支持更新Codec、采样率、码率和声道数。不填表示不更新此参数。
                     * 
                     */
                    McuAudioParams GetAudioParams() const;

                    /**
                     * 设置更新相关参数，只支持更新参与混音的主播列表参数，不支持更新Codec、采样率、码率和声道数。不填表示不更新此参数。
                     * @param _audioParams 更新相关参数，只支持更新参与混音的主播列表参数，不支持更新Codec、采样率、码率和声道数。不填表示不更新此参数。
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
                     * 获取更新视频相关参数，转码时支持更新除编码类型之外的编码参数，视频布局参数，背景图片和背景颜色参数，水印参数。不填表示不更新此参数。
                     * @return VideoParams 更新视频相关参数，转码时支持更新除编码类型之外的编码参数，视频布局参数，背景图片和背景颜色参数，水印参数。不填表示不更新此参数。
                     * 
                     */
                    McuVideoParams GetVideoParams() const;

                    /**
                     * 设置更新视频相关参数，转码时支持更新除编码类型之外的编码参数，视频布局参数，背景图片和背景颜色参数，水印参数。不填表示不更新此参数。
                     * @param _videoParams 更新视频相关参数，转码时支持更新除编码类型之外的编码参数，视频布局参数，背景图片和背景颜色参数，水印参数。不填表示不更新此参数。
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
                     * 获取更新单流转推的用户上行参数，仅在非转码时有效。不填表示不更新此参数。
                     * @return SingleSubscribeParams 更新单流转推的用户上行参数，仅在非转码时有效。不填表示不更新此参数。
                     * 
                     */
                    SingleSubscribeParams GetSingleSubscribeParams() const;

                    /**
                     * 设置更新单流转推的用户上行参数，仅在非转码时有效。不填表示不更新此参数。
                     * @param _singleSubscribeParams 更新单流转推的用户上行参数，仅在非转码时有效。不填表示不更新此参数。
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
                     * 获取更新转推的CDN参数。不填表示不更新此参数。
                     * @return PublishCdnParams 更新转推的CDN参数。不填表示不更新此参数。
                     * 
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置更新转推的CDN参数。不填表示不更新此参数。
                     * @param _publishCdnParams 更新转推的CDN参数。不填表示不更新此参数。
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
                     * 获取回推房间信息
                     * @return FeedBackRoomParams 回推房间信息
                     * 
                     */
                    std::vector<McuFeedBackRoomParams> GetFeedBackRoomParams() const;

                    /**
                     * 设置回推房间信息
                     * @param _feedBackRoomParams 回推房间信息
                     * 
                     */
                    void SetFeedBackRoomParams(const std::vector<McuFeedBackRoomParams>& _feedBackRoomParams);

                    /**
                     * 判断参数 FeedBackRoomParams 是否已赋值
                     * @return FeedBackRoomParams 是否已赋值
                     * 
                     */
                    bool FeedBackRoomParamsHasBeenSet() const;

                private:

                    /**
                     * TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转推的房间所对应的SdkAppId相同。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 唯一标识转推任务。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 客户保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。
                     */
                    uint64_t m_sequenceNumber;
                    bool m_sequenceNumberHasBeenSet;

                    /**
                     * 是否转码，0表示无需转码，1表示需要转码。
注：混流是必须转码，这个参数需设置为1。
                     */
                    uint64_t m_withTranscoding;
                    bool m_withTranscodingHasBeenSet;

                    /**
                     * 更新相关参数，只支持更新参与混音的主播列表参数，不支持更新Codec、采样率、码率和声道数。不填表示不更新此参数。
                     */
                    McuAudioParams m_audioParams;
                    bool m_audioParamsHasBeenSet;

                    /**
                     * 更新视频相关参数，转码时支持更新除编码类型之外的编码参数，视频布局参数，背景图片和背景颜色参数，水印参数。不填表示不更新此参数。
                     */
                    McuVideoParams m_videoParams;
                    bool m_videoParamsHasBeenSet;

                    /**
                     * 更新单流转推的用户上行参数，仅在非转码时有效。不填表示不更新此参数。
                     */
                    SingleSubscribeParams m_singleSubscribeParams;
                    bool m_singleSubscribeParamsHasBeenSet;

                    /**
                     * 更新转推的CDN参数。不填表示不更新此参数。
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                    /**
                     * 混流SEI参数
                     */
                    McuSeiParams m_seiParams;
                    bool m_seiParamsHasBeenSet;

                    /**
                     * 回推房间信息
                     */
                    std::vector<McuFeedBackRoomParams> m_feedBackRoomParams;
                    bool m_feedBackRoomParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEPUBLISHCDNSTREAMREQUEST_H_
