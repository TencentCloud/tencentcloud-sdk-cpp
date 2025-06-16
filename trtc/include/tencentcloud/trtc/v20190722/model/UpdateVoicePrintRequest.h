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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEVOICEPRINTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEVOICEPRINTREQUEST_H_

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
                * UpdateVoicePrint请求参数结构体
                */
                class UpdateVoicePrintRequest : public AbstractModel
                {
                public:
                    UpdateVoicePrintRequest();
                    ~UpdateVoicePrintRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取声纹信息ID
                     * @return VoicePrintId 声纹信息ID
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 设置声纹信息ID
                     * @param _voicePrintId 声纹信息ID
                     * 
                     */
                    void SetVoicePrintId(const std::string& _voicePrintId);

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

                    /**
                     * 获取毫秒时间戳
                     * @return ReqTimestamp 毫秒时间戳
                     * 
                     */
                    uint64_t GetReqTimestamp() const;

                    /**
                     * 设置毫秒时间戳
                     * @param _reqTimestamp 毫秒时间戳
                     * 
                     */
                    void SetReqTimestamp(const uint64_t& _reqTimestamp);

                    /**
                     * 判断参数 ReqTimestamp 是否已赋值
                     * @return ReqTimestamp 是否已赋值
                     * 
                     */
                    bool ReqTimestampHasBeenSet() const;

                    /**
                     * 获取音频格式,目前只支持0,代表wav
                     * @return AudioFormat 音频格式,目前只支持0,代表wav
                     * 
                     */
                    uint64_t GetAudioFormat() const;

                    /**
                     * 设置音频格式,目前只支持0,代表wav
                     * @param _audioFormat 音频格式,目前只支持0,代表wav
                     * 
                     */
                    void SetAudioFormat(const uint64_t& _audioFormat);

                    /**
                     * 判断参数 AudioFormat 是否已赋值
                     * @return AudioFormat 是否已赋值
                     * 
                     */
                    bool AudioFormatHasBeenSet() const;

                    /**
                     * 获取整个wav音频文件的base64字符串,其中wav文件限定为16k采样率, 16bit位深, 单声道, 8到18秒音频时长,有效音频不小于6秒(不能有太多静音段),编码数据大小不超过2M
                     * @return Audio 整个wav音频文件的base64字符串,其中wav文件限定为16k采样率, 16bit位深, 单声道, 8到18秒音频时长,有效音频不小于6秒(不能有太多静音段),编码数据大小不超过2M
                     * 
                     */
                    std::string GetAudio() const;

                    /**
                     * 设置整个wav音频文件的base64字符串,其中wav文件限定为16k采样率, 16bit位深, 单声道, 8到18秒音频时长,有效音频不小于6秒(不能有太多静音段),编码数据大小不超过2M
                     * @param _audio 整个wav音频文件的base64字符串,其中wav文件限定为16k采样率, 16bit位深, 单声道, 8到18秒音频时长,有效音频不小于6秒(不能有太多静音段),编码数据大小不超过2M
                     * 
                     */
                    void SetAudio(const std::string& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取和声纹绑定的MetaInfo，长度最大不超过512
                     * @return AudioMetaInfo 和声纹绑定的MetaInfo，长度最大不超过512
                     * 
                     */
                    std::string GetAudioMetaInfo() const;

                    /**
                     * 设置和声纹绑定的MetaInfo，长度最大不超过512
                     * @param _audioMetaInfo 和声纹绑定的MetaInfo，长度最大不超过512
                     * 
                     */
                    void SetAudioMetaInfo(const std::string& _audioMetaInfo);

                    /**
                     * 判断参数 AudioMetaInfo 是否已赋值
                     * @return AudioMetaInfo 是否已赋值
                     * 
                     */
                    bool AudioMetaInfoHasBeenSet() const;

                private:

                    /**
                     * 声纹信息ID
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * 毫秒时间戳
                     */
                    uint64_t m_reqTimestamp;
                    bool m_reqTimestampHasBeenSet;

                    /**
                     * 音频格式,目前只支持0,代表wav
                     */
                    uint64_t m_audioFormat;
                    bool m_audioFormatHasBeenSet;

                    /**
                     * 整个wav音频文件的base64字符串,其中wav文件限定为16k采样率, 16bit位深, 单声道, 8到18秒音频时长,有效音频不小于6秒(不能有太多静音段),编码数据大小不超过2M
                     */
                    std::string m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * 和声纹绑定的MetaInfo，长度最大不超过512
                     */
                    std::string m_audioMetaInfo;
                    bool m_audioMetaInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATEVOICEPRINTREQUEST_H_
