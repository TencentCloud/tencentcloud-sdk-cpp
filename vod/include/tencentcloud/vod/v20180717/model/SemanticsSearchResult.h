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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEMANTICSSEARCHRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEMANTICSSEARCHRESULT_H_

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
                * 语义搜索结果。
                */
                class SemanticsSearchResult : public AbstractModel
                {
                public:
                    SemanticsSearchResult();
                    ~SemanticsSearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>媒体文件唯一标识 ID。</p>
                     * @return FileId <p>媒体文件唯一标识 ID。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>媒体文件唯一标识 ID。</p>
                     * @param _fileId <p>媒体文件唯一标识 ID。</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>智能媒资为当前片段生成的标题</p>
                     * @return Title <p>智能媒资为当前片段生成的标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>智能媒资为当前片段生成的标题</p>
                     * @param _title <p>智能媒资为当前片段生成的标题</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>视频在本次检索中的得分，得分越高和检索值越相似，取值范围[0,1]</p>
                     * @return Score <p>视频在本次检索中的得分，得分越高和检索值越相似，取值范围[0,1]</p>
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置<p>视频在本次检索中的得分，得分越高和检索值越相似，取值范围[0,1]</p>
                     * @param _score <p>视频在本次检索中的得分，得分越高和检索值越相似，取值范围[0,1]</p>
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>视频片段的开始时间，单位：秒</p>
                     * @return StartTimeOffset <p>视频片段的开始时间，单位：秒</p>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>视频片段的开始时间，单位：秒</p>
                     * @param _startTimeOffset <p>视频片段的开始时间，单位：秒</p>
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取<p>视频片段的结束时间，单位：秒</p>
                     * @return EndTimeOffset <p>视频片段的结束时间，单位：秒</p>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>视频片段的结束时间，单位：秒</p>
                     * @param _endTimeOffset <p>视频片段的结束时间，单位：秒</p>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * <p>媒体文件唯一标识 ID。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>智能媒资为当前片段生成的标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>视频在本次检索中的得分，得分越高和检索值越相似，取值范围[0,1]</p>
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>视频片段的开始时间，单位：秒</p>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>视频片段的结束时间，单位：秒</p>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEMANTICSSEARCHRESULT_H_
