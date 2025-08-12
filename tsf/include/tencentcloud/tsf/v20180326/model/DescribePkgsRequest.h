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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPKGSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPKGSREQUEST_H_

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
                * DescribePkgs请求参数结构体
                */
                class DescribePkgsRequest : public AbstractModel
                {
                public:
                    DescribePkgsRequest();
                    ~DescribePkgsRequest() = default;
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
                     * 获取查询关键字（支持根据包ID，包名，包版本号搜索）
                     * @return SearchWord 查询关键字（支持根据包ID，包名，包版本号搜索）
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置查询关键字（支持根据包ID，包名，包版本号搜索）
                     * @param _searchWord 查询关键字（支持根据包ID，包名，包版本号搜索）
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取排序关键字（默认值"UploadTime"），允许值："UploadTime"上传时间, "name"程序包名, "size"应用大小, "id"程序包ID
                     * @return OrderBy 排序关键字（默认值"UploadTime"），允许值："UploadTime"上传时间, "name"程序包名, "size"应用大小, "id"程序包ID
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序关键字（默认值"UploadTime"），允许值："UploadTime"上传时间, "name"程序包名, "size"应用大小, "id"程序包ID
                     * @param _orderBy 排序关键字（默认值"UploadTime"），允许值："UploadTime"上传时间, "name"程序包名, "size"应用大小, "id"程序包ID
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取升序：0/降序：1（默认降序）
                     * @return OrderType 升序：0/降序：1（默认降序）
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置升序：0/降序：1（默认降序）
                     * @param _orderType 升序：0/降序：1（默认降序）
                     * 
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取查询起始偏移，大于等于0，默认值为0
                     * @return Offset 查询起始偏移，大于等于0，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询起始偏移，大于等于0，默认值为0
                     * @param _offset 查询起始偏移，大于等于0，默认值为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量限制
                     * @return Limit 返回数量限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量限制
                     * @param _limit 返回数量限制
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取程序包仓库类型，允许值："public-demo"TSF公共demo仓库, "private"自定义仓库, "default"TSF公共仓库
                     * @return RepositoryType 程序包仓库类型，允许值："public-demo"TSF公共demo仓库, "private"自定义仓库, "default"TSF公共仓库
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置程序包仓库类型，允许值："public-demo"TSF公共demo仓库, "private"自定义仓库, "default"TSF公共仓库
                     * @param _repositoryType 程序包仓库类型，允许值："public-demo"TSF公共demo仓库, "private"自定义仓库, "default"TSF公共仓库
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

                    /**
                     * 获取程序包类型数组支持（fatjar jar war tar.gz zip）
                     * @return PackageTypeList 程序包类型数组支持（fatjar jar war tar.gz zip）
                     * 
                     */
                    std::vector<std::string> GetPackageTypeList() const;

                    /**
                     * 设置程序包类型数组支持（fatjar jar war tar.gz zip）
                     * @param _packageTypeList 程序包类型数组支持（fatjar jar war tar.gz zip）
                     * 
                     */
                    void SetPackageTypeList(const std::vector<std::string>& _packageTypeList);

                    /**
                     * 判断参数 PackageTypeList 是否已赋值
                     * @return PackageTypeList 是否已赋值
                     * 
                     */
                    bool PackageTypeListHasBeenSet() const;

                private:

                    /**
                     * 应用ID，通过调用DescribeApplications接口[获取应用列表](https://cloud.tencent.com/document/api/649/36090)从而获取应用ID，或登录[控制台](https://console.cloud.tencent.com/tsf/app?rid=1)进行查看，调用CreateApplication接口[创建应用](https://cloud.tencent.com/document/product/649/36094)时的返回值
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 查询关键字（支持根据包ID，包名，包版本号搜索）
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 排序关键字（默认值"UploadTime"），允许值："UploadTime"上传时间, "name"程序包名, "size"应用大小, "id"程序包ID
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 升序：0/降序：1（默认降序）
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 查询起始偏移，大于等于0，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 程序包仓库类型，允许值："public-demo"TSF公共demo仓库, "private"自定义仓库, "default"TSF公共仓库
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * 仓库ID，可通过调用[仓库信息查询类](https://cloud.tencent.com/document/api/649/45925)接口时出参中的RepositoryId，或登录[控制台](https://console.cloud.tencent.com/tsf/product?rid=1)进行查看
                     */
                    std::string m_repositoryId;
                    bool m_repositoryIdHasBeenSet;

                    /**
                     * 程序包类型数组支持（fatjar jar war tar.gz zip）
                     */
                    std::vector<std::string> m_packageTypeList;
                    bool m_packageTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPKGSREQUEST_H_
