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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_AGGRCATEGORYSOFTDETAILROW_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_AGGRCATEGORYSOFTDETAILROW_H_

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
                * 按版本聚合后的软件列表
                */
                class AggrCategorySoftDetailRow : public AbstractModel
                {
                public:
                    AggrCategorySoftDetailRow();
                    ~AggrCategorySoftDetailRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

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
                     * 获取系统平台
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsType 系统平台
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置系统平台
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _osType 系统平台
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
                     * 获取企业名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpName 企业名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCorpName() const;

                    /**
                     * 设置企业名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corpName 企业名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorpName(const std::string& _corpName);

                    /**
                     * 判断参数 CorpName 是否已赋值
                     * @return CorpName 是否已赋值
                     * 
                     */
                    bool CorpNameHasBeenSet() const;

                    /**
                     * 获取安装设备数量(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstalledDeviceNum 安装设备数量(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstalledDeviceNum() const;

                    /**
                     * 设置安装设备数量(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _installedDeviceNum 安装设备数量(只支持32位)
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
                     * 获取已安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstalledUserNum 已安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstalledUserNum() const;

                    /**
                     * 设置已安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _installedUserNum 已安装用户数
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
                     * 获取盗版软件用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyInstalledUserNum 盗版软件用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPiracyInstalledUserNum() const;

                    /**
                     * 设置盗版软件用户数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyInstalledUserNum 盗版软件用户数
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
                     * 获取授权总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthNum 授权总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAuthNum() const;

                    /**
                     * 设置授权总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authNum 授权总数
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

                private:

                    /**
                     * ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 软件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 盗版风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_piracyRisk;
                    bool m_piracyRiskHasBeenSet;

                    /**
                     * 系统平台
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 企业名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_corpName;
                    bool m_corpNameHasBeenSet;

                    /**
                     * 安装设备数量(只支持32位)
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
                     * 已安装用户数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_installedUserNum;
                    bool m_installedUserNumHasBeenSet;

                    /**
                     * 盗版软件用户数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_piracyInstalledUserNum;
                    bool m_piracyInstalledUserNumHasBeenSet;

                    /**
                     * 授权总数
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_AGGRCATEGORYSOFTDETAILROW_H_
