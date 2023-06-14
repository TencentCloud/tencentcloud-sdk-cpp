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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeResourceList返回参数结构体
                */
                class DescribeResourceListResponse : public AbstractModel
                {
                public:
                    DescribeResourceListResponse();
                    ~DescribeResourceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总记录数
                     * @return Total 总记录数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取资源记录列表，返回Key值说明：
"Key": "CreateTime" 表示资源实例购买时间
"Key": "Region" 表示资源实例的地域
"Key": "BoundIP" 表示独享包实例绑定的IP
"Key": "Id" 表示资源实例的ID
"Key": "CCEnabled" 表示资源实例的CC防护开关状态
"Key": "DDoSThreshold" 表示资源实例的DDoS的清洗阈值	
"Key": "BoundStatus" 表示独享包或共享包实例的绑定IP操作状态(绑定中或绑定完成)
"Key": "Type" 此字段弃用
"Key": "ElasticLimit" 表示资源实例的弹性防护值
"Key": "DDoSAI" 表示资源实例的DDoS AI防护开关
"Key": "OverloadCount" 表示资源实例受到超过弹性防护值的次数
"Key": "Status" 表示资源实例的状态(idle:运行中, attacking:攻击中, blocking:封堵中, isolate:隔离中)
"Key": "Lbid" 此字段弃用
"Key": "ShowFlag" 此字段弃用
"Key": "Expire" 表示资源实例的过期时间
"Key": "CCThreshold" 表示资源实例的CC防护触发阈值
"Key": "AutoRenewFlag" 表示资源实例的自动续费是否开启
"Key": "IspCode" 表示独享包或共享包的线路(0-电信, 1-联通, 2-移动, 5-BGP)
"Key": "PackType" 表示套餐包类型
"Key": "PackId" 表示套餐包ID
"Key": "Name" 表示资源实例的名称
"Key": "Locked" 此字段弃用
"Key": "IpDDoSLevel" 表示资源实例的防护等级(low-宽松, middle-正常, high-严格)
"Key": "DefendStatus" 表示资源实例的DDoS防护状态(防护开启或临时关闭)
"Key": "UndefendExpire" 表示资源实例的DDoS防护临时关闭结束时间
"Key": "Tgw" 表示资源实例是否是新资源
"Key": "Bandwidth" 表示资源实例的保底防护值，只针对高防包和高防IP
"Key": "DdosMax" 表示资源实例的保底防护值，只针对高防IP专业版
"Key": "GFBandwidth" 表示资源实例的保底业务带宽，只针对高防IP
"Key": "ServiceBandwidth" 表示资源实例的保底业务带宽，只针对高防IP专业版
                     * @return ServicePacks 资源记录列表，返回Key值说明：
"Key": "CreateTime" 表示资源实例购买时间
"Key": "Region" 表示资源实例的地域
"Key": "BoundIP" 表示独享包实例绑定的IP
"Key": "Id" 表示资源实例的ID
"Key": "CCEnabled" 表示资源实例的CC防护开关状态
"Key": "DDoSThreshold" 表示资源实例的DDoS的清洗阈值	
"Key": "BoundStatus" 表示独享包或共享包实例的绑定IP操作状态(绑定中或绑定完成)
"Key": "Type" 此字段弃用
"Key": "ElasticLimit" 表示资源实例的弹性防护值
"Key": "DDoSAI" 表示资源实例的DDoS AI防护开关
"Key": "OverloadCount" 表示资源实例受到超过弹性防护值的次数
"Key": "Status" 表示资源实例的状态(idle:运行中, attacking:攻击中, blocking:封堵中, isolate:隔离中)
"Key": "Lbid" 此字段弃用
"Key": "ShowFlag" 此字段弃用
"Key": "Expire" 表示资源实例的过期时间
"Key": "CCThreshold" 表示资源实例的CC防护触发阈值
"Key": "AutoRenewFlag" 表示资源实例的自动续费是否开启
"Key": "IspCode" 表示独享包或共享包的线路(0-电信, 1-联通, 2-移动, 5-BGP)
"Key": "PackType" 表示套餐包类型
"Key": "PackId" 表示套餐包ID
"Key": "Name" 表示资源实例的名称
"Key": "Locked" 此字段弃用
"Key": "IpDDoSLevel" 表示资源实例的防护等级(low-宽松, middle-正常, high-严格)
"Key": "DefendStatus" 表示资源实例的DDoS防护状态(防护开启或临时关闭)
"Key": "UndefendExpire" 表示资源实例的DDoS防护临时关闭结束时间
"Key": "Tgw" 表示资源实例是否是新资源
"Key": "Bandwidth" 表示资源实例的保底防护值，只针对高防包和高防IP
"Key": "DdosMax" 表示资源实例的保底防护值，只针对高防IP专业版
"Key": "GFBandwidth" 表示资源实例的保底业务带宽，只针对高防IP
"Key": "ServiceBandwidth" 表示资源实例的保底业务带宽，只针对高防IP专业版
                     * 
                     */
                    std::vector<KeyValueRecord> GetServicePacks() const;

                    /**
                     * 判断参数 ServicePacks 是否已赋值
                     * @return ServicePacks 是否已赋值
                     * 
                     */
                    bool ServicePacksHasBeenSet() const;

                    /**
                     * 获取大禹子产品代号（bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                private:

                    /**
                     * 总记录数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 资源记录列表，返回Key值说明：
"Key": "CreateTime" 表示资源实例购买时间
"Key": "Region" 表示资源实例的地域
"Key": "BoundIP" 表示独享包实例绑定的IP
"Key": "Id" 表示资源实例的ID
"Key": "CCEnabled" 表示资源实例的CC防护开关状态
"Key": "DDoSThreshold" 表示资源实例的DDoS的清洗阈值	
"Key": "BoundStatus" 表示独享包或共享包实例的绑定IP操作状态(绑定中或绑定完成)
"Key": "Type" 此字段弃用
"Key": "ElasticLimit" 表示资源实例的弹性防护值
"Key": "DDoSAI" 表示资源实例的DDoS AI防护开关
"Key": "OverloadCount" 表示资源实例受到超过弹性防护值的次数
"Key": "Status" 表示资源实例的状态(idle:运行中, attacking:攻击中, blocking:封堵中, isolate:隔离中)
"Key": "Lbid" 此字段弃用
"Key": "ShowFlag" 此字段弃用
"Key": "Expire" 表示资源实例的过期时间
"Key": "CCThreshold" 表示资源实例的CC防护触发阈值
"Key": "AutoRenewFlag" 表示资源实例的自动续费是否开启
"Key": "IspCode" 表示独享包或共享包的线路(0-电信, 1-联通, 2-移动, 5-BGP)
"Key": "PackType" 表示套餐包类型
"Key": "PackId" 表示套餐包ID
"Key": "Name" 表示资源实例的名称
"Key": "Locked" 此字段弃用
"Key": "IpDDoSLevel" 表示资源实例的防护等级(low-宽松, middle-正常, high-严格)
"Key": "DefendStatus" 表示资源实例的DDoS防护状态(防护开启或临时关闭)
"Key": "UndefendExpire" 表示资源实例的DDoS防护临时关闭结束时间
"Key": "Tgw" 表示资源实例是否是新资源
"Key": "Bandwidth" 表示资源实例的保底防护值，只针对高防包和高防IP
"Key": "DdosMax" 表示资源实例的保底防护值，只针对高防IP专业版
"Key": "GFBandwidth" 表示资源实例的保底业务带宽，只针对高防IP
"Key": "ServiceBandwidth" 表示资源实例的保底业务带宽，只针对高防IP专业版
                     */
                    std::vector<KeyValueRecord> m_servicePacks;
                    bool m_servicePacksHasBeenSet;

                    /**
                     * 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包；bgpip表示高防IP；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTRESPONSE_H_
