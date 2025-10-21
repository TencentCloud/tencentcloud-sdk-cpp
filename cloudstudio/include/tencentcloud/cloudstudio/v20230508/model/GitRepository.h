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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_GITREPOSITORY_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_GITREPOSITORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20230508
        {
            namespace Model
            {
                /**
                * Git 仓库
                */
                class GitRepository : public AbstractModel
                {
                public:
                    GitRepository();
                    ~GitRepository() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Git 仓库地址
                     * @return Url Git 仓库地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Git 仓库地址
                     * @param _url Git 仓库地址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Git 仓库分支名或 Tag 名
                     * @return Branch Git 仓库分支名或 Tag 名
                     * 
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置Git 仓库分支名或 Tag 名
                     * @param _branch Git 仓库分支名或 Tag 名
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
                     * Git 仓库地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Git 仓库分支名或 Tag 名
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_GITREPOSITORY_H_
