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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 登录审计列表实体
                */
                class HostLoginList : public AbstractModel
                {
                public:
                    HostLoginList();
                    ~HostLoginList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录Id
                     * @return Id 记录Id
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置记录Id
                     * @param Id 记录Id
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Uuid串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid Uuid串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Uuid串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uuid Uuid串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineIp 主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachineIp 主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachineName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcIp 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SrcIp 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。
                     * @return Status 1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。
                     * @param Status 1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Country 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Country 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param City 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取省份id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Province 省份id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置省份id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Province 省份id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProvince(const uint64_t& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoginTime 登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoginTime 登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoginTime(const std::string& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取是否命中异地登录异常  1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRiskArea 是否命中异地登录异常  1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsRiskArea() const;

                    /**
                     * 设置是否命中异地登录异常  1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsRiskArea 是否命中异地登录异常  1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsRiskArea(const uint64_t& _isRiskArea);

                    /**
                     * 判断参数 IsRiskArea 是否已赋值
                     * @return IsRiskArea 是否已赋值
                     */
                    bool IsRiskAreaHasBeenSet() const;

                    /**
                     * 获取是否命中异常用户异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRiskUser 是否命中异常用户异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsRiskUser() const;

                    /**
                     * 设置是否命中异常用户异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsRiskUser 是否命中异常用户异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsRiskUser(const uint64_t& _isRiskUser);

                    /**
                     * 判断参数 IsRiskUser 是否已赋值
                     * @return IsRiskUser 是否已赋值
                     */
                    bool IsRiskUserHasBeenSet() const;

                    /**
                     * 获取是否命中异常时间异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRiskTime 是否命中异常时间异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsRiskTime() const;

                    /**
                     * 设置是否命中异常时间异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsRiskTime 是否命中异常时间异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsRiskTime(const uint64_t& _isRiskTime);

                    /**
                     * 判断参数 IsRiskTime 是否已赋值
                     * @return IsRiskTime 是否已赋值
                     */
                    bool IsRiskTimeHasBeenSet() const;

                    /**
                     * 获取是否命中异常IP异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRiskSrcIp 是否命中异常IP异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsRiskSrcIp() const;

                    /**
                     * 设置是否命中异常IP异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsRiskSrcIp 是否命中异常IP异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsRiskSrcIp(const uint64_t& _isRiskSrcIp);

                    /**
                     * 判断参数 IsRiskSrcIp 是否已赋值
                     * @return IsRiskSrcIp 是否已赋值
                     */
                    bool IsRiskSrcIpHasBeenSet() const;

                    /**
                     * 获取危险等级：
0 高危
1 可疑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 危险等级：
0 高危
1 可疑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置危险等级：
0 高危
1 可疑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RiskLevel 危险等级：
0 高危
1 可疑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取位置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 位置名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置位置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Location 位置名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取主机quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid 主机quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Quuid 主机quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 记录Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Uuid串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 省份id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 是否命中异地登录异常  1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isRiskArea;
                    bool m_isRiskAreaHasBeenSet;

                    /**
                     * 是否命中异常用户异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isRiskUser;
                    bool m_isRiskUserHasBeenSet;

                    /**
                     * 是否命中异常时间异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isRiskTime;
                    bool m_isRiskTimeHasBeenSet;

                    /**
                     * 是否命中异常IP异常 1表示命中此类异常, 0表示未命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isRiskSrcIp;
                    bool m_isRiskSrcIpHasBeenSet;

                    /**
                     * 危险等级：
0 高危
1 可疑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 位置名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 主机quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINLIST_H_
