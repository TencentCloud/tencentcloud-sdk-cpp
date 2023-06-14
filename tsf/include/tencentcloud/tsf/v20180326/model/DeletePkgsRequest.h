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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETEPKGSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETEPKGSREQUEST_H_

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
                * DeletePkgs请求参数结构体
                */
                class DeletePkgsRequest : public AbstractModel
                {
                public:
                    DeletePkgsRequest();
                    ~DeletePkgsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取需要删除的程序包ID列表
                     * @return PkgIds 需要删除的程序包ID列表
                     * 
                     */
                    std::vector<std::string> GetPkgIds() const;

                    /**
                     * 设置需要删除的程序包ID列表
                     * @param _pkgIds 需要删除的程序包ID列表
                     * 
                     */
                    void SetPkgIds(const std::vector<std::string>& _pkgIds);

                    /**
                     * 判断参数 PkgIds 是否已赋值
                     * @return PkgIds 是否已赋值
                     * 
                     */
                    bool PkgIdsHasBeenSet() const;

                    /**
                     * 获取程序包仓库类型
                     * @return RepositoryType 程序包仓库类型
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置程序包仓库类型
                     * @param _repositoryType 程序包仓库类型
                     * 
                     */
                    void SetRepositoryType(const std::string& _repositoryType);

                    /**
                     * 判断参数 RepositoryType 是否已赋值
                     * @return RepositoryType 是否已赋值
                     * 
                     */
                    bool RepositoryTypeHasBeenSet() const;

                    /**
                     * 获取程序包仓库id
                     * @return RepositoryId 程序包仓库id
                     * 
                     */
                    std::string GetRepositoryId() const;

                    /**
                     * 设置程序包仓库id
                     * @param _repositoryId 程序包仓库id
                     * 
                     */
                    void SetRepositoryId(const std::string& _repositoryId);

                    /**
                     * 判断参数 RepositoryId 是否已赋值
                     * @return RepositoryId 是否已赋值
                     * 
                     */
                    bool RepositoryIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 需要删除的程序包ID列表
                     */
                    std::vector<std::string> m_pkgIds;
                    bool m_pkgIdsHasBeenSet;

                    /**
                     * 程序包仓库类型
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * 程序包仓库id
                     */
                    std::string m_repositoryId;
                    bool m_repositoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETEPKGSREQUEST_H_
