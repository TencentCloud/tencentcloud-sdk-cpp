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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDETAILFORORGANIZATIONREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDETAILFORORGANIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillDetailForOrganization请求参数结构体
                */
                class DescribeBillDetailForOrganizationRequest : public AbstractModel
                {
                public:
                    DescribeBillDetailForOrganizationRequest();
                    ~DescribeBillDetailForOrganizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推</p>
                     * @return Offset <p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推</p>
                     * @param _offset <p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>数量，最大值为100</p>
                     * @return Limit <p>数量，最大值为100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>数量，最大值为100</p>
                     * @param _limit <p>数量，最大值为100</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往<a href="https://console.cloud.tencent.com/expense/bill/overview">账单概览</a>页面顶部查看确认您的账单统计周期类型。</p>
                     * @return PeriodType <p>周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往<a href="https://console.cloud.tencent.com/expense/bill/overview">账单概览</a>页面顶部查看确认您的账单统计周期类型。</p>
                     * @deprecated
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置<p>周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往<a href="https://console.cloud.tencent.com/expense/bill/overview">账单概览</a>页面顶部查看确认您的账单统计周期类型。</p>
                     * @param _periodType <p>周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往<a href="https://console.cloud.tencent.com/expense/bill/overview">账单概览</a>页面顶部查看确认您的账单统计周期类型。</p>
                     * @deprecated
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * @deprecated
                     */
                    bool PeriodTypeHasBeenSet() const;

                    /**
                     * 获取<p>月份，格式为yyyy-mm，Month和BeginTime&amp;EndTime必传一个，如果有传BeginTime&amp;EndTime则Month字段无效。最多可拉取近18个月内的数据。</p>
                     * @return Month <p>月份，格式为yyyy-mm，Month和BeginTime&amp;EndTime必传一个，如果有传BeginTime&amp;EndTime则Month字段无效。最多可拉取近18个月内的数据。</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>月份，格式为yyyy-mm，Month和BeginTime&amp;EndTime必传一个，如果有传BeginTime&amp;EndTime则Month字段无效。最多可拉取近18个月内的数据。</p>
                     * @param _month <p>月份，格式为yyyy-mm，Month和BeginTime&amp;EndTime必传一个，如果有传BeginTime&amp;EndTime则Month字段无效。最多可拉取近18个月内的数据。</p>
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取<p>周期开始时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据。最多可拉取18个月内的数据。</p>
                     * @return BeginTime <p>周期开始时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据。最多可拉取18个月内的数据。</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>周期开始时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据。最多可拉取18个月内的数据。</p>
                     * @param _beginTime <p>周期开始时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据。最多可拉取18个月内的数据。</p>
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>周期结束时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据。最多可拉取近18个月内的数据。</p>
                     * @return EndTime <p>周期结束时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据。最多可拉取近18个月内的数据。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>周期结束时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据。最多可拉取近18个月内的数据。</p>
                     * @param _endTime <p>周期结束时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据。最多可拉取近18个月内的数据。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否需要访问列表的总记录数，用于前端分页<br>1-表示需要， 0-表示不需要</p>
                     * @return NeedRecordNum <p>是否需要访问列表的总记录数，用于前端分页<br>1-表示需要， 0-表示不需要</p>
                     * 
                     */
                    int64_t GetNeedRecordNum() const;

                    /**
                     * 设置<p>是否需要访问列表的总记录数，用于前端分页<br>1-表示需要， 0-表示不需要</p>
                     * @param _needRecordNum <p>是否需要访问列表的总记录数，用于前端分页<br>1-表示需要， 0-表示不需要</p>
                     * 
                     */
                    void SetNeedRecordNum(const int64_t& _needRecordNum);

                    /**
                     * 判断参数 NeedRecordNum 是否已赋值
                     * @return NeedRecordNum 是否已赋值
                     * 
                     */
                    bool NeedRecordNumHasBeenSet() const;

                    /**
                     * 获取<p>付费模式 prePay(表示包年包月)/postPay(表示按时按量)</p>
                     * @return PayMode <p>付费模式 prePay(表示包年包月)/postPay(表示按时按量)</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费模式 prePay(表示包年包月)/postPay(表示按时按量)</p>
                     * @param _payMode <p>付费模式 prePay(表示包年包月)/postPay(表示按时按量)</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>查询指定资源信息</p>
                     * @return ResourceId <p>查询指定资源信息</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>查询指定资源信息</p>
                     * @param _resourceId <p>查询指定资源信息</p>
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
                     * 获取<p>查询交易类型（请使用交易类型名称入参），入参示例枚举如下：<br>包年包月新购<br>包年包月续费<br>包年包月配置变更<br>包年包月退款<br>按量计费扣费<br>线下项目扣费<br>线下产品扣费<br>调账扣费<br>调账补偿<br>按量计费小时结<br>按量计费日结<br>按量计费月结<br>竞价实例小时结<br>线下项目调账补偿<br>线下产品调账补偿<br>优惠扣费<br>优惠补偿<br>按量计费迁入资源<br>按量计费迁出资源<br>包年包月迁入资源<br>包年包月迁出资源<br>预付费用<br>小时费用<br>预留实例退款<br>按量计费冲正<br>包年包月转按量<br>保底扣款<br>节省计划小时费用</p>
                     * @return ActionType <p>查询交易类型（请使用交易类型名称入参），入参示例枚举如下：<br>包年包月新购<br>包年包月续费<br>包年包月配置变更<br>包年包月退款<br>按量计费扣费<br>线下项目扣费<br>线下产品扣费<br>调账扣费<br>调账补偿<br>按量计费小时结<br>按量计费日结<br>按量计费月结<br>竞价实例小时结<br>线下项目调账补偿<br>线下产品调账补偿<br>优惠扣费<br>优惠补偿<br>按量计费迁入资源<br>按量计费迁出资源<br>包年包月迁入资源<br>包年包月迁出资源<br>预付费用<br>小时费用<br>预留实例退款<br>按量计费冲正<br>包年包月转按量<br>保底扣款<br>节省计划小时费用</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>查询交易类型（请使用交易类型名称入参），入参示例枚举如下：<br>包年包月新购<br>包年包月续费<br>包年包月配置变更<br>包年包月退款<br>按量计费扣费<br>线下项目扣费<br>线下产品扣费<br>调账扣费<br>调账补偿<br>按量计费小时结<br>按量计费日结<br>按量计费月结<br>竞价实例小时结<br>线下项目调账补偿<br>线下产品调账补偿<br>优惠扣费<br>优惠补偿<br>按量计费迁入资源<br>按量计费迁出资源<br>包年包月迁入资源<br>包年包月迁出资源<br>预付费用<br>小时费用<br>预留实例退款<br>按量计费冲正<br>包年包月转按量<br>保底扣款<br>节省计划小时费用</p>
                     * @param _actionType <p>查询交易类型（请使用交易类型名称入参），入参示例枚举如下：<br>包年包月新购<br>包年包月续费<br>包年包月配置变更<br>包年包月退款<br>按量计费扣费<br>线下项目扣费<br>线下产品扣费<br>调账扣费<br>调账补偿<br>按量计费小时结<br>按量计费日结<br>按量计费月结<br>竞价实例小时结<br>线下项目调账补偿<br>线下产品调账补偿<br>优惠扣费<br>优惠补偿<br>按量计费迁入资源<br>按量计费迁出资源<br>包年包月迁入资源<br>包年包月迁出资源<br>预付费用<br>小时费用<br>预留实例退款<br>按量计费冲正<br>包年包月转按量<br>保底扣款<br>节省计划小时费用</p>
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>项目ID:资源所属项目ID</p>
                     * @return ProjectId <p>项目ID:资源所属项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID:资源所属项目ID</p>
                     * @param _projectId <p>项目ID:资源所属项目ID</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>产品名称代码<br>备注：如需获取当月使用过的BusinessCode，请调用API：<a href="https://cloud.tencent.com/document/product/555/35761">获取产品汇总费用分布</a></p>
                     * @return BusinessCode <p>产品名称代码<br>备注：如需获取当月使用过的BusinessCode，请调用API：<a href="https://cloud.tencent.com/document/product/555/35761">获取产品汇总费用分布</a></p>
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置<p>产品名称代码<br>备注：如需获取当月使用过的BusinessCode，请调用API：<a href="https://cloud.tencent.com/document/product/555/35761">获取产品汇总费用分布</a></p>
                     * @param _businessCode <p>产品名称代码<br>备注：如需获取当月使用过的BusinessCode，请调用API：<a href="https://cloud.tencent.com/document/product/555/35761">获取产品汇总费用分布</a></p>
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取<p>上一次请求返回的上下文信息，翻页查询Month&gt;=2023-05的月份的数据可加快查询速度，数据量10万级别以上的用户建议使用，查询速度可提升2~10倍</p>
                     * @return Context <p>上一次请求返回的上下文信息，翻页查询Month&gt;=2023-05的月份的数据可加快查询速度，数据量10万级别以上的用户建议使用，查询速度可提升2~10倍</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>上一次请求返回的上下文信息，翻页查询Month&gt;=2023-05的月份的数据可加快查询速度，数据量10万级别以上的用户建议使用，查询速度可提升2~10倍</p>
                     * @param _context <p>上一次请求返回的上下文信息，翻页查询Month&gt;=2023-05的月份的数据可加快查询速度，数据量10万级别以上的用户建议使用，查询速度可提升2~10倍</p>
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * <p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>数量，最大值为100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往<a href="https://console.cloud.tencent.com/expense/bill/overview">账单概览</a>页面顶部查看确认您的账单统计周期类型。</p>
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * <p>月份，格式为yyyy-mm，Month和BeginTime&amp;EndTime必传一个，如果有传BeginTime&amp;EndTime则Month字段无效。最多可拉取近18个月内的数据。</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>周期开始时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据。最多可拉取18个月内的数据。</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>周期结束时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为相同月份，不支持跨月查询，查询结果是整月数据。最多可拉取近18个月内的数据。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>是否需要访问列表的总记录数，用于前端分页<br>1-表示需要， 0-表示不需要</p>
                     */
                    int64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                    /**
                     * <p>付费模式 prePay(表示包年包月)/postPay(表示按时按量)</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>查询指定资源信息</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>查询交易类型（请使用交易类型名称入参），入参示例枚举如下：<br>包年包月新购<br>包年包月续费<br>包年包月配置变更<br>包年包月退款<br>按量计费扣费<br>线下项目扣费<br>线下产品扣费<br>调账扣费<br>调账补偿<br>按量计费小时结<br>按量计费日结<br>按量计费月结<br>竞价实例小时结<br>线下项目调账补偿<br>线下产品调账补偿<br>优惠扣费<br>优惠补偿<br>按量计费迁入资源<br>按量计费迁出资源<br>包年包月迁入资源<br>包年包月迁出资源<br>预付费用<br>小时费用<br>预留实例退款<br>按量计费冲正<br>包年包月转按量<br>保底扣款<br>节省计划小时费用</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>项目ID:资源所属项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>产品名称代码<br>备注：如需获取当月使用过的BusinessCode，请调用API：<a href="https://cloud.tencent.com/document/product/555/35761">获取产品汇总费用分布</a></p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>上一次请求返回的上下文信息，翻页查询Month&gt;=2023-05的月份的数据可加快查询速度，数据量10万级别以上的用户建议使用，查询速度可提升2~10倍</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDETAILFORORGANIZATIONREQUEST_H_
