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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERINPUTPUSHURLREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERINPUTPUSHURLREQUEST_H_

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
                * CreateCasterInputPushUrl请求参数结构体
                */
                class CreateCasterInputPushUrlRequest : public AbstractModel
                {
                public:
                    CreateCasterInputPushUrlRequest();
                    ~CreateCasterInputPushUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导播台ID
                     * @return CasterId 导播台ID
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置导播台ID
                     * @param _casterId 导播台ID
                     * 
                     */
                    void SetCasterId(const uint64_t& _casterId);

                    /**
                     * 判断参数 CasterId 是否已赋值
                     * @return CasterId 是否已赋值
                     * 
                     */
                    bool CasterIdHasBeenSet() const;

                    /**
                     * 获取请求生成推流地址的输入Index。
允许范围[1,24]。
                     * @return InputIndex 请求生成推流地址的输入Index。
允许范围[1,24]。
                     * 
                     */
                    uint64_t GetInputIndex() const;

                    /**
                     * 设置请求生成推流地址的输入Index。
允许范围[1,24]。
                     * @param _inputIndex 请求生成推流地址的输入Index。
允许范围[1,24]。
                     * 
                     */
                    void SetInputIndex(const uint64_t& _inputIndex);

                    /**
                     * 判断参数 InputIndex 是否已赋值
                     * @return InputIndex 是否已赋值
                     * 
                     */
                    bool InputIndexHasBeenSet() const;

                    /**
                     * 获取生成推流地址协议。
范围[rtmp,webrtc]。
注：获取webrtc推流地址时，需配合腾讯云快直播推流sdk才可成功推流。
                     * @return Protocol 生成推流地址协议。
范围[rtmp,webrtc]。
注：获取webrtc推流地址时，需配合腾讯云快直播推流sdk才可成功推流。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置生成推流地址协议。
范围[rtmp,webrtc]。
注：获取webrtc推流地址时，需配合腾讯云快直播推流sdk才可成功推流。
                     * @param _protocol 生成推流地址协议。
范围[rtmp,webrtc]。
注：获取webrtc推流地址时，需配合腾讯云快直播推流sdk才可成功推流。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * 导播台ID
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * 请求生成推流地址的输入Index。
允许范围[1,24]。
                     */
                    uint64_t m_inputIndex;
                    bool m_inputIndexHasBeenSet;

                    /**
                     * 生成推流地址协议。
范围[rtmp,webrtc]。
注：获取webrtc推流地址时，需配合腾讯云快直播推流sdk才可成功推流。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERINPUTPUSHURLREQUEST_H_
