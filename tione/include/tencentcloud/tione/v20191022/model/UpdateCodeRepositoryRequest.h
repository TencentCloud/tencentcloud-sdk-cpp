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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_UPDATECODEREPOSITORYREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_UPDATECODEREPOSITORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/GitSecret.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * UpdateCodeRepository请求参数结构体
                */
                class UpdateCodeRepositoryRequest : public AbstractModel
                {
                public:
                    UpdateCodeRepositoryRequest();
                    ~UpdateCodeRepositoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询存储库名称
                     * @return CodeRepositoryName 查询存储库名称
                     * 
                     */
                    std::string GetCodeRepositoryName() const;

                    /**
                     * 设置查询存储库名称
                     * @param _codeRepositoryName 查询存储库名称
                     * 
                     */
                    void SetCodeRepositoryName(const std::string& _codeRepositoryName);

                    /**
                     * 判断参数 CodeRepositoryName 是否已赋值
                     * @return CodeRepositoryName 是否已赋值
                     * 
                     */
                    bool CodeRepositoryNameHasBeenSet() const;

                    /**
                     * 获取Git凭证
                     * @return GitSecret Git凭证
                     * 
                     */
                    GitSecret GetGitSecret() const;

                    /**
                     * 设置Git凭证
                     * @param _gitSecret Git凭证
                     * 
                     */
                    void SetGitSecret(const GitSecret& _gitSecret);

                    /**
                     * 判断参数 GitSecret 是否已赋值
                     * @return GitSecret 是否已赋值
                     * 
                     */
                    bool GitSecretHasBeenSet() const;

                private:

                    /**
                     * 查询存储库名称
                     */
                    std::string m_codeRepositoryName;
                    bool m_codeRepositoryNameHasBeenSet;

                    /**
                     * Git凭证
                     */
                    GitSecret m_gitSecret;
                    bool m_gitSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_UPDATECODEREPOSITORYREQUEST_H_
