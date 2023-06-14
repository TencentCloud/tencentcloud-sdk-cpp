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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYVIDEOOUTPUT_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYVIDEOOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * 视频美颜返回结果
                */
                class BeautifyVideoOutput : public AbstractModel
                {
                public:
                    BeautifyVideoOutput();
                    ~BeautifyVideoOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频美颜输出的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoUrl 视频美颜输出的url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置视频美颜输出的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoUrl 视频美颜输出的url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取视频美颜输出的视频MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoMD5 视频美颜输出的视频MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVideoMD5() const;

                    /**
                     * 设置视频美颜输出的视频MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoMD5 视频美颜输出的视频MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoMD5(const std::string& _videoMD5);

                    /**
                     * 判断参数 VideoMD5 是否已赋值
                     * @return VideoMD5 是否已赋值
                     * 
                     */
                    bool VideoMD5HasBeenSet() const;

                    /**
                     * 获取美颜输出的视频封面图base64字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverImage 美颜输出的视频封面图base64字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCoverImage() const;

                    /**
                     * 设置美颜输出的视频封面图base64字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverImage 美颜输出的视频封面图base64字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverImage(const std::string& _coverImage);

                    /**
                     * 判断参数 CoverImage 是否已赋值
                     * @return CoverImage 是否已赋值
                     * 
                     */
                    bool CoverImageHasBeenSet() const;

                    /**
                     * 获取视频宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 视频宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 视频宽度
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
                     * 获取视频高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 视频高度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height 视频高度
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
                     * 获取每秒传输帧数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fps 每秒传输帧数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFps() const;

                    /**
                     * 设置每秒传输帧数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fps 每秒传输帧数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFps(const double& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取视频播放时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DurationInSec 视频播放时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDurationInSec() const;

                    /**
                     * 设置视频播放时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _durationInSec 视频播放时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDurationInSec(const double& _durationInSec);

                    /**
                     * 判断参数 DurationInSec 是否已赋值
                     * @return DurationInSec 是否已赋值
                     * 
                     */
                    bool DurationInSecHasBeenSet() const;

                private:

                    /**
                     * 视频美颜输出的url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 视频美颜输出的视频MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoMD5;
                    bool m_videoMD5HasBeenSet;

                    /**
                     * 美颜输出的视频封面图base64字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coverImage;
                    bool m_coverImageHasBeenSet;

                    /**
                     * 视频宽度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频高度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 每秒传输帧数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 视频播放时长，单位为秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_durationInSec;
                    bool m_durationInSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYVIDEOOUTPUT_H_
