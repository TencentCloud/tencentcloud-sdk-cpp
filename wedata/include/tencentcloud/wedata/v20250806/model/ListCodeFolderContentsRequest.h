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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEFOLDERCONTENTSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEFOLDERCONTENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListCodeFolderContents请求参数结构体
                */
                class ListCodeFolderContentsRequest : public AbstractModel
                {
                public:
                    ListCodeFolderContentsRequest();
                    ~ListCodeFolderContentsRequest() = default;
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
                     * 获取文件夹名称/代码文件名称搜索
                     * @return Keyword 文件夹名称/代码文件名称搜索
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置文件夹名称/代码文件名称搜索
                     * @param _keyword 文件夹名称/代码文件名称搜索
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取只查询文件夹
                     * @return OnlyFolderNode 只查询文件夹
                     * 
                     */
                    bool GetOnlyFolderNode() const;

                    /**
                     * 设置只查询文件夹
                     * @param _onlyFolderNode 只查询文件夹
                     * 
                     */
                    void SetOnlyFolderNode(const bool& _onlyFolderNode);

                    /**
                     * 判断参数 OnlyFolderNode 是否已赋值
                     * @return OnlyFolderNode 是否已赋值
                     * 
                     */
                    bool OnlyFolderNodeHasBeenSet() const;

                    /**
                     * 获取是否只查询用户自己创建的代码文件
                     * @return OnlyUserSelfScript 是否只查询用户自己创建的代码文件
                     * 
                     */
                    bool GetOnlyUserSelfScript() const;

                    /**
                     * 设置是否只查询用户自己创建的代码文件
                     * @param _onlyUserSelfScript 是否只查询用户自己创建的代码文件
                     * 
                     */
                    void SetOnlyUserSelfScript(const bool& _onlyUserSelfScript);

                    /**
                     * 判断参数 OnlyUserSelfScript 是否已赋值
                     * @return OnlyUserSelfScript 是否已赋值
                     * 
                     */
                    bool OnlyUserSelfScriptHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * 文件夹名称/代码文件名称搜索
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 只查询文件夹
                     */
                    bool m_onlyFolderNode;
                    bool m_onlyFolderNodeHasBeenSet;

                    /**
                     * 是否只查询用户自己创建的代码文件
                     */
                    bool m_onlyUserSelfScript;
                    bool m_onlyUserSelfScriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEFOLDERCONTENTSREQUEST_H_
