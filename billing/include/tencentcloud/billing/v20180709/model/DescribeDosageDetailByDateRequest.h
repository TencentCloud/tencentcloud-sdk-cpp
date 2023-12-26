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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAILBYDATEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAILBYDATEREQUEST_H_

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
                * DescribeDosageDetailByDate请求参数结构体
                */
                class DescribeDosageDetailByDateRequest : public AbstractModel
                {
                public:
                    DescribeDosageDetailByDateRequest();
                    ~DescribeDosageDetailByDateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询账单开始日期，如 2019-01-01
                     * @return StartDate 查询账单开始日期，如 2019-01-01
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置查询账单开始日期，如 2019-01-01
                     * @param _startDate 查询账单开始日期，如 2019-01-01
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取查询账单结束日期，如 2019-01-01， 时间跨度不超过7天
                     * @return EndDate 查询账单结束日期，如 2019-01-01， 时间跨度不超过7天
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置查询账单结束日期，如 2019-01-01， 时间跨度不超过7天
                     * @param _endDate 查询账单结束日期，如 2019-01-01， 时间跨度不超过7天
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取互动直播：
10194   互动直播-核心机房           :
10195   互动直播-边缘机房

cdn业务：
102383：CDN静态加速流量(国内)
102384：CDN静态加速带宽(国内)
102385：CDN静态加速流量(海外)
102386：CDN静态加速带宽(海外)

100967：弹性公网IP-按流量计费
101065：公网负载均衡-按流量计费

视频直播
10226 视频直播流量(国内)
10227 视频直播带宽(国内)
100763 视频直播流量(海外)
100762 视频直播宽带(海外)

仅支持以上产品
                     * @return ProductCode 互动直播：
10194   互动直播-核心机房           :
10195   互动直播-边缘机房

cdn业务：
102383：CDN静态加速流量(国内)
102384：CDN静态加速带宽(国内)
102385：CDN静态加速流量(海外)
102386：CDN静态加速带宽(海外)

100967：弹性公网IP-按流量计费
101065：公网负载均衡-按流量计费

视频直播
10226 视频直播流量(国内)
10227 视频直播带宽(国内)
100763 视频直播流量(海外)
100762 视频直播宽带(海外)

仅支持以上产品
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置互动直播：
10194   互动直播-核心机房           :
10195   互动直播-边缘机房

cdn业务：
102383：CDN静态加速流量(国内)
102384：CDN静态加速带宽(国内)
102385：CDN静态加速流量(海外)
102386：CDN静态加速带宽(海外)

100967：弹性公网IP-按流量计费
101065：公网负载均衡-按流量计费

视频直播
10226 视频直播流量(国内)
10227 视频直播带宽(国内)
100763 视频直播流量(海外)
100762 视频直播宽带(海外)

仅支持以上产品
                     * @param _productCode 互动直播：
10194   互动直播-核心机房           :
10195   互动直播-边缘机房

cdn业务：
102383：CDN静态加速流量(国内)
102384：CDN静态加速带宽(国内)
102385：CDN静态加速流量(海外)
102386：CDN静态加速带宽(海外)

100967：弹性公网IP-按流量计费
101065：公网负载均衡-按流量计费

视频直播
10226 视频直播流量(国内)
10227 视频直播带宽(国内)
100763 视频直播流量(海外)
100762 视频直播宽带(海外)

仅支持以上产品
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
                     * 获取查询域名 例如 www.qq.com
非CDN业务查询时传入空字符串，返回的值为空
                     * @return Domain 查询域名 例如 www.qq.com
非CDN业务查询时传入空字符串，返回的值为空
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置查询域名 例如 www.qq.com
非CDN业务查询时传入空字符串，返回的值为空
                     * @param _domain 查询域名 例如 www.qq.com
非CDN业务查询时传入空字符串，返回的值为空
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取1、如果为空，则返回EIP或CLB所有实例的明细；
2、如果传入实例名，则返回该实例明细
                     * @return InstanceID 1、如果为空，则返回EIP或CLB所有实例的明细；
2、如果传入实例名，则返回该实例明细
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置1、如果为空，则返回EIP或CLB所有实例的明细；
2、如果传入实例名，则返回该实例明细
                     * @param _instanceID 1、如果为空，则返回EIP或CLB所有实例的明细；
2、如果传入实例名，则返回该实例明细
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN
                     * @return PayerUin 支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN
                     * @param _payerUin 支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                private:

                    /**
                     * 查询账单开始日期，如 2019-01-01
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 查询账单结束日期，如 2019-01-01， 时间跨度不超过7天
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 互动直播：
10194   互动直播-核心机房           :
10195   互动直播-边缘机房

cdn业务：
102383：CDN静态加速流量(国内)
102384：CDN静态加速带宽(国内)
102385：CDN静态加速流量(海外)
102386：CDN静态加速带宽(海外)

100967：弹性公网IP-按流量计费
101065：公网负载均衡-按流量计费

视频直播
10226 视频直播流量(国内)
10227 视频直播带宽(国内)
100763 视频直播流量(海外)
100762 视频直播宽带(海外)

仅支持以上产品
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 查询域名 例如 www.qq.com
非CDN业务查询时传入空字符串，返回的值为空
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 1、如果为空，则返回EIP或CLB所有实例的明细；
2、如果传入实例名，则返回该实例明细
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 支付者的账号 ID（账号 ID 是用户在腾讯云的唯一账号标识），默认查询本账号账单，如集团管理账号需查询成员账号自付的账单，该字段需入参成员账号UIN
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAILBYDATEREQUEST_H_
