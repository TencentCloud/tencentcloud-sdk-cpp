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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_AUDIOMETADATA_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_AUDIOMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 音频文件元信息
                */
                class AudioMetadata : public AbstractModel
                {
                public:
                    AudioMetadata();
                    ~AudioMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒资音频文件大小，单位为Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 媒资音频文件大小，单位为Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置媒资音频文件大小，单位为Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 媒资音频文件大小，单位为Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取媒资音频文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MD5 媒资音频文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置媒资音频文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mD5 媒资音频文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取媒资音频时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 媒资音频时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置媒资音频时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 媒资音频时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取媒资音频采样率，单位为khz
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleRate 媒资音频采样率，单位为khz
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSampleRate() const;

                    /**
                     * 设置媒资音频采样率，单位为khz
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampleRate 媒资音频采样率，单位为khz
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSampleRate(const double& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取媒资音频码率，单位为kbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BitRate 媒资音频码率，单位为kbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBitRate() const;

                    /**
                     * 设置媒资音频码率，单位为kbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bitRate 媒资音频码率，单位为kbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBitRate(const int64_t& _bitRate);

                    /**
                     * 判断参数 BitRate 是否已赋值
                     * @return BitRate 是否已赋值
                     * 
                     */
                    bool BitRateHasBeenSet() const;

                    /**
                     * 获取媒资音频文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Format 媒资音频文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置媒资音频文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _format 媒资音频文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Audio Bit Depth: 16/24 bit .etc
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BitDepth Audio Bit Depth: 16/24 bit .etc
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBitDepth() const;

                    /**
                     * 设置Audio Bit Depth: 16/24 bit .etc
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bitDepth Audio Bit Depth: 16/24 bit .etc
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBitDepth(const int64_t& _bitDepth);

                    /**
                     * 判断参数 BitDepth 是否已赋值
                     * @return BitDepth 是否已赋值
                     * 
                     */
                    bool BitDepthHasBeenSet() const;

                    /**
                     * 获取封装格式短后缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShortFormat 封装格式短后缀
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShortFormat() const;

                    /**
                     * 设置封装格式短后缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shortFormat 封装格式短后缀
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShortFormat(const std::string& _shortFormat);

                    /**
                     * 判断参数 ShortFormat 是否已赋值
                     * @return ShortFormat 是否已赋值
                     * 
                     */
                    bool ShortFormatHasBeenSet() const;

                private:

                    /**
                     * 媒资音频文件大小，单位为Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 媒资音频文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * 媒资音频时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 媒资音频采样率，单位为khz
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 媒资音频码率，单位为kbps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                    /**
                     * 媒资音频文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Audio Bit Depth: 16/24 bit .etc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bitDepth;
                    bool m_bitDepthHasBeenSet;

                    /**
                     * 封装格式短后缀
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shortFormat;
                    bool m_shortFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_AUDIOMETADATA_H_
