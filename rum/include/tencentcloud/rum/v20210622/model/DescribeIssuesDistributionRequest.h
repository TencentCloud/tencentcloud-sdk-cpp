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
                     * 获取<p>分布维度是自定义维度时，填‘user_custom’</p>
                     * @return DimType <p>分布维度是自定义维度时，填‘user_custom’</p>
                     * 
                     */
                    std::string GetDimType() const;

                    /**
                     * 设置<p>分布维度是自定义维度时，填‘user_custom’</p>
                     * @param _dimType <p>分布维度是自定义维度时，填‘user_custom’</p>
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
                     * 获取<p>维度，e.g. os_version, app_version, model等</p>
                     * @return Dimension <p>维度，e.g. os_version, app_version, model等</p>
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置<p>维度，e.g. os_version, app_version, model等</p>
                     * @param _dimension <p>维度，e.g. os_version, app_version, model等</p>
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
                     * 获取<p>数字类型字段的区间范围</p>
                     * @return Intervals <p>数字类型字段的区间范围</p>
                     * 
                     */
                    std::vector<int64_t> GetIntervals() const;

                    /**
                     * 设置<p>数字类型字段的区间范围</p>
                     * @param _intervals <p>数字类型字段的区间范围</p>
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
                     * 获取<p>问题Id</p>
                     * @return IssueId <p>问题Id</p>
                     * 
                     */
                    std::string GetIssueId() const;

                    /**
                     * 设置<p>问题Id</p>
                     * @param _issueId <p>问题Id</p>
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
                     * 获取<p>限制返回的个数，默认返回所有值</p>
                     * @return ParamLimit <p>限制返回的个数，默认返回所有值</p>
                     * 
                     */
                    int64_t GetParamLimit() const;

                    /**
                     * 设置<p>限制返回的个数，默认返回所有值</p>
                     * @param _paramLimit <p>限制返回的个数，默认返回所有值</p>
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
                     * 获取<p>键</p>
                     * @return MapKey <p>键</p>
                     * 
                     */
                    std::string GetMapKey() const;

                    /**
                     * 设置<p>键</p>
                     * @param _mapKey <p>键</p>
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
                     * 获取<p>名称</p>
                     * @return MapName <p>名称</p>
                     * 
                     */
                    std::string GetMapName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _mapName <p>名称</p>
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
                     * 获取<p>指标类型</p>
                     * @return MetricType <p>指标类型</p>
                     * 
                     */
                    int64_t GetMetricType() const;

                    /**
                     * 设置<p>指标类型</p>
                     * @param _metricType <p>指标类型</p>
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
                     * 获取<p>用户自定义维度key</p>
                     * @return UserCustomKey <p>用户自定义维度key</p>
                     * 
                     */
                    std::string GetUserCustomKey() const;

                    /**
                     * 设置<p>用户自定义维度key</p>
                     * @param _userCustomKey <p>用户自定义维度key</p>
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
                    std::string m_formListString;
                    bool m_formListStringHasBeenSet;

                    /**
                     * <p>分布维度是自定义维度时，填‘user_custom’</p>
                     */
                    std::string m_dimType;
                    bool m_dimTypeHasBeenSet;

                    /**
                     * <p>维度，e.g. os_version, app_version, model等</p>
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * <p>数字类型字段的区间范围</p>
                     */
                    std::vector<int64_t> m_intervals;
                    bool m_intervalsHasBeenSet;

                    /**
                     * <p>提供给前端使用，当填写本字段时，会覆盖 form_list 的值</p>
                     */
                    std::string m_paramToken;
                    bool m_paramTokenHasBeenSet;

                    /**
                     * <p>问题Id</p>
                     */
                    std::string m_issueId;
                    bool m_issueIdHasBeenSet;

                    /**
                     * <p>问题类型</p>
                     */
                    int64_t m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * <p>限制返回的个数，默认返回所有值</p>
                     */
                    int64_t m_paramLimit;
                    bool m_paramLimitHasBeenSet;

                    /**
                     * <p>键</p>
                     */
                    std::string m_mapKey;
                    bool m_mapKeyHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_mapName;
                    bool m_mapNameHasBeenSet;

                    /**
                     * <p>指标类型</p>
                     */
                    int64_t m_metricType;
                    bool m_metricTypeHasBeenSet;

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
                     * <p>用户自定义维度key</p>
                     */
                    std::string m_userCustomKey;
                    bool m_userCustomKeyHasBeenSet;

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

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESDISTRIBUTIONREQUEST_H_
