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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEORDERINSTANCESREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEORDERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeOrderInstances请求参数结构体
                */
                class DescribeOrderInstancesRequest : public AbstractModel
                {
                public:
                    DescribeOrderInstancesRequest();
                    ~DescribeOrderInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
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
                     * 获取每页展示数量
                     * @return PageSize 每页展示数量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页展示数量
                     * @param _pageSize 每页展示数量
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
                     * 获取按某个字段排序，目前仅支持CreateTime排序。
                     * @return OrderField 按某个字段排序，目前仅支持CreateTime排序。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置按某个字段排序，目前仅支持CreateTime排序。
                     * @param _orderField 按某个字段排序，目前仅支持CreateTime排序。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取升序（asc）还是降序（desc），默认：desc。
                     * @return OrderDirection 升序（asc）还是降序（desc），默认：desc。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置升序（asc）还是降序（desc），默认：desc。
                     * @param _orderDirection 升序（asc）还是降序（desc），默认：desc。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取（条件过滤字段）平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * @return PlatformType （条件过滤字段）平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * 
                     */
                    int64_t GetPlatformType() const;

                    /**
                     * 设置（条件过滤字段）平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * @param _platformType （条件过滤字段）平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * 
                     */
                    void SetPlatformType(const int64_t& _platformType);

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     * 
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取（条件过滤字段）订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * @return OrderType （条件过滤字段）订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置（条件过滤字段）订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * @param _orderType （条件过滤字段）订单采购类型 1-免费试用 2-按年收费 3-按次收费
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
                     * 获取（条件过滤字段）订单审批状态：
                     * @return ApprovalStatus （条件过滤字段）订单审批状态：
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置（条件过滤字段）订单审批状态：
                     * @param _approvalStatus （条件过滤字段）订单审批状态：
                     * 
                     */
                    void SetApprovalStatus(const int64_t& _approvalStatus);

                    /**
                     * 判断参数 ApprovalStatus 是否已赋值
                     * @return ApprovalStatus 是否已赋值
                     * 
                     */
                    bool ApprovalStatusHasBeenSet() const;

                    /**
                     * 获取（条件过滤字段）资源状态：
                     * @return ResourceStatus （条件过滤字段）资源状态：
                     * 
                     */
                    int64_t GetResourceStatus() const;

                    /**
                     * 设置（条件过滤字段）资源状态：
                     * @param _resourceStatus （条件过滤字段）资源状态：
                     * 
                     */
                    void SetResourceStatus(const int64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取（条件过滤字段）订单ID
                     * @return OrderId （条件过滤字段）订单ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置（条件过滤字段）订单ID
                     * @param _orderId （条件过滤字段）订单ID
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取（条件过滤字段）资源ID
                     * @return ResourceId （条件过滤字段）资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置（条件过滤字段）资源ID
                     * @param _resourceId （条件过滤字段）资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取（条件过滤字段）包名，查询android加固订单时使用
                     * @return AppPkgName （条件过滤字段）包名，查询android加固订单时使用
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置（条件过滤字段）包名，查询android加固订单时使用
                     * @param _appPkgName （条件过滤字段）包名，查询android加固订单时使用
                     * 
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     * 
                     */
                    bool AppPkgNameHasBeenSet() const;

                private:

                    /**
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页展示数量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 按某个字段排序，目前仅支持CreateTime排序。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 升序（asc）还是降序（desc），默认：desc。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * （条件过滤字段）平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     */
                    int64_t m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * （条件过滤字段）订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * （条件过滤字段）订单审批状态：
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * （条件过滤字段）资源状态：
                     */
                    int64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * （条件过滤字段）订单ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * （条件过滤字段）资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * （条件过滤字段）包名，查询android加固订单时使用
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEORDERINSTANCESREQUEST_H_
