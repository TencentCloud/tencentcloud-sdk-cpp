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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEFOOMMALLOCPROBLEMLISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEFOOMMALLOCPROBLEMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeFOOMMallocProblemList请求参数结构体
                */
                class DescribeFOOMMallocProblemListRequest : public AbstractModel
                {
                public:
                    DescribeFOOMMallocProblemListRequest();
                    ~DescribeFOOMMallocProblemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取提供给前端使用，当填写本字段时，会覆盖 formlist 的值
                     * @return ParamToken 提供给前端使用，当填写本字段时，会覆盖 formlist 的值
                     * 
                     */
                    std::string GetParamToken() const;

                    /**
                     * 设置提供给前端使用，当填写本字段时，会覆盖 formlist 的值
                     * @param _paramToken 提供给前端使用，当填写本字段时，会覆盖 formlist 的值
                     * 
                     */
                    void SetParamToken(const std::string& _paramToken);

                    /**
                     * 判断参数 ParamToken 是否已赋值
                     * @return ParamToken 是否已赋值
                     * 
                     */
                    bool ParamTokenHasBeenSet() const;

                    /**
                     * 获取接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
                     * @return FormListString 接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
                     * 
                     */
                    std::string GetFormListString() const;

                    /**
                     * 设置接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
                     * @param _formListString 接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
                     * 
                     */
                    void SetFormListString(const std::string& _formListString);

                    /**
                     * 判断参数 FormListString 是否已赋值
                     * @return FormListString 是否已赋值
                     * 
                     */
                    bool FormListStringHasBeenSet() const;

                    /**
                     * 获取当前页码
                     * @return PageNumber 当前页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页码
                     * @param _pageNumber 当前页码
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
                     * 获取每页展示最大数量
                     * @return PageSize 每页展示最大数量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页展示最大数量
                     * @param _pageSize 每页展示最大数量
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
                     * 获取排序字段
                     * @return SortField 排序字段
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置排序字段
                     * @param _sortField 排序字段
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取排序类型
                     * @return SortType 排序类型
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序类型
                     * @param _sortType 排序类型
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取拓展数据
                     * @return ExtraData 拓展数据
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置拓展数据
                     * @param _extraData 拓展数据
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                    /**
                     * 获取请求头
                     * @return RequestHeader 请求头
                     * 
                     */
                    std::string GetRequestHeader() const;

                    /**
                     * 设置请求头
                     * @param _requestHeader 请求头
                     * 
                     */
                    void SetRequestHeader(const std::string& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     * 
                     */
                    bool RequestHeaderHasBeenSet() const;

                private:

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 提供给前端使用，当填写本字段时，会覆盖 formlist 的值
                     */
                    std::string m_paramToken;
                    bool m_paramTokenHasBeenSet;

                    /**
                     * 接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
                     */
                    std::string m_formListString;
                    bool m_formListStringHasBeenSet;

                    /**
                     * 当前页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页展示最大数量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 排序类型
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 拓展数据
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                    /**
                     * 请求头
                     */
                    std::string m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEFOOMMALLOCPROBLEMLISTREQUEST_H_
