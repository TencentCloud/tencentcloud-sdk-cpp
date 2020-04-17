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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPGRADEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPGRADEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpgradeInstance请求参数结构体
                */
                class UpgradeInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceRequest();
                    ~UpgradeInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取目标ES版本，支持：”6.4.3“, "6.8.2"，"7.5.1"
                     * @return EsVersion 目标ES版本，支持：”6.4.3“, "6.8.2"，"7.5.1"
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置目标ES版本，支持：”6.4.3“, "6.8.2"，"7.5.1"
                     * @param EsVersion 目标ES版本，支持：”6.4.3“, "6.8.2"，"7.5.1"
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取是否只做升级检查，默认值为false
                     * @return CheckOnly 是否只做升级检查，默认值为false
                     */
                    bool GetCheckOnly() const;

                    /**
                     * 设置是否只做升级检查，默认值为false
                     * @param CheckOnly 是否只做升级检查，默认值为false
                     */
                    void SetCheckOnly(const bool& _checkOnly);

                    /**
                     * 判断参数 CheckOnly 是否已赋值
                     * @return CheckOnly 是否已赋值
                     */
                    bool CheckOnlyHasBeenSet() const;

                    /**
                     * 获取目标商业特性版本：<li>oss 开源版</li><li>basic 基础版</li>当前仅在5.6.4升级6.x版本时使用，默认值为basic
                     * @return LicenseType 目标商业特性版本：<li>oss 开源版</li><li>basic 基础版</li>当前仅在5.6.4升级6.x版本时使用，默认值为basic
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置目标商业特性版本：<li>oss 开源版</li><li>basic 基础版</li>当前仅在5.6.4升级6.x版本时使用，默认值为basic
                     * @param LicenseType 目标商业特性版本：<li>oss 开源版</li><li>basic 基础版</li>当前仅在5.6.4升级6.x版本时使用，默认值为basic
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
                     * @return BasicSecurityType 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
                     */
                    uint64_t GetBasicSecurityType() const;

                    /**
                     * 设置6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
                     * @param BasicSecurityType 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
                     */
                    void SetBasicSecurityType(const uint64_t& _basicSecurityType);

                    /**
                     * 判断参数 BasicSecurityType 是否已赋值
                     * @return BasicSecurityType 是否已赋值
                     */
                    bool BasicSecurityTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 目标ES版本，支持：”6.4.3“, "6.8.2"，"7.5.1"
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * 是否只做升级检查，默认值为false
                     */
                    bool m_checkOnly;
                    bool m_checkOnlyHasBeenSet;

                    /**
                     * 目标商业特性版本：<li>oss 开源版</li><li>basic 基础版</li>当前仅在5.6.4升级6.x版本时使用，默认值为basic
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li>
                     */
                    uint64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPGRADEINSTANCEREQUEST_H_
