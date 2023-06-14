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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBSTREAMINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBSTREAMINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 转自适应码流子流信息。
                */
                class MediaSubStreamInfoItem : public AbstractModel
                {
                public:
                    MediaSubStreamInfoItem();
                    ~MediaSubStreamInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子流类型，取值范围：
<li>audio：纯音频；</li>
<li>video：视频（可能包含音频流）。</li>
                     * @return Type 子流类型，取值范围：
<li>audio：纯音频；</li>
<li>video：视频（可能包含音频流）。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置子流类型，取值范围：
<li>audio：纯音频；</li>
<li>video：视频（可能包含音频流）。</li>
                     * @param _type 子流类型，取值范围：
<li>audio：纯音频；</li>
<li>video：视频（可能包含音频流）。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取当子流为视频流时，视频画面宽度，单位：px。
                     * @return Width 当子流为视频流时，视频画面宽度，单位：px。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置当子流为视频流时，视频画面宽度，单位：px。
                     * @param _width 当子流为视频流时，视频画面宽度，单位：px。
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取当子流为视频流时，视频画面高度，单位：px。
                     * @return Height 当子流为视频流时，视频画面高度，单位：px。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置当子流为视频流时，视频画面高度，单位：px。
                     * @param _height 当子流为视频流时，视频画面高度，单位：px。
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取子流媒体文件大小，单位：Byte。
<font color=red>注意：</font>在 2023-02-09T16:00:00Z 前处理生成的自适应码流文件此字段为0。
                     * @return Size 子流媒体文件大小，单位：Byte。
<font color=red>注意：</font>在 2023-02-09T16:00:00Z 前处理生成的自适应码流文件此字段为0。
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置子流媒体文件大小，单位：Byte。
<font color=red>注意：</font>在 2023-02-09T16:00:00Z 前处理生成的自适应码流文件此字段为0。
                     * @param _size 子流媒体文件大小，单位：Byte。
<font color=red>注意：</font>在 2023-02-09T16:00:00Z 前处理生成的自适应码流文件此字段为0。
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 子流类型，取值范围：
<li>audio：纯音频；</li>
<li>video：视频（可能包含音频流）。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当子流为视频流时，视频画面宽度，单位：px。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 当子流为视频流时，视频画面高度，单位：px。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 子流媒体文件大小，单位：Byte。
<font color=red>注意：</font>在 2023-02-09T16:00:00Z 前处理生成的自适应码流文件此字段为0。
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBSTREAMINFOITEM_H_
