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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTDETAILREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTDETAILREQUEST_H_

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
                * DescribeCostDetail请求参数结构体
                */
                class DescribeCostDetailRequest : public AbstractModel
                {
                public:
                    DescribeCostDetailRequest();
                    ~DescribeCostDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数量，最大值为100
                     * @return Limit 数量，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置数量，最大值为100
                     * @param _limit 数量，最大值为100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取周期开始时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通成本分析后，且距今 24 个月内的数据。
                     * @return BeginTime 周期开始时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通成本分析后，且距今 24 个月内的数据。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置周期开始时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通成本分析后，且距今 24 个月内的数据。
                     * @param _beginTime 周期开始时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通成本分析后，且距今 24 个月内的数据。
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
                     * 获取周期结束时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通成本分析后，且距今 24 个月内的数据。
                     * @return EndTime 周期结束时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通成本分析后，且距今 24 个月内的数据。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置周期结束时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通成本分析后，且距今 24 个月内的数据。
                     * @param _endTime 周期结束时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通成本分析后，且距今 24 个月内的数据。
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
                     * 获取是否需要访问列表的总记录数，用于前端分页
1-表示需要， 0-表示不需要
                     * @return NeedRecordNum 是否需要访问列表的总记录数，用于前端分页
1-表示需要， 0-表示不需要
                     * 
                     */
                    uint64_t GetNeedRecordNum() const;

                    /**
                     * 设置是否需要访问列表的总记录数，用于前端分页
1-表示需要， 0-表示不需要
                     * @param _needRecordNum 是否需要访问列表的总记录数，用于前端分页
1-表示需要， 0-表示不需要
                     * 
                     */
                    void SetNeedRecordNum(const uint64_t& _needRecordNum);

                    /**
                     * 判断参数 NeedRecordNum 是否已赋值
                     * @return NeedRecordNum 是否已赋值
                     * 
                     */
                    bool NeedRecordNumHasBeenSet() const;

                    /**
                     * 获取月份，格式为yyyy-mm，Month和BeginTime&EndTime必传一个，如果有传BeginTime&EndTime则Month字段无效。不能早于开通成本分析的月份，最多可拉取24个月内的数据。
                     * @return Month 月份，格式为yyyy-mm，Month和BeginTime&EndTime必传一个，如果有传BeginTime&EndTime则Month字段无效。不能早于开通成本分析的月份，最多可拉取24个月内的数据。
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置月份，格式为yyyy-mm，Month和BeginTime&EndTime必传一个，如果有传BeginTime&EndTime则Month字段无效。不能早于开通成本分析的月份，最多可拉取24个月内的数据。
                     * @param _month 月份，格式为yyyy-mm，Month和BeginTime&EndTime必传一个，如果有传BeginTime&EndTime则Month字段无效。不能早于开通成本分析的月份，最多可拉取24个月内的数据。
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
                     * 获取查询指定产品信息（暂时未开放获取）
                     * @return ProductCode 查询指定产品信息（暂时未开放获取）
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置查询指定产品信息（暂时未开放获取）
                     * @param _productCode 查询指定产品信息（暂时未开放获取）
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取付费模式 prePay/postPay
                     * @return PayMode 付费模式 prePay/postPay
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式 prePay/postPay
                     * @param _payMode 付费模式 prePay/postPay
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
                     * 获取查询指定资源信息
                     * @return ResourceId 查询指定资源信息
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置查询指定资源信息
                     * @param _resourceId 查询指定资源信息
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 数量，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 周期开始时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通成本分析后，且距今 24 个月内的数据。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 周期结束时间，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通成本分析后，且距今 24 个月内的数据。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 是否需要访问列表的总记录数，用于前端分页
1-表示需要， 0-表示不需要
                     */
                    uint64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                    /**
                     * 月份，格式为yyyy-mm，Month和BeginTime&EndTime必传一个，如果有传BeginTime&EndTime则Month字段无效。不能早于开通成本分析的月份，最多可拉取24个月内的数据。
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 查询指定产品信息（暂时未开放获取）
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 付费模式 prePay/postPay
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 查询指定资源信息
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTDETAILREQUEST_H_
