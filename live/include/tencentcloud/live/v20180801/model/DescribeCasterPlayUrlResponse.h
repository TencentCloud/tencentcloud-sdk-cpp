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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERPLAYURLRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERPLAYURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeCasterPlayUrl返回参数结构体
                */
                class DescribeCasterPlayUrlResponse : public AbstractModel
                {
                public:
                    DescribeCasterPlayUrlResponse();
                    ~DescribeCasterPlayUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取播放url。
当导播台不存在预监或主监时，若请求预监或主监的播放地址，该字段为空。
                     * @return PlayUrl 播放url。
当导播台不存在预监或主监时，若请求预监或主监的播放地址，该字段为空。
                     * 
                     */
                    std::string GetPlayUrl() const;

                    /**
                     * 判断参数 PlayUrl 是否已赋值
                     * @return PlayUrl 是否已赋值
                     * 
                     */
                    bool PlayUrlHasBeenSet() const;

                    /**
                     * 获取webrtc协议播放地址。
当导播台不存在预监或主监时，若请求预监或主监的webrtc播放地址，该字段为空。
注：webrtc协议播放地址需配合腾讯云快直播播放sdk方可使用。
                     * @return WebRTCPlayUrl webrtc协议播放地址。
当导播台不存在预监或主监时，若请求预监或主监的webrtc播放地址，该字段为空。
注：webrtc协议播放地址需配合腾讯云快直播播放sdk方可使用。
                     * 
                     */
                    std::string GetWebRTCPlayUrl() const;

                    /**
                     * 判断参数 WebRTCPlayUrl 是否已赋值
                     * @return WebRTCPlayUrl 是否已赋值
                     * 
                     */
                    bool WebRTCPlayUrlHasBeenSet() const;

                private:

                    /**
                     * 播放url。
当导播台不存在预监或主监时，若请求预监或主监的播放地址，该字段为空。
                     */
                    std::string m_playUrl;
                    bool m_playUrlHasBeenSet;

                    /**
                     * webrtc协议播放地址。
当导播台不存在预监或主监时，若请求预监或主监的webrtc播放地址，该字段为空。
注：webrtc协议播放地址需配合腾讯云快直播播放sdk方可使用。
                     */
                    std::string m_webRTCPlayUrl;
                    bool m_webRTCPlayUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERPLAYURLRESPONSE_H_
