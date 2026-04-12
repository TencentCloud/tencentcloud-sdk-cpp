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
                     * 获取接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
                     * @return FormList 接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
                     * 
                     */
                    std::string GetFormList() const;

                    /**
                     * 设置接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
                     * @param _formList 接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
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
                     * 获取接口调试专用，对比模式下条件A，当 token 为空时，以这里的 value 作为筛选表单信息
                     * @return FormListA 接口调试专用，对比模式下条件A，当 token 为空时，以这里的 value 作为筛选表单信息
                     * 
                     */
                    std::string GetFormListA() const;

                    /**
                     * 设置接口调试专用，对比模式下条件A，当 token 为空时，以这里的 value 作为筛选表单信息
                     * @param _formListA 接口调试专用，对比模式下条件A，当 token 为空时，以这里的 value 作为筛选表单信息
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
                     * 获取接口调试专用，对比模式下条件B，当 token 为空时，以这里的 value 作为筛选表单信息
                     * @return FormListB 接口调试专用，对比模式下条件B，当 token 为空时，以这里的 value 作为筛选表单信息
                     * 
                     */
                    std::string GetFormListB() const;

                    /**
                     * 设置接口调试专用，对比模式下条件B，当 token 为空时，以这里的 value 作为筛选表单信息
                     * @param _formListB 接口调试专用，对比模式下条件B，当 token 为空时，以这里的 value 作为筛选表单信息
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
                     * 获取提供给前端使用，当填写本字段时，会覆盖 form_list 的值
                     * @return ParamToken 提供给前端使用，当填写本字段时，会覆盖 form_list 的值
                     * 
                     */
                    std::string GetParamToken() const;

                    /**
                     * 设置提供给前端使用，当填写本字段时，会覆盖 form_list 的值
                     * @param _paramToken 提供给前端使用，当填写本字段时，会覆盖 form_list 的值
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
                     * 获取问题类型
                     * @return IssueType 问题类型
                     * 
                     */
                    int64_t GetIssueType() const;

                    /**
                     * 设置问题类型
                     * @param _issueType 问题类型
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
                     * 获取排序方式
                     * @return SortType 排序方式
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序方式
                     * @param _sortType 排序方式
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
                     * 获取问题对比列表模式下，用于标识是按照sort_field字段的A值排序还是B值还是ratio值
                     * @return SortABRatio 问题对比列表模式下，用于标识是按照sort_field字段的A值排序还是B值还是ratio值
                     * 
                     */
                    std::string GetSortABRatio() const;

                    /**
                     * 设置问题对比列表模式下，用于标识是按照sort_field字段的A值排序还是B值还是ratio值
                     * @param _sortABRatio 问题对比列表模式下，用于标识是按照sort_field字段的A值排序还是B值还是ratio值
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
                     * 获取模式：false:问题列表模式，true:对比列表模式
                     * @return Compare 模式：false:问题列表模式，true:对比列表模式
                     * 
                     */
                    bool GetCompare() const;

                    /**
                     * 设置模式：false:问题列表模式，true:对比列表模式
                     * @param _compare 模式：false:问题列表模式，true:对比列表模式
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
                     * 获取对比状态 0:所有 1:新增 2：遗留 3:已解决
                     * @return CompareStatus 对比状态 0:所有 1:新增 2：遗留 3:已解决
                     * 
                     */
                    int64_t GetCompareStatus() const;

                    /**
                     * 设置对比状态 0:所有 1:新增 2：遗留 3:已解决
                     * @param _compareStatus 对比状态 0:所有 1:新增 2：遗留 3:已解决
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
                     * 获取拓展字段
                     * @return ExtraData 拓展字段
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置拓展字段
                     * @param _extraData 拓展字段
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
                     * 接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
                     */
                    std::string m_formList;
                    bool m_formListHasBeenSet;

                    /**
                     * 接口调试专用，对比模式下条件A，当 token 为空时，以这里的 value 作为筛选表单信息
                     */
                    std::string m_formListA;
                    bool m_formListAHasBeenSet;

                    /**
                     * 接口调试专用，对比模式下条件B，当 token 为空时，以这里的 value 作为筛选表单信息
                     */
                    std::string m_formListB;
                    bool m_formListBHasBeenSet;

                    /**
                     * 提供给前端使用，当填写本字段时，会覆盖 form_list 的值
                     */
                    std::string m_paramToken;
                    bool m_paramTokenHasBeenSet;

                    /**
                     * 问题类型
                     */
                    int64_t m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 每页数目
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 问题对比列表模式下，用于标识是按照sort_field字段的A值排序还是B值还是ratio值
                     */
                    std::string m_sortABRatio;
                    bool m_sortABRatioHasBeenSet;

                    /**
                     * 模式：false:问题列表模式，true:对比列表模式
                     */
                    bool m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * 对比状态 0:所有 1:新增 2：遗留 3:已解决
                     */
                    int64_t m_compareStatus;
                    bool m_compareStatusHasBeenSet;

                    /**
                     * 拓展字段
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

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESLISTREQUEST_H_
