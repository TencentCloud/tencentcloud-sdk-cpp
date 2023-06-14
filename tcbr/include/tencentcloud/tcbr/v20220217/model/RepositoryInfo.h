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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_REPOSITORYINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_REPOSITORYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 代码仓库信息
                */
                class RepositoryInfo : public AbstractModel
                {
                public:
                    RepositoryInfo();
                    ~RepositoryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取git source
                     * @return Source git source
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置git source
                     * @param _source git source
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取仓库名
                     * @return Repo 仓库名
                     * 
                     */
                    std::string GetRepo() const;

                    /**
                     * 设置仓库名
                     * @param _repo 仓库名
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

                private:

                    /**
                     * git source
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 仓库名
                     */
                    std::string m_repo;
                    bool m_repoHasBeenSet;

                    /**
                     * 分支名
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_REPOSITORYINFO_H_
