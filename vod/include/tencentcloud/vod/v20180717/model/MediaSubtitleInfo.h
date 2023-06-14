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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBTITLEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBTITLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaSubtitleItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 字幕信息。
                */
                class MediaSubtitleInfo : public AbstractModel
                {
                public:
                    MediaSubtitleInfo();
                    ~MediaSubtitleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字幕信息列表。
                     * @return SubtitleSet 字幕信息列表。
                     * 
                     */
                    std::vector<MediaSubtitleItem> GetSubtitleSet() const;

                    /**
                     * 设置字幕信息列表。
                     * @param _subtitleSet 字幕信息列表。
                     * 
                     */
                    void SetSubtitleSet(const std::vector<MediaSubtitleItem>& _subtitleSet);

                    /**
                     * 判断参数 SubtitleSet 是否已赋值
                     * @return SubtitleSet 是否已赋值
                     * 
                     */
                    bool SubtitleSetHasBeenSet() const;

                private:

                    /**
                     * 字幕信息列表。
                     */
                    std::vector<MediaSubtitleItem> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBTITLEINFO_H_
