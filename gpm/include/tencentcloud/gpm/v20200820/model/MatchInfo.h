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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MATCHINFO_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MATCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/StringKV.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * 匹配信息
                */
                class MatchInfo : public AbstractModel
                {
                public:
                    MatchInfo();
                    ~MatchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配code
                     * @return MatchCode 匹配code
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置匹配code
                     * @param _matchCode 匹配code
                     * 
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     * 
                     */
                    bool MatchCodeHasBeenSet() const;

                    /**
                     * 获取匹配名称
                     * @return MatchName 匹配名称
                     * 
                     */
                    std::string GetMatchName() const;

                    /**
                     * 设置匹配名称
                     * @param _matchName 匹配名称
                     * 
                     */
                    void SetMatchName(const std::string& _matchName);

                    /**
                     * 判断参数 MatchName 是否已赋值
                     * @return MatchName 是否已赋值
                     * 
                     */
                    bool MatchNameHasBeenSet() const;

                    /**
                     * 获取匹配描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchDesc 匹配描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMatchDesc() const;

                    /**
                     * 设置匹配描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchDesc 匹配描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchDesc(const std::string& _matchDesc);

                    /**
                     * 判断参数 MatchDesc 是否已赋值
                     * @return MatchDesc 是否已赋值
                     * 
                     */
                    bool MatchDescHasBeenSet() const;

                    /**
                     * 获取规则code
                     * @return RuleCode 规则code
                     * 
                     */
                    std::string GetRuleCode() const;

                    /**
                     * 设置规则code
                     * @param _ruleCode 规则code
                     * 
                     */
                    void SetRuleCode(const std::string& _ruleCode);

                    /**
                     * 判断参数 RuleCode 是否已赋值
                     * @return RuleCode 是否已赋值
                     * 
                     */
                    bool RuleCodeHasBeenSet() const;

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
                     * 获取超时时间
                     * @return Timeout 超时时间
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置超时时间
                     * @param _timeout 超时时间
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取接收通知地址
                     * @return NotifyUrl 接收通知地址
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置接收通知地址
                     * @param _notifyUrl 接收通知地址
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取是否为匹配结果请求服务器资源，0否，1请求GSE资源
                     * @return ServerType 是否为匹配结果请求服务器资源，0否，1请求GSE资源
                     * 
                     */
                    int64_t GetServerType() const;

                    /**
                     * 设置是否为匹配结果请求服务器资源，0否，1请求GSE资源
                     * @param _serverType 是否为匹配结果请求服务器资源，0否，1请求GSE资源
                     * 
                     */
                    void SetServerType(const int64_t& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     * 
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取服务器队列所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerRegion 服务器队列所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerRegion() const;

                    /**
                     * 设置服务器队列所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverRegion 服务器队列所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerRegion(const std::string& _serverRegion);

                    /**
                     * 判断参数 ServerRegion 是否已赋值
                     * @return ServerRegion 是否已赋值
                     * 
                     */
                    bool ServerRegionHasBeenSet() const;

                    /**
                     * 获取服务器队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerQueue 服务器队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerQueue() const;

                    /**
                     * 设置服务器队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverQueue 服务器队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerQueue(const std::string& _serverQueue);

                    /**
                     * 判断参数 ServerQueue 是否已赋值
                     * @return ServerQueue 是否已赋值
                     * 
                     */
                    bool ServerQueueHasBeenSet() const;

                    /**
                     * 获取自定义推送数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomPushData 自定义推送数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomPushData() const;

                    /**
                     * 设置自定义推送数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customPushData 自定义推送数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomPushData(const std::string& _customPushData);

                    /**
                     * 判断参数 CustomPushData 是否已赋值
                     * @return CustomPushData 是否已赋值
                     * 
                     */
                    bool CustomPushDataHasBeenSet() const;

                    /**
                     * 获取游戏服务器会话数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerSessionData 游戏服务器会话数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerSessionData() const;

                    /**
                     * 设置游戏服务器会话数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverSessionData 游戏服务器会话数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerSessionData(const std::string& _serverSessionData);

                    /**
                     * 判断参数 ServerSessionData 是否已赋值
                     * @return ServerSessionData 是否已赋值
                     * 
                     */
                    bool ServerSessionDataHasBeenSet() const;

                    /**
                     * 获取游戏属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameProperties 游戏属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StringKV> GetGameProperties() const;

                    /**
                     * 设置游戏属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gameProperties 游戏属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGameProperties(const std::vector<StringKV>& _gameProperties);

                    /**
                     * 判断参数 GameProperties 是否已赋值
                     * @return GameProperties 是否已赋值
                     * 
                     */
                    bool GamePropertiesHasBeenSet() const;

                    /**
                     * 获取日志开关，0表示关，1表示开
                     * @return LogSwitch 日志开关，0表示关，1表示开
                     * 
                     */
                    int64_t GetLogSwitch() const;

                    /**
                     * 设置日志开关，0表示关，1表示开
                     * @param _logSwitch 日志开关，0表示关，1表示开
                     * 
                     */
                    void SetLogSwitch(const int64_t& _logSwitch);

                    /**
                     * 判断参数 LogSwitch 是否已赋值
                     * @return LogSwitch 是否已赋值
                     * 
                     */
                    bool LogSwitchHasBeenSet() const;

                    /**
                     * 获取日志集id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogsetId 日志集id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logsetId 日志集id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志集名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogsetName 日志集名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置日志集名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logsetName 日志集名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取日志主题id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTopicId 日志主题id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置日志主题id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logTopicId 日志主题id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取日志主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTopicName 日志主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogTopicName() const;

                    /**
                     * 设置日志主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logTopicName 日志主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogTopicName(const std::string& _logTopicName);

                    /**
                     * 判断参数 LogTopicName 是否已赋值
                     * @return LogTopicName 是否已赋值
                     * 
                     */
                    bool LogTopicNameHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StringKV> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<StringKV>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地区
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户主账号Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户主账号Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户主账号Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 用户主账号Uin
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户创建账号Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin 用户创建账号Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置用户创建账号Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUin 用户创建账号Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取日志状态，0表示正常，1表示日志集不存在，2表示日志主题不存在，3表示日志集和日志主题都不存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogStatus 日志状态，0表示正常，1表示日志集不存在，2表示日志主题不存在，3表示日志集和日志主题都不存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogStatus() const;

                    /**
                     * 设置日志状态，0表示正常，1表示日志集不存在，2表示日志主题不存在，3表示日志集和日志主题都不存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logStatus 日志状态，0表示正常，1表示日志集不存在，2表示日志主题不存在，3表示日志集和日志主题都不存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogStatus(const int64_t& _logStatus);

                    /**
                     * 判断参数 LogStatus 是否已赋值
                     * @return LogStatus 是否已赋值
                     * 
                     */
                    bool LogStatusHasBeenSet() const;

                private:

                    /**
                     * 匹配code
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                    /**
                     * 匹配名称
                     */
                    std::string m_matchName;
                    bool m_matchNameHasBeenSet;

                    /**
                     * 匹配描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchDesc;
                    bool m_matchDescHasBeenSet;

                    /**
                     * 规则code
                     */
                    std::string m_ruleCode;
                    bool m_ruleCodeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 超时时间
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 接收通知地址
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 是否为匹配结果请求服务器资源，0否，1请求GSE资源
                     */
                    int64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * 服务器队列所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverRegion;
                    bool m_serverRegionHasBeenSet;

                    /**
                     * 服务器队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverQueue;
                    bool m_serverQueueHasBeenSet;

                    /**
                     * 自定义推送数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customPushData;
                    bool m_customPushDataHasBeenSet;

                    /**
                     * 游戏服务器会话数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverSessionData;
                    bool m_serverSessionDataHasBeenSet;

                    /**
                     * 游戏属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StringKV> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * 日志开关，0表示关，1表示开
                     */
                    int64_t m_logSwitch;
                    bool m_logSwitchHasBeenSet;

                    /**
                     * 日志集id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志集名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 日志主题id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * 日志主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logTopicName;
                    bool m_logTopicNameHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StringKV> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 地区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户主账号Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户创建账号Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 日志状态，0表示正常，1表示日志集不存在，2表示日志主题不存在，3表示日志集和日志主题都不存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logStatus;
                    bool m_logStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MATCHINFO_H_
