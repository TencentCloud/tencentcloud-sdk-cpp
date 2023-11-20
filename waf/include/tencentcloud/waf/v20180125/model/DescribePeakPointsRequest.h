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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKPOINTSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKPOINTSREQUEST_H_

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
                * DescribePeakPoints请求参数结构体
                */
                class DescribePeakPointsRequest : public AbstractModel
                {
                public:
                    DescribePeakPointsRequest();
                    ~DescribePeakPointsRequest() = default;
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
                     * 获取查询终止时间
                     * @return ToTime 查询终止时间
                     * 
                     */
                    std::string GetToTime() const;

                    /**
                     * 设置查询终止时间
                     * @param _toTime 查询终止时间
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
                     * 获取查询的域名，如果查询所有域名数据，该参数不填写
                     * @return Domain 查询的域名，如果查询所有域名数据，该参数不填写
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置查询的域名，如果查询所有域名数据，该参数不填写
                     * @param _domain 查询的域名，如果查询所有域名数据，该参数不填写
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
                     * 获取十二个值可选：
access-峰值qps趋势图
botAccess- bot峰值qps趋势图
down-下行峰值带宽趋势图
up-上行峰值带宽趋势图
attack-Web攻击总数趋势图
cc-CC攻击总数趋势图
bw-黑IP攻击总数趋势图
tamper-防篡改攻击总数趋势图
leak-防泄露攻击总数趋势图
acl-访问控制攻击总数趋势图
http_status-状态码各次数趋势图
wx_access-微信小程序峰值qps趋势图
                     * @return MetricName 十二个值可选：
access-峰值qps趋势图
botAccess- bot峰值qps趋势图
down-下行峰值带宽趋势图
up-上行峰值带宽趋势图
attack-Web攻击总数趋势图
cc-CC攻击总数趋势图
bw-黑IP攻击总数趋势图
tamper-防篡改攻击总数趋势图
leak-防泄露攻击总数趋势图
acl-访问控制攻击总数趋势图
http_status-状态码各次数趋势图
wx_access-微信小程序峰值qps趋势图
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置十二个值可选：
access-峰值qps趋势图
botAccess- bot峰值qps趋势图
down-下行峰值带宽趋势图
up-上行峰值带宽趋势图
attack-Web攻击总数趋势图
cc-CC攻击总数趋势图
bw-黑IP攻击总数趋势图
tamper-防篡改攻击总数趋势图
leak-防泄露攻击总数趋势图
acl-访问控制攻击总数趋势图
http_status-状态码各次数趋势图
wx_access-微信小程序峰值qps趋势图
                     * @param _metricName 十二个值可选：
access-峰值qps趋势图
botAccess- bot峰值qps趋势图
down-下行峰值带宽趋势图
up-上行峰值带宽趋势图
attack-Web攻击总数趋势图
cc-CC攻击总数趋势图
bw-黑IP攻击总数趋势图
tamper-防篡改攻击总数趋势图
leak-防泄露攻击总数趋势图
acl-访问控制攻击总数趋势图
http_status-状态码各次数趋势图
wx_access-微信小程序峰值qps趋势图
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
                     * 查询终止时间
                     */
                    std::string m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * 查询的域名，如果查询所有域名数据，该参数不填写
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
                     * 十二个值可选：
access-峰值qps趋势图
botAccess- bot峰值qps趋势图
down-下行峰值带宽趋势图
up-上行峰值带宽趋势图
attack-Web攻击总数趋势图
cc-CC攻击总数趋势图
bw-黑IP攻击总数趋势图
tamper-防篡改攻击总数趋势图
leak-防泄露攻击总数趋势图
acl-访问控制攻击总数趋势图
http_status-状态码各次数趋势图
wx_access-微信小程序峰值qps趋势图
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKPOINTSREQUEST_H_
