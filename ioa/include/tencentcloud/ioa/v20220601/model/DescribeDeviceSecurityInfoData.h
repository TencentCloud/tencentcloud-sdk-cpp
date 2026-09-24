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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICESECURITYINFODATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICESECURITYINFODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 终端安全信息
                */
                class DescribeDeviceSecurityInfoData : public AbstractModel
                {
                public:
                    DescribeDeviceSecurityInfoData();
                    ~DescribeDeviceSecurityInfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>防火墙状态</p><p>枚举值：</p><ul><li>0：未开启</li><li>1：已开启</li></ul>
                     * @return FirewallStatus <p>防火墙状态</p><p>枚举值：</p><ul><li>0：未开启</li><li>1：已开启</li></ul>
                     * 
                     */
                    int64_t GetFirewallStatus() const;

                    /**
                     * 设置<p>防火墙状态</p><p>枚举值：</p><ul><li>0：未开启</li><li>1：已开启</li></ul>
                     * @param _firewallStatus <p>防火墙状态</p><p>枚举值：</p><ul><li>0：未开启</li><li>1：已开启</li></ul>
                     * 
                     */
                    void SetFirewallStatus(const int64_t& _firewallStatus);

                    /**
                     * 判断参数 FirewallStatus 是否已赋值
                     * @return FirewallStatus 是否已赋值
                     * 
                     */
                    bool FirewallStatusHasBeenSet() const;

                    /**
                     * 获取<p>实时防护状态</p><p>枚举值：</p><ul><li>0：未开启</li><li>1：部分开启</li><li>2：已开启</li><li>-1：未知</li></ul>
                     * @return RealTimeProtectionStatus <p>实时防护状态</p><p>枚举值：</p><ul><li>0：未开启</li><li>1：部分开启</li><li>2：已开启</li><li>-1：未知</li></ul>
                     * 
                     */
                    int64_t GetRealTimeProtectionStatus() const;

                    /**
                     * 设置<p>实时防护状态</p><p>枚举值：</p><ul><li>0：未开启</li><li>1：部分开启</li><li>2：已开启</li><li>-1：未知</li></ul>
                     * @param _realTimeProtectionStatus <p>实时防护状态</p><p>枚举值：</p><ul><li>0：未开启</li><li>1：部分开启</li><li>2：已开启</li><li>-1：未知</li></ul>
                     * 
                     */
                    void SetRealTimeProtectionStatus(const int64_t& _realTimeProtectionStatus);

                    /**
                     * 判断参数 RealTimeProtectionStatus 是否已赋值
                     * @return RealTimeProtectionStatus 是否已赋值
                     * 
                     */
                    bool RealTimeProtectionStatusHasBeenSet() const;

                    /**
                     * 获取<p>系统修复引擎版本</p>
                     * @return SysRepVersion <p>系统修复引擎版本</p>
                     * 
                     */
                    std::string GetSysRepVersion() const;

                    /**
                     * 设置<p>系统修复引擎版本</p>
                     * @param _sysRepVersion <p>系统修复引擎版本</p>
                     * 
                     */
                    void SetSysRepVersion(const std::string& _sysRepVersion);

                    /**
                     * 判断参数 SysRepVersion 是否已赋值
                     * @return SysRepVersion 是否已赋值
                     * 
                     */
                    bool SysRepVersionHasBeenSet() const;

                    /**
                     * 获取<p>病毒库版本</p>
                     * @return VirusVer <p>病毒库版本</p>
                     * 
                     */
                    std::string GetVirusVer() const;

                    /**
                     * 设置<p>病毒库版本</p>
                     * @param _virusVer <p>病毒库版本</p>
                     * 
                     */
                    void SetVirusVer(const std::string& _virusVer);

                    /**
                     * 判断参数 VirusVer 是否已赋值
                     * @return VirusVer 是否已赋值
                     * 
                     */
                    bool VirusVerHasBeenSet() const;

                    /**
                     * 获取<p>漏洞库版本</p>
                     * @return VulVersion <p>漏洞库版本</p>
                     * 
                     */
                    std::string GetVulVersion() const;

                    /**
                     * 设置<p>漏洞库版本</p>
                     * @param _vulVersion <p>漏洞库版本</p>
                     * 
                     */
                    void SetVulVersion(const std::string& _vulVersion);

                    /**
                     * 判断参数 VulVersion 是否已赋值
                     * @return VulVersion 是否已赋值
                     * 
                     */
                    bool VulVersionHasBeenSet() const;

                private:

                    /**
                     * <p>防火墙状态</p><p>枚举值：</p><ul><li>0：未开启</li><li>1：已开启</li></ul>
                     */
                    int64_t m_firewallStatus;
                    bool m_firewallStatusHasBeenSet;

                    /**
                     * <p>实时防护状态</p><p>枚举值：</p><ul><li>0：未开启</li><li>1：部分开启</li><li>2：已开启</li><li>-1：未知</li></ul>
                     */
                    int64_t m_realTimeProtectionStatus;
                    bool m_realTimeProtectionStatusHasBeenSet;

                    /**
                     * <p>系统修复引擎版本</p>
                     */
                    std::string m_sysRepVersion;
                    bool m_sysRepVersionHasBeenSet;

                    /**
                     * <p>病毒库版本</p>
                     */
                    std::string m_virusVer;
                    bool m_virusVerHasBeenSet;

                    /**
                     * <p>漏洞库版本</p>
                     */
                    std::string m_vulVersion;
                    bool m_vulVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICESECURITYINFODATA_H_
