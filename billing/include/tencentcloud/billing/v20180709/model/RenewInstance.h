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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_RENEWINSTANCE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_RENEWINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 资源实例信息
                */
                class RenewInstance : public AbstractModel
                {
                public:
                    RenewInstance();
                    ~RenewInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取产品编码
                     * @return ProductCode 产品编码
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品编码
                     * @param _productCode 产品编码
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
                     * 获取子产品编码
                     * @return SubProductCode 子产品编码
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子产品编码
                     * @param _subProductCode 子产品编码
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取地域编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionCode 地域编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionCode 地域编码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例状态：
NORMAL 正常，
ISOLATED 已隔离
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 实例状态：
NORMAL 正常，
ISOLATED 已隔离
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态：
NORMAL 正常，
ISOLATED 已隔离
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 实例状态：
NORMAL 正常，
ISOLATED 已隔离
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取续费标识：
NOTIFY_AND_MANUAL_RENEW 手动续费，
NOTIFY_AND_AUTO_RENEW 自动续费，
DISABLE_NOTIFY_AND_MANUAL_RENEW 到期不续
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag 续费标识：
NOTIFY_AND_MANUAL_RENEW 手动续费，
NOTIFY_AND_AUTO_RENEW 自动续费，
DISABLE_NOTIFY_AND_MANUAL_RENEW 到期不续
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置续费标识：
NOTIFY_AND_MANUAL_RENEW 手动续费，
NOTIFY_AND_AUTO_RENEW 自动续费，
DISABLE_NOTIFY_AND_MANUAL_RENEW 到期不续
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewFlag 续费标识：
NOTIFY_AND_MANUAL_RENEW 手动续费，
NOTIFY_AND_AUTO_RENEW 自动续费，
DISABLE_NOTIFY_AND_MANUAL_RENEW 到期不续
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 实例到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置实例到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 实例到期时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例别名：用户在控制台为实例设置的名称，如果未设置，则默认为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例别名：用户在控制台为实例设置的名称，如果未设置，则默认为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例别名：用户在控制台为实例设置的名称，如果未设置，则默认为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例别名：用户在控制台为实例设置的名称，如果未设置，则默认为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取产品名称：用户所采购的各类云产品，例如：云服务器 CVM
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 产品名称：用户所采购的各类云产品，例如：云服务器 CVM
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称：用户所采购的各类云产品，例如：云服务器 CVM
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 产品名称：用户所采购的各类云产品，例如：云服务器 CVM
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取项目名称：实例归属的项目，用户在控制台给实例自主分配项目，未分配则是默认项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称：实例归属的项目，用户在控制台给实例自主分配项目，未分配则是默认项目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称：实例归属的项目，用户在控制台给实例自主分配项目，未分配则是默认项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名称：实例归属的项目，用户在控制台给实例自主分配项目，未分配则是默认项目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取自动续费周期长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewPeriod 自动续费周期长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRenewPeriod() const;

                    /**
                     * 设置自动续费周期长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewPeriod 自动续费周期长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewPeriod(const uint64_t& _renewPeriod);

                    /**
                     * 判断参数 RenewPeriod 是否已赋值
                     * @return RenewPeriod 是否已赋值
                     * 
                     */
                    bool RenewPeriodHasBeenSet() const;

                    /**
                     * 获取自动续费周期单位：y 年，m 月
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewPeriodUnit 自动续费周期单位：y 年，m 月
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRenewPeriodUnit() const;

                    /**
                     * 设置自动续费周期单位：y 年，m 月
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewPeriodUnit 自动续费周期单位：y 年，m 月
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 产品编码
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 子产品编码
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 地域编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 实例状态：
NORMAL 正常，
ISOLATED 已隔离
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 续费标识：
NOTIFY_AND_MANUAL_RENEW 手动续费，
NOTIFY_AND_AUTO_RENEW 自动续费，
DISABLE_NOTIFY_AND_MANUAL_RENEW 到期不续
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 实例到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 实例别名：用户在控制台为实例设置的名称，如果未设置，则默认为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 产品名称：用户所采购的各类云产品，例如：云服务器 CVM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 项目名称：实例归属的项目，用户在控制台给实例自主分配项目，未分配则是默认项目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 自动续费周期长度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_renewPeriod;
                    bool m_renewPeriodHasBeenSet;

                    /**
                     * 自动续费周期单位：y 年，m 月
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_renewPeriodUnit;
                    bool m_renewPeriodUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_RENEWINSTANCE_H_
