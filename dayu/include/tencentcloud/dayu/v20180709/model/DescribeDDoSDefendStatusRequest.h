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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSDEFENDSTATUSREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSDEFENDSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDDoSDefendStatus请求参数结构体
                */
                class DescribeDDoSDefendStatusRequest : public AbstractModel
                {
                public:
                    DescribeDDoSDefendStatusRequest();
                    ~DescribeDDoSDefendStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（basic表示基础防护；bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（basic表示基础防护；bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（basic表示基础防护；bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（basic表示基础防护；bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源实例ID，只有当Business不是基础防护时才需要填写此字段；
                     * @return Id 资源实例ID，只有当Business不是基础防护时才需要填写此字段；
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源实例ID，只有当Business不是基础防护时才需要填写此字段；
                     * @param _id 资源实例ID，只有当Business不是基础防护时才需要填写此字段；
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取基础防护的IP，只有当Business为基础防护时才需要填写此字段；
                     * @return Ip 基础防护的IP，只有当Business为基础防护时才需要填写此字段；
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置基础防护的IP，只有当Business为基础防护时才需要填写此字段；
                     * @param _ip 基础防护的IP，只有当Business为基础防护时才需要填写此字段；
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取只有当Business为基础防护时才需要填写此字段，IP所属的产品类型，取值[public（CVM产品），bm（黑石产品），eni（弹性网卡），vpngw（VPN网关）， natgw（NAT网关），waf（Web应用安全产品），fpc（金融产品），gaap（GAAP产品）, other(托管IP)]
                     * @return BizType 只有当Business为基础防护时才需要填写此字段，IP所属的产品类型，取值[public（CVM产品），bm（黑石产品），eni（弹性网卡），vpngw（VPN网关）， natgw（NAT网关），waf（Web应用安全产品），fpc（金融产品），gaap（GAAP产品）, other(托管IP)]
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置只有当Business为基础防护时才需要填写此字段，IP所属的产品类型，取值[public（CVM产品），bm（黑石产品），eni（弹性网卡），vpngw（VPN网关）， natgw（NAT网关），waf（Web应用安全产品），fpc（金融产品），gaap（GAAP产品）, other(托管IP)]
                     * @param _bizType 只有当Business为基础防护时才需要填写此字段，IP所属的产品类型，取值[public（CVM产品），bm（黑石产品），eni（弹性网卡），vpngw（VPN网关）， natgw（NAT网关），waf（Web应用安全产品），fpc（金融产品），gaap（GAAP产品）, other(托管IP)]
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取只有当Business为基础防护时才需要填写此字段，IP所属的产品子类，取值[cvm（CVM），lb（负载均衡器），eni（弹性网卡），vpngw（VPN），natgw（NAT），waf（WAF），fpc（金融），gaap（GAAP），other（托管IP），eip（黑石弹性IP）]
                     * @return DeviceType 只有当Business为基础防护时才需要填写此字段，IP所属的产品子类，取值[cvm（CVM），lb（负载均衡器），eni（弹性网卡），vpngw（VPN），natgw（NAT），waf（WAF），fpc（金融），gaap（GAAP），other（托管IP），eip（黑石弹性IP）]
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置只有当Business为基础防护时才需要填写此字段，IP所属的产品子类，取值[cvm（CVM），lb（负载均衡器），eni（弹性网卡），vpngw（VPN），natgw（NAT），waf（WAF），fpc（金融），gaap（GAAP），other（托管IP），eip（黑石弹性IP）]
                     * @param _deviceType 只有当Business为基础防护时才需要填写此字段，IP所属的产品子类，取值[cvm（CVM），lb（负载均衡器），eni（弹性网卡），vpngw（VPN），natgw（NAT），waf（WAF），fpc（金融），gaap（GAAP），other（托管IP），eip（黑石弹性IP）]
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取只有当Business为基础防护时才需要填写此字段，IP所属的资源实例ID，当绑定新IP时必须填写此字段；例如是弹性网卡的IP，则InstanceId填写弹性网卡的ID(eni-*);
                     * @return InstanceId 只有当Business为基础防护时才需要填写此字段，IP所属的资源实例ID，当绑定新IP时必须填写此字段；例如是弹性网卡的IP，则InstanceId填写弹性网卡的ID(eni-*);
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置只有当Business为基础防护时才需要填写此字段，IP所属的资源实例ID，当绑定新IP时必须填写此字段；例如是弹性网卡的IP，则InstanceId填写弹性网卡的ID(eni-*);
                     * @param _instanceId 只有当Business为基础防护时才需要填写此字段，IP所属的资源实例ID，当绑定新IP时必须填写此字段；例如是弹性网卡的IP，则InstanceId填写弹性网卡的ID(eni-*);
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取只有当Business为基础防护时才需要填写此字段，表示IP所属的地域，取值：
"bj":     华北地区(北京)
"cd":     西南地区(成都)
"cq":     西南地区(重庆)
"gz":     华南地区(广州)
"gzopen": 华南地区(广州Open)
"hk":     中国香港
"kr":     东南亚地区(首尔)
"sh":     华东地区(上海)
"shjr":   华东地区(上海金融)
"szjr":   华南地区(深圳金融)
"sg":     东南亚地区(新加坡)
"th":     东南亚地区(泰国)
"de":     欧洲地区(德国)
"usw":    美国西部（硅谷）
"ca":     北美地区(多伦多)
"jp":     日本
"hzec":   杭州
"in":     印度
"use":    美东地区（弗吉尼亚）
"ru":     俄罗斯
"tpe":    中国台湾
"nj":     南京
                     * @return IPRegion 只有当Business为基础防护时才需要填写此字段，表示IP所属的地域，取值：
"bj":     华北地区(北京)
"cd":     西南地区(成都)
"cq":     西南地区(重庆)
"gz":     华南地区(广州)
"gzopen": 华南地区(广州Open)
"hk":     中国香港
"kr":     东南亚地区(首尔)
"sh":     华东地区(上海)
"shjr":   华东地区(上海金融)
"szjr":   华南地区(深圳金融)
"sg":     东南亚地区(新加坡)
"th":     东南亚地区(泰国)
"de":     欧洲地区(德国)
"usw":    美国西部（硅谷）
"ca":     北美地区(多伦多)
"jp":     日本
"hzec":   杭州
"in":     印度
"use":    美东地区（弗吉尼亚）
"ru":     俄罗斯
"tpe":    中国台湾
"nj":     南京
                     * 
                     */
                    std::string GetIPRegion() const;

                    /**
                     * 设置只有当Business为基础防护时才需要填写此字段，表示IP所属的地域，取值：
"bj":     华北地区(北京)
"cd":     西南地区(成都)
"cq":     西南地区(重庆)
"gz":     华南地区(广州)
"gzopen": 华南地区(广州Open)
"hk":     中国香港
"kr":     东南亚地区(首尔)
"sh":     华东地区(上海)
"shjr":   华东地区(上海金融)
"szjr":   华南地区(深圳金融)
"sg":     东南亚地区(新加坡)
"th":     东南亚地区(泰国)
"de":     欧洲地区(德国)
"usw":    美国西部（硅谷）
"ca":     北美地区(多伦多)
"jp":     日本
"hzec":   杭州
"in":     印度
"use":    美东地区（弗吉尼亚）
"ru":     俄罗斯
"tpe":    中国台湾
"nj":     南京
                     * @param _iPRegion 只有当Business为基础防护时才需要填写此字段，表示IP所属的地域，取值：
"bj":     华北地区(北京)
"cd":     西南地区(成都)
"cq":     西南地区(重庆)
"gz":     华南地区(广州)
"gzopen": 华南地区(广州Open)
"hk":     中国香港
"kr":     东南亚地区(首尔)
"sh":     华东地区(上海)
"shjr":   华东地区(上海金融)
"szjr":   华南地区(深圳金融)
"sg":     东南亚地区(新加坡)
"th":     东南亚地区(泰国)
"de":     欧洲地区(德国)
"usw":    美国西部（硅谷）
"ca":     北美地区(多伦多)
"jp":     日本
"hzec":   杭州
"in":     印度
"use":    美东地区（弗吉尼亚）
"ru":     俄罗斯
"tpe":    中国台湾
"nj":     南京
                     * 
                     */
                    void SetIPRegion(const std::string& _iPRegion);

                    /**
                     * 判断参数 IPRegion 是否已赋值
                     * @return IPRegion 是否已赋值
                     * 
                     */
                    bool IPRegionHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（basic表示基础防护；bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源实例ID，只有当Business不是基础防护时才需要填写此字段；
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 基础防护的IP，只有当Business为基础防护时才需要填写此字段；
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 只有当Business为基础防护时才需要填写此字段，IP所属的产品类型，取值[public（CVM产品），bm（黑石产品），eni（弹性网卡），vpngw（VPN网关）， natgw（NAT网关），waf（Web应用安全产品），fpc（金融产品），gaap（GAAP产品）, other(托管IP)]
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 只有当Business为基础防护时才需要填写此字段，IP所属的产品子类，取值[cvm（CVM），lb（负载均衡器），eni（弹性网卡），vpngw（VPN），natgw（NAT），waf（WAF），fpc（金融），gaap（GAAP），other（托管IP），eip（黑石弹性IP）]
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 只有当Business为基础防护时才需要填写此字段，IP所属的资源实例ID，当绑定新IP时必须填写此字段；例如是弹性网卡的IP，则InstanceId填写弹性网卡的ID(eni-*);
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 只有当Business为基础防护时才需要填写此字段，表示IP所属的地域，取值：
"bj":     华北地区(北京)
"cd":     西南地区(成都)
"cq":     西南地区(重庆)
"gz":     华南地区(广州)
"gzopen": 华南地区(广州Open)
"hk":     中国香港
"kr":     东南亚地区(首尔)
"sh":     华东地区(上海)
"shjr":   华东地区(上海金融)
"szjr":   华南地区(深圳金融)
"sg":     东南亚地区(新加坡)
"th":     东南亚地区(泰国)
"de":     欧洲地区(德国)
"usw":    美国西部（硅谷）
"ca":     北美地区(多伦多)
"jp":     日本
"hzec":   杭州
"in":     印度
"use":    美东地区（弗吉尼亚）
"ru":     俄罗斯
"tpe":    中国台湾
"nj":     南京
                     */
                    std::string m_iPRegion;
                    bool m_iPRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSDEFENDSTATUSREQUEST_H_
