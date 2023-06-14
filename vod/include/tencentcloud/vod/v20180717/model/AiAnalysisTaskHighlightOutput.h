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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKHIGHLIGHTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKHIGHLIGHTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisHighlightItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能精彩片段结果信息
                */
                class AiAnalysisTaskHighlightOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskHighlightOutput();
                    ~AiAnalysisTaskHighlightOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频智能精彩片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 HighlightSetFileUrl 对应的文件中获取。
                     * @return HighlightSet 视频智能精彩片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 HighlightSetFileUrl 对应的文件中获取。
                     * 
                     */
                    std::vector<MediaAiAnalysisHighlightItem> GetHighlightSet() const;

                    /**
                     * 设置视频智能精彩片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 HighlightSetFileUrl 对应的文件中获取。
                     * @param _highlightSet 视频智能精彩片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 HighlightSetFileUrl 对应的文件中获取。
                     * 
                     */
                    void SetHighlightSet(const std::vector<MediaAiAnalysisHighlightItem>& _highlightSet);

                    /**
                     * 判断参数 HighlightSet 是否已赋值
                     * @return HighlightSet 是否已赋值
                     * 
                     */
                    bool HighlightSetHasBeenSet() const;

                    /**
                     * 获取视频智能精彩片段列表文件 URL。文件的内容为 JSON，数据结构与 HighlightSet 字段一致。 （文件不会永久存储，到达 HighlightSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @return HighlightSetFileUrl 视频智能精彩片段列表文件 URL。文件的内容为 JSON，数据结构与 HighlightSet 字段一致。 （文件不会永久存储，到达 HighlightSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    std::string GetHighlightSetFileUrl() const;

                    /**
                     * 设置视频智能精彩片段列表文件 URL。文件的内容为 JSON，数据结构与 HighlightSet 字段一致。 （文件不会永久存储，到达 HighlightSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @param _highlightSetFileUrl 视频智能精彩片段列表文件 URL。文件的内容为 JSON，数据结构与 HighlightSet 字段一致。 （文件不会永久存储，到达 HighlightSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    void SetHighlightSetFileUrl(const std::string& _highlightSetFileUrl);

                    /**
                     * 判断参数 HighlightSetFileUrl 是否已赋值
                     * @return HighlightSetFileUrl 是否已赋值
                     * 
                     */
                    bool HighlightSetFileUrlHasBeenSet() const;

                    /**
                     * 获取视频智能精彩片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return HighlightSetFileUrlExpireTime 视频智能精彩片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetHighlightSetFileUrlExpireTime() const;

                    /**
                     * 设置视频智能精彩片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _highlightSetFileUrlExpireTime 视频智能精彩片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetHighlightSetFileUrlExpireTime(const std::string& _highlightSetFileUrlExpireTime);

                    /**
                     * 判断参数 HighlightSetFileUrlExpireTime 是否已赋值
                     * @return HighlightSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool HighlightSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 视频智能精彩片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 HighlightSetFileUrl 对应的文件中获取。
                     */
                    std::vector<MediaAiAnalysisHighlightItem> m_highlightSet;
                    bool m_highlightSetHasBeenSet;

                    /**
                     * 视频智能精彩片段列表文件 URL。文件的内容为 JSON，数据结构与 HighlightSet 字段一致。 （文件不会永久存储，到达 HighlightSetFileUrlExpireTime 时间点后文件将被删除）。
                     */
                    std::string m_highlightSetFileUrl;
                    bool m_highlightSetFileUrlHasBeenSet;

                    /**
                     * 视频智能精彩片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_highlightSetFileUrlExpireTime;
                    bool m_highlightSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKHIGHLIGHTOUTPUT_H_
