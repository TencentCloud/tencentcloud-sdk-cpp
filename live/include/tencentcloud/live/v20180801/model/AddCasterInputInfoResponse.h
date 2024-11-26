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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_ADDCASTERINPUTINFORESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_ADDCASTERINPUTINFORESPONSE_H_

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
                * AddCasterInputInfo返回参数结构体
                */
                class AddCasterInputInfoResponse : public AbstractModel
                {
                public:
                    AddCasterInputInfoResponse();
                    ~AddCasterInputInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取rtmp协议输入源播放地址。
注：仅可作为预览使用，不可分发。
                     * @return InputPlayUrl rtmp协议输入源播放地址。
注：仅可作为预览使用，不可分发。
                     * 
                     */
                    std::string GetInputPlayUrl() const;

                    /**
                     * 判断参数 InputPlayUrl 是否已赋值
                     * @return InputPlayUrl 是否已赋值
                     * 
                     */
                    bool InputPlayUrlHasBeenSet() const;

                    /**
                     * 获取webrtc协议播放地址。
注：
1. 需配合使用腾讯云快直播播放SDK使用才可正常播放。
2. 仅作为预览使用，不可分发。
                     * @return InputWebRTCPlayUrl webrtc协议播放地址。
注：
1. 需配合使用腾讯云快直播播放SDK使用才可正常播放。
2. 仅作为预览使用，不可分发。
                     * 
                     */
                    std::string GetInputWebRTCPlayUrl() const;

                    /**
                     * 判断参数 InputWebRTCPlayUrl 是否已赋值
                     * @return InputWebRTCPlayUrl 是否已赋值
                     * 
                     */
                    bool InputWebRTCPlayUrlHasBeenSet() const;

                private:

                    /**
                     * rtmp协议输入源播放地址。
注：仅可作为预览使用，不可分发。
                     */
                    std::string m_inputPlayUrl;
                    bool m_inputPlayUrlHasBeenSet;

                    /**
                     * webrtc协议播放地址。
注：
1. 需配合使用腾讯云快直播播放SDK使用才可正常播放。
2. 仅作为预览使用，不可分发。
                     */
                    std::string m_inputWebRTCPlayUrl;
                    bool m_inputWebRTCPlayUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_ADDCASTERINPUTINFORESPONSE_H_
