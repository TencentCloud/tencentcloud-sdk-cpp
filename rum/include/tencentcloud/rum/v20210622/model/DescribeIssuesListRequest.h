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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESLISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESLISTREQUEST_H_

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
                * DescribeIssuesList请求参数结构体
                */
                class DescribeIssuesListRequest : public AbstractModel
                {
                public:
                    DescribeIssuesListRequest();
                    ~DescribeIssuesListRequest() = default;
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
                     * @return FormList <p>接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * 
                     */
                    std::string GetFormList() const;

                    /**
                     * 设置<p>接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * @param _formList <p>接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * 
                     */
                    void SetFormList(const std::string& _formList);

                    /**
                     * 判断参数 FormList 是否已赋值
                     * @return FormList 是否已赋值
                     * 
                     */
                    bool FormListHasBeenSet() const;

                    /**
                     * 获取<p>接口调试专用，对比模式下条件A，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * @return FormListA <p>接口调试专用，对比模式下条件A，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * 
                     */
                    std::string GetFormListA() const;

                    /**
                     * 设置<p>接口调试专用，对比模式下条件A，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * @param _formListA <p>接口调试专用，对比模式下条件A，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * 
                     */
                    void SetFormListA(const std::string& _formListA);

                    /**
                     * 判断参数 FormListA 是否已赋值
                     * @return FormListA 是否已赋值
                     * 
                     */
                    bool FormListAHasBeenSet() const;

                    /**
                     * 获取<p>接口调试专用，对比模式下条件B，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * @return FormListB <p>接口调试专用，对比模式下条件B，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * 
                     */
                    std::string GetFormListB() const;

                    /**
                     * 设置<p>接口调试专用，对比模式下条件B，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * @param _formListB <p>接口调试专用，对比模式下条件B，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     * 
                     */
                    void SetFormListB(const std::string& _formListB);

                    /**
                     * 判断参数 FormListB 是否已赋值
                     * @return FormListB 是否已赋值
                     * 
                     */
                    bool FormListBHasBeenSet() const;

                    /**
                     * 获取<p>提供给前端使用，当填写本字段时，会覆盖 form_list 的值</p>
                     * @return ParamToken <p>提供给前端使用，当填写本字段时，会覆盖 form_list 的值</p>
                     * 
                     */
                    std::string GetParamToken() const;

                    /**
                     * 设置<p>提供给前端使用，当填写本字段时，会覆盖 form_list 的值</p>
                     * @param _paramToken <p>提供给前端使用，当填写本字段时，会覆盖 form_list 的值</p>
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
                     * 获取<p>问题类型</p>
                     * @return IssueType <p>问题类型</p>
                     * 
                     */
                    int64_t GetIssueType() const;

                    /**
                     * 设置<p>问题类型</p>
                     * @param _issueType <p>问题类型</p>
                     * 
                     */
                    void SetIssueType(const int64_t& _issueType);

                    /**
                     * 判断参数 IssueType 是否已赋值
                     * @return IssueType 是否已赋值
                     * 
                     */
                    bool IssueTypeHasBeenSet() const;

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
                     * 获取<p>排序方式</p>
                     * @return SortType <p>排序方式</p>
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置<p>排序方式</p>
                     * @param _sortType <p>排序方式</p>
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
                     * 获取<p>每页数目</p>
                     * @return PageSize <p>每页数目</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数目</p>
                     * @param _pageSize <p>每页数目</p>
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
                     * 获取<p>页码</p>
                     * @return PageNumber <p>页码</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码</p>
                     * @param _pageNumber <p>页码</p>
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
                     * 获取<p>问题对比列表模式下，用于标识是按照sort_field字段的A值排序还是B值还是ratio值</p>
                     * @return SortABRatio <p>问题对比列表模式下，用于标识是按照sort_field字段的A值排序还是B值还是ratio值</p>
                     * 
                     */
                    std::string GetSortABRatio() const;

                    /**
                     * 设置<p>问题对比列表模式下，用于标识是按照sort_field字段的A值排序还是B值还是ratio值</p>
                     * @param _sortABRatio <p>问题对比列表模式下，用于标识是按照sort_field字段的A值排序还是B值还是ratio值</p>
                     * 
                     */
                    void SetSortABRatio(const std::string& _sortABRatio);

                    /**
                     * 判断参数 SortABRatio 是否已赋值
                     * @return SortABRatio 是否已赋值
                     * 
                     */
                    bool SortABRatioHasBeenSet() const;

                    /**
                     * 获取<p>模式：false:问题列表模式，true:对比列表模式</p>
                     * @return Compare <p>模式：false:问题列表模式，true:对比列表模式</p>
                     * 
                     */
                    bool GetCompare() const;

                    /**
                     * 设置<p>模式：false:问题列表模式，true:对比列表模式</p>
                     * @param _compare <p>模式：false:问题列表模式，true:对比列表模式</p>
                     * 
                     */
                    void SetCompare(const bool& _compare);

                    /**
                     * 判断参数 Compare 是否已赋值
                     * @return Compare 是否已赋值
                     * 
                     */
                    bool CompareHasBeenSet() const;

                    /**
                     * 获取<p>对比状态 0:所有 1:新增 2：遗留 3:已解决</p>
                     * @return CompareStatus <p>对比状态 0:所有 1:新增 2：遗留 3:已解决</p>
                     * 
                     */
                    int64_t GetCompareStatus() const;

                    /**
                     * 设置<p>对比状态 0:所有 1:新增 2：遗留 3:已解决</p>
                     * @param _compareStatus <p>对比状态 0:所有 1:新增 2：遗留 3:已解决</p>
                     * 
                     */
                    void SetCompareStatus(const int64_t& _compareStatus);

                    /**
                     * 判断参数 CompareStatus 是否已赋值
                     * @return CompareStatus 是否已赋值
                     * 
                     */
                    bool CompareStatusHasBeenSet() const;

                    /**
                     * 获取<p>拓展字段</p>
                     * @return ExtraData <p>拓展字段</p>
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置<p>拓展字段</p>
                     * @param _extraData <p>拓展字段</p>
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
                    std::string m_formList;
                    bool m_formListHasBeenSet;

                    /**
                     * <p>接口调试专用，对比模式下条件A，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     */
                    std::string m_formListA;
                    bool m_formListAHasBeenSet;

                    /**
                     * <p>接口调试专用，对比模式下条件B，当 token 为空时，以这里的 value 作为筛选表单信息</p>
                     */
                    std::string m_formListB;
                    bool m_formListBHasBeenSet;

                    /**
                     * <p>提供给前端使用，当填写本字段时，会覆盖 form_list 的值</p>
                     */
                    std::string m_paramToken;
                    bool m_paramTokenHasBeenSet;

                    /**
                     * <p>问题类型</p>
                     */
                    int64_t m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * <p>排序字段</p>
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * <p>排序方式</p>
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>每页数目</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>页码</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>问题对比列表模式下，用于标识是按照sort_field字段的A值排序还是B值还是ratio值</p>
                     */
                    std::string m_sortABRatio;
                    bool m_sortABRatioHasBeenSet;

                    /**
                     * <p>模式：false:问题列表模式，true:对比列表模式</p>
                     */
                    bool m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * <p>对比状态 0:所有 1:新增 2：遗留 3:已解决</p>
                     */
                    int64_t m_compareStatus;
                    bool m_compareStatusHasBeenSet;

                    /**
                     * <p>拓展字段</p>
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

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESLISTREQUEST_H_
