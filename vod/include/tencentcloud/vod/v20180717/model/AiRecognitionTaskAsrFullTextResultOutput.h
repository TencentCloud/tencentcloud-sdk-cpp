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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrFullTextSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 语音全文识别结果。
                */
                class AiRecognitionTaskAsrFullTextResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrFullTextResultOutput();
                    ~AiRecognitionTaskAsrFullTextResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音全文识别片段列表。
                     * @return SegmentSet 语音全文识别片段列表。
                     */
                    std::vector<AiRecognitionTaskAsrFullTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置语音全文识别片段列表。
                     * @param SegmentSet 语音全文识别片段列表。
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskAsrFullTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取字幕文件 Url。
                     * @return SubtitleUrl 字幕文件 Url。
                     */
                    std::string GetSubtitleUrl() const;

                    /**
                     * 设置字幕文件 Url。
                     * @param SubtitleUrl 字幕文件 Url。
                     */
                    void SetSubtitleUrl(const std::string& _subtitleUrl);

                    /**
                     * 判断参数 SubtitleUrl 是否已赋值
                     * @return SubtitleUrl 是否已赋值
                     */
                    bool SubtitleUrlHasBeenSet() const;

                private:

                    /**
                     * 语音全文识别片段列表。
                     */
                    std::vector<AiRecognitionTaskAsrFullTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * 字幕文件 Url。
                     */
                    std::string m_subtitleUrl;
                    bool m_subtitleUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_
