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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群类型: 0 一主一备, 1 一主两备...N-1 一主N备
                     * @return InstanceTypes 集群类型: 0 一主一备, 1 一主两备...N-1 一主N备
                     * 
                     */
                    std::vector<int64_t> GetInstanceTypes() const;

                    /**
                     * 设置集群类型: 0 一主一备, 1 一主两备...N-1 一主N备
                     * @param _instanceTypes 集群类型: 0 一主一备, 1 一主两备...N-1 一主N备
                     * 
                     */
                    void SetInstanceTypes(const std::vector<int64_t>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取产品ID:  0 MYSQL，1 TDSQL
                     * @return ProductIds 产品ID:  0 MYSQL，1 TDSQL
                     * 
                     */
                    std::vector<int64_t> GetProductIds() const;

                    /**
                     * 设置产品ID:  0 MYSQL，1 TDSQL
                     * @param _productIds 产品ID:  0 MYSQL，1 TDSQL
                     * 
                     */
                    void SetProductIds(const std::vector<int64_t>& _productIds);

                    /**
                     * 判断参数 ProductIds 是否已赋值
                     * @return ProductIds 是否已赋值
                     * 
                     */
                    bool ProductIdsHasBeenSet() const;

                    /**
                     * 获取集群uuid: 如 dbdc-q810131s
                     * @return InstanceIds 集群uuid: 如 dbdc-q810131s
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置集群uuid: 如 dbdc-q810131s
                     * @param _instanceIds 集群uuid: 如 dbdc-q810131s
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取是否按金融围笼标志搜索
                     * @return FenceFlag 是否按金融围笼标志搜索
                     * 
                     */
                    bool GetFenceFlag() const;

                    /**
                     * 设置是否按金融围笼标志搜索
                     * @param _fenceFlag 是否按金融围笼标志搜索
                     * 
                     */
                    void SetFenceFlag(const bool& _fenceFlag);

                    /**
                     * 判断参数 FenceFlag 是否已赋值
                     * @return FenceFlag 是否已赋值
                     * 
                     */
                    bool FenceFlagHasBeenSet() const;

                    /**
                     * 获取按实例名字模糊匹配
                     * @return InstanceName 按实例名字模糊匹配
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置按实例名字模糊匹配
                     * @param _instanceName 按实例名字模糊匹配
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取每页数目, 整型
                     * @return PageSize 每页数目, 整型
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页数目, 整型
                     * @param _pageSize 每页数目, 整型
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取页码, 整型
                     * @return PageNumber 页码, 整型
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码, 整型
                     * @param _pageNumber 页码, 整型
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取排序字段，枚举：createtime,groupname
                     * @return OrderBy 排序字段，枚举：createtime,groupname
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，枚举：createtime,groupname
                     * @param _orderBy 排序字段，枚举：createtime,groupname
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
                     * 获取排序方式: asc升序, desc降序
                     * @return OrderByType 排序方式: asc升序, desc降序
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式: asc升序, desc降序
                     * @param _orderByType 排序方式: asc升序, desc降序
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取集群状态: -2 已删除, -1 已隔离, 0 创建中, 1 运行中, 2 扩容中, 3 删除中
                     * @return InstanceStatus 集群状态: -2 已删除, -1 已隔离, 0 创建中, 1 运行中, 2 扩容中, 3 删除中
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置集群状态: -2 已删除, -1 已隔离, 0 创建中, 1 运行中, 2 扩容中, 3 删除中
                     * @param _instanceStatus 集群状态: -2 已删除, -1 已隔离, 0 创建中, 1 运行中, 2 扩容中, 3 删除中
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                private:

                    /**
                     * 集群类型: 0 一主一备, 1 一主两备...N-1 一主N备
                     */
                    std::vector<int64_t> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * 产品ID:  0 MYSQL，1 TDSQL
                     */
                    std::vector<int64_t> m_productIds;
                    bool m_productIdsHasBeenSet;

                    /**
                     * 集群uuid: 如 dbdc-q810131s
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 是否按金融围笼标志搜索
                     */
                    bool m_fenceFlag;
                    bool m_fenceFlagHasBeenSet;

                    /**
                     * 按实例名字模糊匹配
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 每页数目, 整型
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页码, 整型
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 排序字段，枚举：createtime,groupname
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式: asc升序, desc降序
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 集群状态: -2 已删除, -1 已隔离, 0 创建中, 1 运行中, 2 扩容中, 3 删除中
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEINSTANCESREQUEST_H_
