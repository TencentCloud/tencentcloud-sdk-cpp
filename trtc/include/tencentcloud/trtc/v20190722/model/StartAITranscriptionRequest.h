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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAITRANSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAITRANSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionParams.h>
#include <tencentcloud/trtc/v20190722/model/RecognizeConfig.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartAITranscription请求参数结构体
                */
                class StartAITranscriptionRequest : public AbstractModel
                {
                public:
                    StartAITranscriptionRequest();
                    ~StartAITranscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，使用该sdkappid开启任务。
                     * @return SdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，使用该sdkappid开启任务。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，使用该sdkappid开启任务。
                     * @param _sdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，使用该sdkappid开启任务。
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
                     * 获取TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，使用该roomid开启任务。
                     * @return RoomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，使用该roomid开启任务。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，使用该roomid开启任务。
                     * @param _roomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，使用该roomid开启任务。
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
                     * 获取启动转录机器人和鉴权的参数。
                     * @return TranscriptionParams 启动转录机器人和鉴权的参数。
                     * 
                     */
                    TranscriptionParams GetTranscriptionParams() const;

                    /**
                     * 设置启动转录机器人和鉴权的参数。
                     * @param _transcriptionParams 启动转录机器人和鉴权的参数。
                     * 
                     */
                    void SetTranscriptionParams(const TranscriptionParams& _transcriptionParams);

                    /**
                     * 判断参数 TranscriptionParams 是否已赋值
                     * @return TranscriptionParams 是否已赋值
                     * 
                     */
                    bool TranscriptionParamsHasBeenSet() const;

                    /**
                     * 获取TRTC房间号的类型，0代表数字房间号，1代表字符串房间号。不填默认是数字房间号。
                     * @return RoomIdType TRTC房间号的类型，0代表数字房间号，1代表字符串房间号。不填默认是数字房间号。
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置TRTC房间号的类型，0代表数字房间号，1代表字符串房间号。不填默认是数字房间号。
                     * @param _roomIdType TRTC房间号的类型，0代表数字房间号，1代表字符串房间号。不填默认是数字房间号。
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
                     * 获取语音识别配置
                     * @return RecognizeConfig 语音识别配置
                     * 
                     */
                    RecognizeConfig GetRecognizeConfig() const;

                    /**
                     * 设置语音识别配置
                     * @param _recognizeConfig 语音识别配置
                     * 
                     */
                    void SetRecognizeConfig(const RecognizeConfig& _recognizeConfig);

                    /**
                     * 判断参数 RecognizeConfig 是否已赋值
                     * @return RecognizeConfig 是否已赋值
                     * 
                     */
                    bool RecognizeConfigHasBeenSet() const;

                private:

                    /**
                     * TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，使用该sdkappid开启任务。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，使用该roomid开启任务。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 启动转录机器人和鉴权的参数。
                     */
                    TranscriptionParams m_transcriptionParams;
                    bool m_transcriptionParamsHasBeenSet;

                    /**
                     * TRTC房间号的类型，0代表数字房间号，1代表字符串房间号。不填默认是数字房间号。
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * 语音识别配置
                     */
                    RecognizeConfig m_recognizeConfig;
                    bool m_recognizeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAITRANSCRIPTIONREQUEST_H_
