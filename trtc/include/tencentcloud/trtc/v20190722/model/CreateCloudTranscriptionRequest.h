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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDTRANSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDTRANSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionParam.h>
#include <tencentcloud/trtc/v20190722/model/AsrParam.h>
#include <tencentcloud/trtc/v20190722/model/TranslationParam.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateCloudTranscription请求参数结构体
                */
                class CreateCloudTranscriptionRequest : public AbstractModel
                {
                public:
                    CreateCloudTranscriptionRequest();
                    ~CreateCloudTranscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转录的房间所对应的SdkAppId相同。
                     * @return SdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转录的房间所对应的SdkAppId相同。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转录的房间所对应的SdkAppId相同。
                     * @param _sdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转录的房间所对应的SdkAppId相同。
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
                     * 获取TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，转录的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。
                     * @return RoomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，转录的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，转录的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。
                     * @param _roomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，转录的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。
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
                     * 获取房间信息RoomType，必须和转录的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。
                     * @return RoomIdType 房间信息RoomType，必须和转录的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置房间信息RoomType，必须和转录的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。
                     * @param _roomIdType 房间信息RoomType，必须和转录的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。
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
                     * 获取转录服务加入TRTC房间的参数。
                     * @return TranscriptionParam 转录服务加入TRTC房间的参数。
                     * 
                     */
                    TranscriptionParam GetTranscriptionParam() const;

                    /**
                     * 设置转录服务加入TRTC房间的参数。
                     * @param _transcriptionParam 转录服务加入TRTC房间的参数。
                     * 
                     */
                    void SetTranscriptionParam(const TranscriptionParam& _transcriptionParam);

                    /**
                     * 判断参数 TranscriptionParam 是否已赋值
                     * @return TranscriptionParam 是否已赋值
                     * 
                     */
                    bool TranscriptionParamHasBeenSet() const;

                    /**
                     * 获取转录服务ASR使用的参数。
                     * @return AsrParam 转录服务ASR使用的参数。
                     * 
                     */
                    AsrParam GetAsrParam() const;

                    /**
                     * 设置转录服务ASR使用的参数。
                     * @param _asrParam 转录服务ASR使用的参数。
                     * 
                     */
                    void SetAsrParam(const AsrParam& _asrParam);

                    /**
                     * 判断参数 AsrParam 是否已赋值
                     * @return AsrParam 是否已赋值
                     * 
                     */
                    bool AsrParamHasBeenSet() const;

                    /**
                     * 获取转录服务翻译使用的参数。
                     * @return TranslationParam 转录服务翻译使用的参数。
                     * 
                     */
                    TranslationParam GetTranslationParam() const;

                    /**
                     * 设置转录服务翻译使用的参数。
                     * @param _translationParam 转录服务翻译使用的参数。
                     * 
                     */
                    void SetTranslationParam(const TranslationParam& _translationParam);

                    /**
                     * 判断参数 TranslationParam 是否已赋值
                     * @return TranslationParam 是否已赋值
                     * 
                     */
                    bool TranslationParamHasBeenSet() const;

                private:

                    /**
                     * TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和转录的房间所对应的SdkAppId相同。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，转录的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 房间信息RoomType，必须和转录的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * 转录服务加入TRTC房间的参数。
                     */
                    TranscriptionParam m_transcriptionParam;
                    bool m_transcriptionParamHasBeenSet;

                    /**
                     * 转录服务ASR使用的参数。
                     */
                    AsrParam m_asrParam;
                    bool m_asrParamHasBeenSet;

                    /**
                     * 转录服务翻译使用的参数。
                     */
                    TranslationParam m_translationParam;
                    bool m_translationParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDTRANSCRIPTIONREQUEST_H_
