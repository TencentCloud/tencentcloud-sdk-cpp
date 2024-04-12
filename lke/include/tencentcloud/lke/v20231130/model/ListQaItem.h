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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAITEM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 问答详情数据
                */
                class ListQaItem : public AbstractModel
                {
                public:
                    ListQaItem();
                    ~ListQaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取问答ID
                     * @return QaBizId 问答ID
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置问答ID
                     * @param _qaBizId 问答ID
                     * 
                     */
                    void SetQaBizId(const std::string& _qaBizId);

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
                     * 设置问题
                     * @param _question 问题
                     * 
                     */
                    void SetQuestion(const std::string& _question);

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
                     * 设置答案
                     * @param _answer 答案
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取来源
                     * @return Source 来源
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置来源
                     * @param _source 来源
                     * 
                     */
                    void SetSource(const int64_t& _source);

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
                     * 设置来源描述
                     * @param _sourceDesc 来源描述
                     * 
                     */
                    void SetSourceDesc(const std::string& _sourceDesc);

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
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取状态描述
                     * @return StatusDesc 状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
                     * @param _statusDesc 状态描述
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取文档ID
                     * @return DocBizId 文档ID
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档ID
                     * @param _docBizId 文档ID
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取是否允许编辑
                     * @return IsAllowEdit 是否允许编辑
                     * 
                     */
                    bool GetIsAllowEdit() const;

                    /**
                     * 设置是否允许编辑
                     * @param _isAllowEdit 是否允许编辑
                     * 
                     */
                    void SetIsAllowEdit(const bool& _isAllowEdit);

                    /**
                     * 判断参数 IsAllowEdit 是否已赋值
                     * @return IsAllowEdit 是否已赋值
                     * 
                     */
                    bool IsAllowEditHasBeenSet() const;

                    /**
                     * 获取是否允许删除
                     * @return IsAllowDelete 是否允许删除
                     * 
                     */
                    bool GetIsAllowDelete() const;

                    /**
                     * 设置是否允许删除
                     * @param _isAllowDelete 是否允许删除
                     * 
                     */
                    void SetIsAllowDelete(const bool& _isAllowDelete);

                    /**
                     * 判断参数 IsAllowDelete 是否已赋值
                     * @return IsAllowDelete 是否已赋值
                     * 
                     */
                    bool IsAllowDeleteHasBeenSet() const;

                    /**
                     * 获取是否允许校验
                     * @return IsAllowAccept 是否允许校验
                     * 
                     */
                    bool GetIsAllowAccept() const;

                    /**
                     * 设置是否允许校验
                     * @param _isAllowAccept 是否允许校验
                     * 
                     */
                    void SetIsAllowAccept(const bool& _isAllowAccept);

                    /**
                     * 判断参数 IsAllowAccept 是否已赋值
                     * @return IsAllowAccept 是否已赋值
                     * 
                     */
                    bool IsAllowAcceptHasBeenSet() const;

                    /**
                     * 获取文档名称
                     * @return FileName 文档名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文档名称
                     * @param _fileName 文档名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

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
                     * 设置文档类型
                     * @param _fileType 文档类型
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取问答字符数
                     * @return QaCharSize 问答字符数
                     * 
                     */
                    std::string GetQaCharSize() const;

                    /**
                     * 设置问答字符数
                     * @param _qaCharSize 问答字符数
                     * 
                     */
                    void SetQaCharSize(const std::string& _qaCharSize);

                    /**
                     * 判断参数 QaCharSize 是否已赋值
                     * @return QaCharSize 是否已赋值
                     * 
                     */
                    bool QaCharSizeHasBeenSet() const;

                private:

                    /**
                     * 问答ID
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
                     * 来源
                     */
                    int64_t m_source;
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
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 文档ID
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否允许编辑
                     */
                    bool m_isAllowEdit;
                    bool m_isAllowEditHasBeenSet;

                    /**
                     * 是否允许删除
                     */
                    bool m_isAllowDelete;
                    bool m_isAllowDeleteHasBeenSet;

                    /**
                     * 是否允许校验
                     */
                    bool m_isAllowAccept;
                    bool m_isAllowAcceptHasBeenSet;

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
                     * 问答字符数
                     */
                    std::string m_qaCharSize;
                    bool m_qaCharSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTQAITEM_H_
