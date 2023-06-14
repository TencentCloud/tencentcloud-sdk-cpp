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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPOSITORYPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPOSITORYPERSONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateRepositoryPersonal请求参数结构体
                */
                class CreateRepositoryPersonalRequest : public AbstractModel
                {
                public:
                    CreateRepositoryPersonalRequest();
                    ~CreateRepositoryPersonalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仓库名称
                     * @return RepoName 仓库名称
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名称
                     * @param _repoName 仓库名称
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取是否公共,1:公共,0:私有
                     * @return Public 是否公共,1:公共,0:私有
                     * 
                     */
                    uint64_t GetPublic() const;

                    /**
                     * 设置是否公共,1:公共,0:私有
                     * @param _public 是否公共,1:公共,0:私有
                     * 
                     */
                    void SetPublic(const uint64_t& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     * 
                     */
                    bool PublicHasBeenSet() const;

                    /**
                     * 获取仓库描述
                     * @return Description 仓库描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置仓库描述
                     * @param _description 仓库描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 仓库名称
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 是否公共,1:公共,0:私有
                     */
                    uint64_t m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 仓库描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPOSITORYPERSONALREQUEST_H_
