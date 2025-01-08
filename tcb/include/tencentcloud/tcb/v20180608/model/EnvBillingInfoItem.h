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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ENVBILLINGINFOITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ENVBILLINGINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/OrderInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 环境计费信息
                */
                class EnvBillingInfoItem : public AbstractModel
                {
                public:
                    EnvBillingInfoItem();
                    ~EnvBillingInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取tcb产品套餐ID，参考DescribePackages接口的返回值。
                     * @return PackageId tcb产品套餐ID，参考DescribePackages接口的返回值。
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置tcb产品套餐ID，参考DescribePackages接口的返回值。
                     * @param _packageId tcb产品套餐ID，参考DescribePackages接口的返回值。
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取自动续费标记
                     * @return IsAutoRenew 自动续费标记
                     * 
                     */
                    bool GetIsAutoRenew() const;

                    /**
                     * 设置自动续费标记
                     * @param _isAutoRenew 自动续费标记
                     * 
                     */
                    void SetIsAutoRenew(const bool& _isAutoRenew);

                    /**
                     * 判断参数 IsAutoRenew 是否已赋值
                     * @return IsAutoRenew 是否已赋值
                     * 
                     */
                    bool IsAutoRenewHasBeenSet() const;

                    /**
                     * 获取状态。包含以下取值：
<li> 空字符串：初始化中</li>
<li> NORMAL：正常</li>
<li> ISOLATE：隔离</li>
                     * @return Status 状态。包含以下取值：
<li> 空字符串：初始化中</li>
<li> NORMAL：正常</li>
<li> ISOLATE：隔离</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态。包含以下取值：
<li> 空字符串：初始化中</li>
<li> NORMAL：正常</li>
<li> ISOLATE：隔离</li>
                     * @param _status 状态。包含以下取值：
<li> 空字符串：初始化中</li>
<li> NORMAL：正常</li>
<li> ISOLATE：隔离</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取支付方式。包含以下取值：
<li> PREPAYMENT：预付费</li>
<li> POSTPAID：后付费</li>
                     * @return PayMode 支付方式。包含以下取值：
<li> PREPAYMENT：预付费</li>
<li> POSTPAID：后付费</li>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置支付方式。包含以下取值：
<li> PREPAYMENT：预付费</li>
<li> POSTPAID：后付费</li>
                     * @param _payMode 支付方式。包含以下取值：
<li> PREPAYMENT：预付费</li>
<li> POSTPAID：后付费</li>
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
                     * 获取隔离时间，最近一次隔离的时间
                     * @return IsolatedTime 隔离时间，最近一次隔离的时间
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置隔离时间，最近一次隔离的时间
                     * @param _isolatedTime 隔离时间，最近一次隔离的时间
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取过期时间，套餐即将到期的时间
                     * @return ExpireTime 过期时间，套餐即将到期的时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间，套餐即将到期的时间
                     * @param _expireTime 过期时间，套餐即将到期的时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取创建时间，第一次接入计费方案的时间。
                     * @return CreateTime 创建时间，第一次接入计费方案的时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，第一次接入计费方案的时间。
                     * @param _createTime 创建时间，第一次接入计费方案的时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，计费信息最近一次更新的时间。
                     * @return UpdateTime 更新时间，计费信息最近一次更新的时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，计费信息最近一次更新的时间。
                     * @param _updateTime 更新时间，计费信息最近一次更新的时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取true表示从未升级过付费版。
                     * @return IsAlwaysFree true表示从未升级过付费版。
                     * 
                     */
                    bool GetIsAlwaysFree() const;

                    /**
                     * 设置true表示从未升级过付费版。
                     * @param _isAlwaysFree true表示从未升级过付费版。
                     * 
                     */
                    void SetIsAlwaysFree(const bool& _isAlwaysFree);

                    /**
                     * 判断参数 IsAlwaysFree 是否已赋值
                     * @return IsAlwaysFree 是否已赋值
                     * 
                     */
                    bool IsAlwaysFreeHasBeenSet() const;

                    /**
                     * 获取付费渠道。
<li> miniapp：小程序</li>
<li> qcloud：腾讯云</li>
                     * @return PaymentChannel 付费渠道。
<li> miniapp：小程序</li>
<li> qcloud：腾讯云</li>
                     * 
                     */
                    std::string GetPaymentChannel() const;

                    /**
                     * 设置付费渠道。
<li> miniapp：小程序</li>
<li> qcloud：腾讯云</li>
                     * @param _paymentChannel 付费渠道。
<li> miniapp：小程序</li>
<li> qcloud：腾讯云</li>
                     * 
                     */
                    void SetPaymentChannel(const std::string& _paymentChannel);

                    /**
                     * 判断参数 PaymentChannel 是否已赋值
                     * @return PaymentChannel 是否已赋值
                     * 
                     */
                    bool PaymentChannelHasBeenSet() const;

                    /**
                     * 获取最新的订单信息
                     * @return OrderInfo 最新的订单信息
                     * 
                     */
                    OrderInfo GetOrderInfo() const;

                    /**
                     * 设置最新的订单信息
                     * @param _orderInfo 最新的订单信息
                     * 
                     */
                    void SetOrderInfo(const OrderInfo& _orderInfo);

                    /**
                     * 判断参数 OrderInfo 是否已赋值
                     * @return OrderInfo 是否已赋值
                     * 
                     */
                    bool OrderInfoHasBeenSet() const;

                    /**
                     * 获取免费配额信息。
                     * @return FreeQuota 免费配额信息。
                     * 
                     */
                    std::string GetFreeQuota() const;

                    /**
                     * 设置免费配额信息。
                     * @param _freeQuota 免费配额信息。
                     * 
                     */
                    void SetFreeQuota(const std::string& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     * 
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取是否开启 `超过套餐额度部分转按量付费`
                     * @return EnableOverrun 是否开启 `超过套餐额度部分转按量付费`
                     * 
                     */
                    bool GetEnableOverrun() const;

                    /**
                     * 设置是否开启 `超过套餐额度部分转按量付费`
                     * @param _enableOverrun 是否开启 `超过套餐额度部分转按量付费`
                     * 
                     */
                    void SetEnableOverrun(const bool& _enableOverrun);

                    /**
                     * 判断参数 EnableOverrun 是否已赋值
                     * @return EnableOverrun 是否已赋值
                     * 
                     */
                    bool EnableOverrunHasBeenSet() const;

                    /**
                     * 获取环境套餐类型
                     * @return ExtPackageType 环境套餐类型
                     * 
                     */
                    std::string GetExtPackageType() const;

                    /**
                     * 设置环境套餐类型
                     * @param _extPackageType 环境套餐类型
                     * 
                     */
                    void SetExtPackageType(const std::string& _extPackageType);

                    /**
                     * 判断参数 ExtPackageType 是否已赋值
                     * @return ExtPackageType 是否已赋值
                     * 
                     */
                    bool ExtPackageTypeHasBeenSet() const;

                    /**
                     * 获取是否付费期环境，可取值：yes/no。
                     * @return EnvCharged 是否付费期环境，可取值：yes/no。
                     * 
                     */
                    std::string GetEnvCharged() const;

                    /**
                     * 设置是否付费期环境，可取值：yes/no。
                     * @param _envCharged 是否付费期环境，可取值：yes/no。
                     * 
                     */
                    void SetEnvCharged(const std::string& _envCharged);

                    /**
                     * 判断参数 EnvCharged 是否已赋值
                     * @return EnvCharged 是否已赋值
                     * 
                     */
                    bool EnvChargedHasBeenSet() const;

                    /**
                     * 获取是否已激活，可取值：yes/no。
                     * @return EnvActivated 是否已激活，可取值：yes/no。
                     * 
                     */
                    std::string GetEnvActivated() const;

                    /**
                     * 设置是否已激活，可取值：yes/no。
                     * @param _envActivated 是否已激活，可取值：yes/no。
                     * 
                     */
                    void SetEnvActivated(const std::string& _envActivated);

                    /**
                     * 判断参数 EnvActivated 是否已赋值
                     * @return EnvActivated 是否已赋值
                     * 
                     */
                    bool EnvActivatedHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * tcb产品套餐ID，参考DescribePackages接口的返回值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 自动续费标记
                     */
                    bool m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * 状态。包含以下取值：
<li> 空字符串：初始化中</li>
<li> NORMAL：正常</li>
<li> ISOLATE：隔离</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 支付方式。包含以下取值：
<li> PREPAYMENT：预付费</li>
<li> POSTPAID：后付费</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 隔离时间，最近一次隔离的时间
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * 过期时间，套餐即将到期的时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 创建时间，第一次接入计费方案的时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，计费信息最近一次更新的时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * true表示从未升级过付费版。
                     */
                    bool m_isAlwaysFree;
                    bool m_isAlwaysFreeHasBeenSet;

                    /**
                     * 付费渠道。
<li> miniapp：小程序</li>
<li> qcloud：腾讯云</li>
                     */
                    std::string m_paymentChannel;
                    bool m_paymentChannelHasBeenSet;

                    /**
                     * 最新的订单信息
                     */
                    OrderInfo m_orderInfo;
                    bool m_orderInfoHasBeenSet;

                    /**
                     * 免费配额信息。
                     */
                    std::string m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * 是否开启 `超过套餐额度部分转按量付费`
                     */
                    bool m_enableOverrun;
                    bool m_enableOverrunHasBeenSet;

                    /**
                     * 环境套餐类型
                     */
                    std::string m_extPackageType;
                    bool m_extPackageTypeHasBeenSet;

                    /**
                     * 是否付费期环境，可取值：yes/no。
                     */
                    std::string m_envCharged;
                    bool m_envChargedHasBeenSet;

                    /**
                     * 是否已激活，可取值：yes/no。
                     */
                    std::string m_envActivated;
                    bool m_envActivatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ENVBILLINGINFOITEM_H_
