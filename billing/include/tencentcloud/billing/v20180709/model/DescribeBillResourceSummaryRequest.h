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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYREQUEST_H_

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
                * DescribeBillResourceSummary请求参数结构体
                */
                class DescribeBillResourceSummaryRequest : public AbstractModel
                {
                public:
                    DescribeBillResourceSummaryRequest();
                    ~DescribeBillResourceSummaryRequest() = default;
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
                     * 获取<p>数量，最大值为1000</p>
                     * @return Limit <p>数量，最大值为1000</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>数量，最大值为1000</p>
                     * @param _limit <p>数量，最大值为1000</p>
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
                     * 获取<p>月份，格式为yyyy-mm。不能早于开通账单2.0的月份</p>
                     * @return Month <p>月份，格式为yyyy-mm。不能早于开通账单2.0的月份</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>月份，格式为yyyy-mm。不能早于开通账单2.0的月份</p>
                     * @param _month <p>月份，格式为yyyy-mm。不能早于开通账单2.0的月份</p>
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
                     * 获取<p>付费模式 prePay/postPay</p>
                     * @return PayMode <p>付费模式 prePay/postPay</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费模式 prePay/postPay</p>
                     * @param _payMode <p>付费模式 prePay/postPay</p>
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
                     * 获取<p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * @return PayerUin <p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置<p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * @param _payerUin <p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取<p>分账标签键，用户自定义（支持2021-01以后账单查询）</p>
                     * @return TagKey <p>分账标签键，用户自定义（支持2021-01以后账单查询）</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>分账标签键，用户自定义（支持2021-01以后账单查询）</p>
                     * @param _tagKey <p>分账标签键，用户自定义（支持2021-01以后账单查询）</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>分账标签值，该参数为空表示该标签键下未设置标签值的记录<br>（支持2021-01以后账单查询）</p>
                     * @return TagValue <p>分账标签值，该参数为空表示该标签键下未设置标签值的记录<br>（支持2021-01以后账单查询）</p>
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置<p>分账标签值，该参数为空表示该标签键下未设置标签值的记录<br>（支持2021-01以后账单查询）</p>
                     * @param _tagValue <p>分账标签值，该参数为空表示该标签键下未设置标签值的记录<br>（支持2021-01以后账单查询）</p>
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                private:

                    /**
                     * <p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，依次类推</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>数量，最大值为1000</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>月份，格式为yyyy-mm。不能早于开通账单2.0的月份</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>周期类型，byUsedTime按计费周期/byPayTime按扣费周期。需要与费用中心该月份账单的周期保持一致。您可前往<a href="https://console.cloud.tencent.com/expense/bill/overview">账单概览</a>页面顶部查看确认您的账单统计周期类型。</p>
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * <p>是否需要访问列表的总记录数，用于前端分页<br>1-表示需要， 0-表示不需要</p>
                     */
                    int64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                    /**
                     * <p>查询交易类型（请使用交易类型名称入参），入参示例枚举如下：<br>包年包月新购<br>包年包月续费<br>包年包月配置变更<br>包年包月退款<br>按量计费扣费<br>线下项目扣费<br>线下产品扣费<br>调账扣费<br>调账补偿<br>按量计费小时结<br>按量计费日结<br>按量计费月结<br>竞价实例小时结<br>线下项目调账补偿<br>线下产品调账补偿<br>优惠扣费<br>优惠补偿<br>按量计费迁入资源<br>按量计费迁出资源<br>包年包月迁入资源<br>包年包月迁出资源<br>预付费用<br>小时费用<br>预留实例退款<br>按量计费冲正<br>包年包月转按量<br>保底扣款<br>节省计划小时费用</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>查询指定资源信息</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>付费模式 prePay/postPay</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>产品名称代码<br>备注：如需获取当月使用过的BusinessCode，请调用API：<a href="https://cloud.tencent.com/document/product/555/35761">获取产品汇总费用分布</a></p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN</p>
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * <p>分账标签键，用户自定义（支持2021-01以后账单查询）</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>分账标签值，该参数为空表示该标签键下未设置标签值的记录<br>（支持2021-01以后账单查询）</p>
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYREQUEST_H_
