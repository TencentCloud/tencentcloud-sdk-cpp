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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATECODEFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATECODEFILEREQUEST_H_

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
                * UpdateCodeFile请求参数结构体
                */
                class UpdateCodeFileRequest : public AbstractModel
                {
                public:
                    UpdateCodeFileRequest();
                    ~UpdateCodeFileRequest() = default;
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
                     * 获取代码文件ID，参数值来自CreateCodeFile接口的返回
                     * @return CodeFileId 代码文件ID，参数值来自CreateCodeFile接口的返回
                     * 
                     */
                    std::string GetCodeFileId() const;

                    /**
                     * 设置代码文件ID，参数值来自CreateCodeFile接口的返回
                     * @param _codeFileId 代码文件ID，参数值来自CreateCodeFile接口的返回
                     * 
                     */
                    void SetCodeFileId(const std::string& _codeFileId);

                    /**
                     * 判断参数 CodeFileId 是否已赋值
                     * @return CodeFileId 是否已赋值
                     * 
                     */
                    bool CodeFileIdHasBeenSet() const;

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
                     * 代码文件ID，参数值来自CreateCodeFile接口的返回
                     */
                    std::string m_codeFileId;
                    bool m_codeFileIdHasBeenSet;

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

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATECODEFILEREQUEST_H_
