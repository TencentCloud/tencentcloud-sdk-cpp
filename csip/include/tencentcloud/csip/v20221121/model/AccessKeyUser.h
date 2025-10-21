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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYUSER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccessKeyAlarmInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 访问密钥账号信息
                */
                class AccessKeyUser : public AbstractModel
                {
                public:
                    AccessKeyUser();
                    ~AccessKeyUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号ID
                     * @return ID 账号ID
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置账号ID
                     * @param _iD 账号ID
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取账号名称
                     * @return Name 账号名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账号名称
                     * @param _name 账号名称
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
                     * 获取0 主账号 1子账号
                     * @return Type 0 主账号 1子账号
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0 主账号 1子账号
                     * @param _type 0 主账号 1子账号
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取访问方式
0 API
1 控制台与API
                     * @return AccessType 访问方式
0 API
1 控制台与API
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置访问方式
0 API
1 控制台与API
                     * @param _accessType 访问方式
0 API
1 控制台与API
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取安全建议 枚举 0 正常 1 立即处理 2 建议加固
                     * @return Advice 安全建议 枚举 0 正常 1 立即处理 2 建议加固
                     * 
                     */
                    int64_t GetAdvice() const;

                    /**
                     * 设置安全建议 枚举 0 正常 1 立即处理 2 建议加固
                     * @param _advice 安全建议 枚举 0 正常 1 立即处理 2 建议加固
                     * 
                     */
                    void SetAdvice(const int64_t& _advice);

                    /**
                     * 判断参数 Advice 是否已赋值
                     * @return Advice 是否已赋值
                     * 
                     */
                    bool AdviceHasBeenSet() const;

                    /**
                     * 获取告警信息列表
                     * @return AccessKeyAlarmList 告警信息列表
                     * 
                     */
                    std::vector<AccessKeyAlarmInfo> GetAccessKeyAlarmList() const;

                    /**
                     * 设置告警信息列表
                     * @param _accessKeyAlarmList 告警信息列表
                     * 
                     */
                    void SetAccessKeyAlarmList(const std::vector<AccessKeyAlarmInfo>& _accessKeyAlarmList);

                    /**
                     * 判断参数 AccessKeyAlarmList 是否已赋值
                     * @return AccessKeyAlarmList 是否已赋值
                     * 
                     */
                    bool AccessKeyAlarmListHasBeenSet() const;

                    /**
                     * 获取风险信息列表
                     * @return AccessKeyRiskList 风险信息列表
                     * 
                     */
                    std::vector<AccessKeyAlarmInfo> GetAccessKeyRiskList() const;

                    /**
                     * 设置风险信息列表
                     * @param _accessKeyRiskList 风险信息列表
                     * 
                     */
                    void SetAccessKeyRiskList(const std::vector<AccessKeyAlarmInfo>& _accessKeyRiskList);

                    /**
                     * 判断参数 AccessKeyRiskList 是否已赋值
                     * @return AccessKeyRiskList 是否已赋值
                     * 
                     */
                    bool AccessKeyRiskListHasBeenSet() const;

                    /**
                     * 获取账号所属APPID
                     * @return AppID 账号所属APPID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置账号所属APPID
                     * @param _appID 账号所属APPID
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取主账号昵称
                     * @return Nickname 主账号昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置主账号昵称
                     * @param _nickname 主账号昵称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取子账号昵称
                     * @return SubNickname 子账号昵称
                     * 
                     */
                    std::string GetSubNickname() const;

                    /**
                     * 设置子账号昵称
                     * @param _subNickname 子账号昵称
                     * 
                     */
                    void SetSubNickname(const std::string& _subNickname);

                    /**
                     * 判断参数 SubNickname 是否已赋值
                     * @return SubNickname 是否已赋值
                     * 
                     */
                    bool SubNicknameHasBeenSet() const;

                    /**
                     * 获取账号所属主账号Uin
                     * @return Uin 账号所属主账号Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账号所属主账号Uin
                     * @param _uin 账号所属主账号Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取账号自身uin，主账号时与主账号uin一致
                     * @return SubUin 账号自身uin，主账号时与主账号uin一致
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置账号自身uin，主账号时与主账号uin一致
                     * @param _subUin 账号自身uin，主账号时与主账号uin一致
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取登录IP
                     * @return LoginIP 登录IP
                     * 
                     */
                    std::string GetLoginIP() const;

                    /**
                     * 设置登录IP
                     * @param _loginIP 登录IP
                     * 
                     */
                    void SetLoginIP(const std::string& _loginIP);

                    /**
                     * 判断参数 LoginIP 是否已赋值
                     * @return LoginIP 是否已赋值
                     * 
                     */
                    bool LoginIPHasBeenSet() const;

                    /**
                     * 获取登录地址
                     * @return LoginLocation 登录地址
                     * 
                     */
                    std::string GetLoginLocation() const;

                    /**
                     * 设置登录地址
                     * @param _loginLocation 登录地址
                     * 
                     */
                    void SetLoginLocation(const std::string& _loginLocation);

                    /**
                     * 判断参数 LoginLocation 是否已赋值
                     * @return LoginLocation 是否已赋值
                     * 
                     */
                    bool LoginLocationHasBeenSet() const;

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
                     * 获取运营商名称
                     * @return ISP 运营商名称
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置运营商名称
                     * @param _iSP 运营商名称
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取操作保护是否开启
0 未开启
1 已开启
                     * @return ActionFlag 操作保护是否开启
0 未开启
1 已开启
                     * 
                     */
                    int64_t GetActionFlag() const;

                    /**
                     * 设置操作保护是否开启
0 未开启
1 已开启
                     * @param _actionFlag 操作保护是否开启
0 未开启
1 已开启
                     * 
                     */
                    void SetActionFlag(const int64_t& _actionFlag);

                    /**
                     * 判断参数 ActionFlag 是否已赋值
                     * @return ActionFlag 是否已赋值
                     * 
                     */
                    bool ActionFlagHasBeenSet() const;

                    /**
                     * 获取登录保护是否开启
0 未开启
1 已开启
                     * @return LoginFlag 登录保护是否开启
0 未开启
1 已开启
                     * 
                     */
                    int64_t GetLoginFlag() const;

                    /**
                     * 设置登录保护是否开启
0 未开启
1 已开启
                     * @param _loginFlag 登录保护是否开启
0 未开启
1 已开启
                     * 
                     */
                    void SetLoginFlag(const int64_t& _loginFlag);

                    /**
                     * 判断参数 LoginFlag 是否已赋值
                     * @return LoginFlag 是否已赋值
                     * 
                     */
                    bool LoginFlagHasBeenSet() const;

                    /**
                     * 获取0 表示已检测 1 表示检测中
                     * @return CheckStatus 0 表示已检测 1 表示检测中
                     * 
                     */
                    int64_t GetCheckStatus() const;

                    /**
                     * 设置0 表示已检测 1 表示检测中
                     * @param _checkStatus 0 表示已检测 1 表示检测中
                     * 
                     */
                    void SetCheckStatus(const int64_t& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                private:

                    /**
                     * 账号ID
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 账号名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 0 主账号 1子账号
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 访问方式
0 API
1 控制台与API
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 安全建议 枚举 0 正常 1 立即处理 2 建议加固
                     */
                    int64_t m_advice;
                    bool m_adviceHasBeenSet;

                    /**
                     * 告警信息列表
                     */
                    std::vector<AccessKeyAlarmInfo> m_accessKeyAlarmList;
                    bool m_accessKeyAlarmListHasBeenSet;

                    /**
                     * 风险信息列表
                     */
                    std::vector<AccessKeyAlarmInfo> m_accessKeyRiskList;
                    bool m_accessKeyRiskListHasBeenSet;

                    /**
                     * 账号所属APPID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 主账号昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 子账号昵称
                     */
                    std::string m_subNickname;
                    bool m_subNicknameHasBeenSet;

                    /**
                     * 账号所属主账号Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 账号自身uin，主账号时与主账号uin一致
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 登录IP
                     */
                    std::string m_loginIP;
                    bool m_loginIPHasBeenSet;

                    /**
                     * 登录地址
                     */
                    std::string m_loginLocation;
                    bool m_loginLocationHasBeenSet;

                    /**
                     * 登录时间
                     */
                    std::string m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * 运营商名称
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * 操作保护是否开启
0 未开启
1 已开启
                     */
                    int64_t m_actionFlag;
                    bool m_actionFlagHasBeenSet;

                    /**
                     * 登录保护是否开启
0 未开启
1 已开启
                     */
                    int64_t m_loginFlag;
                    bool m_loginFlagHasBeenSet;

                    /**
                     * 0 表示已检测 1 表示检测中
                     */
                    int64_t m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYUSER_H_
