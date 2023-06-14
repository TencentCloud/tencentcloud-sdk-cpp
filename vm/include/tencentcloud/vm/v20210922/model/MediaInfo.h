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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_MEDIAINFO_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_MEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 媒体类型
                */
                class MediaInfo : public AbstractModel
                {
                public:
                    MediaInfo();
                    ~MediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编码格式
                     * @return Codecs 编码格式
                     * 
                     */
                    std::string GetCodecs() const;

                    /**
                     * 设置编码格式
                     * @param _codecs 编码格式
                     * 
                     */
                    void SetCodecs(const std::string& _codecs);

                    /**
                     * 判断参数 Codecs 是否已赋值
                     * @return Codecs 是否已赋值
                     * 
                     */
                    bool CodecsHasBeenSet() const;

                    /**
                     * 获取流检测时分片时长
注意：此字段可能返回 0，表示取不到有效值。
                     * @return Duration 流检测时分片时长
注意：此字段可能返回 0，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置流检测时分片时长
注意：此字段可能返回 0，表示取不到有效值。
                     * @param _duration 流检测时分片时长
注意：此字段可能返回 0，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取宽，单位为像素
                     * @return Width 宽，单位为像素
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽，单位为像素
                     * @param _width 宽，单位为像素
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
                     * 获取高，单位为像素
                     * @return Height 高，单位为像素
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高，单位为像素
                     * @param _height 高，单位为像素
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
                     * 获取封面
                     * @return Thumbnail 封面
                     * 
                     */
                    std::string GetThumbnail() const;

                    /**
                     * 设置封面
                     * @param _thumbnail 封面
                     * 
                     */
                    void SetThumbnail(const std::string& _thumbnail);

                    /**
                     * 判断参数 Thumbnail 是否已赋值
                     * @return Thumbnail 是否已赋值
                     * 
                     */
                    bool ThumbnailHasBeenSet() const;

                private:

                    /**
                     * 编码格式
                     */
                    std::string m_codecs;
                    bool m_codecsHasBeenSet;

                    /**
                     * 流检测时分片时长
注意：此字段可能返回 0，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 宽，单位为像素
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高，单位为像素
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 封面
                     */
                    std::string m_thumbnail;
                    bool m_thumbnailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_MEDIAINFO_H_
