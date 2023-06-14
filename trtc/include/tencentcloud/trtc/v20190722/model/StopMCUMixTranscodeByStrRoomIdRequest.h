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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STOPMCUMIXTRANSCODEBYSTRROOMIDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STOPMCUMIXTRANSCODEBYSTRROOMIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StopMCUMixTranscodeByStrRoomId请求参数结构体
                */
                class StopMCUMixTranscodeByStrRoomIdRequest : public AbstractModel
                {
                public:
                    StopMCUMixTranscodeByStrRoomIdRequest();
                    ~StopMCUMixTranscodeByStrRoomIdRequest() = default;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STOPMCUMIXTRANSCODEBYSTRROOMIDREQUEST_H_
