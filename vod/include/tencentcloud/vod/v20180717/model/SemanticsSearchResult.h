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
                     * 获取媒体文件唯一标识 ID。
                     * @return FileId 媒体文件唯一标识 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件唯一标识 ID。
                     * @param _fileId 媒体文件唯一标识 ID。
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
                     * 获取视频在本次检索中的得分，得分越高和检索值越相似，取值范围[0,1]
                     * @return Score 视频在本次检索中的得分，得分越高和检索值越相似，取值范围[0,1]
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置视频在本次检索中的得分，得分越高和检索值越相似，取值范围[0,1]
                     * @param _score 视频在本次检索中的得分，得分越高和检索值越相似，取值范围[0,1]
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
                     * 获取视频片段的开始时间，单位：秒
                     * @return StartTimeOffset 视频片段的开始时间，单位：秒
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置视频片段的开始时间，单位：秒
                     * @param _startTimeOffset 视频片段的开始时间，单位：秒
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
                     * 获取视频片段的开始时间，单位：秒
                     * @return EndTimeOffset 视频片段的开始时间，单位：秒
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置视频片段的开始时间，单位：秒
                     * @param _endTimeOffset 视频片段的开始时间，单位：秒
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
                     * 媒体文件唯一标识 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 视频在本次检索中的得分，得分越高和检索值越相似，取值范围[0,1]
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 视频片段的开始时间，单位：秒
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 视频片段的开始时间，单位：秒
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEMANTICSSEARCHRESULT_H_
