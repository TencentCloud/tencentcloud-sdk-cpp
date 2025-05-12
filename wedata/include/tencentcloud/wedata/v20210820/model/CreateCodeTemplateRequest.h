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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateCodeTemplate请求参数结构体
                */
                class CreateCodeTemplateRequest : public AbstractModel
                {
                public:
                    CreateCodeTemplateRequest();
                    ~CreateCodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取模版名
                     * @return CodeTemplateName 模版名
                     * 
                     */
                    std::string GetCodeTemplateName() const;

                    /**
                     * 设置模版名
                     * @param _codeTemplateName 模版名
                     * 
                     */
                    void SetCodeTemplateName(const std::string& _codeTemplateName);

                    /**
                     * 判断参数 CodeTemplateName 是否已赋值
                     * @return CodeTemplateName 是否已赋值
                     * 
                     */
                    bool CodeTemplateNameHasBeenSet() const;

                    /**
                     * 获取30Python，32DLC，50 DLC-PySpark
                     * @return TaskType 30Python，32DLC，50 DLC-PySpark
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置30Python，32DLC，50 DLC-PySpark
                     * @param _taskType 30Python，32DLC，50 DLC-PySpark
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取模版描述
                     * @return CodeTemplateDesc 模版描述
                     * 
                     */
                    std::string GetCodeTemplateDesc() const;

                    /**
                     * 设置模版描述
                     * @param _codeTemplateDesc 模版描述
                     * 
                     */
                    void SetCodeTemplateDesc(const std::string& _codeTemplateDesc);

                    /**
                     * 判断参数 CodeTemplateDesc 是否已赋值
                     * @return CodeTemplateDesc 是否已赋值
                     * 
                     */
                    bool CodeTemplateDescHasBeenSet() const;

                    /**
                     * 获取文件夹ID
                     * @return FolderId 文件夹ID
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置文件夹ID
                     * @param _folderId 文件夹ID
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取指定脚本内容
                     * @return Content 指定脚本内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置指定脚本内容
                     * @param _content 指定脚本内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 模版名
                     */
                    std::string m_codeTemplateName;
                    bool m_codeTemplateNameHasBeenSet;

                    /**
                     * 30Python，32DLC，50 DLC-PySpark
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 模版描述
                     */
                    std::string m_codeTemplateDesc;
                    bool m_codeTemplateDescHasBeenSet;

                    /**
                     * 文件夹ID
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 指定脚本内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECODETEMPLATEREQUEST_H_
