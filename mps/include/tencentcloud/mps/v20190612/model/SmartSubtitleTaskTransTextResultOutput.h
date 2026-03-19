/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTRESULTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskTransTextSegmentItem.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/SubtitleTransResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 翻译结果。
                */
                class SmartSubtitleTaskTransTextResultOutput : public AbstractModel
                {
                public:
                    SmartSubtitleTaskTransTextResultOutput();
                    ~SmartSubtitleTaskTransTextResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>翻译片段列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentSet <p>翻译片段列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SmartSubtitleTaskTransTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置<p>翻译片段列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentSet <p>翻译片段列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentSet(const std::vector<SmartSubtitleTaskTransTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取<p>字幕文件地址。</p>
                     * @return SubtitlePath <p>字幕文件地址。</p>
                     * 
                     */
                    std::string GetSubtitlePath() const;

                    /**
                     * 设置<p>字幕文件地址。</p>
                     * @param _subtitlePath <p>字幕文件地址。</p>
                     * 
                     */
                    void SetSubtitlePath(const std::string& _subtitlePath);

                    /**
                     * 判断参数 SubtitlePath 是否已赋值
                     * @return SubtitlePath 是否已赋值
                     * 
                     */
                    bool SubtitlePathHasBeenSet() const;

                    /**
                     * 获取<p>智能字幕结果存储信息。</p>
                     * @return OutputStorage <p>智能字幕结果存储信息。</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>智能字幕结果存储信息。</p>
                     * @param _outputStorage <p>智能字幕结果存储信息。</p>
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取<p>字幕文件路径。</p>
                     * @return Path <p>字幕文件路径。</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>字幕文件路径。</p>
                     * @param _path <p>字幕文件路径。</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>多语言翻译时返回翻译结果。</p>
                     * @return SubtitleResults <p>多语言翻译时返回翻译结果。</p>
                     * 
                     */
                    std::vector<SubtitleTransResultItem> GetSubtitleResults() const;

                    /**
                     * 设置<p>多语言翻译时返回翻译结果。</p>
                     * @param _subtitleResults <p>多语言翻译时返回翻译结果。</p>
                     * 
                     */
                    void SetSubtitleResults(const std::vector<SubtitleTransResultItem>& _subtitleResults);

                    /**
                     * 判断参数 SubtitleResults 是否已赋值
                     * @return SubtitleResults 是否已赋值
                     * 
                     */
                    bool SubtitleResultsHasBeenSet() const;

                private:

                    /**
                     * <p>翻译片段列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SmartSubtitleTaskTransTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * <p>字幕文件地址。</p>
                     */
                    std::string m_subtitlePath;
                    bool m_subtitlePathHasBeenSet;

                    /**
                     * <p>智能字幕结果存储信息。</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>字幕文件路径。</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>多语言翻译时返回翻译结果。</p>
                     */
                    std::vector<SubtitleTransResultItem> m_subtitleResults;
                    bool m_subtitleResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTRESULTOUTPUT_H_
