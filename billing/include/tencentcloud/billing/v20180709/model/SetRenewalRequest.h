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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_SETRENEWALREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_SETRENEWALREQUEST_H_

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
                * SetRenewal请求参数结构体
                */
                class SetRenewalRequest : public AbstractModel
                {
                public:
                    SetRenewalRequest();
                    ~SetRenewalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品编码。
                     * @return ProductCode 产品编码。
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品编码。
                     * @param _productCode 产品编码。
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
                     * 获取地域编码。
                     * @return RegionCode 地域编码。
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域编码。
                     * @param _regionCode 地域编码。
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取实例ID，仅支持指定一个。
                     * @return InstanceId 实例ID，仅支持指定一个。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，仅支持指定一个。
                     * @param _instanceId 实例ID，仅支持指定一个。
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
                     * 获取续费标识。枚举值如下：
NOTIFY_AND_MANUAL_RENEW：手动续费
NOTIFY_AND_AUTO_RENEW：自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续
                     * @return RenewFlag 续费标识。枚举值如下：
NOTIFY_AND_MANUAL_RENEW：手动续费
NOTIFY_AND_AUTO_RENEW：自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置续费标识。枚举值如下：
NOTIFY_AND_MANUAL_RENEW：手动续费
NOTIFY_AND_AUTO_RENEW：自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续
                     * @param _renewFlag 续费标识。枚举值如下：
NOTIFY_AND_MANUAL_RENEW：手动续费
NOTIFY_AND_AUTO_RENEW：自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取自动续费周期长度，不填写时默认按产品侧设置的默认值
如果是月，支持：1-11
如果是年，支持：1-5
实际按产品侧支持的范围为主
                     * @return RenewPeriod 自动续费周期长度，不填写时默认按产品侧设置的默认值
如果是月，支持：1-11
如果是年，支持：1-5
实际按产品侧支持的范围为主
                     * 
                     */
                    std::string GetRenewPeriod() const;

                    /**
                     * 设置自动续费周期长度，不填写时默认按产品侧设置的默认值
如果是月，支持：1-11
如果是年，支持：1-5
实际按产品侧支持的范围为主
                     * @param _renewPeriod 自动续费周期长度，不填写时默认按产品侧设置的默认值
如果是月，支持：1-11
如果是年，支持：1-5
实际按产品侧支持的范围为主
                     * 
                     */
                    void SetRenewPeriod(const std::string& _renewPeriod);

                    /**
                     * 判断参数 RenewPeriod 是否已赋值
                     * @return RenewPeriod 是否已赋值
                     * 
                     */
                    bool RenewPeriodHasBeenSet() const;

                    /**
                     * 获取自动续费周期单位，不填写时默认按产品侧设置的默认值
y 年，m 月
实际按产品侧支持的范围为主
                     * @return RenewPeriodUnit 自动续费周期单位，不填写时默认按产品侧设置的默认值
y 年，m 月
实际按产品侧支持的范围为主
                     * 
                     */
                    std::string GetRenewPeriodUnit() const;

                    /**
                     * 设置自动续费周期单位，不填写时默认按产品侧设置的默认值
y 年，m 月
实际按产品侧支持的范围为主
                     * @param _renewPeriodUnit 自动续费周期单位，不填写时默认按产品侧设置的默认值
y 年，m 月
实际按产品侧支持的范围为主
                     * 
                     */
                    void SetRenewPeriodUnit(const std::string& _renewPeriodUnit);

                    /**
                     * 判断参数 RenewPeriodUnit 是否已赋值
                     * @return RenewPeriodUnit 是否已赋值
                     * 
                     */
                    bool RenewPeriodUnitHasBeenSet() const;

                private:

                    /**
                     * 产品编码。
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 地域编码。
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 实例ID，仅支持指定一个。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 续费标识。枚举值如下：
NOTIFY_AND_MANUAL_RENEW：手动续费
NOTIFY_AND_AUTO_RENEW：自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 自动续费周期长度，不填写时默认按产品侧设置的默认值
如果是月，支持：1-11
如果是年，支持：1-5
实际按产品侧支持的范围为主
                     */
                    std::string m_renewPeriod;
                    bool m_renewPeriodHasBeenSet;

                    /**
                     * 自动续费周期单位，不填写时默认按产品侧设置的默认值
y 年，m 月
实际按产品侧支持的范围为主
                     */
                    std::string m_renewPeriodUnit;
                    bool m_renewPeriodUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_SETRENEWALREQUEST_H_
