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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPGRADELICENSEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPGRADELICENSEREQUEST_H_

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
                * UpgradeLicense请求参数结构体
                */
                class UpgradeLicenseRequest : public AbstractModel
                {
                public:
                    UpgradeLicenseRequest();
                    ~UpgradeLicenseRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     * @return LicenseType License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     * @param _licenseType License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券<li>0：不自动使用</li><li>1：自动使用</li>默认值0
                     * @return AutoVoucher 是否自动使用代金券<li>0：不自动使用</li><li>1：自动使用</li>默认值0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券<li>0：不自动使用</li><li>1：自动使用</li>默认值0
                     * @param _autoVoucher 是否自动使用代金券<li>0：不自动使用</li><li>1：自动使用</li>默认值0
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID列表（目前仅支持指定一张代金券）
                     * @return VoucherIds 代金券ID列表（目前仅支持指定一张代金券）
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表（目前仅支持指定一张代金券）
                     * @param _voucherIds 代金券ID列表（目前仅支持指定一张代金券）
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li><li>不传参时会默认维持原状，传参时需注意只能由不开启变为开启，无法由开启变为不开启</li>
                     * @return BasicSecurityType 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li><li>不传参时会默认维持原状，传参时需注意只能由不开启变为开启，无法由开启变为不开启</li>
                     * 
                     */
                    uint64_t GetBasicSecurityType() const;

                    /**
                     * 设置6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li><li>不传参时会默认维持原状，传参时需注意只能由不开启变为开启，无法由开启变为不开启</li>
                     * @param _basicSecurityType 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li><li>不传参时会默认维持原状，传参时需注意只能由不开启变为开启，无法由开启变为不开启</li>
                     * 
                     */
                    void SetBasicSecurityType(const uint64_t& _basicSecurityType);

                    /**
                     * 判断参数 BasicSecurityType 是否已赋值
                     * @return BasicSecurityType 是否已赋值
                     * 
                     */
                    bool BasicSecurityTypeHasBeenSet() const;

                    /**
                     * 获取是否强制重启<li>true强制重启</li><li>false不强制重启</li> 默认值false
                     * @return ForceRestart 是否强制重启<li>true强制重启</li><li>false不强制重启</li> 默认值false
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置是否强制重启<li>true强制重启</li><li>false不强制重启</li> 默认值false
                     * @param _forceRestart 是否强制重启<li>true强制重启</li><li>false不强制重启</li> 默认值false
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 是否自动使用代金券<li>0：不自动使用</li><li>1：自动使用</li>默认值0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表（目前仅支持指定一张代金券）
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li><li>不传参时会默认维持原状，传参时需注意只能由不开启变为开启，无法由开启变为不开启</li>
                     */
                    uint64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * 是否强制重启<li>true强制重启</li><li>false不强制重启</li> 默认值false
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPGRADELICENSEREQUEST_H_
