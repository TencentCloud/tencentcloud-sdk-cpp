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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYWHITELIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYWHITELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 访问密钥告警规则白名单
                */
                class AccessKeyWhiteList : public AbstractModel
                {
                public:
                    AccessKeyWhiteList();
                    ~AccessKeyWhiteList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白名单ID
                     * @return ID 白名单ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置白名单ID
                     * @param _iD 白名单ID
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
                     * 获取白名单策略名称
                     * @return Name 白名单策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置白名单策略名称
                     * @param _name 白名单策略名称
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
                     * 获取ak加白列表
                     * @return AKList ak加白列表
                     * 
                     */
                    std::vector<std::string> GetAKList() const;

                    /**
                     * 设置ak加白列表
                     * @param _aKList ak加白列表
                     * 
                     */
                    void SetAKList(const std::vector<std::string>& _aKList);

                    /**
                     * 判断参数 AKList 是否已赋值
                     * @return AKList 是否已赋值
                     * 
                     */
                    bool AKListHasBeenSet() const;

                    /**
                     * 获取ip加白列表
                     * @return IPList ip加白列表
                     * 
                     */
                    std::vector<std::string> GetIPList() const;

                    /**
                     * 设置ip加白列表
                     * @param _iPList ip加白列表
                     * 
                     */
                    void SetIPList(const std::vector<std::string>& _iPList);

                    /**
                     * 判断参数 IPList 是否已赋值
                     * @return IPList 是否已赋值
                     * 
                     */
                    bool IPListHasBeenSet() const;

                    /**
                     * 获取ip类型列表 IP类型 0:账号内（未备注） 1:账号外（未备注） 2:账号内 (已备注) 3:账号外 (已备注) 4:局域网（未备注）5:局域网（已备注）
                     * @return IPTypeList ip类型列表 IP类型 0:账号内（未备注） 1:账号外（未备注） 2:账号内 (已备注) 3:账号外 (已备注) 4:局域网（未备注）5:局域网（已备注）
                     * 
                     */
                    std::vector<int64_t> GetIPTypeList() const;

                    /**
                     * 设置ip类型列表 IP类型 0:账号内（未备注） 1:账号外（未备注） 2:账号内 (已备注) 3:账号外 (已备注) 4:局域网（未备注）5:局域网（已备注）
                     * @param _iPTypeList ip类型列表 IP类型 0:账号内（未备注） 1:账号外（未备注） 2:账号内 (已备注) 3:账号外 (已备注) 4:局域网（未备注）5:局域网（已备注）
                     * 
                     */
                    void SetIPTypeList(const std::vector<int64_t>& _iPTypeList);

                    /**
                     * 判断参数 IPTypeList 是否已赋值
                     * @return IPTypeList 是否已赋值
                     * 
                     */
                    bool IPTypeListHasBeenSet() const;

                    /**
                     * 获取接口加白列表
                     * @return ActionList 接口加白列表
                     * 
                     */
                    std::vector<std::string> GetActionList() const;

                    /**
                     * 设置接口加白列表
                     * @param _actionList 接口加白列表
                     * 
                     */
                    void SetActionList(const std::vector<std::string>& _actionList);

                    /**
                     * 判断参数 ActionList 是否已赋值
                     * @return ActionList 是否已赋值
                     * 
                     */
                    bool ActionListHasBeenSet() const;

                    /**
                     * 获取调用方式加白
0 全部调用方式
1 控制台
2 API
-1 不存在
                     * @return CallType 调用方式加白
0 全部调用方式
1 控制台
2 API
-1 不存在
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 设置调用方式加白
0 全部调用方式
1 控制台
2 API
-1 不存在
                     * @param _callType 调用方式加白
0 全部调用方式
1 控制台
2 API
-1 不存在
                     * 
                     */
                    void SetCallType(const int64_t& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取错误码白名单（其他错误码待补充）
0 成功

                     * @return ErrorCodeList 错误码白名单（其他错误码待补充）
0 成功

                     * 
                     */
                    std::vector<int64_t> GetErrorCodeList() const;

                    /**
                     * 设置错误码白名单（其他错误码待补充）
0 成功

                     * @param _errorCodeList 错误码白名单（其他错误码待补充）
0 成功

                     * 
                     */
                    void SetErrorCodeList(const std::vector<int64_t>& _errorCodeList);

                    /**
                     * 判断参数 ErrorCodeList 是否已赋值
                     * @return ErrorCodeList 是否已赋值
                     * 
                     */
                    bool ErrorCodeListHasBeenSet() const;

                    /**
                     * 获取策略内容/描述
                     * @return Remark 策略内容/描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置策略内容/描述
                     * @param _remark 策略内容/描述
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取ak输入类型 
0:从现有选择
1:手动输入
2:临时密钥
3:长期密钥
4:全部密钥
-1:无
                     * @return AkImportType ak输入类型 
0:从现有选择
1:手动输入
2:临时密钥
3:长期密钥
4:全部密钥
-1:无
                     * 
                     */
                    int64_t GetAkImportType() const;

                    /**
                     * 设置ak输入类型 
0:从现有选择
1:手动输入
2:临时密钥
3:长期密钥
4:全部密钥
-1:无
                     * @param _akImportType ak输入类型 
0:从现有选择
1:手动输入
2:临时密钥
3:长期密钥
4:全部密钥
-1:无
                     * 
                     */
                    void SetAkImportType(const int64_t& _akImportType);

                    /**
                     * 判断参数 AkImportType 是否已赋值
                     * @return AkImportType 是否已赋值
                     * 
                     */
                    bool AkImportTypeHasBeenSet() const;

                    /**
                     * 获取主账号AppID
                     * @return AppID 主账号AppID
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置主账号AppID
                     * @param _appID 主账号AppID
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取所属主账号uin
                     * @return Uin 所属主账号uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置所属主账号uin
                     * @param _uin 所属主账号uin
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
                     * 获取所属主账号 昵称
                     * @return Nickname 所属主账号 昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置所属主账号 昵称
                     * @param _nickname 所属主账号 昵称
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
                     * 获取是否处理过去的告警
                     * @return NeedDealPastAlarm 是否处理过去的告警
                     * 
                     */
                    bool GetNeedDealPastAlarm() const;

                    /**
                     * 设置是否处理过去的告警
                     * @param _needDealPastAlarm 是否处理过去的告警
                     * 
                     */
                    void SetNeedDealPastAlarm(const bool& _needDealPastAlarm);

                    /**
                     * 判断参数 NeedDealPastAlarm 是否已赋值
                     * @return NeedDealPastAlarm 是否已赋值
                     * 
                     */
                    bool NeedDealPastAlarmHasBeenSet() const;

                    /**
                     * 获取处理状态
0 处理完成
1 正在处理
                     * @return DealStatus 处理状态
0 处理完成
1 正在处理
                     * 
                     */
                    int64_t GetDealStatus() const;

                    /**
                     * 设置处理状态
0 处理完成
1 正在处理
                     * @param _dealStatus 处理状态
0 处理完成
1 正在处理
                     * 
                     */
                    void SetDealStatus(const int64_t& _dealStatus);

                    /**
                     * 判断参数 DealStatus 是否已赋值
                     * @return DealStatus 是否已赋值
                     * 
                     */
                    bool DealStatusHasBeenSet() const;

                    /**
                     * 获取接口选择
0:自定义输入
1:产品+接口形式交互选择
2:全部接口
                     * @return ActionType 接口选择
0:自定义输入
1:产品+接口形式交互选择
2:全部接口
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置接口选择
0:自定义输入
1:产品+接口形式交互选择
2:全部接口
                     * @param _actionType 接口选择
0:自定义输入
1:产品+接口形式交互选择
2:全部接口
                     * 
                     */
                    void SetActionType(const int64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取绑定策略id列表，为空代表全局生效
                     * @return AlarmPolicyID 绑定策略id列表，为空代表全局生效
                     * 
                     */
                    std::vector<int64_t> GetAlarmPolicyID() const;

                    /**
                     * 设置绑定策略id列表，为空代表全局生效
                     * @param _alarmPolicyID 绑定策略id列表，为空代表全局生效
                     * 
                     */
                    void SetAlarmPolicyID(const std::vector<int64_t>& _alarmPolicyID);

                    /**
                     * 判断参数 AlarmPolicyID 是否已赋值
                     * @return AlarmPolicyID 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIDHasBeenSet() const;

                private:

                    /**
                     * 白名单ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 白名单策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ak加白列表
                     */
                    std::vector<std::string> m_aKList;
                    bool m_aKListHasBeenSet;

                    /**
                     * ip加白列表
                     */
                    std::vector<std::string> m_iPList;
                    bool m_iPListHasBeenSet;

                    /**
                     * ip类型列表 IP类型 0:账号内（未备注） 1:账号外（未备注） 2:账号内 (已备注) 3:账号外 (已备注) 4:局域网（未备注）5:局域网（已备注）
                     */
                    std::vector<int64_t> m_iPTypeList;
                    bool m_iPTypeListHasBeenSet;

                    /**
                     * 接口加白列表
                     */
                    std::vector<std::string> m_actionList;
                    bool m_actionListHasBeenSet;

                    /**
                     * 调用方式加白
0 全部调用方式
1 控制台
2 API
-1 不存在
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * 错误码白名单（其他错误码待补充）
0 成功

                     */
                    std::vector<int64_t> m_errorCodeList;
                    bool m_errorCodeListHasBeenSet;

                    /**
                     * 策略内容/描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * ak输入类型 
0:从现有选择
1:手动输入
2:临时密钥
3:长期密钥
4:全部密钥
-1:无
                     */
                    int64_t m_akImportType;
                    bool m_akImportTypeHasBeenSet;

                    /**
                     * 主账号AppID
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 所属主账号uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 所属主账号 昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 是否处理过去的告警
                     */
                    bool m_needDealPastAlarm;
                    bool m_needDealPastAlarmHasBeenSet;

                    /**
                     * 处理状态
0 处理完成
1 正在处理
                     */
                    int64_t m_dealStatus;
                    bool m_dealStatusHasBeenSet;

                    /**
                     * 接口选择
0:自定义输入
1:产品+接口形式交互选择
2:全部接口
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 绑定策略id列表，为空代表全局生效
                     */
                    std::vector<int64_t> m_alarmPolicyID;
                    bool m_alarmPolicyIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYWHITELIST_H_
