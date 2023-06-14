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
                     * 获取应用ID（只传入应用ID，返回该应用下所有软件包信息）
                     * @return ApplicationId 应用ID（只传入应用ID，返回该应用下所有软件包信息）
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID（只传入应用ID，返回该应用下所有软件包信息）
                     * @param _applicationId 应用ID（只传入应用ID，返回该应用下所有软件包信息）
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
                     * 获取排序关键字（默认为"UploadTime"：上传时间）
                     * @return OrderBy 排序关键字（默认为"UploadTime"：上传时间）
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序关键字（默认为"UploadTime"：上传时间）
                     * @param _orderBy 排序关键字（默认为"UploadTime"：上传时间）
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
                     * 获取查询起始偏移
                     * @return Offset 查询起始偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询起始偏移
                     * @param _offset 查询起始偏移
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
                     * 应用ID（只传入应用ID，返回该应用下所有软件包信息）
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 查询关键字（支持根据包ID，包名，包版本号搜索）
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 排序关键字（默认为"UploadTime"：上传时间）
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 升序：0/降序：1（默认降序）
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 查询起始偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

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
