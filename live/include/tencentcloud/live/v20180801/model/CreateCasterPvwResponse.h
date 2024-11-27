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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERPVWRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERPVWRESPONSE_H_

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
                * CreateCasterPvw返回参数结构体
                */
                class CreateCasterPvwResponse : public AbstractModel
                {
                public:
                    CreateCasterPvwResponse();
                    ~CreateCasterPvwResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取预监任务的画面rtmp协议预览地址。
注：该预览地址仅供画面预览，不可分发。
                     * @return PvwPlayUrl 预监任务的画面rtmp协议预览地址。
注：该预览地址仅供画面预览，不可分发。
                     * 
                     */
                    std::string GetPvwPlayUrl() const;

                    /**
                     * 判断参数 PvwPlayUrl 是否已赋值
                     * @return PvwPlayUrl 是否已赋值
                     * 
                     */
                    bool PvwPlayUrlHasBeenSet() const;

                    /**
                     * 获取预监任务的webrtc协议预览画面。
注：
1. 该预览地址仅供预览，不可分发。
2. webrtc播放地址，需配合腾讯云快直播播放sdk使用

                     * @return PvwWebRTCPlayUrl 预监任务的webrtc协议预览画面。
注：
1. 该预览地址仅供预览，不可分发。
2. webrtc播放地址，需配合腾讯云快直播播放sdk使用

                     * 
                     */
                    std::string GetPvwWebRTCPlayUrl() const;

                    /**
                     * 判断参数 PvwWebRTCPlayUrl 是否已赋值
                     * @return PvwWebRTCPlayUrl 是否已赋值
                     * 
                     */
                    bool PvwWebRTCPlayUrlHasBeenSet() const;

                private:

                    /**
                     * 预监任务的画面rtmp协议预览地址。
注：该预览地址仅供画面预览，不可分发。
                     */
                    std::string m_pvwPlayUrl;
                    bool m_pvwPlayUrlHasBeenSet;

                    /**
                     * 预监任务的webrtc协议预览画面。
注：
1. 该预览地址仅供预览，不可分发。
2. webrtc播放地址，需配合腾讯云快直播播放sdk使用

                     */
                    std::string m_pvwWebRTCPlayUrl;
                    bool m_pvwWebRTCPlayUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERPVWRESPONSE_H_
