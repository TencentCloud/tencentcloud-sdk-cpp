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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYREVERSESHELLRULESAGGREGATIONREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYREVERSESHELLRULESAGGREGATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyReverseShellRulesAggregation请求参数结构体
                */
                class ModifyReverseShellRulesAggregationRequest : public AbstractModel
                {
                public:
                    ModifyReverseShellRulesAggregationRequest();
                    ~ModifyReverseShellRulesAggregationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID(新增时请留空)
                     * @return Id 规则ID(新增时请留空)
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID(新增时请留空)
                     * @param _id 规则ID(新增时请留空)
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
                     * 获取客户端ID数组
                     * @return Uuids 客户端ID数组
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置客户端ID数组
                     * @param _uuids 客户端ID数组
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取主机IP
                     * @return HostIp 主机IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机IP
                     * @param _hostIp 主机IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取目标IP
                     * @return DestIp 目标IP
                     * 
                     */
                    std::string GetDestIp() const;

                    /**
                     * 设置目标IP
                     * @param _destIp 目标IP
                     * 
                     */
                    void SetDestIp(const std::string& _destIp);

                    /**
                     * 判断参数 DestIp 是否已赋值
                     * @return DestIp 是否已赋值
                     * 
                     */
                    bool DestIpHasBeenSet() const;

                    /**
                     * 获取目标端口
                     * @return DestPort 目标端口
                     * 
                     */
                    std::string GetDestPort() const;

                    /**
                     * 设置目标端口
                     * @param _destPort 目标端口
                     * 
                     */
                    void SetDestPort(const std::string& _destPort);

                    /**
                     * 判断参数 DestPort 是否已赋值
                     * @return DestPort 是否已赋值
                     * 
                     */
                    bool DestPortHasBeenSet() const;

                    /**
                     * 获取进程名
                     * @return ProcessName 进程名
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名
                     * @param _processName 进程名
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取是否全局规则(默认否)
                     * @return IsGlobal 是否全局规则(默认否)
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否全局规则(默认否)
                     * @param _isGlobal 是否全局规则(默认否)
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取事件列表和详情点击加白时关联的事件id (新增规则时请留空)
                     * @return EventId 事件列表和详情点击加白时关联的事件id (新增规则时请留空)
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置事件列表和详情点击加白时关联的事件id (新增规则时请留空)
                     * @param _eventId 事件列表和详情点击加白时关联的事件id (新增规则时请留空)
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取加白方式， 0:常规加白 1:正则加白
                     * @return WhiteType 加白方式， 0:常规加白 1:正则加白
                     * 
                     */
                    uint64_t GetWhiteType() const;

                    /**
                     * 设置加白方式， 0:常规加白 1:正则加白
                     * @param _whiteType 加白方式， 0:常规加白 1:正则加白
                     * 
                     */
                    void SetWhiteType(const uint64_t& _whiteType);

                    /**
                     * 判断参数 WhiteType 是否已赋值
                     * @return WhiteType 是否已赋值
                     * 
                     */
                    bool WhiteTypeHasBeenSet() const;

                    /**
                     * 获取正则表达式
                     * @return RuleRegexp 正则表达式
                     * 
                     */
                    std::string GetRuleRegexp() const;

                    /**
                     * 设置正则表达式
                     * @param _ruleRegexp 正则表达式
                     * 
                     */
                    void SetRuleRegexp(const std::string& _ruleRegexp);

                    /**
                     * 判断参数 RuleRegexp 是否已赋值
                     * @return RuleRegexp 是否已赋值
                     * 
                     */
                    bool RuleRegexpHasBeenSet() const;

                    /**
                     * 获取处理历史事件， 0:不处理 1:处理
                     * @return HandleHistory 处理历史事件， 0:不处理 1:处理
                     * 
                     */
                    uint64_t GetHandleHistory() const;

                    /**
                     * 设置处理历史事件， 0:不处理 1:处理
                     * @param _handleHistory 处理历史事件， 0:不处理 1:处理
                     * 
                     */
                    void SetHandleHistory(const uint64_t& _handleHistory);

                    /**
                     * 判断参数 HandleHistory 是否已赋值
                     * @return HandleHistory 是否已赋值
                     * 
                     */
                    bool HandleHistoryHasBeenSet() const;

                    /**
                     * 获取批次id
                     * @return GroupID 批次id
                     * 
                     */
                    std::string GetGroupID() const;

                    /**
                     * 设置批次id
                     * @param _groupID 批次id
                     * 
                     */
                    void SetGroupID(const std::string& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                private:

                    /**
                     * 规则ID(新增时请留空)
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 客户端ID数组
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * 主机IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 目标IP
                     */
                    std::string m_destIp;
                    bool m_destIpHasBeenSet;

                    /**
                     * 目标端口
                     */
                    std::string m_destPort;
                    bool m_destPortHasBeenSet;

                    /**
                     * 进程名
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 是否全局规则(默认否)
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 事件列表和详情点击加白时关联的事件id (新增规则时请留空)
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 加白方式， 0:常规加白 1:正则加白
                     */
                    uint64_t m_whiteType;
                    bool m_whiteTypeHasBeenSet;

                    /**
                     * 正则表达式
                     */
                    std::string m_ruleRegexp;
                    bool m_ruleRegexpHasBeenSet;

                    /**
                     * 处理历史事件， 0:不处理 1:处理
                     */
                    uint64_t m_handleHistory;
                    bool m_handleHistoryHasBeenSet;

                    /**
                     * 批次id
                     */
                    std::string m_groupID;
                    bool m_groupIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYREVERSESHELLRULESAGGREGATIONREQUEST_H_
