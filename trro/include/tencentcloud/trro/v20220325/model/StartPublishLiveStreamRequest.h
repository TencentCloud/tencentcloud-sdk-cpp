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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_STARTPUBLISHLIVESTREAMREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_STARTPUBLISHLIVESTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trro/v20220325/model/VideoParams.h>
#include <tencentcloud/trro/v20220325/model/PublishParams.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * StartPublishLiveStream请求参数结构体
                */
                class StartPublishLiveStreamRequest : public AbstractModel
                {
                public:
                    StartPublishLiveStreamRequest();
                    ~StartPublishLiveStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否转码，0表示无需转码，1表示需要转码。是否收取转码费是由WithTranscoding参数决定的，WithTranscoding为0，表示旁路转推，不会收取转码费用，WithTranscoding为1，表示混流转推，会收取转码费用。 示例值：1
                     * @return WithTranscoding 是否转码，0表示无需转码，1表示需要转码。是否收取转码费是由WithTranscoding参数决定的，WithTranscoding为0，表示旁路转推，不会收取转码费用，WithTranscoding为1，表示混流转推，会收取转码费用。 示例值：1
                     * 
                     */
                    int64_t GetWithTranscoding() const;

                    /**
                     * 设置是否转码，0表示无需转码，1表示需要转码。是否收取转码费是由WithTranscoding参数决定的，WithTranscoding为0，表示旁路转推，不会收取转码费用，WithTranscoding为1，表示混流转推，会收取转码费用。 示例值：1
                     * @param _withTranscoding 是否转码，0表示无需转码，1表示需要转码。是否收取转码费是由WithTranscoding参数决定的，WithTranscoding为0，表示旁路转推，不会收取转码费用，WithTranscoding为1，表示混流转推，会收取转码费用。 示例值：1
                     * 
                     */
                    void SetWithTranscoding(const int64_t& _withTranscoding);

                    /**
                     * 判断参数 WithTranscoding 是否已赋值
                     * @return WithTranscoding 是否已赋值
                     * 
                     */
                    bool WithTranscodingHasBeenSet() const;

                    /**
                     * 获取所有参与混流转推的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转推，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * @return MaxIdleTime 所有参与混流转推的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转推，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * 
                     */
                    int64_t GetMaxIdleTime() const;

                    /**
                     * 设置所有参与混流转推的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转推，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * @param _maxIdleTime 所有参与混流转推的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转推，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * 
                     */
                    void SetMaxIdleTime(const int64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     * 
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                    /**
                     * 获取转推视频参数
                     * @return VideoParams 转推视频参数
                     * 
                     */
                    VideoParams GetVideoParams() const;

                    /**
                     * 设置转推视频参数
                     * @param _videoParams 转推视频参数
                     * 
                     */
                    void SetVideoParams(const VideoParams& _videoParams);

                    /**
                     * 判断参数 VideoParams 是否已赋值
                     * @return VideoParams 是否已赋值
                     * 
                     */
                    bool VideoParamsHasBeenSet() const;

                    /**
                     * 获取转推的URL参数，一个任务最多支持10个推流URL
                     * @return PublishParams 转推的URL参数，一个任务最多支持10个推流URL
                     * 
                     */
                    std::vector<PublishParams> GetPublishParams() const;

                    /**
                     * 设置转推的URL参数，一个任务最多支持10个推流URL
                     * @param _publishParams 转推的URL参数，一个任务最多支持10个推流URL
                     * 
                     */
                    void SetPublishParams(const std::vector<PublishParams>& _publishParams);

                    /**
                     * 判断参数 PublishParams 是否已赋值
                     * @return PublishParams 是否已赋值
                     * 
                     */
                    bool PublishParamsHasBeenSet() const;

                private:

                    /**
                     * 是否转码，0表示无需转码，1表示需要转码。是否收取转码费是由WithTranscoding参数决定的，WithTranscoding为0，表示旁路转推，不会收取转码费用，WithTranscoding为1，表示混流转推，会收取转码费用。 示例值：1
                     */
                    int64_t m_withTranscoding;
                    bool m_withTranscodingHasBeenSet;

                    /**
                     * 所有参与混流转推的主播持续离开TRTC房间或切换成观众超过MaxIdleTime的时长，自动停止转推，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     */
                    int64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * 转推视频参数
                     */
                    VideoParams m_videoParams;
                    bool m_videoParamsHasBeenSet;

                    /**
                     * 转推的URL参数，一个任务最多支持10个推流URL
                     */
                    std::vector<PublishParams> m_publishParams;
                    bool m_publishParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_STARTPUBLISHLIVESTREAMREQUEST_H_
