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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELAGANRPROBLEMFEATUREACCOUNTSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELAGANRPROBLEMFEATUREACCOUNTSREQUEST_H_

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
                * DescribeLagANRProblemFeatureAccounts请求参数结构体
                */
                class DescribeLagANRProblemFeatureAccountsRequest : public AbstractModel
                {
                public:
                    DescribeLagANRProblemFeatureAccountsRequest();
                    ~DescribeLagANRProblemFeatureAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品Id</p>
                     * @return ProductId <p>产品Id</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品Id</p>
                     * @param _productId <p>产品Id</p>
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
                     * 获取<p>接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * @return FormListString <p>接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * 
                     */
                    std::string GetFormListString() const;

                    /**
                     * 设置<p>接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * @param _formListString <p>接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息</p>
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
                     * 获取<p>提供给前端使用，当填写本字段时，会覆盖 formlist 的值</p>
                     * @return ParamToken <p>提供给前端使用，当填写本字段时，会覆盖 formlist 的值</p>
                     * 
                     */
                    std::string GetParamToken() const;

                    /**
                     * 设置<p>提供给前端使用，当填写本字段时，会覆盖 formlist 的值</p>
                     * @param _paramToken <p>提供给前端使用，当填写本字段时，会覆盖 formlist 的值</p>
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
                     * 获取<p>问题特征</p>
                     * @return Feature <p>问题特征</p>
                     * 
                     */
                    std::string GetFeature() const;

                    /**
                     * 设置<p>问题特征</p>
                     * @param _feature <p>问题特征</p>
                     * 
                     */
                    void SetFeature(const std::string& _feature);

                    /**
                     * 判断参数 Feature 是否已赋值
                     * @return Feature 是否已赋值
                     * 
                     */
                    bool FeatureHasBeenSet() const;

                    /**
                     * 获取<p>排序字段</p>
                     * @return SortField <p>排序字段</p>
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置<p>排序字段</p>
                     * @param _sortField <p>排序字段</p>
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
                     * 获取<p>排序类型</p>
                     * @return SortType <p>排序类型</p>
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置<p>排序类型</p>
                     * @param _sortType <p>排序类型</p>
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
                     * 获取<p>当前页码</p>
                     * @return PageNumber <p>当前页码</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>当前页码</p>
                     * @param _pageNumber <p>当前页码</p>
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
                     * 获取<p>每页展示最大数量</p>
                     * @return PageSize <p>每页展示最大数量</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页展示最大数量</p>
                     * @param _pageSize <p>每页展示最大数量</p>
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
                     * 获取<p>拓展数据</p>
                     * @return ExtraData <p>拓展数据</p>
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置<p>拓展数据</p>
                     * @param _extraData <p>拓展数据</p>
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
                     * 获取<p>请求头</p>
                     * @return RequestHeader <p>请求头</p>
                     * 
                     */
                    std::string GetRequestHeader() const;

                    /**
                     * 设置<p>请求头</p>
                     * @param _requestHeader <p>请求头</p>
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
                     * <p>产品Id</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     */
                    std::string m_formListString;
                    bool m_formListStringHasBeenSet;

                    /**
                     * <p>提供给前端使用，当填写本字段时，会覆盖 formlist 的值</p>
                     */
                    std::string m_paramToken;
                    bool m_paramTokenHasBeenSet;

                    /**
                     * <p>问题特征</p>
                     */
                    std::string m_feature;
                    bool m_featureHasBeenSet;

                    /**
                     * <p>排序字段</p>
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * <p>排序类型</p>
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>当前页码</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页展示最大数量</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>拓展数据</p>
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                    /**
                     * <p>请求头</p>
                     */
                    std::string m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELAGANRPROBLEMFEATUREACCOUNTSREQUEST_H_
