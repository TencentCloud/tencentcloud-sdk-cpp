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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_GITCONFIG_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_GITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 存储库Git相关配置
                */
                class GitConfig : public AbstractModel
                {
                public:
                    GitConfig();
                    ~GitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取git地址
                     * @return RepositoryUrl git地址
                     * 
                     */
                    std::string GetRepositoryUrl() const;

                    /**
                     * 设置git地址
                     * @param _repositoryUrl git地址
                     * 
                     */
                    void SetRepositoryUrl(const std::string& _repositoryUrl);

                    /**
                     * 判断参数 RepositoryUrl 是否已赋值
                     * @return RepositoryUrl 是否已赋值
                     * 
                     */
                    bool RepositoryUrlHasBeenSet() const;

                    /**
                     * 获取代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Branch 代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _branch 代码分支
注意：此字段可能返回 null，表示取不到有效值。
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
                     * git地址
                     */
                    std::string m_repositoryUrl;
                    bool m_repositoryUrlHasBeenSet;

                    /**
                     * 代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_GITCONFIG_H_
