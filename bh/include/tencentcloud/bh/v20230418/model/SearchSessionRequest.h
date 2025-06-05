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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHSESSIONREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * SearchSession请求参数结构体
                */
                class SearchSessionRequest : public AbstractModel
                {
                public:
                    SearchSessionRequest();
                    ~SearchSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取内部Ip
                     * @return PrivateIp 内部Ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内部Ip
                     * @param _privateIp 内部Ip
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取外部Ip
                     * @return PublicIp 外部Ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置外部Ip
                     * @param _publicIp 外部Ip
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取用户名，长度不超过20
                     * @return UserName 用户名，长度不超过20
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名，长度不超过20
                     * @param _userName 用户名，长度不超过20
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
                     * 获取账号，长度不超过64
                     * @return Account 账号，长度不超过64
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置账号，长度不超过64
                     * @param _account 账号，长度不超过64
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取来源Ip
                     * @return FromIp 来源Ip
                     * 
                     */
                    std::string GetFromIp() const;

                    /**
                     * 设置来源Ip
                     * @param _fromIp 来源Ip
                     * 
                     */
                    void SetFromIp(const std::string& _fromIp);

                    /**
                     * 判断参数 FromIp 是否已赋值
                     * @return FromIp 是否已赋值
                     * 
                     */
                    bool FromIpHasBeenSet() const;

                    /**
                     * 获取搜索区间的开始时间。若入参是Id，则非必传，否则为必传。
                     * @return StartTime 搜索区间的开始时间。若入参是Id，则非必传，否则为必传。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置搜索区间的开始时间。若入参是Id，则非必传，否则为必传。
                     * @param _startTime 搜索区间的开始时间。若入参是Id，则非必传，否则为必传。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取搜索区间的结束时间
                     * @return EndTime 搜索区间的结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置搜索区间的结束时间
                     * @param _endTime 搜索区间的结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取会话协议类型，只能是1、2、3或4 对应关系为1-tui 2-gui 3-file 4-数据库。若入参是Id，则非必传，否则为必传。
                     * @return Kind 会话协议类型，只能是1、2、3或4 对应关系为1-tui 2-gui 3-file 4-数据库。若入参是Id，则非必传，否则为必传。
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置会话协议类型，只能是1、2、3或4 对应关系为1-tui 2-gui 3-file 4-数据库。若入参是Id，则非必传，否则为必传。
                     * @param _kind 会话协议类型，只能是1、2、3或4 对应关系为1-tui 2-gui 3-file 4-数据库。若入参是Id，则非必传，否则为必传。
                     * 
                     */
                    void SetKind(const uint64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页的页内记录数，默认为20，最大200
                     * @return Limit 分页的页内记录数，默认为20，最大200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页的页内记录数，默认为20，最大200
                     * @param _limit 分页的页内记录数，默认为20，最大200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取姓名，长度不超过20
                     * @return RealName 姓名，长度不超过20
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置姓名，长度不超过20
                     * @param _realName 姓名，长度不超过20
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取主机名，长度不超过64
                     * @return DeviceName 主机名，长度不超过64
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置主机名，长度不超过64
                     * @param _deviceName 主机名，长度不超过64
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取状态，1为活跃，2为结束，3为强制离线，4为其他错误
                     * @return Status 状态，1为活跃，2为结束，3为强制离线，4为其他错误
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态，1为活跃，2为结束，3为强制离线，4为其他错误
                     * @param _status 状态，1为活跃，2为结束，3为强制离线，4为其他错误
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
                     * 获取若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话
                     * @return Id 若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话
                     * @param _id 若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取应用资产类型, 1-web
                     * @return AppAssetKindSet 应用资产类型, 1-web
                     * 
                     */
                    std::vector<uint64_t> GetAppAssetKindSet() const;

                    /**
                     * 设置应用资产类型, 1-web
                     * @param _appAssetKindSet 应用资产类型, 1-web
                     * 
                     */
                    void SetAppAssetKindSet(const std::vector<uint64_t>& _appAssetKindSet);

                    /**
                     * 判断参数 AppAssetKindSet 是否已赋值
                     * @return AppAssetKindSet 是否已赋值
                     * 
                     */
                    bool AppAssetKindSetHasBeenSet() const;

                    /**
                     * 获取应用资产Url
                     * @return AppAssetUrl 应用资产Url
                     * 
                     */
                    std::string GetAppAssetUrl() const;

                    /**
                     * 设置应用资产Url
                     * @param _appAssetUrl 应用资产Url
                     * 
                     */
                    void SetAppAssetUrl(const std::string& _appAssetUrl);

                    /**
                     * 判断参数 AppAssetUrl 是否已赋值
                     * @return AppAssetUrl 是否已赋值
                     * 
                     */
                    bool AppAssetUrlHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return DeviceKind 资产类型
                     * 
                     */
                    std::string GetDeviceKind() const;

                    /**
                     * 设置资产类型
                     * @param _deviceKind 资产类型
                     * 
                     */
                    void SetDeviceKind(const std::string& _deviceKind);

                    /**
                     * 判断参数 DeviceKind 是否已赋值
                     * @return DeviceKind 是否已赋值
                     * 
                     */
                    bool DeviceKindHasBeenSet() const;

                private:

                    /**
                     * 内部Ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 外部Ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 用户名，长度不超过20
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 账号，长度不超过64
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 来源Ip
                     */
                    std::string m_fromIp;
                    bool m_fromIpHasBeenSet;

                    /**
                     * 搜索区间的开始时间。若入参是Id，则非必传，否则为必传。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 搜索区间的结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 会话协议类型，只能是1、2、3或4 对应关系为1-tui 2-gui 3-file 4-数据库。若入参是Id，则非必传，否则为必传。
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的页内记录数，默认为20，最大200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 姓名，长度不超过20
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 主机名，长度不超过64
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 状态，1为活跃，2为结束，3为强制离线，4为其他错误
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 应用资产类型, 1-web
                     */
                    std::vector<uint64_t> m_appAssetKindSet;
                    bool m_appAssetKindSetHasBeenSet;

                    /**
                     * 应用资产Url
                     */
                    std::string m_appAssetUrl;
                    bool m_appAssetUrlHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_deviceKind;
                    bool m_deviceKindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHSESSIONREQUEST_H_
