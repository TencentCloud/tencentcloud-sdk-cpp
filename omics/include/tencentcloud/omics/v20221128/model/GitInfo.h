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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_GITINFO_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_GITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Git信息。
                */
                class GitInfo : public AbstractModel
                {
                public:
                    GitInfo();
                    ~GitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Git地址。
                     * @return GitHttpPath Git地址。
                     * 
                     */
                    std::string GetGitHttpPath() const;

                    /**
                     * 设置Git地址。
                     * @param _gitHttpPath Git地址。
                     * 
                     */
                    void SetGitHttpPath(const std::string& _gitHttpPath);

                    /**
                     * 判断参数 GitHttpPath 是否已赋值
                     * @return GitHttpPath 是否已赋值
                     * 
                     */
                    bool GitHttpPathHasBeenSet() const;

                    /**
                     * 获取Git用户名。
                     * @return GitUserName Git用户名。
                     * 
                     */
                    std::string GetGitUserName() const;

                    /**
                     * 设置Git用户名。
                     * @param _gitUserName Git用户名。
                     * 
                     */
                    void SetGitUserName(const std::string& _gitUserName);

                    /**
                     * 判断参数 GitUserName 是否已赋值
                     * @return GitUserName 是否已赋值
                     * 
                     */
                    bool GitUserNameHasBeenSet() const;

                    /**
                     * 获取Git密码或者Token。
                     * @return GitTokenOrPassword Git密码或者Token。
                     * 
                     */
                    std::string GetGitTokenOrPassword() const;

                    /**
                     * 设置Git密码或者Token。
                     * @param _gitTokenOrPassword Git密码或者Token。
                     * 
                     */
                    void SetGitTokenOrPassword(const std::string& _gitTokenOrPassword);

                    /**
                     * 判断参数 GitTokenOrPassword 是否已赋值
                     * @return GitTokenOrPassword 是否已赋值
                     * 
                     */
                    bool GitTokenOrPasswordHasBeenSet() const;

                    /**
                     * 获取分支。
                     * @return Branch 分支。
                     * 
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置分支。
                     * @param _branch 分支。
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
                     * 获取标签。
                     * @return Tag 标签。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置标签。
                     * @param _tag 标签。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * Git地址。
                     */
                    std::string m_gitHttpPath;
                    bool m_gitHttpPathHasBeenSet;

                    /**
                     * Git用户名。
                     */
                    std::string m_gitUserName;
                    bool m_gitUserNameHasBeenSet;

                    /**
                     * Git密码或者Token。
                     */
                    std::string m_gitTokenOrPassword;
                    bool m_gitTokenOrPasswordHasBeenSet;

                    /**
                     * 分支。
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_GITINFO_H_
