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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaTrack.h>
#include <tencentcloud/vod/v20180717/model/Canvas.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 制作媒体文件任务的输入。
                */
                class ComposeMediaTaskInput : public AbstractModel
                {
                public:
                    ComposeMediaTaskInput();
                    ~ComposeMediaTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入的媒体轨道列表，包括视频、音频、图片等素材组成的多个轨道信息。
                     * @return Tracks 输入的媒体轨道列表，包括视频、音频、图片等素材组成的多个轨道信息。
                     * 
                     */
                    std::vector<MediaTrack> GetTracks() const;

                    /**
                     * 设置输入的媒体轨道列表，包括视频、音频、图片等素材组成的多个轨道信息。
                     * @param _tracks 输入的媒体轨道列表，包括视频、音频、图片等素材组成的多个轨道信息。
                     * 
                     */
                    void SetTracks(const std::vector<MediaTrack>& _tracks);

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     * 
                     */
                    bool TracksHasBeenSet() const;

                    /**
                     * 获取制作视频文件时使用的画布。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Canvas 制作视频文件时使用的画布。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Canvas GetCanvas() const;

                    /**
                     * 设置制作视频文件时使用的画布。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canvas 制作视频文件时使用的画布。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanvas(const Canvas& _canvas);

                    /**
                     * 判断参数 Canvas 是否已赋值
                     * @return Canvas 是否已赋值
                     * 
                     */
                    bool CanvasHasBeenSet() const;

                    /**
                     * 获取输出的媒体文件信息。
                     * @return Output 输出的媒体文件信息。
                     * 
                     */
                    ComposeMediaOutput GetOutput() const;

                    /**
                     * 设置输出的媒体文件信息。
                     * @param _output 输出的媒体文件信息。
                     * 
                     */
                    void SetOutput(const ComposeMediaOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 输入的媒体轨道列表，包括视频、音频、图片等素材组成的多个轨道信息。
                     */
                    std::vector<MediaTrack> m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * 制作视频文件时使用的画布。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Canvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * 输出的媒体文件信息。
                     */
                    ComposeMediaOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASKINPUT_H_
