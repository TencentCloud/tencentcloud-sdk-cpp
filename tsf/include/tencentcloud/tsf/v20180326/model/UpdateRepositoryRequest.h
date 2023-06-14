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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEREPOSITORYREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEREPOSITORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * UpdateRepository请求参数结构体
                */
                class UpdateRepositoryRequest : public AbstractModel
                {
                public:
                    UpdateRepositoryRequest();
                    ~UpdateRepositoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仓库ID
                     * @return RepositoryId 仓库ID
                     * 
                     */
                    std::string GetRepositoryId() const;

                    /**
                     * 设置仓库ID
                     * @param _repositoryId 仓库ID
                     * 
                     */
                    void SetRepositoryId(const std::string& _repositoryId);

                    /**
                     * 判断参数 RepositoryId 是否已赋值
                     * @return RepositoryId 是否已赋值
                     * 
                     */
                    bool RepositoryIdHasBeenSet() const;

                    /**
                     * 获取仓库描述
                     * @return RepositoryDesc 仓库描述
                     * 
                     */
                    std::string GetRepositoryDesc() const;

                    /**
                     * 设置仓库描述
                     * @param _repositoryDesc 仓库描述
                     * 
                     */
                    void SetRepositoryDesc(const std::string& _repositoryDesc);

                    /**
                     * 判断参数 RepositoryDesc 是否已赋值
                     * @return RepositoryDesc 是否已赋值
                     * 
                     */
                    bool RepositoryDescHasBeenSet() const;

                private:

                    /**
                     * 仓库ID
                     */
                    std::string m_repositoryId;
                    bool m_repositoryIdHasBeenSet;

                    /**
                     * 仓库描述
                     */
                    std::string m_repositoryDesc;
                    bool m_repositoryDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEREPOSITORYREQUEST_H_
