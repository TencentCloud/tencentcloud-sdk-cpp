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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_RESETPROCEDURETEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_RESETPROCEDURETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiContentReviewTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskInput.h>
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
                * ResetProcedureTemplate请求参数结构体
                */
                class ResetProcedureTemplateRequest : public AbstractModel
                {
                public:
                    ResetProcedureTemplateRequest();
                    ~ResetProcedureTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务流名字</p>
                     * @return Name <p>任务流名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务流名字</p>
                     * @param _name <p>任务流名字</p>
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
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

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
                     * @return MediaProcessTask <p>视频处理类型任务参数。</p>
                     * 
                     */
                    MediaProcessTaskInput GetMediaProcessTask() const;

                    /**
                     * 设置<p>视频处理类型任务参数。</p>
                     * @param _mediaProcessTask <p>视频处理类型任务参数。</p>
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
                     * 获取<p>AI 智能内容审核类型任务参数 *。<br><font color="red">*：该参数用于发起旧版审核，不建议使用。推荐使用 ReviewAudioVideoTask 参数发起审核。</font></p>
                     * @return AiContentReviewTask <p>AI 智能内容审核类型任务参数 *。<br><font color="red">*：该参数用于发起旧版审核，不建议使用。推荐使用 ReviewAudioVideoTask 参数发起审核。</font></p>
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置<p>AI 智能内容审核类型任务参数 *。<br><font color="red">*：该参数用于发起旧版审核，不建议使用。推荐使用 ReviewAudioVideoTask 参数发起审核。</font></p>
                     * @param _aiContentReviewTask <p>AI 智能内容审核类型任务参数 *。<br><font color="red">*：该参数用于发起旧版审核，不建议使用。推荐使用 ReviewAudioVideoTask 参数发起审核。</font></p>
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
                     * @return AiAnalysisTask <p>AI 智能内容分析类型任务参数。</p>
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置<p>AI 智能内容分析类型任务参数。</p>
                     * @param _aiAnalysisTask <p>AI 智能内容分析类型任务参数。</p>
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
                     * @return AiRecognitionTask <p>该参数已不推荐使用，建议使用 AiRecognitionTaskSet。</p>
                     * @deprecated
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置<p>该参数已不推荐使用，建议使用 AiRecognitionTaskSet。</p>
                     * @param _aiRecognitionTask <p>该参数已不推荐使用，建议使用 AiRecognitionTaskSet。</p>
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
                     * 获取<p>音视频审核类型任务参数。</p>
                     * @return ReviewAudioVideoTask <p>音视频审核类型任务参数。</p>
                     * 
                     */
                    ProcedureReviewAudioVideoTaskInput GetReviewAudioVideoTask() const;

                    /**
                     * 设置<p>音视频审核类型任务参数。</p>
                     * @param _reviewAudioVideoTask <p>音视频审核类型任务参数。</p>
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

                private:

                    /**
                     * <p>任务流名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>模板描述信息，长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>视频处理类型任务参数。</p>
                     */
                    MediaProcessTaskInput m_mediaProcessTask;
                    bool m_mediaProcessTaskHasBeenSet;

                    /**
                     * <p>AI 智能内容审核类型任务参数 *。<br><font color="red">*：该参数用于发起旧版审核，不建议使用。推荐使用 ReviewAudioVideoTask 参数发起审核。</font></p>
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * <p>AI 智能内容分析类型任务参数。</p>
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
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * <p>音视频审核类型任务参数。</p>
                     */
                    ProcedureReviewAudioVideoTaskInput m_reviewAudioVideoTask;
                    bool m_reviewAudioVideoTaskHasBeenSet;

                    /**
                     * <p>导入智能媒资知识库任务参数。</p>
                     */
                    std::vector<ImportMediaKnowledgeTaskInput> m_importMediaKnowledgeTaskSet;
                    bool m_importMediaKnowledgeTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RESETPROCEDURETEMPLATEREQUEST_H_
