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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_

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
                * DescribeApplications请求参数结构体
                */
                class DescribeApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeApplicationsRequest();
                    ~DescribeApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索字段
                     * @return SearchWord 搜索字段
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索字段
                     * @param _searchWord 搜索字段
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
                     * 获取排序字段
                     * @return OrderBy 排序字段
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段
                     * @param _orderBy 排序字段
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
                     * 获取排序类型
                     * @return OrderType 排序类型
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置排序类型
                     * @param _orderType 排序类型
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页个数
                     * @return Limit 分页个数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页个数
                     * @param _limit 分页个数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取应用类型
                     * @return ApplicationType 应用类型
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
                     * @param _applicationType 应用类型
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取应用的微服务类型
                     * @return MicroserviceType 应用的微服务类型
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置应用的微服务类型
                     * @param _microserviceType 应用的微服务类型
                     * 
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     * 
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                    /**
                     * 获取应用资源类型数组
                     * @return ApplicationResourceTypeList 应用资源类型数组
                     * 
                     */
                    std::vector<std::string> GetApplicationResourceTypeList() const;

                    /**
                     * 设置应用资源类型数组
                     * @param _applicationResourceTypeList 应用资源类型数组
                     * 
                     */
                    void SetApplicationResourceTypeList(const std::vector<std::string>& _applicationResourceTypeList);

                    /**
                     * 判断参数 ApplicationResourceTypeList 是否已赋值
                     * @return ApplicationResourceTypeList 是否已赋值
                     * 
                     */
                    bool ApplicationResourceTypeListHasBeenSet() const;

                    /**
                     * 获取IdList
                     * @return ApplicationIdList IdList
                     * 
                     */
                    std::vector<std::string> GetApplicationIdList() const;

                    /**
                     * 设置IdList
                     * @param _applicationIdList IdList
                     * 
                     */
                    void SetApplicationIdList(const std::vector<std::string>& _applicationIdList);

                    /**
                     * 判断参数 ApplicationIdList 是否已赋值
                     * @return ApplicationIdList 是否已赋值
                     * 
                     */
                    bool ApplicationIdListHasBeenSet() const;

                    /**
                     * 获取查询多种微服务类型的应用
                     * @return MicroserviceTypeList 查询多种微服务类型的应用
                     * 
                     */
                    std::vector<std::string> GetMicroserviceTypeList() const;

                    /**
                     * 设置查询多种微服务类型的应用
                     * @param _microserviceTypeList 查询多种微服务类型的应用
                     * 
                     */
                    void SetMicroserviceTypeList(const std::vector<std::string>& _microserviceTypeList);

                    /**
                     * 判断参数 MicroserviceTypeList 是否已赋值
                     * @return MicroserviceTypeList 是否已赋值
                     * 
                     */
                    bool MicroserviceTypeListHasBeenSet() const;

                private:

                    /**
                     * 搜索字段
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页个数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 应用类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 应用的微服务类型
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * 应用资源类型数组
                     */
                    std::vector<std::string> m_applicationResourceTypeList;
                    bool m_applicationResourceTypeListHasBeenSet;

                    /**
                     * IdList
                     */
                    std::vector<std::string> m_applicationIdList;
                    bool m_applicationIdListHasBeenSet;

                    /**
                     * 查询多种微服务类型的应用
                     */
                    std::vector<std::string> m_microserviceTypeList;
                    bool m_microserviceTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPPLICATIONSREQUEST_H_
