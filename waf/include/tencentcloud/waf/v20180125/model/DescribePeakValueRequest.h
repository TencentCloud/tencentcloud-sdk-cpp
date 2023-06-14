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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKVALUEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKVALUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribePeakValue请求参数结构体
                */
                class DescribePeakValueRequest : public AbstractModel
                {
                public:
                    DescribePeakValueRequest();
                    ~DescribePeakValueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询起始时间
                     * @return FromTime 查询起始时间
                     * 
                     */
                    std::string GetFromTime() const;

                    /**
                     * 设置查询起始时间
                     * @param _fromTime 查询起始时间
                     * 
                     */
                    void SetFromTime(const std::string& _fromTime);

                    /**
                     * 判断参数 FromTime 是否已赋值
                     * @return FromTime 是否已赋值
                     * 
                     */
                    bool FromTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return ToTime 查询结束时间
                     * 
                     */
                    std::string GetToTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _toTime 查询结束时间
                     * 
                     */
                    void SetToTime(const std::string& _toTime);

                    /**
                     * 判断参数 ToTime 是否已赋值
                     * @return ToTime 是否已赋值
                     * 
                     */
                    bool ToTimeHasBeenSet() const;

                    /**
                     * 获取需要查询的域名，当前用户所有域名可以不传
                     * @return Domain 需要查询的域名，当前用户所有域名可以不传
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要查询的域名，当前用户所有域名可以不传
                     * @param _domain 需要查询的域名，当前用户所有域名可以不传
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
                     * 获取只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * @return Edition 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * @param _edition 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取WAF实例ID，不传则不过滤
                     * @return InstanceID WAF实例ID，不传则不过滤
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置WAF实例ID，不传则不过滤
                     * @param _instanceID WAF实例ID，不传则不过滤
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
                     * 获取五个值可选：
access-峰值qps
down-下行峰值带宽
up-上行峰值带宽
attack-Web攻击总数
cc-CC攻击总数趋势图
                     * @return MetricName 五个值可选：
access-峰值qps
down-下行峰值带宽
up-上行峰值带宽
attack-Web攻击总数
cc-CC攻击总数趋势图
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置五个值可选：
access-峰值qps
down-下行峰值带宽
up-上行峰值带宽
attack-Web攻击总数
cc-CC攻击总数趋势图
                     * @param _metricName 五个值可选：
access-峰值qps
down-下行峰值带宽
up-上行峰值带宽
attack-Web攻击总数
cc-CC攻击总数趋势图
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * 查询起始时间
                     */
                    std::string m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * 需要查询的域名，当前用户所有域名可以不传
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * WAF实例ID，不传则不过滤
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 五个值可选：
access-峰值qps
down-下行峰值带宽
up-上行峰值带宽
attack-Web攻击总数
cc-CC攻击总数趋势图
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKVALUEREQUEST_H_
