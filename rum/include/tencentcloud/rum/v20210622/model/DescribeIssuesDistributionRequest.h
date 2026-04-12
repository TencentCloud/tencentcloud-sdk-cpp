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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESDISTRIBUTIONREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESDISTRIBUTIONREQUEST_H_

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
                * DescribeIssuesDistribution请求参数结构体
                */
                class DescribeIssuesDistributionRequest : public AbstractModel
                {
                public:
                    DescribeIssuesDistributionRequest();
                    ~DescribeIssuesDistributionRequest() = default;
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
                     * 获取分布维度是自定义维度时，填‘user_custom’
                     * @return DimType 分布维度是自定义维度时，填‘user_custom’
                     * 
                     */
                    std::string GetDimType() const;

                    /**
                     * 设置分布维度是自定义维度时，填‘user_custom’
                     * @param _dimType 分布维度是自定义维度时，填‘user_custom’
                     * 
                     */
                    void SetDimType(const std::string& _dimType);

                    /**
                     * 判断参数 DimType 是否已赋值
                     * @return DimType 是否已赋值
                     * 
                     */
                    bool DimTypeHasBeenSet() const;

                    /**
                     * 获取维度，e.g. os_version, app_version, model等
                     * @return Dimension 维度，e.g. os_version, app_version, model等
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置维度，e.g. os_version, app_version, model等
                     * @param _dimension 维度，e.g. os_version, app_version, model等
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取数字类型字段的区间范围
                     * @return Intervals 数字类型字段的区间范围
                     * 
                     */
                    std::vector<int64_t> GetIntervals() const;

                    /**
                     * 设置数字类型字段的区间范围
                     * @param _intervals 数字类型字段的区间范围
                     * 
                     */
                    void SetIntervals(const std::vector<int64_t>& _intervals);

                    /**
                     * 判断参数 Intervals 是否已赋值
                     * @return Intervals 是否已赋值
                     * 
                     */
                    bool IntervalsHasBeenSet() const;

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
                     * 获取问题Id
                     * @return IssueId 问题Id
                     * 
                     */
                    std::string GetIssueId() const;

                    /**
                     * 设置问题Id
                     * @param _issueId 问题Id
                     * 
                     */
                    void SetIssueId(const std::string& _issueId);

                    /**
                     * 判断参数 IssueId 是否已赋值
                     * @return IssueId 是否已赋值
                     * 
                     */
                    bool IssueIdHasBeenSet() const;

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
                     * 获取限制返回的个数，默认返回所有值
                     * @return ParamLimit 限制返回的个数，默认返回所有值
                     * 
                     */
                    int64_t GetParamLimit() const;

                    /**
                     * 设置限制返回的个数，默认返回所有值
                     * @param _paramLimit 限制返回的个数，默认返回所有值
                     * 
                     */
                    void SetParamLimit(const int64_t& _paramLimit);

                    /**
                     * 判断参数 ParamLimit 是否已赋值
                     * @return ParamLimit 是否已赋值
                     * 
                     */
                    bool ParamLimitHasBeenSet() const;

                    /**
                     * 获取键
                     * @return MapKey 键
                     * 
                     */
                    std::string GetMapKey() const;

                    /**
                     * 设置键
                     * @param _mapKey 键
                     * 
                     */
                    void SetMapKey(const std::string& _mapKey);

                    /**
                     * 判断参数 MapKey 是否已赋值
                     * @return MapKey 是否已赋值
                     * 
                     */
                    bool MapKeyHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return MapName 名称
                     * 
                     */
                    std::string GetMapName() const;

                    /**
                     * 设置名称
                     * @param _mapName 名称
                     * 
                     */
                    void SetMapName(const std::string& _mapName);

                    /**
                     * 判断参数 MapName 是否已赋值
                     * @return MapName 是否已赋值
                     * 
                     */
                    bool MapNameHasBeenSet() const;

                    /**
                     * 获取指标类型
                     * @return MetricType 指标类型
                     * 
                     */
                    int64_t GetMetricType() const;

                    /**
                     * 设置指标类型
                     * @param _metricType 指标类型
                     * 
                     */
                    void SetMetricType(const int64_t& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

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
                     * 获取用户自定义维度key
                     * @return UserCustomKey 用户自定义维度key
                     * 
                     */
                    std::string GetUserCustomKey() const;

                    /**
                     * 设置用户自定义维度key
                     * @param _userCustomKey 用户自定义维度key
                     * 
                     */
                    void SetUserCustomKey(const std::string& _userCustomKey);

                    /**
                     * 判断参数 UserCustomKey 是否已赋值
                     * @return UserCustomKey 是否已赋值
                     * 
                     */
                    bool UserCustomKeyHasBeenSet() const;

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
                    std::string m_formListString;
                    bool m_formListStringHasBeenSet;

                    /**
                     * 分布维度是自定义维度时，填‘user_custom’
                     */
                    std::string m_dimType;
                    bool m_dimTypeHasBeenSet;

                    /**
                     * 维度，e.g. os_version, app_version, model等
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 数字类型字段的区间范围
                     */
                    std::vector<int64_t> m_intervals;
                    bool m_intervalsHasBeenSet;

                    /**
                     * 提供给前端使用，当填写本字段时，会覆盖 form_list 的值
                     */
                    std::string m_paramToken;
                    bool m_paramTokenHasBeenSet;

                    /**
                     * 问题Id
                     */
                    std::string m_issueId;
                    bool m_issueIdHasBeenSet;

                    /**
                     * 问题类型
                     */
                    int64_t m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * 限制返回的个数，默认返回所有值
                     */
                    int64_t m_paramLimit;
                    bool m_paramLimitHasBeenSet;

                    /**
                     * 键
                     */
                    std::string m_mapKey;
                    bool m_mapKeyHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_mapName;
                    bool m_mapNameHasBeenSet;

                    /**
                     * 指标类型
                     */
                    int64_t m_metricType;
                    bool m_metricTypeHasBeenSet;

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
                     * 用户自定义维度key
                     */
                    std::string m_userCustomKey;
                    bool m_userCustomKeyHasBeenSet;

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

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESDISTRIBUTIONREQUEST_H_
