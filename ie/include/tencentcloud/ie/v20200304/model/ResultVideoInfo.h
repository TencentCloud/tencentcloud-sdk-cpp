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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_RESULTVIDEOINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_RESULTVIDEOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 结果媒体文件的视频流信息
                */
                class ResultVideoInfo : public AbstractModel
                {
                public:
                    ResultVideoInfo();
                    ~ResultVideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流在媒体文件中的流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamId 流在媒体文件中的流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStreamId() const;

                    /**
                     * 设置流在媒体文件中的流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streamId 流在媒体文件中的流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStreamId(const int64_t& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取流的时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 流的时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置流的时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 流的时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取画面宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 画面宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置画面宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 画面宽度
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
                     * 获取画面高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 画面高度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置画面高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height 画面高度
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
                     * 获取视频帧率，如果高于原始帧率，部分服务将无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fps 视频帧率，如果高于原始帧率，部分服务将无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置视频帧率，如果高于原始帧率，部分服务将无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fps 视频帧率，如果高于原始帧率，部分服务将无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * 流在媒体文件中的流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * 流的时长，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 画面宽度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 画面高度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频帧率，如果高于原始帧率，部分服务将无效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_RESULTVIDEOINFO_H_
