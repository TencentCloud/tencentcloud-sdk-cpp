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
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/</p>
                     * @return ParentFolderPath <p>父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/</p>
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置<p>父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/</p>
                     * @param _parentFolderPath <p>父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/</p>
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
                     * 获取<p>文件夹名称/代码文件名称搜索</p>
                     * @return Keyword <p>文件夹名称/代码文件名称搜索</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>文件夹名称/代码文件名称搜索</p>
                     * @param _keyword <p>文件夹名称/代码文件名称搜索</p>
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
                     * 获取<p>只查询文件夹</p>
                     * @return OnlyFolderNode <p>只查询文件夹</p>
                     * 
                     */
                    bool GetOnlyFolderNode() const;

                    /**
                     * 设置<p>只查询文件夹</p>
                     * @param _onlyFolderNode <p>只查询文件夹</p>
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
                     * 获取<p>是否只查询用户自己创建的代码文件</p>
                     * @return OnlyUserSelfScript <p>是否只查询用户自己创建的代码文件</p>
                     * 
                     */
                    bool GetOnlyUserSelfScript() const;

                    /**
                     * 设置<p>是否只查询用户自己创建的代码文件</p>
                     * @param _onlyUserSelfScript <p>是否只查询用户自己创建的代码文件</p>
                     * 
                     */
                    void SetOnlyUserSelfScript(const bool& _onlyUserSelfScript);

                    /**
                     * 判断参数 OnlyUserSelfScript 是否已赋值
                     * @return OnlyUserSelfScript 是否已赋值
                     * 
                     */
                    bool OnlyUserSelfScriptHasBeenSet() const;

                    /**
                     * 获取<p>是否只查询提交状态为提交成功的文件</p><p>默认值：false</p>
                     * @return SubmitStatusFilter <p>是否只查询提交状态为提交成功的文件</p><p>默认值：false</p>
                     * 
                     */
                    bool GetSubmitStatusFilter() const;

                    /**
                     * 设置<p>是否只查询提交状态为提交成功的文件</p><p>默认值：false</p>
                     * @param _submitStatusFilter <p>是否只查询提交状态为提交成功的文件</p><p>默认值：false</p>
                     * 
                     */
                    void SetSubmitStatusFilter(const bool& _submitStatusFilter);

                    /**
                     * 判断参数 SubmitStatusFilter 是否已赋值
                     * @return SubmitStatusFilter 是否已赋值
                     * 
                     */
                    bool SubmitStatusFilterHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>父文件夹path，例如/aaa/bbb/ccc，路径头需带斜杠，根目录传/</p>
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * <p>文件夹名称/代码文件名称搜索</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>只查询文件夹</p>
                     */
                    bool m_onlyFolderNode;
                    bool m_onlyFolderNodeHasBeenSet;

                    /**
                     * <p>是否只查询用户自己创建的代码文件</p>
                     */
                    bool m_onlyUserSelfScript;
                    bool m_onlyUserSelfScriptHasBeenSet;

                    /**
                     * <p>是否只查询提交状态为提交成功的文件</p><p>默认值：false</p>
                     */
                    bool m_submitStatusFilter;
                    bool m_submitStatusFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEFOLDERCONTENTSREQUEST_H_
