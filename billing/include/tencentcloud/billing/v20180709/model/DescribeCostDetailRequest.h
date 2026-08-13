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
                     * 获取<p>数量，最大值为100</p>
                     * @return Limit <p>数量，最大值为100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>数量，最大值为100</p>
                     * @param _limit <p>数量，最大值为100</p>
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
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
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
                     * 获取<p>周期开始时间，查询粒度为天级别，需传入时分秒参数，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通消耗账单后，且距今 18 个月内的数据。</p>
                     * @return BeginTime <p>周期开始时间，查询粒度为天级别，需传入时分秒参数，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通消耗账单后，且距今 18 个月内的数据。</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>周期开始时间，查询粒度为天级别，需传入时分秒参数，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通消耗账单后，且距今 18 个月内的数据。</p>
                     * @param _beginTime <p>周期开始时间，查询粒度为天级别，需传入时分秒参数，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通消耗账单后，且距今 18 个月内的数据。</p>
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
                     * 获取<p>周期结束时间，查询粒度为天级别，需传入时分秒参数，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通消耗账单后，且距今 18 个月内的数据。</p>
                     * @return EndTime <p>周期结束时间，查询粒度为天级别，需传入时分秒参数，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通消耗账单后，且距今 18 个月内的数据。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>周期结束时间，查询粒度为天级别，需传入时分秒参数，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通消耗账单后，且距今 18 个月内的数据。</p>
                     * @param _endTime <p>周期结束时间，查询粒度为天级别，需传入时分秒参数，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通消耗账单后，且距今 18 个月内的数据。</p>
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
                    uint64_t GetNeedRecordNum() const;

                    /**
                     * 设置<p>是否需要访问列表的总记录数，用于前端分页<br>1-表示需要， 0-表示不需要</p>
                     * @param _needRecordNum <p>是否需要访问列表的总记录数，用于前端分页<br>1-表示需要， 0-表示不需要</p>
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
                     * 获取<p>月份，格式为yyyy-mm，Month和BeginTime&amp;EndTime必传一个，如果有传BeginTime&amp;EndTime则Month字段无效。不能早于开通消耗账单的月份，最多可拉取18个月内的数据。</p>
                     * @return Month <p>月份，格式为yyyy-mm，Month和BeginTime&amp;EndTime必传一个，如果有传BeginTime&amp;EndTime则Month字段无效。不能早于开通消耗账单的月份，最多可拉取18个月内的数据。</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>月份，格式为yyyy-mm，Month和BeginTime&amp;EndTime必传一个，如果有传BeginTime&amp;EndTime则Month字段无效。不能早于开通消耗账单的月份，最多可拉取18个月内的数据。</p>
                     * @param _month <p>月份，格式为yyyy-mm，Month和BeginTime&amp;EndTime必传一个，如果有传BeginTime&amp;EndTime则Month字段无效。不能早于开通消耗账单的月份，最多可拉取18个月内的数据。</p>
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
                     * 获取<p>查询指定产品信息</p>
                     * @return ProductCode <p>查询指定产品信息</p>
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置<p>查询指定产品信息</p>
                     * @param _productCode <p>查询指定产品信息</p>
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
                     * 获取<p>产品名称代码</p>
                     * @return BusinessCode <p>产品名称代码</p>
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置<p>产品名称代码</p>
                     * @param _businessCode <p>产品名称代码</p>
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
                     * 获取<p>项目ID:资源所属项目ID</p>
                     * @return ProjectId <p>项目ID:资源所属项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID:资源所属项目ID</p>
                     * @param _projectId <p>项目ID:资源所属项目ID</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>地域ID</p>
                     * @return RegionId <p>地域ID</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>地域ID</p>
                     * @param _regionId <p>地域ID</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * <p>数量，最大值为100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>周期开始时间，查询粒度为天级别，需传入时分秒参数，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通消耗账单后，且距今 18 个月内的数据。</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>周期结束时间，查询粒度为天级别，需传入时分秒参数，格式为yyyy-mm-dd hh:ii:ss，Month和BeginTime&amp;EndTime必传一个，如果有该字段则Month字段无效。BeginTime和EndTime必须一起传，且为同一月份，暂不支持跨月拉取。可拉取的数据是开通消耗账单后，且距今 18 个月内的数据。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>是否需要访问列表的总记录数，用于前端分页<br>1-表示需要， 0-表示不需要</p>
                     */
                    uint64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                    /**
                     * <p>月份，格式为yyyy-mm，Month和BeginTime&amp;EndTime必传一个，如果有传BeginTime&amp;EndTime则Month字段无效。不能早于开通消耗账单的月份，最多可拉取18个月内的数据。</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>查询指定产品信息</p>
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>付费模式 prePay/postPay</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>查询指定资源信息</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>产品名称代码</p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>项目ID:资源所属项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>地域ID</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTDETAILREQUEST_H_
