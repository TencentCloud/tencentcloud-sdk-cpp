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
#include <tencentcloud/trtc/v20190722/model/TTSParam.h>


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
                     * 获取<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和转录的房间所对应的SdkAppId相同。</p>
                     * @return SdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和转录的房间所对应的SdkAppId相同。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和转录的房间所对应的SdkAppId相同。</p>
                     * @param _sdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和转录的房间所对应的SdkAppId相同。</p>
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
                     * 获取<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#roomid">RoomId</a>，转录的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。</p>
                     * @return RoomId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#roomid">RoomId</a>，转录的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#roomid">RoomId</a>，转录的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。</p>
                     * @param _roomId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#roomid">RoomId</a>，转录的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。</p>
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
                     * 获取<p>房间信息RoomType，必须和转录的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p>
                     * @return RoomIdType <p>房间信息RoomType，必须和转录的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p>
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置<p>房间信息RoomType，必须和转录的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p>
                     * @param _roomIdType <p>房间信息RoomType，必须和转录的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p>
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
                     * 获取<p>转录服务加入TRTC房间的参数。</p>
                     * @return TranscriptionParam <p>转录服务加入TRTC房间的参数。</p>
                     * 
                     */
                    TranscriptionParam GetTranscriptionParam() const;

                    /**
                     * 设置<p>转录服务加入TRTC房间的参数。</p>
                     * @param _transcriptionParam <p>转录服务加入TRTC房间的参数。</p>
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
                     * 获取<p>转录服务ASR使用的参数。</p>
                     * @return AsrParam <p>转录服务ASR使用的参数。</p>
                     * 
                     */
                    AsrParam GetAsrParam() const;

                    /**
                     * 设置<p>转录服务ASR使用的参数。</p>
                     * @param _asrParam <p>转录服务ASR使用的参数。</p>
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
                     * 获取<p>转录服务翻译使用的参数。</p>
                     * @return TranslationParam <p>转录服务翻译使用的参数。</p>
                     * 
                     */
                    TranslationParam GetTranslationParam() const;

                    /**
                     * 设置<p>转录服务翻译使用的参数。</p>
                     * @param _translationParam <p>转录服务翻译使用的参数。</p>
                     * 
                     */
                    void SetTranslationParam(const TranslationParam& _translationParam);

                    /**
                     * 判断参数 TranslationParam 是否已赋值
                     * @return TranslationParam 是否已赋值
                     * 
                     */
                    bool TranslationParamHasBeenSet() const;

                    /**
                     * 获取<p>转录服务TTS使用的参数。</p>
                     * @return TTSParam <p>转录服务TTS使用的参数。</p>
                     * 
                     */
                    std::vector<TTSParam> GetTTSParam() const;

                    /**
                     * 设置<p>转录服务TTS使用的参数。</p>
                     * @param _tTSParam <p>转录服务TTS使用的参数。</p>
                     * 
                     */
                    void SetTTSParam(const std::vector<TTSParam>& _tTSParam);

                    /**
                     * 判断参数 TTSParam 是否已赋值
                     * @return TTSParam 是否已赋值
                     * 
                     */
                    bool TTSParamHasBeenSet() const;

                private:

                    /**
                     * <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和转录的房间所对应的SdkAppId相同。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#roomid">RoomId</a>，转录的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>房间信息RoomType，必须和转录的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p>
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * <p>转录服务加入TRTC房间的参数。</p>
                     */
                    TranscriptionParam m_transcriptionParam;
                    bool m_transcriptionParamHasBeenSet;

                    /**
                     * <p>转录服务ASR使用的参数。</p>
                     */
                    AsrParam m_asrParam;
                    bool m_asrParamHasBeenSet;

                    /**
                     * <p>转录服务翻译使用的参数。</p>
                     */
                    TranslationParam m_translationParam;
                    bool m_translationParamHasBeenSet;

                    /**
                     * <p>转录服务TTS使用的参数。</p>
                     */
                    std::vector<TTSParam> m_tTSParam;
                    bool m_tTSParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDTRANSCRIPTIONREQUEST_H_
