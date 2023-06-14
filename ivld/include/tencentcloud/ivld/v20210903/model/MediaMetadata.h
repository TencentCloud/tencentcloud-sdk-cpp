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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAMETADATA_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAMETADATA_H_

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
                * 媒资文件视频元信息，包括分辨率，帧率，码率等
                */
                class MediaMetadata : public AbstractModel
                {
                public:
                    MediaMetadata();
                    ~MediaMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒资视频文件大小，单位为字节
                     * @return FileSize 媒资视频文件大小，单位为字节
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置媒资视频文件大小，单位为字节
                     * @param _fileSize 媒资视频文件大小，单位为字节
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
                     * 获取媒资视频文件MD5
                     * @return MD5 媒资视频文件MD5
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置媒资视频文件MD5
                     * @param _mD5 媒资视频文件MD5
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
                     * 获取媒资视频时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 媒资视频时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置媒资视频时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 媒资视频时长，单位为秒
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
                     * 获取媒资视频总帧数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumFrames 媒资视频总帧数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNumFrames() const;

                    /**
                     * 设置媒资视频总帧数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numFrames 媒资视频总帧数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumFrames(const int64_t& _numFrames);

                    /**
                     * 判断参数 NumFrames 是否已赋值
                     * @return NumFrames 是否已赋值
                     * 
                     */
                    bool NumFramesHasBeenSet() const;

                    /**
                     * 获取媒资视频宽度，单位为像素
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 媒资视频宽度，单位为像素
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置媒资视频宽度，单位为像素
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 媒资视频宽度，单位为像素
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取媒资视频高度，单位为像素
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 媒资视频高度，单位为像素
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置媒资视频高度，单位为像素
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height 媒资视频高度，单位为像素
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取媒资视频帧率，单位为Hz
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FPS 媒资视频帧率，单位为Hz
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFPS() const;

                    /**
                     * 设置媒资视频帧率，单位为Hz
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fPS 媒资视频帧率，单位为Hz
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFPS(const double& _fPS);

                    /**
                     * 判断参数 FPS 是否已赋值
                     * @return FPS 是否已赋值
                     * 
                     */
                    bool FPSHasBeenSet() const;

                    /**
                     * 获取媒资视频比特率，单位为kbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BitRate 媒资视频比特率，单位为kbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBitRate() const;

                    /**
                     * 设置媒资视频比特率，单位为kbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bitRate 媒资视频比特率，单位为kbps
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

                private:

                    /**
                     * 媒资视频文件大小，单位为字节
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 媒资视频文件MD5
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * 媒资视频时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 媒资视频总帧数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_numFrames;
                    bool m_numFramesHasBeenSet;

                    /**
                     * 媒资视频宽度，单位为像素
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 媒资视频高度，单位为像素
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 媒资视频帧率，单位为Hz
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fPS;
                    bool m_fPSHasBeenSet;

                    /**
                     * 媒资视频比特率，单位为kbps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAMETADATA_H_
