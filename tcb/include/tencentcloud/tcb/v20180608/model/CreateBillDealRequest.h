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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEBILLDEALREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEBILLDEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/Tag.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateBillDeal请求参数结构体
                */
                class CreateBillDealRequest : public AbstractModel
                {
                public:
                    CreateBillDealRequest();
                    ~CreateBillDealRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当前下单的操作类型，可取[purchase,renew,modify]三种值，分别代表新购，续费，变配。
                     * @return DealType 当前下单的操作类型，可取[purchase,renew,modify]三种值，分别代表新购，续费，变配。
                     * 
                     */
                    std::string GetDealType() const;

                    /**
                     * 设置当前下单的操作类型，可取[purchase,renew,modify]三种值，分别代表新购，续费，变配。
                     * @param _dealType 当前下单的操作类型，可取[purchase,renew,modify]三种值，分别代表新购，续费，变配。
                     * 
                     */
                    void SetDealType(const std::string& _dealType);

                    /**
                     * 判断参数 DealType 是否已赋值
                     * @return DealType 是否已赋值
                     * 
                     */
                    bool DealTypeHasBeenSet() const;

                    /**
                     * 获取购买的产品类型，可取[tcb-baas,tcb-promotion,tcb-package], 分别代表baas套餐、大促包、资源包
                     * @return ProductType 购买的产品类型，可取[tcb-baas,tcb-promotion,tcb-package], 分别代表baas套餐、大促包、资源包
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置购买的产品类型，可取[tcb-baas,tcb-promotion,tcb-package], 分别代表baas套餐、大促包、资源包
                     * @param _productType 购买的产品类型，可取[tcb-baas,tcb-promotion,tcb-package], 分别代表baas套餐、大促包、资源包
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取目标下单产品/套餐Id
                     * @return PackageId 目标下单产品/套餐Id
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置目标下单产品/套餐Id
                     * @param _packageId 目标下单产品/套餐Id
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
                     * 获取默认只下单不支付，为ture则下单并支付
                     * @return CreateAndPay 默认只下单不支付，为ture则下单并支付
                     * 
                     */
                    bool GetCreateAndPay() const;

                    /**
                     * 设置默认只下单不支付，为ture则下单并支付
                     * @param _createAndPay 默认只下单不支付，为ture则下单并支付
                     * 
                     */
                    void SetCreateAndPay(const bool& _createAndPay);

                    /**
                     * 判断参数 CreateAndPay 是否已赋值
                     * @return CreateAndPay 是否已赋值
                     * 
                     */
                    bool CreateAndPayHasBeenSet() const;

                    /**
                     * 获取购买时长
                     * @return TimeSpan 购买时长
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长
                     * @param _timeSpan 购买时长
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
                     * 获取购买时长单位,按各产品规则可选d(天),m(月),y(年),p(一次性)
                     * @return TimeUnit 购买时长单位,按各产品规则可选d(天),m(月),y(年),p(一次性)
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置购买时长单位,按各产品规则可选d(天),m(月),y(年),p(一次性)
                     * @param _timeUnit 购买时长单位,按各产品规则可选d(天),m(月),y(年),p(一次性)
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
                     * 获取资源唯一标识
                     * @return ResourceId 资源唯一标识
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源唯一标识
                     * @param _resourceId 资源唯一标识
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取来源可选[qcloud,miniapp]，默认qcloud
                     * @return Source 来源可选[qcloud,miniapp]，默认qcloud
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源可选[qcloud,miniapp]，默认qcloud
                     * @param _source 来源可选[qcloud,miniapp]，默认qcloud
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取资源别名
                     * @return Alias 资源别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置资源别名
                     * @param _alias 资源别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
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
                     * 获取开启超限按量
                     * @return EnableExcess 开启超限按量
                     * 
                     */
                    bool GetEnableExcess() const;

                    /**
                     * 设置开启超限按量
                     * @param _enableExcess 开启超限按量
                     * 
                     */
                    void SetEnableExcess(const bool& _enableExcess);

                    /**
                     * 判断参数 EnableExcess 是否已赋值
                     * @return EnableExcess 是否已赋值
                     * 
                     */
                    bool EnableExcessHasBeenSet() const;

                    /**
                     * 获取变配目标产品/套餐id
                     * @return ModifyPackageId 变配目标产品/套餐id
                     * 
                     */
                    std::string GetModifyPackageId() const;

                    /**
                     * 设置变配目标产品/套餐id
                     * @param _modifyPackageId 变配目标产品/套餐id
                     * 
                     */
                    void SetModifyPackageId(const std::string& _modifyPackageId);

                    /**
                     * 判断参数 ModifyPackageId 是否已赋值
                     * @return ModifyPackageId 是否已赋值
                     * 
                     */
                    bool ModifyPackageIdHasBeenSet() const;

                    /**
                     * 获取jsonstr附加信息
                     * @return Extension jsonstr附加信息
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置jsonstr附加信息
                     * @param _extension jsonstr附加信息
                     * 
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                    /**
                     * 获取是否自动选择代金券支付
                     * @return AutoVoucher 是否自动选择代金券支付
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券支付
                     * @param _autoVoucher 是否自动选择代金券支付
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取资源类型。
代表新购环境（DealType=purchase 并且 ProductType=tcb-baas ）时需要发货哪些资源。
可取值：flexdb, cos, cdn, scf

                     * @return ResourceTypes 资源类型。
代表新购环境（DealType=purchase 并且 ProductType=tcb-baas ）时需要发货哪些资源。
可取值：flexdb, cos, cdn, scf

                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置资源类型。
代表新购环境（DealType=purchase 并且 ProductType=tcb-baas ）时需要发货哪些资源。
可取值：flexdb, cos, cdn, scf

                     * @param _resourceTypes 资源类型。
代表新购环境（DealType=purchase 并且 ProductType=tcb-baas ）时需要发货哪些资源。
可取值：flexdb, cos, cdn, scf

                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取环境标签。
 代表新购环境（DealType=purchase 并且 ProductType=tcb-baas ）时需要打的标签。

                     * @return EnvTags 环境标签。
 代表新购环境（DealType=purchase 并且 ProductType=tcb-baas ）时需要打的标签。

                     * 
                     */
                    std::vector<Tag> GetEnvTags() const;

                    /**
                     * 设置环境标签。
 代表新购环境（DealType=purchase 并且 ProductType=tcb-baas ）时需要打的标签。

                     * @param _envTags 环境标签。
 代表新购环境（DealType=purchase 并且 ProductType=tcb-baas ）时需要打的标签。

                     * 
                     */
                    void SetEnvTags(const std::vector<Tag>& _envTags);

                    /**
                     * 判断参数 EnvTags 是否已赋值
                     * @return EnvTags 是否已赋值
                     * 
                     */
                    bool EnvTagsHasBeenSet() const;

                private:

                    /**
                     * 当前下单的操作类型，可取[purchase,renew,modify]三种值，分别代表新购，续费，变配。
                     */
                    std::string m_dealType;
                    bool m_dealTypeHasBeenSet;

                    /**
                     * 购买的产品类型，可取[tcb-baas,tcb-promotion,tcb-package], 分别代表baas套餐、大促包、资源包
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 目标下单产品/套餐Id
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 默认只下单不支付，为ture则下单并支付
                     */
                    bool m_createAndPay;
                    bool m_createAndPayHasBeenSet;

                    /**
                     * 购买时长
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 购买时长单位,按各产品规则可选d(天),m(月),y(年),p(一次性)
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 资源唯一标识
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 来源可选[qcloud,miniapp]，默认qcloud
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 资源别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 开启超限按量
                     */
                    bool m_enableExcess;
                    bool m_enableExcessHasBeenSet;

                    /**
                     * 变配目标产品/套餐id
                     */
                    std::string m_modifyPackageId;
                    bool m_modifyPackageIdHasBeenSet;

                    /**
                     * jsonstr附加信息
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                    /**
                     * 是否自动选择代金券支付
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 资源类型。
代表新购环境（DealType=purchase 并且 ProductType=tcb-baas ）时需要发货哪些资源。
可取值：flexdb, cos, cdn, scf

                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * 环境标签。
 代表新购环境（DealType=purchase 并且 ProductType=tcb-baas ）时需要打的标签。

                     */
                    std::vector<Tag> m_envTags;
                    bool m_envTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEBILLDEALREQUEST_H_
