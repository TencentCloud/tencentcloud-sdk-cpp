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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DATA_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 接口DescribeStream输出参数
                */
                class Data : public AbstractModel
                {
                public:
                    Data();
                    ~Data() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 直播协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置直播协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 直播协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取流媒体播放地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return URI 流媒体播放地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetURI() const;

                    /**
                     * 设置流媒体播放地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uRI 流媒体播放地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetURI(const std::string& _uRI);

                    /**
                     * 判断参数 URI 是否已赋值
                     * @return URI 是否已赋值
                     * 
                     */
                    bool URIHasBeenSet() const;

                    /**
                     * 获取流媒体地址过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 流媒体地址过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置流媒体地址过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 流媒体地址过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取视频编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoCodec 视频编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVideoCodec() const;

                    /**
                     * 设置视频编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoCodec 视频编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoCodec(const std::string& _videoCodec);

                    /**
                     * 判断参数 VideoCodec 是否已赋值
                     * @return VideoCodec 是否已赋值
                     * 
                     */
                    bool VideoCodecHasBeenSet() const;

                    /**
                     * 获取音频编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioCodec 音频编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAudioCodec() const;

                    /**
                     * 设置音频编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioCodec 音频编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioCodec(const std::string& _audioCodec);

                    /**
                     * 判断参数 AudioCodec 是否已赋值
                     * @return AudioCodec 是否已赋值
                     * 
                     */
                    bool AudioCodecHasBeenSet() const;

                private:

                    /**
                     * 直播协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 流媒体播放地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uRI;
                    bool m_uRIHasBeenSet;

                    /**
                     * 流媒体地址过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 视频编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoCodec;
                    bool m_videoCodecHasBeenSet;

                    /**
                     * 音频编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_audioCodec;
                    bool m_audioCodecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DATA_H_
