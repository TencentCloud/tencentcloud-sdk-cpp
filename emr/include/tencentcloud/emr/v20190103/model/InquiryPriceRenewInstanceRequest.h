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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewInstance请求参数结构体
                */
                class InquiryPriceRenewInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceRenewInstanceRequest();
                    ~InquiryPriceRenewInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例续费的时长。需要结合TimeUnit一起使用。1表示续费一个月
                     * @return TimeSpan 实例续费的时长。需要结合TimeUnit一起使用。1表示续费一个月
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置实例续费的时长。需要结合TimeUnit一起使用。1表示续费一个月
                     * @param _timeSpan 实例续费的时长。需要结合TimeUnit一起使用。1表示续费一个月
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取实例计费模式。此处只支持取值为1，表示包年包月。
                     * @return PayMode 实例计费模式。此处只支持取值为1，表示包年包月。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置实例计费模式。此处只支持取值为1，表示包年包月。
                     * @param _payMode 实例计费模式。此处只支持取值为1，表示包年包月。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取待续费节点的资源ID列表。资源ID形如：emr-vm-xxxxxxxx。有效的资源ID可通过登录[控制台](https://console.cloud.tencent.com/emr)查询。
                     * @return ResourceIds 待续费节点的资源ID列表。资源ID形如：emr-vm-xxxxxxxx。有效的资源ID可通过登录[控制台](https://console.cloud.tencent.com/emr)查询。
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置待续费节点的资源ID列表。资源ID形如：emr-vm-xxxxxxxx。有效的资源ID可通过登录[控制台](https://console.cloud.tencent.com/emr)查询。
                     * @param _resourceIds 待续费节点的资源ID列表。资源ID形如：emr-vm-xxxxxxxx。有效的资源ID可通过登录[控制台](https://console.cloud.tencent.com/emr)查询。
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
                     * @return TimeUnit 实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
                     * @param _timeUnit 实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     * @return Currency 货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     * @param _currency 货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @return Placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @param _placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取是否按量转包年包月。0：否，1：是。
                     * @return ModifyPayMode 是否按量转包年包月。0：否，1：是。
                     * 
                     */
                    int64_t GetModifyPayMode() const;

                    /**
                     * 设置是否按量转包年包月。0：否，1：是。
                     * @param _modifyPayMode 是否按量转包年包月。0：否，1：是。
                     * 
                     */
                    void SetModifyPayMode(const int64_t& _modifyPayMode);

                    /**
                     * 判断参数 ModifyPayMode 是否已赋值
                     * @return ModifyPayMode 是否已赋值
                     * 
                     */
                    bool ModifyPayModeHasBeenSet() const;

                    /**
                     * 获取是否需要每个节点续费价格
                     * @return NeedDetail 是否需要每个节点续费价格
                     * 
                     */
                    bool GetNeedDetail() const;

                    /**
                     * 设置是否需要每个节点续费价格
                     * @param _needDetail 是否需要每个节点续费价格
                     * 
                     */
                    void SetNeedDetail(const bool& _needDetail);

                    /**
                     * 判断参数 NeedDetail 是否已赋值
                     * @return NeedDetail 是否已赋值
                     * 
                     */
                    bool NeedDetailHasBeenSet() const;

                    /**
                     * 获取集群id，如果需要集群所有包年包月节点续费信息，可以填写该参数
                     * @return InstanceId 集群id，如果需要集群所有包年包月节点续费信息，可以填写该参数
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id，如果需要集群所有包年包月节点续费信息，可以填写该参数
                     * @param _instanceId 集群id，如果需要集群所有包年包月节点续费信息，可以填写该参数
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 实例续费的时长。需要结合TimeUnit一起使用。1表示续费一个月
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 实例计费模式。此处只支持取值为1，表示包年包月。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 待续费节点的资源ID列表。资源ID形如：emr-vm-xxxxxxxx。有效的资源ID可通过登录[控制台](https://console.cloud.tencent.com/emr)查询。
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 实例续费的时间单位。取值范围：
<li>m：表示月份。</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 是否按量转包年包月。0：否，1：是。
                     */
                    int64_t m_modifyPayMode;
                    bool m_modifyPayModeHasBeenSet;

                    /**
                     * 是否需要每个节点续费价格
                     */
                    bool m_needDetail;
                    bool m_needDetailHasBeenSet;

                    /**
                     * 集群id，如果需要集群所有包年包月节点续费信息，可以填写该参数
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCEREQUEST_H_
