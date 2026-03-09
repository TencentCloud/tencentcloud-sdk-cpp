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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDADVANCEDSETTINGS_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDADVANCEDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/EtcdSecuritySettings.h>
#include <tencentcloud/cetcd/v20220325/model/EtcdAutoCompactionSettings.h>
#include <tencentcloud/cetcd/v20220325/model/EtcdMonitorSettings.h>
#include <tencentcloud/cetcd/v20220325/model/EtcdBackupSettings.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * etcd高级设置
                */
                class EtcdAdvancedSettings : public AbstractModel
                {
                public:
                    EtcdAdvancedSettings();
                    ~EtcdAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全相关设置
                     * @return SecuritySettings 安全相关设置
                     * 
                     */
                    EtcdSecuritySettings GetSecuritySettings() const;

                    /**
                     * 设置安全相关设置
                     * @param _securitySettings 安全相关设置
                     * 
                     */
                    void SetSecuritySettings(const EtcdSecuritySettings& _securitySettings);

                    /**
                     * 判断参数 SecuritySettings 是否已赋值
                     * @return SecuritySettings 是否已赋值
                     * 
                     */
                    bool SecuritySettingsHasBeenSet() const;

                    /**
                     * 获取自动压缩设置
                     * @return AutoCompactionSettings 自动压缩设置
                     * 
                     */
                    EtcdAutoCompactionSettings GetAutoCompactionSettings() const;

                    /**
                     * 设置自动压缩设置
                     * @param _autoCompactionSettings 自动压缩设置
                     * 
                     */
                    void SetAutoCompactionSettings(const EtcdAutoCompactionSettings& _autoCompactionSettings);

                    /**
                     * 判断参数 AutoCompactionSettings 是否已赋值
                     * @return AutoCompactionSettings 是否已赋值
                     * 
                     */
                    bool AutoCompactionSettingsHasBeenSet() const;

                    /**
                     * 获取监控设置
                     * @return MonitorSettings 监控设置
                     * 
                     */
                    EtcdMonitorSettings GetMonitorSettings() const;

                    /**
                     * 设置监控设置
                     * @param _monitorSettings 监控设置
                     * 
                     */
                    void SetMonitorSettings(const EtcdMonitorSettings& _monitorSettings);

                    /**
                     * 判断参数 MonitorSettings 是否已赋值
                     * @return MonitorSettings 是否已赋值
                     * 
                     */
                    bool MonitorSettingsHasBeenSet() const;

                    /**
                     * 获取备份相关设置
                     * @return BackupSettings 备份相关设置
                     * 
                     */
                    EtcdBackupSettings GetBackupSettings() const;

                    /**
                     * 设置备份相关设置
                     * @param _backupSettings 备份相关设置
                     * 
                     */
                    void SetBackupSettings(const EtcdBackupSettings& _backupSettings);

                    /**
                     * 判断参数 BackupSettings 是否已赋值
                     * @return BackupSettings 是否已赋值
                     * 
                     */
                    bool BackupSettingsHasBeenSet() const;

                    /**
                     * 获取自定义域名
                     * @return CustomDomains 自定义域名
                     * 
                     */
                    std::string GetCustomDomains() const;

                    /**
                     * 设置自定义域名
                     * @param _customDomains 自定义域名
                     * 
                     */
                    void SetCustomDomains(const std::string& _customDomains);

                    /**
                     * 判断参数 CustomDomains 是否已赋值
                     * @return CustomDomains 是否已赋值
                     * 
                     */
                    bool CustomDomainsHasBeenSet() const;

                    /**
                     * 获取自定义ip
                     * @return CustomIPs 自定义ip
                     * 
                     */
                    std::string GetCustomIPs() const;

                    /**
                     * 设置自定义ip
                     * @param _customIPs 自定义ip
                     * 
                     */
                    void SetCustomIPs(const std::string& _customIPs);

                    /**
                     * 判断参数 CustomIPs 是否已赋值
                     * @return CustomIPs 是否已赋值
                     * 
                     */
                    bool CustomIPsHasBeenSet() const;

                private:

                    /**
                     * 安全相关设置
                     */
                    EtcdSecuritySettings m_securitySettings;
                    bool m_securitySettingsHasBeenSet;

                    /**
                     * 自动压缩设置
                     */
                    EtcdAutoCompactionSettings m_autoCompactionSettings;
                    bool m_autoCompactionSettingsHasBeenSet;

                    /**
                     * 监控设置
                     */
                    EtcdMonitorSettings m_monitorSettings;
                    bool m_monitorSettingsHasBeenSet;

                    /**
                     * 备份相关设置
                     */
                    EtcdBackupSettings m_backupSettings;
                    bool m_backupSettingsHasBeenSet;

                    /**
                     * 自定义域名
                     */
                    std::string m_customDomains;
                    bool m_customDomainsHasBeenSet;

                    /**
                     * 自定义ip
                     */
                    std::string m_customIPs;
                    bool m_customIPsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDADVANCEDSETTINGS_H_
