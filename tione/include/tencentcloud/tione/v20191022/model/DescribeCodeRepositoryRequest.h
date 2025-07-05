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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBECODEREPOSITORYREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBECODEREPOSITORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCodeRepository请求参数结构体
                */
                class DescribeCodeRepositoryRequest : public AbstractModel
                {
                public:
                    DescribeCodeRepositoryRequest();
                    ~DescribeCodeRepositoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取存储库名称
                     * @return CodeRepositoryName 存储库名称
                     * 
                     */
                    std::string GetCodeRepositoryName() const;

                    /**
                     * 设置存储库名称
                     * @param _codeRepositoryName 存储库名称
                     * 
                     */
                    void SetCodeRepositoryName(const std::string& _codeRepositoryName);

                    /**
                     * 判断参数 CodeRepositoryName 是否已赋值
                     * @return CodeRepositoryName 是否已赋值
                     * 
                     */
                    bool CodeRepositoryNameHasBeenSet() const;

                private:

                    /**
                     * 存储库名称
                     */
                    std::string m_codeRepositoryName;
                    bool m_codeRepositoryNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBECODEREPOSITORYREQUEST_H_
