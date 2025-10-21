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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATECODEFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATECODEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/CodeFileConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateCodeFile请求参数结构体
                */
                class CreateCodeFileRequest : public AbstractModel
                {
                public:
                    CreateCodeFileRequest();
                    ~CreateCodeFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取代码文件名称
                     * @return CodeFileName 代码文件名称
                     * 
                     */
                    std::string GetCodeFileName() const;

                    /**
                     * 设置代码文件名称
                     * @param _codeFileName 代码文件名称
                     * 
                     */
                    void SetCodeFileName(const std::string& _codeFileName);

                    /**
                     * 判断参数 CodeFileName 是否已赋值
                     * @return CodeFileName 是否已赋值
                     * 
                     */
                    bool CodeFileNameHasBeenSet() const;

                    /**
                     * 获取父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/
                     * @return ParentFolderPath 父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/
                     * @param _parentFolderPath 父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取代码文件配置
                     * @return CodeFileConfig 代码文件配置
                     * 
                     */
                    CodeFileConfig GetCodeFileConfig() const;

                    /**
                     * 设置代码文件配置
                     * @param _codeFileConfig 代码文件配置
                     * 
                     */
                    void SetCodeFileConfig(const CodeFileConfig& _codeFileConfig);

                    /**
                     * 判断参数 CodeFileConfig 是否已赋值
                     * @return CodeFileConfig 是否已赋值
                     * 
                     */
                    bool CodeFileConfigHasBeenSet() const;

                    /**
                     * 获取代码文件内容
                     * @return CodeFileContent 代码文件内容
                     * 
                     */
                    std::string GetCodeFileContent() const;

                    /**
                     * 设置代码文件内容
                     * @param _codeFileContent 代码文件内容
                     * 
                     */
                    void SetCodeFileContent(const std::string& _codeFileContent);

                    /**
                     * 判断参数 CodeFileContent 是否已赋值
                     * @return CodeFileContent 是否已赋值
                     * 
                     */
                    bool CodeFileContentHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 代码文件名称
                     */
                    std::string m_codeFileName;
                    bool m_codeFileNameHasBeenSet;

                    /**
                     * 父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * 代码文件配置
                     */
                    CodeFileConfig m_codeFileConfig;
                    bool m_codeFileConfigHasBeenSet;

                    /**
                     * 代码文件内容
                     */
                    std::string m_codeFileContent;
                    bool m_codeFileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATECODEFILEREQUEST_H_
