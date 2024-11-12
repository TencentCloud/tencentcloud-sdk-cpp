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
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


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
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置记录Id
                     * @param _id 记录Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机Uuid
                     * @return Uuid 主机Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机Uuid
                     * @param _uuid 主机Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机ip
                     * @return MachineIp 主机ip
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机ip
                     * @param _machineIp 主机ip
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取主机名
                     * @return MachineName 主机名
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名
                     * @param _machineName 主机名
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取来源ip
                     * @return SrcIp 来源ip
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置来源ip
                     * @param _srcIp 来源ip
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。
                     * @return Status 1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。
                     * @param _status 1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取国家id
                     * @return Country 国家id
                     * 
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置国家id
                     * @param _country 国家id
                     * 
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取城市id
                     * @return City 城市id
                     * 
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置城市id
                     * @param _city 城市id
                     * 
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取省份id
                     * @return Province 省份id
                     * 
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置省份id
                     * @param _province 省份id
                     * 
                     */
                    void SetProvince(const uint64_t& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取登录时间
                     * @return LoginTime 登录时间
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置登录时间
                     * @param _loginTime 登录时间
                     * 
                     */
                    void SetLoginTime(const std::string& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取是否命中异地登录异常  1表示命中此类异常, 0表示未命中
                     * @return IsRiskArea 是否命中异地登录异常  1表示命中此类异常, 0表示未命中
                     * 
                     */
                    uint64_t GetIsRiskArea() const;

                    /**
                     * 设置是否命中异地登录异常  1表示命中此类异常, 0表示未命中
                     * @param _isRiskArea 是否命中异地登录异常  1表示命中此类异常, 0表示未命中
                     * 
                     */
                    void SetIsRiskArea(const uint64_t& _isRiskArea);

                    /**
                     * 判断参数 IsRiskArea 是否已赋值
                     * @return IsRiskArea 是否已赋值
                     * 
                     */
                    bool IsRiskAreaHasBeenSet() const;

                    /**
                     * 获取是否命中异常用户异常 1表示命中此类异常, 0表示未命中
                     * @return IsRiskUser 是否命中异常用户异常 1表示命中此类异常, 0表示未命中
                     * 
                     */
                    uint64_t GetIsRiskUser() const;

                    /**
                     * 设置是否命中异常用户异常 1表示命中此类异常, 0表示未命中
                     * @param _isRiskUser 是否命中异常用户异常 1表示命中此类异常, 0表示未命中
                     * 
                     */
                    void SetIsRiskUser(const uint64_t& _isRiskUser);

                    /**
                     * 判断参数 IsRiskUser 是否已赋值
                     * @return IsRiskUser 是否已赋值
                     * 
                     */
                    bool IsRiskUserHasBeenSet() const;

                    /**
                     * 获取是否命中异常时间异常 1表示命中此类异常, 0表示未命中
                     * @return IsRiskTime 是否命中异常时间异常 1表示命中此类异常, 0表示未命中
                     * 
                     */
                    uint64_t GetIsRiskTime() const;

                    /**
                     * 设置是否命中异常时间异常 1表示命中此类异常, 0表示未命中
                     * @param _isRiskTime 是否命中异常时间异常 1表示命中此类异常, 0表示未命中
                     * 
                     */
                    void SetIsRiskTime(const uint64_t& _isRiskTime);

                    /**
                     * 判断参数 IsRiskTime 是否已赋值
                     * @return IsRiskTime 是否已赋值
                     * 
                     */
                    bool IsRiskTimeHasBeenSet() const;

                    /**
                     * 获取是否命中异常IP异常 1表示命中此类异常, 0表示未命中
                     * @return IsRiskSrcIp 是否命中异常IP异常 1表示命中此类异常, 0表示未命中
                     * 
                     */
                    uint64_t GetIsRiskSrcIp() const;

                    /**
                     * 设置是否命中异常IP异常 1表示命中此类异常, 0表示未命中
                     * @param _isRiskSrcIp 是否命中异常IP异常 1表示命中此类异常, 0表示未命中
                     * 
                     */
                    void SetIsRiskSrcIp(const uint64_t& _isRiskSrcIp);

                    /**
                     * 判断参数 IsRiskSrcIp 是否已赋值
                     * @return IsRiskSrcIp 是否已赋值
                     * 
                     */
                    bool IsRiskSrcIpHasBeenSet() const;

                    /**
                     * 获取危险等级：
0 高危
1 可疑
                     * @return RiskLevel 危险等级：
0 高危
1 可疑
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置危险等级：
0 高危
1 可疑
                     * @param _riskLevel 危险等级：
0 高危
1 可疑
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取位置名称
                     * @return Location 位置名称
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置位置名称
                     * @param _location 位置名称
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取主机quuid
                     * @return Quuid 主机quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机quuid
                     * @param _quuid 主机quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取高危信息说明：
ABROAD - 海外IP；
XTI - 威胁情报
                     * @return Desc 高危信息说明：
ABROAD - 海外IP；
XTI - 威胁情报
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置高危信息说明：
ABROAD - 海外IP；
XTI - 威胁情报
                     * @param _desc 高危信息说明：
ABROAD - 海外IP；
XTI - 威胁情报
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取附加信息
                     * @return MachineExtraInfo 附加信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置附加信息
                     * @param _machineExtraInfo 附加信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取请求目的端口
                     * @return Port 请求目的端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置请求目的端口
                     * @param _port 请求目的端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * 记录Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机ip
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 来源ip
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
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 城市id
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 省份id
                     */
                    uint64_t m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 登录时间
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 是否命中异地登录异常  1表示命中此类异常, 0表示未命中
                     */
                    uint64_t m_isRiskArea;
                    bool m_isRiskAreaHasBeenSet;

                    /**
                     * 是否命中异常用户异常 1表示命中此类异常, 0表示未命中
                     */
                    uint64_t m_isRiskUser;
                    bool m_isRiskUserHasBeenSet;

                    /**
                     * 是否命中异常时间异常 1表示命中此类异常, 0表示未命中
                     */
                    uint64_t m_isRiskTime;
                    bool m_isRiskTimeHasBeenSet;

                    /**
                     * 是否命中异常IP异常 1表示命中此类异常, 0表示未命中
                     */
                    uint64_t m_isRiskSrcIp;
                    bool m_isRiskSrcIpHasBeenSet;

                    /**
                     * 危险等级：
0 高危
1 可疑
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 位置名称
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 主机quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 高危信息说明：
ABROAD - 海外IP；
XTI - 威胁情报
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 附加信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * 请求目的端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINLIST_H_
