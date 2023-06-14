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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSCODEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSCODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaTranscodeItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 点播文件转码信息
                */
                class MediaTranscodeInfo : public AbstractModel
                {
                public:
                    MediaTranscodeInfo();
                    ~MediaTranscodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取各规格的转码信息集合，每个元素代表一个规格的转码结果。
                     * @return TranscodeSet 各规格的转码信息集合，每个元素代表一个规格的转码结果。
                     * 
                     */
                    std::vector<MediaTranscodeItem> GetTranscodeSet() const;

                    /**
                     * 设置各规格的转码信息集合，每个元素代表一个规格的转码结果。
                     * @param _transcodeSet 各规格的转码信息集合，每个元素代表一个规格的转码结果。
                     * 
                     */
                    void SetTranscodeSet(const std::vector<MediaTranscodeItem>& _transcodeSet);

                    /**
                     * 判断参数 TranscodeSet 是否已赋值
                     * @return TranscodeSet 是否已赋值
                     * 
                     */
                    bool TranscodeSetHasBeenSet() const;

                private:

                    /**
                     * 各规格的转码信息集合，每个元素代表一个规格的转码结果。
                     */
                    std::vector<MediaTranscodeItem> m_transcodeSet;
                    bool m_transcodeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSCODEINFO_H_
