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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYASSET_H_

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
                * 访问密钥资产信息
                */
                class AccessKeyAsset : public AbstractModel
                {
                public:
                    AccessKeyAsset();
                    ~AccessKeyAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AK 的id
                     * @return ID AK 的id
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置AK 的id
                     * @param _iD AK 的id
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
                     * 获取AK名称
                     * @return Name AK名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置AK名称
                     * @param _name AK名称
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
                     * 获取所属主账号Uin
                     * @return Uin 所属主账号Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置所属主账号Uin
                     * @param _uin 所属主账号Uin
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
                     * 获取所属子账号Uin
                     * @return SubUin 所属子账号Uin
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置所属子账号Uin
                     * @param _subUin 所属子账号Uin
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
                     * 获取所属子账号昵称
                     * @return SubNickname 所属子账号昵称
                     * 
                     */
                    std::string GetSubNickname() const;

                    /**
                     * 设置所属子账号昵称
                     * @param _subNickname 所属子账号昵称
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
                     * 获取0 主账号AK
1 子账号AK
2 临时密钥
                     * @return Type 0 主账号AK
1 子账号AK
2 临时密钥
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0 主账号AK
1 子账号AK
2 临时密钥
                     * @param _type 0 主账号AK
1 子账号AK
2 临时密钥
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
                     * 获取安全建议 枚举
0 正常
1 立即处理
2 建议加固
                     * @return Advice 安全建议 枚举
0 正常
1 立即处理
2 建议加固
                     * 
                     */
                    int64_t GetAdvice() const;

                    /**
                     * 设置安全建议 枚举
0 正常
1 立即处理
2 建议加固
                     * @param _advice 安全建议 枚举
0 正常
1 立即处理
2 建议加固
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
                     * 获取源IP数量
                     * @return IPCount 源IP数量
                     * 
                     */
                    int64_t GetIPCount() const;

                    /**
                     * 设置源IP数量
                     * @param _iPCount 源IP数量
                     * 
                     */
                    void SetIPCount(const int64_t& _iPCount);

                    /**
                     * 判断参数 IPCount 是否已赋值
                     * @return IPCount 是否已赋值
                     * 
                     */
                    bool IPCountHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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
                     * 获取AK状态 
0:禁用
1:已启用
2:已删除(已在cam侧删除，安全中心仍然存留之前的记录)
                     * @return Status AK状态 
0:禁用
1:已启用
2:已删除(已在cam侧删除，安全中心仍然存留之前的记录)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置AK状态 
0:禁用
1:已启用
2:已删除(已在cam侧删除，安全中心仍然存留之前的记录)
                     * @param _status AK状态 
0:禁用
1:已启用
2:已删除(已在cam侧删除，安全中心仍然存留之前的记录)
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
                     * 获取0 表示已检测
1 表示检测中
                     * @return CheckStatus 0 表示已检测
1 表示检测中
                     * 
                     */
                    int64_t GetCheckStatus() const;

                    /**
                     * 设置0 表示已检测
1 表示检测中
                     * @param _checkStatus 0 表示已检测
1 表示检测中
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
                     * AK 的id
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * AK名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * 所属主账号Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 主账号昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 所属子账号Uin
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 所属子账号昵称
                     */
                    std::string m_subNickname;
                    bool m_subNicknameHasBeenSet;

                    /**
                     * 0 主账号AK
1 子账号AK
2 临时密钥
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 安全建议 枚举
0 正常
1 立即处理
2 建议加固
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
                     * 源IP数量
                     */
                    int64_t m_iPCount;
                    bool m_iPCountHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近访问时间
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * AK状态 
0:禁用
1:已启用
2:已删除(已在cam侧删除，安全中心仍然存留之前的记录)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0 表示已检测
1 表示检测中
                     */
                    int64_t m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYASSET_H_
