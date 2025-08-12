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
                     * 获取应用ID，通过调用DescribeApplications接口[获取应用列表](https://cloud.tencent.com/document/api/649/36090)从而获取应用ID，或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看，调用CreateApplication接口[创建应用](https://cloud.tencent.com/document/product/649/36094)时的返回值
                     * @return ApplicationId 应用ID，通过调用DescribeApplications接口[获取应用列表](https://cloud.tencent.com/document/api/649/36090)从而获取应用ID，或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看，调用CreateApplication接口[创建应用](https://cloud.tencent.com/document/product/649/36094)时的返回值
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID，通过调用DescribeApplications接口[获取应用列表](https://cloud.tencent.com/document/api/649/36090)从而获取应用ID，或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看，调用CreateApplication接口[创建应用](https://cloud.tencent.com/document/product/649/36094)时的返回值
                     * @param _applicationId 应用ID，通过调用DescribeApplications接口[获取应用列表](https://cloud.tencent.com/document/api/649/36090)从而获取应用ID，或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看，调用CreateApplication接口[创建应用](https://cloud.tencent.com/document/product/649/36094)时的返回值
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
                     * 获取软件包ID所形成的列表，软件包ID可通过调用DescribeUploadInfo接口时[获取上传程序包信息](https://cloud.tencent.com/document/api/649/36078)返回的COS上传信息获取，登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
                     * @return PkgIds 软件包ID所形成的列表，软件包ID可通过调用DescribeUploadInfo接口时[获取上传程序包信息](https://cloud.tencent.com/document/api/649/36078)返回的COS上传信息获取，登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
                     * 
                     */
                    std::vector<std::string> GetPkgIds() const;

                    /**
                     * 设置软件包ID所形成的列表，软件包ID可通过调用DescribeUploadInfo接口时[获取上传程序包信息](https://cloud.tencent.com/document/api/649/36078)返回的COS上传信息获取，登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
                     * @param _pkgIds 软件包ID所形成的列表，软件包ID可通过调用DescribeUploadInfo接口时[获取上传程序包信息](https://cloud.tencent.com/document/api/649/36078)返回的COS上传信息获取，登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
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
                     * 获取程序包仓库类型（允许值："public-demo"TSF公共demo仓库, "private"自定义仓库, "default"TSF公共仓库）
                     * @return RepositoryType 程序包仓库类型（允许值："public-demo"TSF公共demo仓库, "private"自定义仓库, "default"TSF公共仓库）
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置程序包仓库类型（允许值："public-demo"TSF公共demo仓库, "private"自定义仓库, "default"TSF公共仓库）
                     * @param _repositoryType 程序包仓库类型（允许值："public-demo"TSF公共demo仓库, "private"自定义仓库, "default"TSF公共仓库）
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
                     * 获取仓库ID，可通过调用[仓库信息查询类](https://cloud.tencent.com/document/api/649/45925)接口时出参中的RepositoryId，或登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
                     * @return RepositoryId 仓库ID，可通过调用[仓库信息查询类](https://cloud.tencent.com/document/api/649/45925)接口时出参中的RepositoryId，或登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
                     * 
                     */
                    std::string GetRepositoryId() const;

                    /**
                     * 设置仓库ID，可通过调用[仓库信息查询类](https://cloud.tencent.com/document/api/649/45925)接口时出参中的RepositoryId，或登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
                     * @param _repositoryId 仓库ID，可通过调用[仓库信息查询类](https://cloud.tencent.com/document/api/649/45925)接口时出参中的RepositoryId，或登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
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
                     * 应用ID，通过调用DescribeApplications接口[获取应用列表](https://cloud.tencent.com/document/api/649/36090)从而获取应用ID，或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看，调用CreateApplication接口[创建应用](https://cloud.tencent.com/document/product/649/36094)时的返回值
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 软件包ID所形成的列表，软件包ID可通过调用DescribeUploadInfo接口时[获取上传程序包信息](https://cloud.tencent.com/document/api/649/36078)返回的COS上传信息获取，登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
                     */
                    std::vector<std::string> m_pkgIds;
                    bool m_pkgIdsHasBeenSet;

                    /**
                     * 程序包仓库类型（允许值："public-demo"TSF公共demo仓库, "private"自定义仓库, "default"TSF公共仓库）
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * 仓库ID，可通过调用[仓库信息查询类](https://cloud.tencent.com/document/api/649/45925)接口时出参中的RepositoryId，或登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
                     */
                    std::string m_repositoryId;
                    bool m_repositoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETEPKGSREQUEST_H_
