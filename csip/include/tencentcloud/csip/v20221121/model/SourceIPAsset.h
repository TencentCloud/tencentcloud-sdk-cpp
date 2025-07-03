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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccessKeyAlarmInfo.h>
#include <tencentcloud/csip/v20221121/model/AKInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 访问密钥资产信息（源IP角度）
                */
                class SourceIPAsset : public AbstractModel
                {
                public:
                    SourceIPAsset();
                    ~SourceIPAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源IP id
                     * @return ID 源IP id
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置源IP id
                     * @param _iD 源IP id
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
                     * 获取源IP
                     * @return SourceIP 源IP
                     * 
                     */
                    std::string GetSourceIP() const;

                    /**
                     * 设置源IP
                     * @param _sourceIP 源IP
                     * 
                     */
                    void SetSourceIP(const std::string& _sourceIP);

                    /**
                     * 判断参数 SourceIP 是否已赋值
                     * @return SourceIP 是否已赋值
                     * 
                     */
                    bool SourceIPHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

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
                     * 获取IP地域
                     * @return Region IP地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置IP地域
                     * @param _region IP地域
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
                     * 获取调用方式
0:控制台调用
1:API
                     * @return EventType 调用方式
0:控制台调用
1:API
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置调用方式
0:控制台调用
1:API
                     * @param _eventType 调用方式
0:控制台调用
1:API
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取IP类型
0:账号内（未备注）
1:账号外（未备注）
2:账号内   (已备注)
3:账号外   (已备注)
                     * @return IPType IP类型
0:账号内（未备注）
1:账号外（未备注）
2:账号内   (已备注)
3:账号外   (已备注)
                     * 
                     */
                    int64_t GetIPType() const;

                    /**
                     * 设置IP类型
0:账号内（未备注）
1:账号外（未备注）
2:账号内   (已备注)
3:账号外   (已备注)
                     * @param _iPType IP类型
0:账号内（未备注）
1:账号外（未备注）
2:账号内   (已备注)
3:账号外   (已备注)
                     * 
                     */
                    void SetIPType(const int64_t& _iPType);

                    /**
                     * 判断参数 IPType 是否已赋值
                     * @return IPType 是否已赋值
                     * 
                     */
                    bool IPTypeHasBeenSet() const;

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
                     * 获取ak信息列表
                     * @return AKInfo ak信息列表
                     * 
                     */
                    std::vector<AKInfo> GetAKInfo() const;

                    /**
                     * 设置ak信息列表
                     * @param _aKInfo ak信息列表
                     * 
                     */
                    void SetAKInfo(const std::vector<AKInfo>& _aKInfo);

                    /**
                     * 判断参数 AKInfo 是否已赋值
                     * @return AKInfo 是否已赋值
                     * 
                     */
                    bool AKInfoHasBeenSet() const;

                    /**
                     * 获取调用接口数量
                     * @return ActionCount 调用接口数量
                     * 
                     */
                    int64_t GetActionCount() const;

                    /**
                     * 设置调用接口数量
                     * @param _actionCount 调用接口数量
                     * 
                     */
                    void SetActionCount(const int64_t& _actionCount);

                    /**
                     * 判断参数 ActionCount 是否已赋值
                     * @return ActionCount 是否已赋值
                     * 
                     */
                    bool ActionCountHasBeenSet() const;

                    /**
                     * 获取最近访问时间
                     * @return LastAccessTime 最近访问时间
                     * 
                     */
                    std::string GetLastAccessTime() const;

                    /**
                     * 设置最近访问时间
                     * @param _lastAccessTime 最近访问时间
                     * 
                     */
                    void SetLastAccessTime(const std::string& _lastAccessTime);

                    /**
                     * 判断参数 LastAccessTime 是否已赋值
                     * @return LastAccessTime 是否已赋值
                     * 
                     */
                    bool LastAccessTimeHasBeenSet() const;

                    /**
                     * 获取IP关联实例ID，如果为空字符串，代表非账号内资产
                     * @return InstanceID IP关联实例ID，如果为空字符串，代表非账号内资产
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置IP关联实例ID，如果为空字符串，代表非账号内资产
                     * @param _instanceID IP关联实例ID，如果为空字符串，代表非账号内资产
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取IP关联实例名称
                     * @return InstanceName IP关联实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置IP关联实例名称
                     * @param _instanceName IP关联实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取账号所属Uin
                     * @return Uin 账号所属Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账号所属Uin
                     * @param _uin 账号所属Uin
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
                     * 获取昵称
                     * @return Nickname 昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置昵称
                     * @param _nickname 昵称
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
                     * 获取展示状态
                     * @return ShowStatus 展示状态
                     * 
                     */
                    bool GetShowStatus() const;

                    /**
                     * 设置展示状态
                     * @param _showStatus 展示状态
                     * 
                     */
                    void SetShowStatus(const bool& _showStatus);

                    /**
                     * 判断参数 ShowStatus 是否已赋值
                     * @return ShowStatus 是否已赋值
                     * 
                     */
                    bool ShowStatusHasBeenSet() const;

                    /**
                     * 获取运营商字段
                     * @return ISP 运营商字段
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置运营商字段
                     * @param _iSP 运营商字段
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                private:

                    /**
                     * 源IP id
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 源IP
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 账号所属APPID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * IP地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 调用方式
0:控制台调用
1:API
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * IP类型
0:账号内（未备注）
1:账号外（未备注）
2:账号内   (已备注)
3:账号外   (已备注)
                     */
                    int64_t m_iPType;
                    bool m_iPTypeHasBeenSet;

                    /**
                     * 告警信息列表
                     */
                    std::vector<AccessKeyAlarmInfo> m_accessKeyAlarmList;
                    bool m_accessKeyAlarmListHasBeenSet;

                    /**
                     * ak信息列表
                     */
                    std::vector<AKInfo> m_aKInfo;
                    bool m_aKInfoHasBeenSet;

                    /**
                     * 调用接口数量
                     */
                    int64_t m_actionCount;
                    bool m_actionCountHasBeenSet;

                    /**
                     * 最近访问时间
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * IP关联实例ID，如果为空字符串，代表非账号内资产
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * IP关联实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 账号所属Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 展示状态
                     */
                    bool m_showStatus;
                    bool m_showStatusHasBeenSet;

                    /**
                     * 运营商字段
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SOURCEIPASSET_H_
