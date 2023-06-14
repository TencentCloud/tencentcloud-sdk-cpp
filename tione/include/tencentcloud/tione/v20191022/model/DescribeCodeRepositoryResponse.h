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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBECODEREPOSITORYRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBECODEREPOSITORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/GitConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeCodeRepository返回参数结构体
                */
                class DescribeCodeRepositoryResponse : public AbstractModel
                {
                public:
                    DescribeCodeRepositoryResponse();
                    ~DescribeCodeRepositoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return LastModifiedTime 更新时间
                     * 
                     */
                    std::string GetLastModifiedTime() const;

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                    /**
                     * 获取存储库名称
                     * @return CodeRepositoryName 存储库名称
                     * 
                     */
                    std::string GetCodeRepositoryName() const;

                    /**
                     * 判断参数 CodeRepositoryName 是否已赋值
                     * @return CodeRepositoryName 是否已赋值
                     * 
                     */
                    bool CodeRepositoryNameHasBeenSet() const;

                    /**
                     * 获取Git存储配置
                     * @return GitConfig Git存储配置
                     * 
                     */
                    GitConfig GetGitConfig() const;

                    /**
                     * 判断参数 GitConfig 是否已赋值
                     * @return GitConfig 是否已赋值
                     * 
                     */
                    bool GitConfigHasBeenSet() const;

                    /**
                     * 获取是否有Git凭证
                     * @return NoSecret 是否有Git凭证
                     * 
                     */
                    bool GetNoSecret() const;

                    /**
                     * 判断参数 NoSecret 是否已赋值
                     * @return NoSecret 是否已赋值
                     * 
                     */
                    bool NoSecretHasBeenSet() const;

                private:

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                    /**
                     * 存储库名称
                     */
                    std::string m_codeRepositoryName;
                    bool m_codeRepositoryNameHasBeenSet;

                    /**
                     * Git存储配置
                     */
                    GitConfig m_gitConfig;
                    bool m_gitConfigHasBeenSet;

                    /**
                     * 是否有Git凭证
                     */
                    bool m_noSecret;
                    bool m_noSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBECODEREPOSITORYRESPONSE_H_
