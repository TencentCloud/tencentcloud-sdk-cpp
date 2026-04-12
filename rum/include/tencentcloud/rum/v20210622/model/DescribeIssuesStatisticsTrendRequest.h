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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESSTATISTICSTRENDREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESSTATISTICSTRENDREQUEST_H_

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
                * DescribeIssuesStatisticsTrend请求参数结构体
                */
                class DescribeIssuesStatisticsTrendRequest : public AbstractModel
                {
                public:
                    DescribeIssuesStatisticsTrendRequest();
                    ~DescribeIssuesStatisticsTrendRequest() = default;
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
                     * 获取时间窗口
                     * @return TimeWindow 时间窗口
                     * 
                     */
                    int64_t GetTimeWindow() const;

                    /**
                     * 设置时间窗口
                     * @param _timeWindow 时间窗口
                     * 
                     */
                    void SetTimeWindow(const int64_t& _timeWindow);

                    /**
                     * 判断参数 TimeWindow 是否已赋值
                     * @return TimeWindow 是否已赋值
                     * 
                     */
                    bool TimeWindowHasBeenSet() const;

                    /**
                     * 获取累计值
                     * @return TotalSize 累计值
                     * 
                     */
                    bool GetTotalSize() const;

                    /**
                     * 设置累计值
                     * @param _totalSize 累计值
                     * 
                     */
                    void SetTotalSize(const bool& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Stat 无
                     * 
                     */
                    int64_t GetStat() const;

                    /**
                     * 设置无
                     * @param _stat 无
                     * 
                     */
                    void SetStat(const int64_t& _stat);

                    /**
                     * 判断参数 Stat 是否已赋值
                     * @return Stat 是否已赋值
                     * 
                     */
                    bool StatHasBeenSet() const;

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

                    /**
                     * 获取无
                     * @return TrendStat 无
                     * 
                     */
                    int64_t GetTrendStat() const;

                    /**
                     * 设置无
                     * @param _trendStat 无
                     * 
                     */
                    void SetTrendStat(const int64_t& _trendStat);

                    /**
                     * 判断参数 TrendStat 是否已赋值
                     * @return TrendStat 是否已赋值
                     * 
                     */
                    bool TrendStatHasBeenSet() const;

                private:

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 提供给前端使用，当填写本字段时，会覆盖 form_list 的值
                     */
                    std::string m_paramToken;
                    bool m_paramTokenHasBeenSet;

                    /**
                     * 接口调试专用，当 token 为空时，以这里的 value 作为筛选表单信息
                     */
                    std::string m_formList;
                    bool m_formListHasBeenSet;

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
                     * 时间窗口
                     */
                    int64_t m_timeWindow;
                    bool m_timeWindowHasBeenSet;

                    /**
                     * 累计值
                     */
                    bool m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_stat;
                    bool m_statHasBeenSet;

                    /**
                     * 指标类型
                     */
                    int64_t m_metricType;
                    bool m_metricTypeHasBeenSet;

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

                    /**
                     * 无
                     */
                    int64_t m_trendStat;
                    bool m_trendStatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUESSTATISTICSTRENDREQUEST_H_
