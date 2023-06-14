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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_EDITINGTASKRESULT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_EDITINGTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/TagTaskResult.h>
#include <tencentcloud/ie/v20200304/model/ClassificationTaskResult.h>
#include <tencentcloud/ie/v20200304/model/StripTaskResult.h>
#include <tencentcloud/ie/v20200304/model/HighlightsTaskResult.h>
#include <tencentcloud/ie/v20200304/model/CoverTaskResult.h>
#include <tencentcloud/ie/v20200304/model/OpeningEndingTaskResult.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 智能识别任务结果信息
                */
                class EditingTaskResult : public AbstractModel
                {
                public:
                    EditingTaskResult();
                    ~EditingTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编辑任务 ID。
                     * @return TaskId 编辑任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置编辑任务 ID。
                     * @param _taskId 编辑任务 ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取编辑任务状态。 
1：执行中；2：已完成。
                     * @return Status 编辑任务状态。 
1：执行中；2：已完成。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置编辑任务状态。 
1：执行中；2：已完成。
                     * @param _status 编辑任务状态。 
1：执行中；2：已完成。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取视频标签识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagTaskResult 视频标签识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TagTaskResult GetTagTaskResult() const;

                    /**
                     * 设置视频标签识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagTaskResult 视频标签识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagTaskResult(const TagTaskResult& _tagTaskResult);

                    /**
                     * 判断参数 TagTaskResult 是否已赋值
                     * @return TagTaskResult 是否已赋值
                     * 
                     */
                    bool TagTaskResultHasBeenSet() const;

                    /**
                     * 获取视频分类识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationTaskResult 视频分类识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClassificationTaskResult GetClassificationTaskResult() const;

                    /**
                     * 设置视频分类识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classificationTaskResult 视频分类识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassificationTaskResult(const ClassificationTaskResult& _classificationTaskResult);

                    /**
                     * 判断参数 ClassificationTaskResult 是否已赋值
                     * @return ClassificationTaskResult 是否已赋值
                     * 
                     */
                    bool ClassificationTaskResultHasBeenSet() const;

                    /**
                     * 获取智能拆条结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StripTaskResult 智能拆条结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StripTaskResult GetStripTaskResult() const;

                    /**
                     * 设置智能拆条结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stripTaskResult 智能拆条结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStripTaskResult(const StripTaskResult& _stripTaskResult);

                    /**
                     * 判断参数 StripTaskResult 是否已赋值
                     * @return StripTaskResult 是否已赋值
                     * 
                     */
                    bool StripTaskResultHasBeenSet() const;

                    /**
                     * 获取智能集锦结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighlightsTaskResult 智能集锦结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HighlightsTaskResult GetHighlightsTaskResult() const;

                    /**
                     * 设置智能集锦结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highlightsTaskResult 智能集锦结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHighlightsTaskResult(const HighlightsTaskResult& _highlightsTaskResult);

                    /**
                     * 判断参数 HighlightsTaskResult 是否已赋值
                     * @return HighlightsTaskResult 是否已赋值
                     * 
                     */
                    bool HighlightsTaskResultHasBeenSet() const;

                    /**
                     * 获取智能封面结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverTaskResult 智能封面结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CoverTaskResult GetCoverTaskResult() const;

                    /**
                     * 设置智能封面结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverTaskResult 智能封面结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverTaskResult(const CoverTaskResult& _coverTaskResult);

                    /**
                     * 判断参数 CoverTaskResult 是否已赋值
                     * @return CoverTaskResult 是否已赋值
                     * 
                     */
                    bool CoverTaskResultHasBeenSet() const;

                    /**
                     * 获取片头片尾识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpeningEndingTaskResult 片头片尾识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OpeningEndingTaskResult GetOpeningEndingTaskResult() const;

                    /**
                     * 设置片头片尾识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openingEndingTaskResult 片头片尾识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpeningEndingTaskResult(const OpeningEndingTaskResult& _openingEndingTaskResult);

                    /**
                     * 判断参数 OpeningEndingTaskResult 是否已赋值
                     * @return OpeningEndingTaskResult 是否已赋值
                     * 
                     */
                    bool OpeningEndingTaskResultHasBeenSet() const;

                private:

                    /**
                     * 编辑任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 编辑任务状态。 
1：执行中；2：已完成。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 视频标签识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TagTaskResult m_tagTaskResult;
                    bool m_tagTaskResultHasBeenSet;

                    /**
                     * 视频分类识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClassificationTaskResult m_classificationTaskResult;
                    bool m_classificationTaskResultHasBeenSet;

                    /**
                     * 智能拆条结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StripTaskResult m_stripTaskResult;
                    bool m_stripTaskResultHasBeenSet;

                    /**
                     * 智能集锦结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HighlightsTaskResult m_highlightsTaskResult;
                    bool m_highlightsTaskResultHasBeenSet;

                    /**
                     * 智能封面结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CoverTaskResult m_coverTaskResult;
                    bool m_coverTaskResultHasBeenSet;

                    /**
                     * 片头片尾识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OpeningEndingTaskResult m_openingEndingTaskResult;
                    bool m_openingEndingTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_EDITINGTASKRESULT_H_
