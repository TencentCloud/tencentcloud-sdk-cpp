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
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
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
                     * 获取<p>tcb产品套餐ID，参考DescribePackages接口的返回值。</p>
                     * @return PackageId <p>tcb产品套餐ID，参考DescribePackages接口的返回值。</p>
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置<p>tcb产品套餐ID，参考DescribePackages接口的返回值。</p>
                     * @param _packageId <p>tcb产品套餐ID，参考DescribePackages接口的返回值。</p>
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
                     * 获取<p>自动续费标记</p>
                     * @return IsAutoRenew <p>自动续费标记</p>
                     * 
                     */
                    bool GetIsAutoRenew() const;

                    /**
                     * 设置<p>自动续费标记</p>
                     * @param _isAutoRenew <p>自动续费标记</p>
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
                     * 获取<p>状态。包含以下取值：</p><li> 空字符串：初始化中</li><li> NORMAL：正常</li><li> ISOLATE：隔离</li>
                     * @return Status <p>状态。包含以下取值：</p><li> 空字符串：初始化中</li><li> NORMAL：正常</li><li> ISOLATE：隔离</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态。包含以下取值：</p><li> 空字符串：初始化中</li><li> NORMAL：正常</li><li> ISOLATE：隔离</li>
                     * @param _status <p>状态。包含以下取值：</p><li> 空字符串：初始化中</li><li> NORMAL：正常</li><li> ISOLATE：隔离</li>
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
                     * 获取<p>支付方式。包含以下取值：</p><li> PREPAYMENT：预付费</li><li> POSTPAID：后付费</li>
                     * @return PayMode <p>支付方式。包含以下取值：</p><li> PREPAYMENT：预付费</li><li> POSTPAID：后付费</li>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>支付方式。包含以下取值：</p><li> PREPAYMENT：预付费</li><li> POSTPAID：后付费</li>
                     * @param _payMode <p>支付方式。包含以下取值：</p><li> PREPAYMENT：预付费</li><li> POSTPAID：后付费</li>
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
                     * 获取<p>隔离时间，最近一次隔离的时间</p>
                     * @return IsolatedTime <p>隔离时间，最近一次隔离的时间</p>
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置<p>隔离时间，最近一次隔离的时间</p>
                     * @param _isolatedTime <p>隔离时间，最近一次隔离的时间</p>
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
                     * 获取<p>过期时间，套餐即将到期的时间</p>
                     * @return ExpireTime <p>过期时间，套餐即将到期的时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>过期时间，套餐即将到期的时间</p>
                     * @param _expireTime <p>过期时间，套餐即将到期的时间</p>
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
                     * 获取<p>创建时间，第一次接入计费方案的时间。</p>
                     * @return CreateTime <p>创建时间，第一次接入计费方案的时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，第一次接入计费方案的时间。</p>
                     * @param _createTime <p>创建时间，第一次接入计费方案的时间。</p>
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
                     * 获取<p>更新时间，计费信息最近一次更新的时间。</p>
                     * @return UpdateTime <p>更新时间，计费信息最近一次更新的时间。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间，计费信息最近一次更新的时间。</p>
                     * @param _updateTime <p>更新时间，计费信息最近一次更新的时间。</p>
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
                     * 获取<p>true表示从未升级过付费版。</p>
                     * @return IsAlwaysFree <p>true表示从未升级过付费版。</p>
                     * 
                     */
                    bool GetIsAlwaysFree() const;

                    /**
                     * 设置<p>true表示从未升级过付费版。</p>
                     * @param _isAlwaysFree <p>true表示从未升级过付费版。</p>
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
                     * 获取<p>付费渠道。</p><li> miniapp：小程序</li><li> qcloud：腾讯云</li>
                     * @return PaymentChannel <p>付费渠道。</p><li> miniapp：小程序</li><li> qcloud：腾讯云</li>
                     * 
                     */
                    std::string GetPaymentChannel() const;

                    /**
                     * 设置<p>付费渠道。</p><li> miniapp：小程序</li><li> qcloud：腾讯云</li>
                     * @param _paymentChannel <p>付费渠道。</p><li> miniapp：小程序</li><li> qcloud：腾讯云</li>
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
                     * 获取<p>最新的订单信息</p>
                     * @return OrderInfo <p>最新的订单信息</p>
                     * 
                     */
                    OrderInfo GetOrderInfo() const;

                    /**
                     * 设置<p>最新的订单信息</p>
                     * @param _orderInfo <p>最新的订单信息</p>
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
                     * 获取<p>免费配额信息。</p>
                     * @return FreeQuota <p>免费配额信息。</p>
                     * 
                     */
                    std::string GetFreeQuota() const;

                    /**
                     * 设置<p>免费配额信息。</p>
                     * @param _freeQuota <p>免费配额信息。</p>
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
                     * 获取<p>是否开启 <code>超过套餐额度部分转按量付费</code></p>
                     * @return EnableOverrun <p>是否开启 <code>超过套餐额度部分转按量付费</code></p>
                     * 
                     */
                    bool GetEnableOverrun() const;

                    /**
                     * 设置<p>是否开启 <code>超过套餐额度部分转按量付费</code></p>
                     * @param _enableOverrun <p>是否开启 <code>超过套餐额度部分转按量付费</code></p>
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
                     * 获取<p>环境套餐类型</p>
                     * @return ExtPackageType <p>环境套餐类型</p>
                     * 
                     */
                    std::string GetExtPackageType() const;

                    /**
                     * 设置<p>环境套餐类型</p>
                     * @param _extPackageType <p>环境套餐类型</p>
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
                     * 获取<p>是否付费期环境，可取值：yes/no。</p>
                     * @return EnvCharged <p>是否付费期环境，可取值：yes/no。</p>
                     * 
                     */
                    std::string GetEnvCharged() const;

                    /**
                     * 设置<p>是否付费期环境，可取值：yes/no。</p>
                     * @param _envCharged <p>是否付费期环境，可取值：yes/no。</p>
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
                     * 获取<p>是否已激活，可取值：yes/no。</p>
                     * @return EnvActivated <p>是否已激活，可取值：yes/no。</p>
                     * 
                     */
                    std::string GetEnvActivated() const;

                    /**
                     * 设置<p>是否已激活，可取值：yes/no。</p>
                     * @param _envActivated <p>是否已激活，可取值：yes/no。</p>
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
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>tcb产品套餐ID，参考DescribePackages接口的返回值。</p>
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * <p>自动续费标记</p>
                     */
                    bool m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * <p>状态。包含以下取值：</p><li> 空字符串：初始化中</li><li> NORMAL：正常</li><li> ISOLATE：隔离</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>支付方式。包含以下取值：</p><li> PREPAYMENT：预付费</li><li> POSTPAID：后付费</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>隔离时间，最近一次隔离的时间</p>
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * <p>过期时间，套餐即将到期的时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>创建时间，第一次接入计费方案的时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间，计费信息最近一次更新的时间。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>true表示从未升级过付费版。</p>
                     */
                    bool m_isAlwaysFree;
                    bool m_isAlwaysFreeHasBeenSet;

                    /**
                     * <p>付费渠道。</p><li> miniapp：小程序</li><li> qcloud：腾讯云</li>
                     */
                    std::string m_paymentChannel;
                    bool m_paymentChannelHasBeenSet;

                    /**
                     * <p>最新的订单信息</p>
                     */
                    OrderInfo m_orderInfo;
                    bool m_orderInfoHasBeenSet;

                    /**
                     * <p>免费配额信息。</p>
                     */
                    std::string m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * <p>是否开启 <code>超过套餐额度部分转按量付费</code></p>
                     */
                    bool m_enableOverrun;
                    bool m_enableOverrunHasBeenSet;

                    /**
                     * <p>环境套餐类型</p>
                     */
                    std::string m_extPackageType;
                    bool m_extPackageTypeHasBeenSet;

                    /**
                     * <p>是否付费期环境，可取值：yes/no。</p>
                     */
                    std::string m_envCharged;
                    bool m_envChargedHasBeenSet;

                    /**
                     * <p>是否已激活，可取值：yes/no。</p>
                     */
                    std::string m_envActivated;
                    bool m_envActivatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ENVBILLINGINFOITEM_H_
