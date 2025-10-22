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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTDETAILDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTDETAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/SoftVersionAndNum.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 聚合软件详情数据
                */
                class DescribeAggrSoftDetailData : public AbstractModel
                {
                public:
                    DescribeAggrSoftDetailData();
                    ~DescribeAggrSoftDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取软件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 软件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置软件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 软件名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取平台
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsType 平台
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置平台
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _osType 平台
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取盗版风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyRisk 盗版风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPiracyRisk() const;

                    /**
                     * 设置盗版风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyRisk 盗版风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPiracyRisk(const int64_t& _piracyRisk);

                    /**
                     * 判断参数 PiracyRisk 是否已赋值
                     * @return PiracyRisk 是否已赋值
                     * 
                     */
                    bool PiracyRiskHasBeenSet() const;

                    /**
                     * 获取厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Corp 厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCorp() const;

                    /**
                     * 设置厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corp 厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorp(const std::string& _corp);

                    /**
                     * 判断参数 Corp 是否已赋值
                     * @return Corp 是否已赋值
                     * 
                     */
                    bool CorpHasBeenSet() const;

                    /**
                     * 获取已安装版本分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoftVersionDist 已安装版本分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SoftVersionAndNum> GetSoftVersionDist() const;

                    /**
                     * 设置已安装版本分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _softVersionDist 已安装版本分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSoftVersionDist(const std::vector<SoftVersionAndNum>& _softVersionDist);

                    /**
                     * 判断参数 SoftVersionDist 是否已赋值
                     * @return SoftVersionDist 是否已赋值
                     * 
                     */
                    bool SoftVersionDistHasBeenSet() const;

                    /**
                     * 获取盗版版本安装
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyVersionDist 盗版版本安装
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SoftVersionAndNum> GetPiracyVersionDist() const;

                    /**
                     * 设置盗版版本安装
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyVersionDist 盗版版本安装
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPiracyVersionDist(const std::vector<SoftVersionAndNum>& _piracyVersionDist);

                    /**
                     * 判断参数 PiracyVersionDist 是否已赋值
                     * @return PiracyVersionDist 是否已赋值
                     * 
                     */
                    bool PiracyVersionDistHasBeenSet() const;

                    /**
                     * 获取安装设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstalledDeviceNum 安装设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstalledDeviceNum() const;

                    /**
                     * 设置安装设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _installedDeviceNum 安装设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstalledDeviceNum(const int64_t& _installedDeviceNum);

                    /**
                     * 判断参数 InstalledDeviceNum 是否已赋值
                     * @return InstalledDeviceNum 是否已赋值
                     * 
                     */
                    bool InstalledDeviceNumHasBeenSet() const;

                    /**
                     * 获取盗版安装设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyInstalledDeviceNum 盗版安装设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPiracyInstalledDeviceNum() const;

                    /**
                     * 设置盗版安装设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyInstalledDeviceNum 盗版安装设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPiracyInstalledDeviceNum(const int64_t& _piracyInstalledDeviceNum);

                    /**
                     * 判断参数 PiracyInstalledDeviceNum 是否已赋值
                     * @return PiracyInstalledDeviceNum 是否已赋值
                     * 
                     */
                    bool PiracyInstalledDeviceNumHasBeenSet() const;

                    /**
                     * 获取安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstalledUserNum 安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstalledUserNum() const;

                    /**
                     * 设置安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _installedUserNum 安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstalledUserNum(const int64_t& _installedUserNum);

                    /**
                     * 判断参数 InstalledUserNum 是否已赋值
                     * @return InstalledUserNum 是否已赋值
                     * 
                     */
                    bool InstalledUserNumHasBeenSet() const;

                    /**
                     * 获取盗版安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyInstalledUserNum 盗版安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPiracyInstalledUserNum() const;

                    /**
                     * 设置盗版安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyInstalledUserNum 盗版安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPiracyInstalledUserNum(const int64_t& _piracyInstalledUserNum);

                    /**
                     * 判断参数 PiracyInstalledUserNum 是否已赋值
                     * @return PiracyInstalledUserNum 是否已赋值
                     * 
                     */
                    bool PiracyInstalledUserNumHasBeenSet() const;

                    /**
                     * 获取授权数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthNum 授权数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAuthNum() const;

                    /**
                     * 设置授权数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authNum 授权数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthNum(const int64_t& _authNum);

                    /**
                     * 判断参数 AuthNum 是否已赋值
                     * @return AuthNum 是否已赋值
                     * 
                     */
                    bool AuthNumHasBeenSet() const;

                    /**
                     * 获取正版率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GenuineRate 正版率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetGenuineRate() const;

                    /**
                     * 设置正版率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _genuineRate 正版率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGenuineRate(const double& _genuineRate);

                    /**
                     * 判断参数 GenuineRate 是否已赋值
                     * @return GenuineRate 是否已赋值
                     * 
                     */
                    bool GenuineRateHasBeenSet() const;

                    /**
                     * 获取有新版本可升级的设备数量
                     * @return UpgradableDeviceNum 有新版本可升级的设备数量
                     * 
                     */
                    int64_t GetUpgradableDeviceNum() const;

                    /**
                     * 设置有新版本可升级的设备数量
                     * @param _upgradableDeviceNum 有新版本可升级的设备数量
                     * 
                     */
                    void SetUpgradableDeviceNum(const int64_t& _upgradableDeviceNum);

                    /**
                     * 判断参数 UpgradableDeviceNum 是否已赋值
                     * @return UpgradableDeviceNum 是否已赋值
                     * 
                     */
                    bool UpgradableDeviceNumHasBeenSet() const;

                    /**
                     * 获取当前可升级的最新版本信息, 每一项均为json字符串
                     * @return UpgradableVersions 当前可升级的最新版本信息, 每一项均为json字符串
                     * 
                     */
                    std::vector<std::string> GetUpgradableVersions() const;

                    /**
                     * 设置当前可升级的最新版本信息, 每一项均为json字符串
                     * @param _upgradableVersions 当前可升级的最新版本信息, 每一项均为json字符串
                     * 
                     */
                    void SetUpgradableVersions(const std::vector<std::string>& _upgradableVersions);

                    /**
                     * 判断参数 UpgradableVersions 是否已赋值
                     * @return UpgradableVersions 是否已赋值
                     * 
                     */
                    bool UpgradableVersionsHasBeenSet() const;

                private:

                    /**
                     * 软件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 平台
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 盗版风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_piracyRisk;
                    bool m_piracyRiskHasBeenSet;

                    /**
                     * 厂商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_corp;
                    bool m_corpHasBeenSet;

                    /**
                     * 已安装版本分布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SoftVersionAndNum> m_softVersionDist;
                    bool m_softVersionDistHasBeenSet;

                    /**
                     * 盗版版本安装
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SoftVersionAndNum> m_piracyVersionDist;
                    bool m_piracyVersionDistHasBeenSet;

                    /**
                     * 安装设备数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_installedDeviceNum;
                    bool m_installedDeviceNumHasBeenSet;

                    /**
                     * 盗版安装设备数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_piracyInstalledDeviceNum;
                    bool m_piracyInstalledDeviceNumHasBeenSet;

                    /**
                     * 安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_installedUserNum;
                    bool m_installedUserNumHasBeenSet;

                    /**
                     * 盗版安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_piracyInstalledUserNum;
                    bool m_piracyInstalledUserNumHasBeenSet;

                    /**
                     * 授权数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_authNum;
                    bool m_authNumHasBeenSet;

                    /**
                     * 正版率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_genuineRate;
                    bool m_genuineRateHasBeenSet;

                    /**
                     * 有新版本可升级的设备数量
                     */
                    int64_t m_upgradableDeviceNum;
                    bool m_upgradableDeviceNumHasBeenSet;

                    /**
                     * 当前可升级的最新版本信息, 每一项均为json字符串
                     */
                    std::vector<std::string> m_upgradableVersions;
                    bool m_upgradableVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTDETAILDATA_H_
