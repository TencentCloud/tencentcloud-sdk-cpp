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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_CREATEMATCHREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_CREATEMATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateMatch请求参数结构体
                */
                class CreateMatchRequest : public AbstractModel
                {
                public:
                    CreateMatchRequest();
                    ~CreateMatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配名称，[a-zA-Z0-9-\.]* 长度128
                     * @return MatchName 匹配名称，[a-zA-Z0-9-\.]* 长度128
                     * 
                     */
                    std::string GetMatchName() const;

                    /**
                     * 设置匹配名称，[a-zA-Z0-9-\.]* 长度128
                     * @param _matchName 匹配名称，[a-zA-Z0-9-\.]* 长度128
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
                     * 获取超时时间，1-600秒
                     * @return Timeout 超时时间，1-600秒
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置超时时间，1-600秒
                     * @param _timeout 超时时间，1-600秒
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
                     * 获取是否为匹配结果请求服务器资源，0表示否，1表示请求GSE资源
                     * @return ServerType 是否为匹配结果请求服务器资源，0表示否，1表示请求GSE资源
                     * 
                     */
                    int64_t GetServerType() const;

                    /**
                     * 设置是否为匹配结果请求服务器资源，0表示否，1表示请求GSE资源
                     * @param _serverType 是否为匹配结果请求服务器资源，0表示否，1表示请求GSE资源
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
                     * 获取匹配描述，最长1024
                     * @return MatchDesc 匹配描述，最长1024
                     * 
                     */
                    std::string GetMatchDesc() const;

                    /**
                     * 设置匹配描述，最长1024
                     * @param _matchDesc 匹配描述，最长1024
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
                     * 获取只支持https 和 http 协议
                     * @return NotifyUrl 只支持https 和 http 协议
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置只支持https 和 http 协议
                     * @param _notifyUrl 只支持https 和 http 协议
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
                     * 获取游戏服务器队列地域
                     * @return ServerRegion 游戏服务器队列地域
                     * 
                     */
                    std::string GetServerRegion() const;

                    /**
                     * 设置游戏服务器队列地域
                     * @param _serverRegion 游戏服务器队列地域
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
                     * 获取游戏服务器队列
                     * @return ServerQueue 游戏服务器队列
                     * 
                     */
                    std::string GetServerQueue() const;

                    /**
                     * 设置游戏服务器队列
                     * @param _serverQueue 游戏服务器队列
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
                     * @return CustomPushData 自定义推送数据
                     * 
                     */
                    std::string GetCustomPushData() const;

                    /**
                     * 设置自定义推送数据
                     * @param _customPushData 自定义推送数据
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
                     * @return ServerSessionData 游戏服务器会话数据
                     * 
                     */
                    std::string GetServerSessionData() const;

                    /**
                     * 设置游戏服务器会话数据
                     * @param _serverSessionData 游戏服务器会话数据
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
                     * 获取游戏属性，key-value结构的数组
                     * @return GameProperties 游戏属性，key-value结构的数组
                     * 
                     */
                    std::vector<StringKV> GetGameProperties() const;

                    /**
                     * 设置游戏属性，key-value结构的数组
                     * @param _gameProperties 游戏属性，key-value结构的数组
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
                     * 获取标签，key-value结构的数组
                     * @return Tags 标签，key-value结构的数组
                     * 
                     */
                    std::vector<StringKV> GetTags() const;

                    /**
                     * 设置标签，key-value结构的数组
                     * @param _tags 标签，key-value结构的数组
                     * 
                     */
                    void SetTags(const std::vector<StringKV>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 匹配名称，[a-zA-Z0-9-\.]* 长度128
                     */
                    std::string m_matchName;
                    bool m_matchNameHasBeenSet;

                    /**
                     * 规则code
                     */
                    std::string m_ruleCode;
                    bool m_ruleCodeHasBeenSet;

                    /**
                     * 超时时间，1-600秒
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 是否为匹配结果请求服务器资源，0表示否，1表示请求GSE资源
                     */
                    int64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * 匹配描述，最长1024
                     */
                    std::string m_matchDesc;
                    bool m_matchDescHasBeenSet;

                    /**
                     * 只支持https 和 http 协议
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 游戏服务器队列地域
                     */
                    std::string m_serverRegion;
                    bool m_serverRegionHasBeenSet;

                    /**
                     * 游戏服务器队列
                     */
                    std::string m_serverQueue;
                    bool m_serverQueueHasBeenSet;

                    /**
                     * 自定义推送数据
                     */
                    std::string m_customPushData;
                    bool m_customPushDataHasBeenSet;

                    /**
                     * 游戏服务器会话数据
                     */
                    std::string m_serverSessionData;
                    bool m_serverSessionDataHasBeenSet;

                    /**
                     * 游戏属性，key-value结构的数组
                     */
                    std::vector<StringKV> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * 日志开关，0表示关，1表示开
                     */
                    int64_t m_logSwitch;
                    bool m_logSwitchHasBeenSet;

                    /**
                     * 标签，key-value结构的数组
                     */
                    std::vector<StringKV> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_CREATEMATCHREQUEST_H_
