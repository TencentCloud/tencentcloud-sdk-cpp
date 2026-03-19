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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKASRFULLTEXTRESULTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKASRFULLTEXTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskAsrFullTextSegmentItem.h>
#include <tencentcloud/mps/v20190612/model/SubtitleResult.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 语音全文识别结果。
                */
                class SmartSubtitleTaskAsrFullTextResultOutput : public AbstractModel
                {
                public:
                    SmartSubtitleTaskAsrFullTextResultOutput();
                    ~SmartSubtitleTaskAsrFullTextResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>语音全文识别片段列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentSet <p>语音全文识别片段列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SmartSubtitleTaskAsrFullTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置<p>语音全文识别片段列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentSet <p>语音全文识别片段列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentSet(const std::vector<SmartSubtitleTaskAsrFullTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取<p>字幕文件路径</p>
                     * @return Path <p>字幕文件路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>字幕文件路径</p>
                     * @param _path <p>字幕文件路径</p>
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
                     * 获取<p>识别字幕结果信息。</p>
                     * @return SubtitleInfo <p>识别字幕结果信息。</p>
                     * 
                     */
                    SubtitleResult GetSubtitleInfo() const;

                    /**
                     * 设置<p>识别字幕结果信息。</p>
                     * @param _subtitleInfo <p>识别字幕结果信息。</p>
                     * 
                     */
                    void SetSubtitleInfo(const SubtitleResult& _subtitleInfo);

                    /**
                     * 判断参数 SubtitleInfo 是否已赋值
                     * @return SubtitleInfo 是否已赋值
                     * 
                     */
                    bool SubtitleInfoHasBeenSet() const;

                    /**
                     * 获取<p>字幕文件存储位置。</p>
                     * @return OutputStorage <p>字幕文件存储位置。</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>字幕文件存储位置。</p>
                     * @param _outputStorage <p>字幕文件存储位置。</p>
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * <p>语音全文识别片段列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SmartSubtitleTaskAsrFullTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * <p>字幕文件路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>字幕文件地址。</p>
                     */
                    std::string m_subtitlePath;
                    bool m_subtitlePathHasBeenSet;

                    /**
                     * <p>识别字幕结果信息。</p>
                     */
                    SubtitleResult m_subtitleInfo;
                    bool m_subtitleInfoHasBeenSet;

                    /**
                     * <p>字幕文件存储位置。</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKASRFULLTEXTRESULTOUTPUT_H_
