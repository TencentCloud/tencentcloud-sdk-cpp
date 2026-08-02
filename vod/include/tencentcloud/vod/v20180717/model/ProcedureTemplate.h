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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiContentReviewTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskInput.h>
#include <tencentcloud/vod/v20180717/model/WechatMiniProgramPublishTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ProcedureReviewAudioVideoTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeTaskInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 任务流模板详情
                */
                class ProcedureTemplate : public AbstractModel
                {
                public:
                    ProcedureTemplate();
                    ~ProcedureTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务流名字。</p>
                     * @return Name <p>任务流名字。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务流名字。</p>
                     * @param _name <p>任务流名字。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>任务流模板类型，取值范围：</p><li>Preset：系统预置任务流模板；</li><li>Custom：用户自定义任务流模板。</li>
                     * @return Type <p>任务流模板类型，取值范围：</p><li>Preset：系统预置任务流模板；</li><li>Custom：用户自定义任务流模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>任务流模板类型，取值范围：</p><li>Preset：系统预置任务流模板；</li><li>Custom：用户自定义任务流模板。</li>
                     * @param _type <p>任务流模板类型，取值范围：</p><li>Preset：系统预置任务流模板；</li><li>Custom：用户自定义任务流模板。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>模板描述信息，长度限制：256 个字符。</p>
                     * @return Comment <p>模板描述信息，长度限制：256 个字符。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>模板描述信息，长度限制：256 个字符。</p>
                     * @param _comment <p>模板描述信息，长度限制：256 个字符。</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>视频处理类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaProcessTask <p>视频处理类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置<p>视频处理类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaProcessTask <p>视频处理类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask);

                    /**
                     * 判断参数 MediaProcessTask 是否已赋值
                     * @return MediaProcessTask 是否已赋值
                     * 
                     */
                    bool MediaProcessTaskHasBeenSet() const;

                    /**
                     * 获取<p>AI 智能审核类型任务参数 *。<br><font color="red">*：该参数用于发起旧版审核，不建议使用。推荐使用 ReviewAudioVideoTask 参数发起审核。</font></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiContentReviewTask <p>AI 智能审核类型任务参数 *。<br><font color="red">*：该参数用于发起旧版审核，不建议使用。推荐使用 ReviewAudioVideoTask 参数发起审核。</font></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置<p>AI 智能审核类型任务参数 *。<br><font color="red">*：该参数用于发起旧版审核，不建议使用。推荐使用 ReviewAudioVideoTask 参数发起审核。</font></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiContentReviewTask <p>AI 智能审核类型任务参数 *。<br><font color="red">*：该参数用于发起旧版审核，不建议使用。推荐使用 ReviewAudioVideoTask 参数发起审核。</font></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask);

                    /**
                     * 判断参数 AiContentReviewTask 是否已赋值
                     * @return AiContentReviewTask 是否已赋值
                     * 
                     */
                    bool AiContentReviewTaskHasBeenSet() const;

                    /**
                     * 获取<p>AI 智能内容分析类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiAnalysisTask <p>AI 智能内容分析类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置<p>AI 智能内容分析类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiAnalysisTask <p>AI 智能内容分析类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     * 
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取<p>AI 内容识别类型任务参数。</p>
                     * @return AiRecognitionTaskSet <p>AI 内容识别类型任务参数。</p>
                     * 
                     */
                    std::vector<AiRecognitionTaskInput> GetAiRecognitionTaskSet() const;

                    /**
                     * 设置<p>AI 内容识别类型任务参数。</p>
                     * @param _aiRecognitionTaskSet <p>AI 内容识别类型任务参数。</p>
                     * 
                     */
                    void SetAiRecognitionTaskSet(const std::vector<AiRecognitionTaskInput>& _aiRecognitionTaskSet);

                    /**
                     * 判断参数 AiRecognitionTaskSet 是否已赋值
                     * @return AiRecognitionTaskSet 是否已赋值
                     * 
                     */
                    bool AiRecognitionTaskSetHasBeenSet() const;

                    /**
                     * 获取<p>该参数已不推荐使用，建议使用 AiRecognitionTaskSet。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiRecognitionTask <p>该参数已不推荐使用，建议使用 AiRecognitionTaskSet。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置<p>该参数已不推荐使用，建议使用 AiRecognitionTaskSet。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiRecognitionTask <p>该参数已不推荐使用，建议使用 AiRecognitionTaskSet。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     * @deprecated
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

                    /**
                     * 获取<p>微信小程序发布任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MiniProgramPublishTask <p>微信小程序发布任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WechatMiniProgramPublishTaskInput GetMiniProgramPublishTask() const;

                    /**
                     * 设置<p>微信小程序发布任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _miniProgramPublishTask <p>微信小程序发布任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMiniProgramPublishTask(const WechatMiniProgramPublishTaskInput& _miniProgramPublishTask);

                    /**
                     * 判断参数 MiniProgramPublishTask 是否已赋值
                     * @return MiniProgramPublishTask 是否已赋值
                     * 
                     */
                    bool MiniProgramPublishTaskHasBeenSet() const;

                    /**
                     * 获取<p>音视频审核类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReviewAudioVideoTask <p>音视频审核类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProcedureReviewAudioVideoTaskInput GetReviewAudioVideoTask() const;

                    /**
                     * 设置<p>音视频审核类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reviewAudioVideoTask <p>音视频审核类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReviewAudioVideoTask(const ProcedureReviewAudioVideoTaskInput& _reviewAudioVideoTask);

                    /**
                     * 判断参数 ReviewAudioVideoTask 是否已赋值
                     * @return ReviewAudioVideoTask 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskHasBeenSet() const;

                    /**
                     * 获取<p>导入智能媒资知识库任务参数。</p>
                     * @return ImportMediaKnowledgeTaskSet <p>导入智能媒资知识库任务参数。</p>
                     * 
                     */
                    std::vector<ImportMediaKnowledgeTaskInput> GetImportMediaKnowledgeTaskSet() const;

                    /**
                     * 设置<p>导入智能媒资知识库任务参数。</p>
                     * @param _importMediaKnowledgeTaskSet <p>导入智能媒资知识库任务参数。</p>
                     * 
                     */
                    void SetImportMediaKnowledgeTaskSet(const std::vector<ImportMediaKnowledgeTaskInput>& _importMediaKnowledgeTaskSet);

                    /**
                     * 判断参数 ImportMediaKnowledgeTaskSet 是否已赋值
                     * @return ImportMediaKnowledgeTaskSet 是否已赋值
                     * 
                     */
                    bool ImportMediaKnowledgeTaskSetHasBeenSet() const;

                    /**
                     * 获取<p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return CreateTime <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _createTime <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return UpdateTime <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _updateTime <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>任务流名字。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>任务流模板类型，取值范围：</p><li>Preset：系统预置任务流模板；</li><li>Custom：用户自定义任务流模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>模板描述信息，长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>视频处理类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * <p>AI 智能审核类型任务参数 *。<br><font color="red">*：该参数用于发起旧版审核，不建议使用。推荐使用 ReviewAudioVideoTask 参数发起审核。</font></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * <p>AI 智能内容分析类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * <p>AI 内容识别类型任务参数。</p>
                     */
                    std::vector<AiRecognitionTaskInput> m_aiRecognitionTaskSet;
                    bool m_aiRecognitionTaskSetHasBeenSet;

                    /**
                     * <p>该参数已不推荐使用，建议使用 AiRecognitionTaskSet。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * <p>微信小程序发布任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatMiniProgramPublishTaskInput m_miniProgramPublishTask;
                    bool m_miniProgramPublishTaskHasBeenSet;

                    /**
                     * <p>音视频审核类型任务参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcedureReviewAudioVideoTaskInput m_reviewAudioVideoTask;
                    bool m_reviewAudioVideoTaskHasBeenSet;

                    /**
                     * <p>导入智能媒资知识库任务参数。</p>
                     */
                    std::vector<ImportMediaKnowledgeTaskInput> m_importMediaKnowledgeTaskSet;
                    bool m_importMediaKnowledgeTaskSetHasBeenSet;

                    /**
                     * <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETEMPLATE_H_
