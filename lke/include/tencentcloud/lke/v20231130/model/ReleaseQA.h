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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RELEASEQA_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RELEASEQA_H_

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
                * 发布问答
                */
                class ReleaseQA : public AbstractModel
                {
                public:
                    ReleaseQA();
                    ~ReleaseQA() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return Action 状态
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置状态
                     * @param _action 状态
                     * 
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return ActionDesc 状态描述
                     * 
                     */
                    std::string GetActionDesc() const;

                    /**
                     * 设置状态描述
                     * @param _actionDesc 状态描述
                     * 
                     */
                    void SetActionDesc(const std::string& _actionDesc);

                    /**
                     * 判断参数 ActionDesc 是否已赋值
                     * @return ActionDesc 是否已赋值
                     * 
                     */
                    bool ActionDescHasBeenSet() const;

                    /**
                     * 获取来源1:文档生成，2：批量导入，3：手动添加
                     * @return Source 来源1:文档生成，2：批量导入，3：手动添加
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置来源1:文档生成，2：批量导入，3：手动添加
                     * @param _source 来源1:文档生成，2：批量导入，3：手动添加
                     * 
                     */
                    void SetSource(const uint64_t& _source);

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
                     * 获取文件名字
                     * @return FileName 文件名字
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名字
                     * @param _fileName 文件名字
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
                     * 获取失败原因
                     * @return Message 失败原因
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置失败原因
                     * @param _message 失败原因
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取发布状态
                     * @return ReleaseStatus 发布状态
                     * 
                     */
                    uint64_t GetReleaseStatus() const;

                    /**
                     * 设置发布状态
                     * @param _releaseStatus 发布状态
                     * 
                     */
                    void SetReleaseStatus(const uint64_t& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                    /**
                     * 获取QAID
                     * @return QaBizId QAID
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置QAID
                     * @param _qaBizId QAID
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
                     * 获取文档业务ID
                     * @return DocBizId 文档业务ID
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档业务ID
                     * @param _docBizId 文档业务ID
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                private:

                    /**
                     * 问题
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 状态
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_actionDesc;
                    bool m_actionDescHasBeenSet;

                    /**
                     * 来源1:文档生成，2：批量导入，3：手动添加
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 来源描述
                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * 文件名字
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文档类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 发布状态
                     */
                    uint64_t m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * QAID
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * 文档业务ID
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RELEASEQA_H_
