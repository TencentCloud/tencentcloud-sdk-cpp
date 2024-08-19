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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceScaleOutInstance请求参数结构体
                */
                class InquiryPriceScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceScaleOutInstanceRequest();
                    ~InquiryPriceScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取扩容的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * @return TimeUnit 扩容的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置扩容的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * @param _timeUnit 扩容的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
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
                     * 获取扩容的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * @return TimeSpan 扩容的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置扩容的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * @param _timeSpan 扩容的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
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
                     * 获取实例所属的可用区ID，例如100003。该参数可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/213/15707) 的返回值中的ZoneId字段来获取。
                     * @return ZoneId 实例所属的可用区ID，例如100003。该参数可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/213/15707) 的返回值中的ZoneId字段来获取。
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置实例所属的可用区ID，例如100003。该参数可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/213/15707) 的返回值中的ZoneId字段来获取。
                     * @param _zoneId 实例所属的可用区ID，例如100003。该参数可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/213/15707) 的返回值中的ZoneId字段来获取。
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     * @return PayMode 实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     * @param _payMode 实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取扩容的Core节点数量。
                     * @return CoreCount 扩容的Core节点数量。
                     * 
                     */
                    uint64_t GetCoreCount() const;

                    /**
                     * 设置扩容的Core节点数量。
                     * @param _coreCount 扩容的Core节点数量。
                     * 
                     */
                    void SetCoreCount(const uint64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     * 
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取扩容的Task节点数量。
                     * @return TaskCount 扩容的Task节点数量。
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置扩容的Task节点数量。
                     * @param _taskCount 扩容的Task节点数量。
                     * 
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

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
                     * 获取扩容的Router节点数量。
                     * @return RouterCount 扩容的Router节点数量。
                     * 
                     */
                    uint64_t GetRouterCount() const;

                    /**
                     * 设置扩容的Router节点数量。
                     * @param _routerCount 扩容的Router节点数量。
                     * 
                     */
                    void SetRouterCount(const uint64_t& _routerCount);

                    /**
                     * 判断参数 RouterCount 是否已赋值
                     * @return RouterCount 是否已赋值
                     * 
                     */
                    bool RouterCountHasBeenSet() const;

                    /**
                     * 获取扩容的Master节点数量。
                     * @return MasterCount 扩容的Master节点数量。
                     * 
                     */
                    uint64_t GetMasterCount() const;

                    /**
                     * 设置扩容的Master节点数量。
                     * @param _masterCount 扩容的Master节点数量。
                     * 
                     */
                    void SetMasterCount(const uint64_t& _masterCount);

                    /**
                     * 判断参数 MasterCount 是否已赋值
                     * @return MasterCount 是否已赋值
                     * 
                     */
                    bool MasterCountHasBeenSet() const;

                    /**
                     * 获取类型为ComputeResource和EMR以及默认，默认为EMR
                     * @return ResourceBaseType 类型为ComputeResource和EMR以及默认，默认为EMR
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置类型为ComputeResource和EMR以及默认，默认为EMR
                     * @param _resourceBaseType 类型为ComputeResource和EMR以及默认，默认为EMR
                     * 
                     */
                    void SetResourceBaseType(const std::string& _resourceBaseType);

                    /**
                     * 判断参数 ResourceBaseType 是否已赋值
                     * @return ResourceBaseType 是否已赋值
                     * 
                     */
                    bool ResourceBaseTypeHasBeenSet() const;

                    /**
                     * 获取计算资源id
                     * @return ComputeResourceId 计算资源id
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置计算资源id
                     * @param _computeResourceId 计算资源id
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                    /**
                     * 获取扩容资源类型
                     * @return HardwareResourceType 扩容资源类型
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置扩容资源类型
                     * @param _hardwareResourceType 扩容资源类型
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 扩容的时间单位。取值范围：
<li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li>
<li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 扩容的时长。结合TimeUnit一起使用。
<li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li>
<li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 实例所属的可用区ID，例如100003。该参数可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/213/15707) 的返回值中的ZoneId字段来获取。
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 实例计费模式。取值范围：
<li>0：表示按量计费。</li>
<li>1：表示包年包月。</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 扩容的Core节点数量。
                     */
                    uint64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * 扩容的Task节点数量。
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * 货币种类。取值范围：
<li>CNY：表示人民币。</li>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 扩容的Router节点数量。
                     */
                    uint64_t m_routerCount;
                    bool m_routerCountHasBeenSet;

                    /**
                     * 扩容的Master节点数量。
                     */
                    uint64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * 类型为ComputeResource和EMR以及默认，默认为EMR
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * 计算资源id
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * 扩容资源类型
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_
