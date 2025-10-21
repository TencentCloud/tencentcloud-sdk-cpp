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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CODEREPO_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CODEREPO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 仓库信息
                */
                class CodeRepo : public AbstractModel
                {
                public:
                    CodeRepo();
                    ~CodeRepo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代码仓库地址
                     * @return RepoUrl 代码仓库地址
                     * 
                     */
                    std::string GetRepoUrl() const;

                    /**
                     * 设置代码仓库地址
                     * @param _repoUrl 代码仓库地址
                     * 
                     */
                    void SetRepoUrl(const std::string& _repoUrl);

                    /**
                     * 判断参数 RepoUrl 是否已赋值
                     * @return RepoUrl 是否已赋值
                     * 
                     */
                    bool RepoUrlHasBeenSet() const;

                    /**
                     * 获取分支名
                     * @return Branch 分支名
                     * 
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置分支名
                     * @param _branch 分支名
                     * 
                     */
                    void SetBranch(const std::string& _branch);

                    /**
                     * 判断参数 Branch 是否已赋值
                     * @return Branch 是否已赋值
                     * 
                     */
                    bool BranchHasBeenSet() const;

                    /**
                     * 获取Commit信息
                     * @return GitCommitPipelines Commit信息
                     * 
                     */
                    std::vector<std::string> GetGitCommitPipelines() const;

                    /**
                     * 设置Commit信息
                     * @param _gitCommitPipelines Commit信息
                     * 
                     */
                    void SetGitCommitPipelines(const std::vector<std::string>& _gitCommitPipelines);

                    /**
                     * 判断参数 GitCommitPipelines 是否已赋值
                     * @return GitCommitPipelines 是否已赋值
                     * 
                     */
                    bool GitCommitPipelinesHasBeenSet() const;

                    /**
                     * 获取数据库ORM类型
                     * @return GitORMType 数据库ORM类型
                     * 
                     */
                    std::string GetGitORMType() const;

                    /**
                     * 设置数据库ORM类型
                     * @param _gitORMType 数据库ORM类型
                     * 
                     */
                    void SetGitORMType(const std::string& _gitORMType);

                    /**
                     * 判断参数 GitORMType 是否已赋值
                     * @return GitORMType 是否已赋值
                     * 
                     */
                    bool GitORMTypeHasBeenSet() const;

                    /**
                     * 获取代码编写语言
                     * @return GitCodeLanguage 代码编写语言
                     * 
                     */
                    std::string GetGitCodeLanguage() const;

                    /**
                     * 设置代码编写语言
                     * @param _gitCodeLanguage 代码编写语言
                     * 
                     */
                    void SetGitCodeLanguage(const std::string& _gitCodeLanguage);

                    /**
                     * 判断参数 GitCodeLanguage 是否已赋值
                     * @return GitCodeLanguage 是否已赋值
                     * 
                     */
                    bool GitCodeLanguageHasBeenSet() const;

                private:

                    /**
                     * 代码仓库地址
                     */
                    std::string m_repoUrl;
                    bool m_repoUrlHasBeenSet;

                    /**
                     * 分支名
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                    /**
                     * Commit信息
                     */
                    std::vector<std::string> m_gitCommitPipelines;
                    bool m_gitCommitPipelinesHasBeenSet;

                    /**
                     * 数据库ORM类型
                     */
                    std::string m_gitORMType;
                    bool m_gitORMTypeHasBeenSet;

                    /**
                     * 代码编写语言
                     */
                    std::string m_gitCodeLanguage;
                    bool m_gitCodeLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CODEREPO_H_
