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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INTERINSTANCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INTERINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 互通组内实例信息详情
                */
                class InterInstance : public AbstractModel
                {
                public:
                    InterInstance();
                    ~InterInstance() = default;
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
                     * 获取实例互通IP，用于加入互通组后访问
                     * @return InterVip 实例互通IP，用于加入互通组后访问
                     * 
                     */
                    std::string GetInterVip() const;

                    /**
                     * 设置实例互通IP，用于加入互通组后访问
                     * @param _interVip 实例互通IP，用于加入互通组后访问
                     * 
                     */
                    void SetInterVip(const std::string& _interVip);

                    /**
                     * 判断参数 InterVip 是否已赋值
                     * @return InterVip 是否已赋值
                     * 
                     */
                    bool InterVipHasBeenSet() const;

                    /**
                     * 获取实例互通端口，用于加入互通组后访问
                     * @return InterPort 实例互通端口，用于加入互通组后访问
                     * 
                     */
                    int64_t GetInterPort() const;

                    /**
                     * 设置实例互通端口，用于加入互通组后访问
                     * @param _interPort 实例互通端口，用于加入互通组后访问
                     * 
                     */
                    void SetInterPort(const int64_t& _interPort);

                    /**
                     * 判断参数 InterPort 是否已赋值
                     * @return InterPort 是否已赋值
                     * 
                     */
                    bool InterPortHasBeenSet() const;

                    /**
                     * 获取实例互通状态，1 -互通ipprot打开中 2 -互通ipprot已经打开 3 -已经打开互通ip的实例加入到互通组中 4 -已经打开互通ip的实例已加入到互通组 5 -互通ipprot回收中 6 -互通ipprot已回收 7 -已回收的实例从互通组中移除中 8 -已回收的实例从互通组中已经移除
                     * @return Status 实例互通状态，1 -互通ipprot打开中 2 -互通ipprot已经打开 3 -已经打开互通ip的实例加入到互通组中 4 -已经打开互通ip的实例已加入到互通组 5 -互通ipprot回收中 6 -互通ipprot已回收 7 -已回收的实例从互通组中移除中 8 -已回收的实例从互通组中已经移除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例互通状态，1 -互通ipprot打开中 2 -互通ipprot已经打开 3 -已经打开互通ip的实例加入到互通组中 4 -已经打开互通ip的实例已加入到互通组 5 -互通ipprot回收中 6 -互通ipprot已回收 7 -已回收的实例从互通组中移除中 8 -已回收的实例从互通组中已经移除
                     * @param _status 实例互通状态，1 -互通ipprot打开中 2 -互通ipprot已经打开 3 -已经打开互通ip的实例加入到互通组中 4 -已经打开互通ip的实例已加入到互通组 5 -互通ipprot回收中 6 -互通ipprot已回收 7 -已回收的实例从互通组中移除中 8 -已回收的实例从互通组中已经移除
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例所在地域名称，如 ap-guangzhou
                     * @return Region 实例所在地域名称，如 ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所在地域名称，如 ap-guangzhou
                     * @param _region 实例所在地域名称，如 ap-guangzhou
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例所在可用区名称，如 ap-guangzhou-1
                     * @return Zone 实例所在可用区名称，如 ap-guangzhou-1
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例所在可用区名称，如 ap-guangzhou-1
                     * @param _zone 实例所在可用区名称，如 ap-guangzhou-1
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例版本代号
                     * @return Version 实例版本代号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置实例版本代号
                     * @param _version 实例版本代号
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取实例版本
                     * @return VersionName 实例版本
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置实例版本
                     * @param _versionName 实例版本
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return Name 实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称
                     * @param _name 实例名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取实例访问IP
                     * @return Vip 实例访问IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例访问IP
                     * @param _vip 实例访问IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取实例访问端口
                     * @return Vport 实例访问端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例访问端口
                     * @param _vport 实例访问端口
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例互通IP，用于加入互通组后访问
                     */
                    std::string m_interVip;
                    bool m_interVipHasBeenSet;

                    /**
                     * 实例互通端口，用于加入互通组后访问
                     */
                    int64_t m_interPort;
                    bool m_interPortHasBeenSet;

                    /**
                     * 实例互通状态，1 -互通ipprot打开中 2 -互通ipprot已经打开 3 -已经打开互通ip的实例加入到互通组中 4 -已经打开互通ip的实例已加入到互通组 5 -互通ipprot回收中 6 -互通ipprot已回收 7 -已回收的实例从互通组中移除中 8 -已回收的实例从互通组中已经移除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例所在地域名称，如 ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例所在可用区名称，如 ap-guangzhou-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例版本代号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 实例版本
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例访问IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 实例访问端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INTERINSTANCE_H_
