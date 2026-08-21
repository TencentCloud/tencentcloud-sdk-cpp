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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPLICENSEBINDSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPLICENSEBINDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCSIPLicenseBinds请求参数结构体
                */
                class ModifyCSIPLicenseBindsRequest : public AbstractModel
                {
                public:
                    ModifyCSIPLicenseBindsRequest();
                    ~ModifyCSIPLicenseBindsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源ID（指定绑定到哪个订单）</p>
                     * @return ResourceId <p>资源ID（指定绑定到哪个订单）</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID（指定绑定到哪个订单）</p>
                     * @param _resourceId <p>资源ID（指定绑定到哪个订单）</p>
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
                     * 获取<p>待绑定的实例ID列表（IsAll=true时可不传）</p>
                     * @return InstanceIDs <p>待绑定的实例ID列表（IsAll=true时可不传）</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置<p>待绑定的实例ID列表（IsAll=true时可不传）</p>
                     * @param _instanceIDs <p>待绑定的实例ID列表（IsAll=true时可不传）</p>
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>是否绑定全部未绑定机器（true时自动算差集）</p>
                     * @return IsAll <p>是否绑定全部未绑定机器（true时自动算差集）</p>
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置<p>是否绑定全部未绑定机器（true时自动算差集）</p>
                     * @param _isAll <p>是否绑定全部未绑定机器（true时自动算差集）</p>
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取<p>授权版本。枚举值：ENTERPRISE_HP(旗舰版) / ADVANCED_HP(专业版) / RASP(RASP)。推荐使用此参数，与InquireKey二选一。</p>
                     * @return LicenseType <p>授权版本。枚举值：ENTERPRISE_HP(旗舰版) / ADVANCED_HP(专业版) / RASP(RASP)。推荐使用此参数，与InquireKey二选一。</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>授权版本。枚举值：ENTERPRISE_HP(旗舰版) / ADVANCED_HP(专业版) / RASP(RASP)。推荐使用此参数，与InquireKey二选一。</p>
                     * @param _licenseType <p>授权版本。枚举值：ENTERPRISE_HP(旗舰版) / ADVANCED_HP(专业版) / RASP(RASP)。推荐使用此参数，与InquireKey二选一。</p>
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                private:

                    /**
                     * <p>资源ID（指定绑定到哪个订单）</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>待绑定的实例ID列表（IsAll=true时可不传）</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>是否绑定全部未绑定机器（true时自动算差集）</p>
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * <p>授权版本。枚举值：ENTERPRISE_HP(旗舰版) / ADVANCED_HP(专业版) / RASP(RASP)。推荐使用此参数，与InquireKey二选一。</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPLICENSEBINDSREQUEST_H_
