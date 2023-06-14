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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_INQUIRYPRICEDBAUDITINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_INQUIRYPRICEDBAUDITINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * InquiryPriceDbauditInstance请求参数结构体
                */
                class InquiryPriceDbauditInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceDbauditInstanceRequest();
                    ~InquiryPriceDbauditInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例规格，取值范围： cdsaudit，cdsaudit_adv， cdsaudit_ent 分别为合规版，高级版，企业版
                     * @return InstanceVersion 实例规格，取值范围： cdsaudit，cdsaudit_adv， cdsaudit_ent 分别为合规版，高级版，企业版
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置实例规格，取值范围： cdsaudit，cdsaudit_adv， cdsaudit_ent 分别为合规版，高级版，企业版
                     * @param _instanceVersion 实例规格，取值范围： cdsaudit，cdsaudit_adv， cdsaudit_ent 分别为合规版，高级版，企业版
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取询价类型： renew，续费；newbuy，新购
                     * @return InquiryType 询价类型： renew，续费；newbuy，新购
                     * 
                     */
                    std::string GetInquiryType() const;

                    /**
                     * 设置询价类型： renew，续费；newbuy，新购
                     * @param _inquiryType 询价类型： renew，续费；newbuy，新购
                     * 
                     */
                    void SetInquiryType(const std::string& _inquiryType);

                    /**
                     * 判断参数 InquiryType 是否已赋值
                     * @return InquiryType 是否已赋值
                     * 
                     */
                    bool InquiryTypeHasBeenSet() const;

                    /**
                     * 获取购买实例的时长。取值范围：1（y/m），2（y/m）,，3（y/m），4（m）， 5（m），6（m）， 7（m），8（m），9（m）， 10（m）
                     * @return TimeSpan 购买实例的时长。取值范围：1（y/m），2（y/m）,，3（y/m），4（m）， 5（m），6（m）， 7（m），8（m），9（m）， 10（m）
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置购买实例的时长。取值范围：1（y/m），2（y/m）,，3（y/m），4（m）， 5（m），6（m）， 7（m），8（m），9（m）， 10（m）
                     * @param _timeSpan 购买实例的时长。取值范围：1（y/m），2（y/m）,，3（y/m），4（m）， 5（m），6（m）， 7（m），8（m），9（m）， 10（m）
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
                     * 获取购买时长单位，y：年；m：月
                     * @return TimeUnit 购买时长单位，y：年；m：月
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置购买时长单位，y：年；m：月
                     * @param _timeUnit 购买时长单位，y：年；m：月
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
                     * 获取实例所在地域
                     * @return ServiceRegion 实例所在地域
                     * 
                     */
                    std::string GetServiceRegion() const;

                    /**
                     * 设置实例所在地域
                     * @param _serviceRegion 实例所在地域
                     * 
                     */
                    void SetServiceRegion(const std::string& _serviceRegion);

                    /**
                     * 判断参数 ServiceRegion 是否已赋值
                     * @return ServiceRegion 是否已赋值
                     * 
                     */
                    bool ServiceRegionHasBeenSet() const;

                private:

                    /**
                     * 实例规格，取值范围： cdsaudit，cdsaudit_adv， cdsaudit_ent 分别为合规版，高级版，企业版
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 询价类型： renew，续费；newbuy，新购
                     */
                    std::string m_inquiryType;
                    bool m_inquiryTypeHasBeenSet;

                    /**
                     * 购买实例的时长。取值范围：1（y/m），2（y/m）,，3（y/m），4（m）， 5（m），6（m）， 7（m），8（m），9（m）， 10（m）
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 购买时长单位，y：年；m：月
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 实例所在地域
                     */
                    std::string m_serviceRegion;
                    bool m_serviceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_INQUIRYPRICEDBAUDITINSTANCEREQUEST_H_
