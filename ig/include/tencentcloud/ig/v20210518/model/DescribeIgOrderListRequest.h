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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_DESCRIBEIGORDERLISTREQUEST_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_DESCRIBEIGORDERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            namespace Model
            {
                /**
                * DescribeIgOrderList请求参数结构体
                */
                class DescribeIgOrderListRequest : public AbstractModel
                {
                public:
                    DescribeIgOrderListRequest();
                    ~DescribeIgOrderListRequest() = default;
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
                     * 获取每页数目
                     * @return PageSize 每页数目
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页数目
                     * @param _pageSize 每页数目
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
                     * 获取产品类型
                     * @return ProductType 产品类型
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置产品类型
                     * @param _productType 产品类型
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取订单状态
                     * @return OrderStatus 订单状态
                     * 
                     */
                    int64_t GetOrderStatus() const;

                    /**
                     * 设置订单状态
                     * @param _orderStatus 订单状态
                     * 
                     */
                    void SetOrderStatus(const int64_t& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return KeyWord 搜索关键字
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置搜索关键字
                     * @param _keyWord 搜索关键字
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                private:

                    /**
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数目
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 产品类型
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 订单状态
                     */
                    int64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_DESCRIBEIGORDERLISTREQUEST_H_
