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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEQARESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEQARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Highlight.h>
#include <tencentcloud/lke/v20231130/model/AttrLabel.h>
#include <tencentcloud/lke/v20231130/model/SimilarQuestion.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeQA返回参数结构体
                */
                class DescribeQAResponse : public AbstractModel
                {
                public:
                    DescribeQAResponse();
                    ~DescribeQAResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取QA业务ID

                     * @return QaBizId QA业务ID

                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                    /**
                     * 获取问题

                     * @return Question 问题

                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取答案

                     * @return Answer 答案

                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取自定义参数
                     * @return CustomParam 自定义参数
                     * 
                     */
                    std::string GetCustomParam() const;

                    /**
                     * 判断参数 CustomParam 是否已赋值
                     * @return CustomParam 是否已赋值
                     * 
                     */
                    bool CustomParamHasBeenSet() const;

                    /**
                     * 获取来源 1-文档生成问答对  2-批量导入问答对  3-单条手动录入问答对
                     * @return Source 来源 1-文档生成问答对  2-批量导入问答对  3-单条手动录入问答对
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取来源描述

                     * @return SourceDesc 来源描述

                     * 
                     */
                    std::string GetSourceDesc() const;

                    /**
                     * 判断参数 SourceDesc 是否已赋值
                     * @return SourceDesc 是否已赋值
                     * 
                     */
                    bool SourceDescHasBeenSet() const;

                    /**
                     * 获取更新时间

                     * @return UpdateTime 更新时间

                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取状态 <br>1-未校验  2-未发布 3-发布中 4-已发布  5-发布失败 6-不采纳 7-审核中  8-审核失败  9-审核失败申诉后人工审核中  11-审核失败申诉后人工审核不通过  12-已过期  13-超量失效  14-超量失效恢复 19-学习中  20-学习失败
                     * @return Status 状态 <br>1-未校验  2-未发布 3-发布中 4-已发布  5-发布失败 6-不采纳 7-审核中  8-审核失败  9-审核失败申诉后人工审核中  11-审核失败申诉后人工审核不通过  12-已过期  13-超量失效  14-超量失效恢复 19-学习中  20-学习失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述

                     * @return StatusDesc 状态描述

                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取分类ID

                     * @return CateBizId 分类ID

                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取是否允许校验

                     * @return IsAllowAccept 是否允许校验

                     * 
                     */
                    bool GetIsAllowAccept() const;

                    /**
                     * 判断参数 IsAllowAccept 是否已赋值
                     * @return IsAllowAccept 是否已赋值
                     * 
                     */
                    bool IsAllowAcceptHasBeenSet() const;

                    /**
                     * 获取是否允许删除

                     * @return IsAllowDelete 是否允许删除

                     * 
                     */
                    bool GetIsAllowDelete() const;

                    /**
                     * 判断参数 IsAllowDelete 是否已赋值
                     * @return IsAllowDelete 是否已赋值
                     * 
                     */
                    bool IsAllowDeleteHasBeenSet() const;

                    /**
                     * 获取是否允许编辑

                     * @return IsAllowEdit 是否允许编辑

                     * 
                     */
                    bool GetIsAllowEdit() const;

                    /**
                     * 判断参数 IsAllowEdit 是否已赋值
                     * @return IsAllowEdit 是否已赋值
                     * 
                     */
                    bool IsAllowEditHasBeenSet() const;

                    /**
                     * 获取文档id

                     * @return DocBizId 文档id

                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取文档名称

                     * @return FileName 文档名称

                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文档类型

                     * @return FileType 文档类型

                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取分片ID

                     * @return SegmentBizId 分片ID

                     * 
                     */
                    std::string GetSegmentBizId() const;

                    /**
                     * 判断参数 SegmentBizId 是否已赋值
                     * @return SegmentBizId 是否已赋值
                     * 
                     */
                    bool SegmentBizIdHasBeenSet() const;

                    /**
                     * 获取分片内容
                     * @return PageContent 分片内容
                     * 
                     */
                    std::string GetPageContent() const;

                    /**
                     * 判断参数 PageContent 是否已赋值
                     * @return PageContent 是否已赋值
                     * 
                     */
                    bool PageContentHasBeenSet() const;

                    /**
                     * 获取分片高亮内容
                     * @return Highlights 分片高亮内容
                     * 
                     */
                    std::vector<Highlight> GetHighlights() const;

                    /**
                     * 判断参数 Highlights 是否已赋值
                     * @return Highlights 是否已赋值
                     * 
                     */
                    bool HighlightsHasBeenSet() const;

                    /**
                     * 获取分片内容

                     * @return OrgData 分片内容

                     * 
                     */
                    std::string GetOrgData() const;

                    /**
                     * 判断参数 OrgData 是否已赋值
                     * @return OrgData 是否已赋值
                     * 
                     */
                    bool OrgDataHasBeenSet() const;

                    /**
                     * 获取标签适用范围
                     * @return AttrRange 标签适用范围
                     * 
                     */
                    int64_t GetAttrRange() const;

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return AttrLabels 标签
                     * 
                     */
                    std::vector<AttrLabel> GetAttrLabels() const;

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取有效开始时间，unix时间戳
                     * @return ExpireStart 有效开始时间，unix时间戳
                     * 
                     */
                    std::string GetExpireStart() const;

                    /**
                     * 判断参数 ExpireStart 是否已赋值
                     * @return ExpireStart 是否已赋值
                     * 
                     */
                    bool ExpireStartHasBeenSet() const;

                    /**
                     * 获取有效结束时间，unix时间戳，0代表永久有效
                     * @return ExpireEnd 有效结束时间，unix时间戳，0代表永久有效
                     * 
                     */
                    std::string GetExpireEnd() const;

                    /**
                     * 判断参数 ExpireEnd 是否已赋值
                     * @return ExpireEnd 是否已赋值
                     * 
                     */
                    bool ExpireEndHasBeenSet() const;

                    /**
                     * 获取相似问列表信息
                     * @return SimilarQuestions 相似问列表信息
                     * 
                     */
                    std::vector<SimilarQuestion> GetSimilarQuestions() const;

                    /**
                     * 判断参数 SimilarQuestions 是否已赋值
                     * @return SimilarQuestions 是否已赋值
                     * 
                     */
                    bool SimilarQuestionsHasBeenSet() const;

                    /**
                     * 获取问题和答案文本审核状态 1审核失败
                     * @return QaAuditStatus 问题和答案文本审核状态 1审核失败
                     * 
                     */
                    uint64_t GetQaAuditStatus() const;

                    /**
                     * 判断参数 QaAuditStatus 是否已赋值
                     * @return QaAuditStatus 是否已赋值
                     * 
                     */
                    bool QaAuditStatusHasBeenSet() const;

                    /**
                     * 获取答案中的图片审核状态 1审核失败
                     * @return PicAuditStatus 答案中的图片审核状态 1审核失败
                     * 
                     */
                    uint64_t GetPicAuditStatus() const;

                    /**
                     * 判断参数 PicAuditStatus 是否已赋值
                     * @return PicAuditStatus 是否已赋值
                     * 
                     */
                    bool PicAuditStatusHasBeenSet() const;

                    /**
                     * 获取答案中的视频审核状态 1审核失败
                     * @return VideoAuditStatus 答案中的视频审核状态 1审核失败
                     * 
                     */
                    uint64_t GetVideoAuditStatus() const;

                    /**
                     * 判断参数 VideoAuditStatus 是否已赋值
                     * @return VideoAuditStatus 是否已赋值
                     * 
                     */
                    bool VideoAuditStatusHasBeenSet() const;

                    /**
                     * 获取问题描述
                     * @return QuestionDesc 问题描述
                     * 
                     */
                    std::string GetQuestionDesc() const;

                    /**
                     * 判断参数 QuestionDesc 是否已赋值
                     * @return QuestionDesc 是否已赋值
                     * 
                     */
                    bool QuestionDescHasBeenSet() const;

                    /**
                     * 获取问答是否停用，false:未停用，true已停用
                     * @return IsDisabled 问答是否停用，false:未停用，true已停用
                     * 
                     */
                    bool GetIsDisabled() const;

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                private:

                    /**
                     * QA业务ID

                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * 问题

                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 答案

                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 自定义参数
                     */
                    std::string m_customParam;
                    bool m_customParamHasBeenSet;

                    /**
                     * 来源 1-文档生成问答对  2-批量导入问答对  3-单条手动录入问答对
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 来源描述

                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * 更新时间

                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 状态 <br>1-未校验  2-未发布 3-发布中 4-已发布  5-发布失败 6-不采纳 7-审核中  8-审核失败  9-审核失败申诉后人工审核中  11-审核失败申诉后人工审核不通过  12-已过期  13-超量失效  14-超量失效恢复 19-学习中  20-学习失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述

                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 分类ID

                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * 是否允许校验

                     */
                    bool m_isAllowAccept;
                    bool m_isAllowAcceptHasBeenSet;

                    /**
                     * 是否允许删除

                     */
                    bool m_isAllowDelete;
                    bool m_isAllowDeleteHasBeenSet;

                    /**
                     * 是否允许编辑

                     */
                    bool m_isAllowEdit;
                    bool m_isAllowEditHasBeenSet;

                    /**
                     * 文档id

                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 文档名称

                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文档类型

                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 分片ID

                     */
                    std::string m_segmentBizId;
                    bool m_segmentBizIdHasBeenSet;

                    /**
                     * 分片内容
                     */
                    std::string m_pageContent;
                    bool m_pageContentHasBeenSet;

                    /**
                     * 分片高亮内容
                     */
                    std::vector<Highlight> m_highlights;
                    bool m_highlightsHasBeenSet;

                    /**
                     * 分片内容

                     */
                    std::string m_orgData;
                    bool m_orgDataHasBeenSet;

                    /**
                     * 标签适用范围
                     */
                    int64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<AttrLabel> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * 有效开始时间，unix时间戳
                     */
                    std::string m_expireStart;
                    bool m_expireStartHasBeenSet;

                    /**
                     * 有效结束时间，unix时间戳，0代表永久有效
                     */
                    std::string m_expireEnd;
                    bool m_expireEndHasBeenSet;

                    /**
                     * 相似问列表信息
                     */
                    std::vector<SimilarQuestion> m_similarQuestions;
                    bool m_similarQuestionsHasBeenSet;

                    /**
                     * 问题和答案文本审核状态 1审核失败
                     */
                    uint64_t m_qaAuditStatus;
                    bool m_qaAuditStatusHasBeenSet;

                    /**
                     * 答案中的图片审核状态 1审核失败
                     */
                    uint64_t m_picAuditStatus;
                    bool m_picAuditStatusHasBeenSet;

                    /**
                     * 答案中的视频审核状态 1审核失败
                     */
                    uint64_t m_videoAuditStatus;
                    bool m_videoAuditStatusHasBeenSet;

                    /**
                     * 问题描述
                     */
                    std::string m_questionDesc;
                    bool m_questionDescHasBeenSet;

                    /**
                     * 问答是否停用，false:未停用，true已停用
                     */
                    bool m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEQARESPONSE_H_
