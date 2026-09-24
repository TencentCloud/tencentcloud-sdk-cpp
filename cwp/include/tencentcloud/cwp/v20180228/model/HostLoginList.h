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
#include <tencentcloud/cwp/v20180228/model/IPAnalyse.h>
#include <tencentcloud/cwp/v20180228/model/RecentLoginItem.h>


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
                     * 获取<p>记录Id</p>
                     * @return Id <p>记录Id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>记录Id</p>
                     * @param _id <p>记录Id</p>
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
                     * 获取<p>主机Uuid</p>
                     * @return Uuid <p>主机Uuid</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>主机Uuid</p>
                     * @param _uuid <p>主机Uuid</p>
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
                     * 获取<p>主机ip</p>
                     * @return MachineIp <p>主机ip</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>主机ip</p>
                     * @param _machineIp <p>主机ip</p>
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
                     * 获取<p>主机名</p>
                     * @return MachineName <p>主机名</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>主机名</p>
                     * @param _machineName <p>主机名</p>
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
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>来源ip</p>
                     * @return SrcIp <p>来源ip</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>来源ip</p>
                     * @param _srcIp <p>来源ip</p>
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
                     * 获取<p>1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。</p>
                     * @return Status <p>1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。</p>
                     * @param _status <p>1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。</p>
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
                     * 获取<p>国家id</p>
                     * @return Country <p>国家id</p>
                     * 
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置<p>国家id</p>
                     * @param _country <p>国家id</p>
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
                     * 获取<p>城市id</p>
                     * @return City <p>城市id</p>
                     * 
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置<p>城市id</p>
                     * @param _city <p>城市id</p>
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
                     * 获取<p>省份id</p>
                     * @return Province <p>省份id</p>
                     * 
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置<p>省份id</p>
                     * @param _province <p>省份id</p>
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
                     * 获取<p>登录时间</p>
                     * @return LoginTime <p>登录时间</p>
                     * 
                     */
                    std::string GetLoginTime() const;

                    /**
                     * 设置<p>登录时间</p>
                     * @param _loginTime <p>登录时间</p>
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
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
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
                     * 获取<p>是否命中异地登录异常  1表示命中此类异常, 0表示未命中</p>
                     * @return IsRiskArea <p>是否命中异地登录异常  1表示命中此类异常, 0表示未命中</p>
                     * 
                     */
                    uint64_t GetIsRiskArea() const;

                    /**
                     * 设置<p>是否命中异地登录异常  1表示命中此类异常, 0表示未命中</p>
                     * @param _isRiskArea <p>是否命中异地登录异常  1表示命中此类异常, 0表示未命中</p>
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
                     * 获取<p>是否命中异常用户异常 1表示命中此类异常, 0表示未命中</p>
                     * @return IsRiskUser <p>是否命中异常用户异常 1表示命中此类异常, 0表示未命中</p>
                     * 
                     */
                    uint64_t GetIsRiskUser() const;

                    /**
                     * 设置<p>是否命中异常用户异常 1表示命中此类异常, 0表示未命中</p>
                     * @param _isRiskUser <p>是否命中异常用户异常 1表示命中此类异常, 0表示未命中</p>
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
                     * 获取<p>是否命中异常时间异常 1表示命中此类异常, 0表示未命中</p>
                     * @return IsRiskTime <p>是否命中异常时间异常 1表示命中此类异常, 0表示未命中</p>
                     * 
                     */
                    uint64_t GetIsRiskTime() const;

                    /**
                     * 设置<p>是否命中异常时间异常 1表示命中此类异常, 0表示未命中</p>
                     * @param _isRiskTime <p>是否命中异常时间异常 1表示命中此类异常, 0表示未命中</p>
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
                     * 获取<p>是否命中异常IP异常 1表示命中此类异常, 0表示未命中</p>
                     * @return IsRiskSrcIp <p>是否命中异常IP异常 1表示命中此类异常, 0表示未命中</p>
                     * 
                     */
                    uint64_t GetIsRiskSrcIp() const;

                    /**
                     * 设置<p>是否命中异常IP异常 1表示命中此类异常, 0表示未命中</p>
                     * @param _isRiskSrcIp <p>是否命中异常IP异常 1表示命中此类异常, 0表示未命中</p>
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
                     * 获取<p>危险等级：<br>0 高危<br>1 可疑</p>
                     * @return RiskLevel <p>危险等级：<br>0 高危<br>1 可疑</p>
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置<p>危险等级：<br>0 高危<br>1 可疑</p>
                     * @param _riskLevel <p>危险等级：<br>0 高危<br>1 可疑</p>
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
                     * 获取<p>位置名称</p>
                     * @return Location <p>位置名称</p>
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置<p>位置名称</p>
                     * @param _location <p>位置名称</p>
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
                     * 获取<p>主机quuid</p>
                     * @return Quuid <p>主机quuid</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>主机quuid</p>
                     * @param _quuid <p>主机quuid</p>
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
                     * 获取<p>高危信息说明：<br>ABROAD - 境外IP；<br>XTI - 威胁情报</p>
                     * @return Desc <p>高危信息说明：<br>ABROAD - 境外IP；<br>XTI - 威胁情报</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>高危信息说明：<br>ABROAD - 境外IP；<br>XTI - 威胁情报</p>
                     * @param _desc <p>高危信息说明：<br>ABROAD - 境外IP；<br>XTI - 威胁情报</p>
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
                     * 获取<p>附加信息</p>
                     * @return MachineExtraInfo <p>附加信息</p>
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置<p>附加信息</p>
                     * @param _machineExtraInfo <p>附加信息</p>
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
                     * 获取<p>请求目的端口</p>
                     * @return Port <p>请求目的端口</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>请求目的端口</p>
                     * @param _port <p>请求目的端口</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>ip分析</p>
                     * @return IPAnalyse <p>ip分析</p>
                     * 
                     */
                    IPAnalyse GetIPAnalyse() const;

                    /**
                     * 设置<p>ip分析</p>
                     * @param _iPAnalyse <p>ip分析</p>
                     * 
                     */
                    void SetIPAnalyse(const IPAnalyse& _iPAnalyse);

                    /**
                     * 判断参数 IPAnalyse 是否已赋值
                     * @return IPAnalyse 是否已赋值
                     * 
                     */
                    bool IPAnalyseHasBeenSet() const;

                    /**
                     * 获取<p>命中策略ID</p><p>枚举值：</p><ul><li>risk_login_1： 威胁情报</li><li>risk_login_2： 密码破解成功后登录</li><li>risk_login_3： 弱口令账户登录</li><li>risk_login_4： 非法账户登录</li><li>risk_login_5： 登录后存在入侵行为</li><li>risk_login_101： 海外IP登录</li><li>risk_login_102： 非常用登录地登录</li><li>risk_login_103： 非工作时间登录</li></ul>
                     * @return HitRule <p>命中策略ID</p><p>枚举值：</p><ul><li>risk_login_1： 威胁情报</li><li>risk_login_2： 密码破解成功后登录</li><li>risk_login_3： 弱口令账户登录</li><li>risk_login_4： 非法账户登录</li><li>risk_login_5： 登录后存在入侵行为</li><li>risk_login_101： 海外IP登录</li><li>risk_login_102： 非常用登录地登录</li><li>risk_login_103： 非工作时间登录</li></ul>
                     * 
                     */
                    std::string GetHitRule() const;

                    /**
                     * 设置<p>命中策略ID</p><p>枚举值：</p><ul><li>risk_login_1： 威胁情报</li><li>risk_login_2： 密码破解成功后登录</li><li>risk_login_3： 弱口令账户登录</li><li>risk_login_4： 非法账户登录</li><li>risk_login_5： 登录后存在入侵行为</li><li>risk_login_101： 海外IP登录</li><li>risk_login_102： 非常用登录地登录</li><li>risk_login_103： 非工作时间登录</li></ul>
                     * @param _hitRule <p>命中策略ID</p><p>枚举值：</p><ul><li>risk_login_1： 威胁情报</li><li>risk_login_2： 密码破解成功后登录</li><li>risk_login_3： 弱口令账户登录</li><li>risk_login_4： 非法账户登录</li><li>risk_login_5： 登录后存在入侵行为</li><li>risk_login_101： 海外IP登录</li><li>risk_login_102： 非常用登录地登录</li><li>risk_login_103： 非工作时间登录</li></ul>
                     * 
                     */
                    void SetHitRule(const std::string& _hitRule);

                    /**
                     * 判断参数 HitRule 是否已赋值
                     * @return HitRule 是否已赋值
                     * 
                     */
                    bool HitRuleHasBeenSet() const;

                    /**
                     * 获取<p>命中策略名</p>
                     * @return HitRuleName <p>命中策略名</p>
                     * 
                     */
                    std::string GetHitRuleName() const;

                    /**
                     * 设置<p>命中策略名</p>
                     * @param _hitRuleName <p>命中策略名</p>
                     * 
                     */
                    void SetHitRuleName(const std::string& _hitRuleName);

                    /**
                     * 判断参数 HitRuleName 是否已赋值
                     * @return HitRuleName 是否已赋值
                     * 
                     */
                    bool HitRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>告警数量</p>
                     * @return AlertCount <p>告警数量</p>
                     * 
                     */
                    int64_t GetAlertCount() const;

                    /**
                     * 设置<p>告警数量</p>
                     * @param _alertCount <p>告警数量</p>
                     * 
                     */
                    void SetAlertCount(const int64_t& _alertCount);

                    /**
                     * 判断参数 AlertCount 是否已赋值
                     * @return AlertCount 是否已赋值
                     * 
                     */
                    bool AlertCountHasBeenSet() const;

                    /**
                     * 获取<p>首次发现时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * @return FirstDiscoverTime <p>首次发现时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    std::string GetFirstDiscoverTime() const;

                    /**
                     * 设置<p>首次发现时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * @param _firstDiscoverTime <p>首次发现时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    void SetFirstDiscoverTime(const std::string& _firstDiscoverTime);

                    /**
                     * 判断参数 FirstDiscoverTime 是否已赋值
                     * @return FirstDiscoverTime 是否已赋值
                     * 
                     */
                    bool FirstDiscoverTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近发现时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * @return LastDiscoverTime <p>最近发现时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    std::string GetLastDiscoverTime() const;

                    /**
                     * 设置<p>最近发现时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * @param _lastDiscoverTime <p>最近发现时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    void SetLastDiscoverTime(const std::string& _lastDiscoverTime);

                    /**
                     * 判断参数 LastDiscoverTime 是否已赋值
                     * @return LastDiscoverTime 是否已赋值
                     * 
                     */
                    bool LastDiscoverTimeHasBeenSet() const;

                    /**
                     * 获取<p>危害描述</p>
                     * @return HarmDescribe <p>危害描述</p>
                     * 
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 设置<p>危害描述</p>
                     * @param _harmDescribe <p>危害描述</p>
                     * 
                     */
                    void SetHarmDescribe(const std::string& _harmDescribe);

                    /**
                     * 判断参数 HarmDescribe 是否已赋值
                     * @return HarmDescribe 是否已赋值
                     * 
                     */
                    bool HarmDescribeHasBeenSet() const;

                    /**
                     * 获取<p>修复建议</p>
                     * @return SuggestScheme <p>修复建议</p>
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 设置<p>修复建议</p>
                     * @param _suggestScheme <p>修复建议</p>
                     * 
                     */
                    void SetSuggestScheme(const std::string& _suggestScheme);

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     * 
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取<p>最近登录历史</p>
                     * @return RecentLoginList <p>最近登录历史</p>
                     * 
                     */
                    std::vector<RecentLoginItem> GetRecentLoginList() const;

                    /**
                     * 设置<p>最近登录历史</p>
                     * @param _recentLoginList <p>最近登录历史</p>
                     * 
                     */
                    void SetRecentLoginList(const std::vector<RecentLoginItem>& _recentLoginList);

                    /**
                     * 判断参数 RecentLoginList 是否已赋值
                     * @return RecentLoginList 是否已赋值
                     * 
                     */
                    bool RecentLoginListHasBeenSet() const;

                private:

                    /**
                     * <p>记录Id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>主机Uuid</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>主机ip</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>主机名</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>来源ip</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>1:正常登录；2异地登录； 5已加白； 14：已处理；15：已忽略。</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>国家id</p>
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>城市id</p>
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>省份id</p>
                     */
                    uint64_t m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * <p>登录时间</p>
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>是否命中异地登录异常  1表示命中此类异常, 0表示未命中</p>
                     */
                    uint64_t m_isRiskArea;
                    bool m_isRiskAreaHasBeenSet;

                    /**
                     * <p>是否命中异常用户异常 1表示命中此类异常, 0表示未命中</p>
                     */
                    uint64_t m_isRiskUser;
                    bool m_isRiskUserHasBeenSet;

                    /**
                     * <p>是否命中异常时间异常 1表示命中此类异常, 0表示未命中</p>
                     */
                    uint64_t m_isRiskTime;
                    bool m_isRiskTimeHasBeenSet;

                    /**
                     * <p>是否命中异常IP异常 1表示命中此类异常, 0表示未命中</p>
                     */
                    uint64_t m_isRiskSrcIp;
                    bool m_isRiskSrcIpHasBeenSet;

                    /**
                     * <p>危险等级：<br>0 高危<br>1 可疑</p>
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>位置名称</p>
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>主机quuid</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>高危信息说明：<br>ABROAD - 境外IP；<br>XTI - 威胁情报</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>附加信息</p>
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * <p>请求目的端口</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>ip分析</p>
                     */
                    IPAnalyse m_iPAnalyse;
                    bool m_iPAnalyseHasBeenSet;

                    /**
                     * <p>命中策略ID</p><p>枚举值：</p><ul><li>risk_login_1： 威胁情报</li><li>risk_login_2： 密码破解成功后登录</li><li>risk_login_3： 弱口令账户登录</li><li>risk_login_4： 非法账户登录</li><li>risk_login_5： 登录后存在入侵行为</li><li>risk_login_101： 海外IP登录</li><li>risk_login_102： 非常用登录地登录</li><li>risk_login_103： 非工作时间登录</li></ul>
                     */
                    std::string m_hitRule;
                    bool m_hitRuleHasBeenSet;

                    /**
                     * <p>命中策略名</p>
                     */
                    std::string m_hitRuleName;
                    bool m_hitRuleNameHasBeenSet;

                    /**
                     * <p>告警数量</p>
                     */
                    int64_t m_alertCount;
                    bool m_alertCountHasBeenSet;

                    /**
                     * <p>首次发现时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     */
                    std::string m_firstDiscoverTime;
                    bool m_firstDiscoverTimeHasBeenSet;

                    /**
                     * <p>最近发现时间</p><p>参数格式：YYYY-MM-DD HH:MM:SS</p>
                     */
                    std::string m_lastDiscoverTime;
                    bool m_lastDiscoverTimeHasBeenSet;

                    /**
                     * <p>危害描述</p>
                     */
                    std::string m_harmDescribe;
                    bool m_harmDescribeHasBeenSet;

                    /**
                     * <p>修复建议</p>
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * <p>最近登录历史</p>
                     */
                    std::vector<RecentLoginItem> m_recentLoginList;
                    bool m_recentLoginListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINLIST_H_
