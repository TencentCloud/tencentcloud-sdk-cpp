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
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrFullTextResultOutputSubtitleItem.h>


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
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * @return SegmentSet 语音全文识别片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrFullTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置语音全文识别片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * @param _segmentSet 语音全文识别片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskAsrFullTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取语音全文识别片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @return SegmentSetFileUrl 语音全文识别片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置语音全文识别片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @param _segmentSetFileUrl 语音全文识别片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    void SetSegmentSetFileUrl(const std::string& _segmentSetFileUrl);

                    /**
                     * 判断参数 SegmentSetFileUrl 是否已赋值
                     * @return SegmentSetFileUrl 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlHasBeenSet() const;

                    /**
                     * 获取语音全文识别片段列表文件 URL 失效时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return SegmentSetFileUrlExpireTime 语音全文识别片段列表文件 URL 失效时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置语音全文识别片段列表文件 URL 失效时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _segmentSetFileUrlExpireTime 语音全文识别片段列表文件 URL 失效时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                    /**
                     * 获取生成的字幕列表，对应 [语音全文识别任务控制参数](https://cloud.tencent.com/document/api/266/31773#AsrFullTextConfigureInfo) SubtitleFormats。
                     * @return SubtitleSet 生成的字幕列表，对应 [语音全文识别任务控制参数](https://cloud.tencent.com/document/api/266/31773#AsrFullTextConfigureInfo) SubtitleFormats。
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem> GetSubtitleSet() const;

                    /**
                     * 设置生成的字幕列表，对应 [语音全文识别任务控制参数](https://cloud.tencent.com/document/api/266/31773#AsrFullTextConfigureInfo) SubtitleFormats。
                     * @param _subtitleSet 生成的字幕列表，对应 [语音全文识别任务控制参数](https://cloud.tencent.com/document/api/266/31773#AsrFullTextConfigureInfo) SubtitleFormats。
                     * 
                     */
                    void SetSubtitleSet(const std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem>& _subtitleSet);

                    /**
                     * 判断参数 SubtitleSet 是否已赋值
                     * @return SubtitleSet 是否已赋值
                     * 
                     */
                    bool SubtitleSetHasBeenSet() const;

                    /**
                     * 获取生成的字幕文件 Url，对应 [语音全文识别任务控制参数](https://cloud.tencent.com/document/api/266/31773#AsrFullTextConfigureInfo) SubtitleFormat。
                     * @return SubtitleUrl 生成的字幕文件 Url，对应 [语音全文识别任务控制参数](https://cloud.tencent.com/document/api/266/31773#AsrFullTextConfigureInfo) SubtitleFormat。
                     * 
                     */
                    std::string GetSubtitleUrl() const;

                    /**
                     * 设置生成的字幕文件 Url，对应 [语音全文识别任务控制参数](https://cloud.tencent.com/document/api/266/31773#AsrFullTextConfigureInfo) SubtitleFormat。
                     * @param _subtitleUrl 生成的字幕文件 Url，对应 [语音全文识别任务控制参数](https://cloud.tencent.com/document/api/266/31773#AsrFullTextConfigureInfo) SubtitleFormat。
                     * 
                     */
                    void SetSubtitleUrl(const std::string& _subtitleUrl);

                    /**
                     * 判断参数 SubtitleUrl 是否已赋值
                     * @return SubtitleUrl 是否已赋值
                     * 
                     */
                    bool SubtitleUrlHasBeenSet() const;

                private:

                    /**
                     * 语音全文识别片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     */
                    std::vector<AiRecognitionTaskAsrFullTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * 语音全文识别片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * 语音全文识别片段列表文件 URL 失效时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                    /**
                     * 生成的字幕列表，对应 [语音全文识别任务控制参数](https://cloud.tencent.com/document/api/266/31773#AsrFullTextConfigureInfo) SubtitleFormats。
                     */
                    std::vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                    /**
                     * 生成的字幕文件 Url，对应 [语音全文识别任务控制参数](https://cloud.tencent.com/document/api/266/31773#AsrFullTextConfigureInfo) SubtitleFormat。
                     */
                    std::string m_subtitleUrl;
                    bool m_subtitleUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_
