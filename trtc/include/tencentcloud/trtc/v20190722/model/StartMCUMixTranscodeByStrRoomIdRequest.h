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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTMCUMIXTRANSCODEBYSTRROOMIDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTMCUMIXTRANSCODEBYSTRROOMIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/OutputParams.h>
#include <tencentcloud/trtc/v20190722/model/EncodeParams.h>
#include <tencentcloud/trtc/v20190722/model/LayoutParams.h>
#include <tencentcloud/trtc/v20190722/model/PublishCdnParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartMCUMixTranscodeByStrRoomId请求参数结构体
                */
                class StartMCUMixTranscodeByStrRoomIdRequest : public AbstractModel
                {
                public:
                    StartMCUMixTranscodeByStrRoomIdRequest();
                    ~StartMCUMixTranscodeByStrRoomIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的SDKAppId。
                     * @return SdkAppId TRTC的SDKAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的SDKAppId。
                     * @param _sdkAppId TRTC的SDKAppId。
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
                     * 获取字符串房间号。
                     * @return StrRoomId 字符串房间号。
                     * 
                     */
                    std::string GetStrRoomId() const;

                    /**
                     * 设置字符串房间号。
                     * @param _strRoomId 字符串房间号。
                     * 
                     */
                    void SetStrRoomId(const std::string& _strRoomId);

                    /**
                     * 判断参数 StrRoomId 是否已赋值
                     * @return StrRoomId 是否已赋值
                     * 
                     */
                    bool StrRoomIdHasBeenSet() const;

                    /**
                     * 获取混流输出控制参数。
                     * @return OutputParams 混流输出控制参数。
                     * 
                     */
                    OutputParams GetOutputParams() const;

                    /**
                     * 设置混流输出控制参数。
                     * @param _outputParams 混流输出控制参数。
                     * 
                     */
                    void SetOutputParams(const OutputParams& _outputParams);

                    /**
                     * 判断参数 OutputParams 是否已赋值
                     * @return OutputParams 是否已赋值
                     * 
                     */
                    bool OutputParamsHasBeenSet() const;

                    /**
                     * 获取混流输出编码参数。
                     * @return EncodeParams 混流输出编码参数。
                     * 
                     */
                    EncodeParams GetEncodeParams() const;

                    /**
                     * 设置混流输出编码参数。
                     * @param _encodeParams 混流输出编码参数。
                     * 
                     */
                    void SetEncodeParams(const EncodeParams& _encodeParams);

                    /**
                     * 判断参数 EncodeParams 是否已赋值
                     * @return EncodeParams 是否已赋值
                     * 
                     */
                    bool EncodeParamsHasBeenSet() const;

                    /**
                     * 获取混流输出布局参数。
                     * @return LayoutParams 混流输出布局参数。
                     * 
                     */
                    LayoutParams GetLayoutParams() const;

                    /**
                     * 设置混流输出布局参数。
                     * @param _layoutParams 混流输出布局参数。
                     * 
                     */
                    void SetLayoutParams(const LayoutParams& _layoutParams);

                    /**
                     * 判断参数 LayoutParams 是否已赋值
                     * @return LayoutParams 是否已赋值
                     * 
                     */
                    bool LayoutParamsHasBeenSet() const;

                    /**
                     * 获取第三方CDN转推参数。如需转推至腾讯云云直播，此参数无需填写，会默认转推
                     * @return PublishCdnParams 第三方CDN转推参数。如需转推至腾讯云云直播，此参数无需填写，会默认转推
                     * 
                     */
                    PublishCdnParams GetPublishCdnParams() const;

                    /**
                     * 设置第三方CDN转推参数。如需转推至腾讯云云直播，此参数无需填写，会默认转推
                     * @param _publishCdnParams 第三方CDN转推参数。如需转推至腾讯云云直播，此参数无需填写，会默认转推
                     * 
                     */
                    void SetPublishCdnParams(const PublishCdnParams& _publishCdnParams);

                    /**
                     * 判断参数 PublishCdnParams 是否已赋值
                     * @return PublishCdnParams 是否已赋值
                     * 
                     */
                    bool PublishCdnParamsHasBeenSet() const;

                private:

                    /**
                     * TRTC的SDKAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 字符串房间号。
                     */
                    std::string m_strRoomId;
                    bool m_strRoomIdHasBeenSet;

                    /**
                     * 混流输出控制参数。
                     */
                    OutputParams m_outputParams;
                    bool m_outputParamsHasBeenSet;

                    /**
                     * 混流输出编码参数。
                     */
                    EncodeParams m_encodeParams;
                    bool m_encodeParamsHasBeenSet;

                    /**
                     * 混流输出布局参数。
                     */
                    LayoutParams m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * 第三方CDN转推参数。如需转推至腾讯云云直播，此参数无需填写，会默认转推
                     */
                    PublishCdnParams m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTMCUMIXTRANSCODEBYSTRROOMIDREQUEST_H_
