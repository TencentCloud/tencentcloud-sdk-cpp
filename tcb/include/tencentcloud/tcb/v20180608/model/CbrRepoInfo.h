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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CBRREPOINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CBRREPOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 仓库信息
                */
                class CbrRepoInfo : public AbstractModel
                {
                public:
                    CbrRepoInfo();
                    ~CbrRepoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库名称
                     * @return Repo 仓库名称
                     * 
                     */
                    std::string GetRepo() const;

                    /**
                     * 设置仓库名称
                     * @param _repo 仓库名称
                     * 
                     */
                    void SetRepo(const std::string& _repo);

                    /**
                     * 判断参数 Repo 是否已赋值
                     * @return Repo 是否已赋值
                     * 
                     */
                    bool RepoHasBeenSet() const;

                    /**
                     * 获取仓库平台
                     * @return RepoType 仓库平台
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置仓库平台
                     * @param _repoType 仓库平台
                     * 
                     */
                    void SetRepoType(const std::string& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取仓库语言
                     * @return RepoLanguage 仓库语言
                     * 
                     */
                    std::string GetRepoLanguage() const;

                    /**
                     * 设置仓库语言
                     * @param _repoLanguage 仓库语言
                     * 
                     */
                    void SetRepoLanguage(const std::string& _repoLanguage);

                    /**
                     * 判断参数 RepoLanguage 是否已赋值
                     * @return RepoLanguage 是否已赋值
                     * 
                     */
                    bool RepoLanguageHasBeenSet() const;

                    /**
                     * 获取分支名称
                     * @return Branch 分支名称
                     * 
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置分支名称
                     * @param _branch 分支名称
                     * 
                     */
                    void SetBranch(const std::string& _branch);

                    /**
                     * 判断参数 Branch 是否已赋值
                     * @return Branch 是否已赋值
                     * 
                     */
                    bool BranchHasBeenSet() const;

                private:

                    /**
                     * 仓库名称
                     */
                    std::string m_repo;
                    bool m_repoHasBeenSet;

                    /**
                     * 仓库平台
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * 仓库语言
                     */
                    std::string m_repoLanguage;
                    bool m_repoLanguageHasBeenSet;

                    /**
                     * 分支名称
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CBRREPOINFO_H_
