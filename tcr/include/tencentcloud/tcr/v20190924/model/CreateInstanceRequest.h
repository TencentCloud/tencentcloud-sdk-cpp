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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>
#include <tencentcloud/tcr/v20190924/model/RegistryChargePrepaid.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateInstance请求参数结构体
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>企业版实例名称</p>
                     * @return RegistryName <p>企业版实例名称</p>
                     * 
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置<p>企业版实例名称</p>
                     * @param _registryName <p>企业版实例名称</p>
                     * 
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     * 
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取<p>企业版实例类型（basic 基础版；standard 标准版；premium 高级版）</p>
                     * @return RegistryType <p>企业版实例类型（basic 基础版；standard 标准版；premium 高级版）</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>企业版实例类型（basic 基础版；standard 标准版；premium 高级版）</p>
                     * @param _registryType <p>企业版实例类型（basic 基础版；standard 标准版；premium 高级版）</p>
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取<p>云标签描述</p>
                     * @return TagSpecification <p>云标签描述</p>
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置<p>云标签描述</p>
                     * @param _tagSpecification <p>云标签描述</p>
                     * 
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取<p>实例计费类型，0表示按量计费，1表示预付费，默认为按量计费</p>
                     * @return RegistryChargeType <p>实例计费类型，0表示按量计费，1表示预付费，默认为按量计费</p>
                     * 
                     */
                    int64_t GetRegistryChargeType() const;

                    /**
                     * 设置<p>实例计费类型，0表示按量计费，1表示预付费，默认为按量计费</p>
                     * @param _registryChargeType <p>实例计费类型，0表示按量计费，1表示预付费，默认为按量计费</p>
                     * 
                     */
                    void SetRegistryChargeType(const int64_t& _registryChargeType);

                    /**
                     * 判断参数 RegistryChargeType 是否已赋值
                     * @return RegistryChargeType 是否已赋值
                     * 
                     */
                    bool RegistryChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>预付费自动续费标识和购买时长</p>
                     * @return RegistryChargePrepaid <p>预付费自动续费标识和购买时长</p>
                     * 
                     */
                    RegistryChargePrepaid GetRegistryChargePrepaid() const;

                    /**
                     * 设置<p>预付费自动续费标识和购买时长</p>
                     * @param _registryChargePrepaid <p>预付费自动续费标识和购买时长</p>
                     * 
                     */
                    void SetRegistryChargePrepaid(const RegistryChargePrepaid& _registryChargePrepaid);

                    /**
                     * 判断参数 RegistryChargePrepaid 是否已赋值
                     * @return RegistryChargePrepaid 是否已赋值
                     * 
                     */
                    bool RegistryChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>是否同步TCR云标签至生成的COS Bucket</p>
                     * @return SyncTag <p>是否同步TCR云标签至生成的COS Bucket</p>
                     * 
                     */
                    bool GetSyncTag() const;

                    /**
                     * 设置<p>是否同步TCR云标签至生成的COS Bucket</p>
                     * @param _syncTag <p>是否同步TCR云标签至生成的COS Bucket</p>
                     * 
                     */
                    void SetSyncTag(const bool& _syncTag);

                    /**
                     * 判断参数 SyncTag 是否已赋值
                     * @return SyncTag 是否已赋值
                     * 
                     */
                    bool SyncTagHasBeenSet() const;

                    /**
                     * 获取<p>是否开启Cos桶多AZ特性</p>
                     * @return EnableCosMAZ <p>是否开启Cos桶多AZ特性</p>
                     * 
                     */
                    bool GetEnableCosMAZ() const;

                    /**
                     * 设置<p>是否开启Cos桶多AZ特性</p>
                     * @param _enableCosMAZ <p>是否开启Cos桶多AZ特性</p>
                     * 
                     */
                    void SetEnableCosMAZ(const bool& _enableCosMAZ);

                    /**
                     * 判断参数 EnableCosMAZ 是否已赋值
                     * @return EnableCosMAZ 是否已赋值
                     * 
                     */
                    bool EnableCosMAZHasBeenSet() const;

                    /**
                     * 获取<p>是否开启实例删除保护</p>
                     * @return DeletionProtection <p>是否开启实例删除保护</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>是否开启实例删除保护</p>
                     * @param _deletionProtection <p>是否开启实例删除保护</p>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>是否开启cos桶多版本控制</p>
                     * @return EnableCosVersioning <p>是否开启cos桶多版本控制</p>
                     * 
                     */
                    bool GetEnableCosVersioning() const;

                    /**
                     * 设置<p>是否开启cos桶多版本控制</p>
                     * @param _enableCosVersioning <p>是否开启cos桶多版本控制</p>
                     * 
                     */
                    void SetEnableCosVersioning(const bool& _enableCosVersioning);

                    /**
                     * 判断参数 EnableCosVersioning 是否已赋值
                     * @return EnableCosVersioning 是否已赋值
                     * 
                     */
                    bool EnableCosVersioningHasBeenSet() const;

                private:

                    /**
                     * <p>企业版实例名称</p>
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * <p>企业版实例类型（basic 基础版；standard 标准版；premium 高级版）</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>云标签描述</p>
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * <p>实例计费类型，0表示按量计费，1表示预付费，默认为按量计费</p>
                     */
                    int64_t m_registryChargeType;
                    bool m_registryChargeTypeHasBeenSet;

                    /**
                     * <p>预付费自动续费标识和购买时长</p>
                     */
                    RegistryChargePrepaid m_registryChargePrepaid;
                    bool m_registryChargePrepaidHasBeenSet;

                    /**
                     * <p>是否同步TCR云标签至生成的COS Bucket</p>
                     */
                    bool m_syncTag;
                    bool m_syncTagHasBeenSet;

                    /**
                     * <p>是否开启Cos桶多AZ特性</p>
                     */
                    bool m_enableCosMAZ;
                    bool m_enableCosMAZHasBeenSet;

                    /**
                     * <p>是否开启实例删除保护</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>是否开启cos桶多版本控制</p>
                     */
                    bool m_enableCosVersioning;
                    bool m_enableCosVersioningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_
