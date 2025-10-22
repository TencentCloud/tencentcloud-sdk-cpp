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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUPLOADINFOREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUPLOADINFOREQUEST_H_

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
                * DescribeUploadInfo请求参数结构体
                */
                class DescribeUploadInfoRequest : public AbstractModel
                {
                public:
                    DescribeUploadInfoRequest();
                    ~DescribeUploadInfoRequest() = default;
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
                     * 获取程序包名
                     * @return PkgName 程序包名
                     * 
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置程序包名
                     * @param _pkgName 程序包名
                     * 
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     * 
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取程序包版本
                     * @return PkgVersion 程序包版本
                     * 
                     */
                    std::string GetPkgVersion() const;

                    /**
                     * 设置程序包版本
                     * @param _pkgVersion 程序包版本
                     * 
                     */
                    void SetPkgVersion(const std::string& _pkgVersion);

                    /**
                     * 判断参数 PkgVersion 是否已赋值
                     * @return PkgVersion 是否已赋值
                     * 
                     */
                    bool PkgVersionHasBeenSet() const;

                    /**
                     * 获取程序包类型
                     * @return PkgType 程序包类型
                     * 
                     */
                    std::string GetPkgType() const;

                    /**
                     * 设置程序包类型
                     * @param _pkgType 程序包类型
                     * 
                     */
                    void SetPkgType(const std::string& _pkgType);

                    /**
                     * 判断参数 PkgType 是否已赋值
                     * @return PkgType 是否已赋值
                     * 
                     */
                    bool PkgTypeHasBeenSet() const;

                    /**
                     * 获取程序包介绍
                     * @return PkgDesc 程序包介绍
                     * 
                     */
                    std::string GetPkgDesc() const;

                    /**
                     * 设置程序包介绍
                     * @param _pkgDesc 程序包介绍
                     * 
                     */
                    void SetPkgDesc(const std::string& _pkgDesc);

                    /**
                     * 判断参数 PkgDesc 是否已赋值
                     * @return PkgDesc 是否已赋值
                     * 
                     */
                    bool PkgDescHasBeenSet() const;

                    /**
                     * 获取仓库类型（默认仓库：default，私有仓库：private，公共仓库：public-demo）
                     * @return RepositoryType 仓库类型（默认仓库：default，私有仓库：private，公共仓库：public-demo）
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置仓库类型（默认仓库：default，私有仓库：private，公共仓库：public-demo）
                     * @param _repositoryType 仓库类型（默认仓库：default，私有仓库：private，公共仓库：public-demo）
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
                     * 程序包名
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * 程序包版本
                     */
                    std::string m_pkgVersion;
                    bool m_pkgVersionHasBeenSet;

                    /**
                     * 程序包类型
                     */
                    std::string m_pkgType;
                    bool m_pkgTypeHasBeenSet;

                    /**
                     * 程序包介绍
                     */
                    std::string m_pkgDesc;
                    bool m_pkgDescHasBeenSet;

                    /**
                     * 仓库类型（默认仓库：default，私有仓库：private，公共仓库：public-demo）
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

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUPLOADINFOREQUEST_H_
