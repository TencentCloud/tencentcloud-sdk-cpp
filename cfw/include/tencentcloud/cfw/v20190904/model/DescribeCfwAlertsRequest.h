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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWALERTSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWALERTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwAlerts请求参数结构体
                */
                class DescribeCfwAlertsRequest : public AbstractModel
                {
                public:
                    DescribeCfwAlertsRequest();
                    ~DescribeCfwAlertsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>告警开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；默认查询最近 1 小时。</p>
                     * @return StartTime <p>告警开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；默认查询最近 1 小时。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>告警开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；默认查询最近 1 小时。</p>
                     * @param _startTime <p>告警开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；默认查询最近 1 小时。</p>
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
                     * 获取<p>告警结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；默认当前时间。</p>
                     * @return EndTime <p>告警结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；默认当前时间。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>告警结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；默认当前时间。</p>
                     * @param _endTime <p>告警结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；默认当前时间。</p>
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
                     * 获取<p>告警严重级别过滤。可选；枚举 low、middle、high。</p>
                     * @return Level <p>告警严重级别过滤。可选；枚举 low、middle、high。</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>告警严重级别过滤。可选；枚举 low、middle、high。</p>
                     * @param _level <p>告警严重级别过滤。可选；枚举 low、middle、high。</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>流量方向过滤。可选；枚举 outbound 出站、inbound 入站、lateral 横向。</p>
                     * @return Direction <p>流量方向过滤。可选；枚举 outbound 出站、inbound 入站、lateral 横向。</p>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>流量方向过滤。可选；枚举 outbound 出站、inbound 入站、lateral 横向。</p>
                     * @param _direction <p>流量方向过滤。可选；枚举 outbound 出站、inbound 入站、lateral 横向。</p>
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取<p>处置状态过滤。可选；枚举 unhandled、handled、blocked、passed、isolated、ignored。</p>
                     * @return ActionStatus <p>处置状态过滤。可选；枚举 unhandled、handled、blocked、passed、isolated、ignored。</p>
                     * 
                     */
                    std::string GetActionStatus() const;

                    /**
                     * 设置<p>处置状态过滤。可选；枚举 unhandled、handled、blocked、passed、isolated、ignored。</p>
                     * @param _actionStatus <p>处置状态过滤。可选；枚举 unhandled、handled、blocked、passed、isolated、ignored。</p>
                     * 
                     */
                    void SetActionStatus(const std::string& _actionStatus);

                    /**
                     * 判断参数 ActionStatus 是否已赋值
                     * @return ActionStatus 是否已赋值
                     * 
                     */
                    bool ActionStatusHasBeenSet() const;

                    /**
                     * 获取<p>攻击链阶段过滤。可选；枚举 recon、brute_force、delivery、exploit、c2、lateral_movement、exfiltration。</p>
                     * @return KillChain <p>攻击链阶段过滤。可选；枚举 recon、brute_force、delivery、exploit、c2、lateral_movement、exfiltration。</p>
                     * 
                     */
                    std::string GetKillChain() const;

                    /**
                     * 设置<p>攻击链阶段过滤。可选；枚举 recon、brute_force、delivery、exploit、c2、lateral_movement、exfiltration。</p>
                     * @param _killChain <p>攻击链阶段过滤。可选；枚举 recon、brute_force、delivery、exploit、c2、lateral_movement、exfiltration。</p>
                     * 
                     */
                    void SetKillChain(const std::string& _killChain);

                    /**
                     * 判断参数 KillChain 是否已赋值
                     * @return KillChain 是否已赋值
                     * 
                     */
                    bool KillChainHasBeenSet() const;

                    /**
                     * 获取<p>攻击结果过滤。可选；枚举 attempt、success、fail、unknown。</p>
                     * @return AttackResult <p>攻击结果过滤。可选；枚举 attempt、success、fail、unknown。</p>
                     * 
                     */
                    std::string GetAttackResult() const;

                    /**
                     * 设置<p>攻击结果过滤。可选；枚举 attempt、success、fail、unknown。</p>
                     * @param _attackResult <p>攻击结果过滤。可选；枚举 attempt、success、fail、unknown。</p>
                     * 
                     */
                    void SetAttackResult(const std::string& _attackResult);

                    /**
                     * 判断参数 AttackResult 是否已赋值
                     * @return AttackResult 是否已赋值
                     * 
                     */
                    bool AttackResultHasBeenSet() const;

                    /**
                     * 获取<p>IPS 策略动作过滤。可选；枚举 observe、block。</p>
                     * @return Strategy <p>IPS 策略动作过滤。可选；枚举 observe、block。</p>
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置<p>IPS 策略动作过滤。可选；枚举 observe、block。</p>
                     * @param _strategy <p>IPS 策略动作过滤。可选；枚举 observe、block。</p>
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取<p>攻击事件名称关键字过滤。可选，例如 SQL注入、暴力破解、恶意域名访问。</p>
                     * @return EventName <p>攻击事件名称关键字过滤。可选，例如 SQL注入、暴力破解、恶意域名访问。</p>
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置<p>攻击事件名称关键字过滤。可选，例如 SQL注入、暴力破解、恶意域名访问。</p>
                     * @param _eventName <p>攻击事件名称关键字过滤。可选，例如 SQL注入、暴力破解、恶意域名访问。</p>
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取<p>精确告警事件 ID 过滤。用于指定事件的写操作前检查和写操作后核验；事件重新聚合时返回原请求 ID 和当前事件 ID。无匹配返回空结果，多匹配或定位过程异常时失败，不退化为宽查询。</p>
                     * @return EventId <p>精确告警事件 ID 过滤。用于指定事件的写操作前检查和写操作后核验；事件重新聚合时返回原请求 ID 和当前事件 ID。无匹配返回空结果，多匹配或定位过程异常时失败，不退化为宽查询。</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>精确告警事件 ID 过滤。用于指定事件的写操作前检查和写操作后核验；事件重新聚合时返回原请求 ID 和当前事件 ID。无匹配返回空结果，多匹配或定位过程异常时失败，不退化为宽查询。</p>
                     * @param _eventId <p>精确告警事件 ID 过滤。用于指定事件的写操作前检查和写操作后核验；事件重新聚合时返回原请求 ID 和当前事件 ID。无匹配返回空结果，多匹配或定位过程异常时失败，不退化为宽查询。</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>源 IP 过滤。可选。</p>
                     * @return SrcIp <p>源 IP 过滤。可选。</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>源 IP 过滤。可选。</p>
                     * @param _srcIp <p>源 IP 过滤。可选。</p>
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
                     * 获取<p>目的 IP 过滤。可选。</p>
                     * @return DstIp <p>目的 IP 过滤。可选。</p>
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置<p>目的 IP 过滤。可选。</p>
                     * @param _dstIp <p>目的 IP 过滤。可选。</p>
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取<p>云资源实例 ID 过滤。可选，例如 ins-xxxxxxxx。</p>
                     * @return InstanceId <p>云资源实例 ID 过滤。可选，例如 ins-xxxxxxxx。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>云资源实例 ID 过滤。可选，例如 ins-xxxxxxxx。</p>
                     * @param _instanceId <p>云资源实例 ID 过滤。可选，例如 ins-xxxxxxxx。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>单页返回告警数。可选，默认 10，最大 50。</p>
                     * @return Limit <p>单页返回告警数。可选，默认 10，最大 50。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单页返回告警数。可选，默认 10，最大 50。</p>
                     * @param _limit <p>单页返回告警数。可选，默认 10，最大 50。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移。可选，默认 0。</p>
                     * @return Offset <p>分页偏移。可选，默认 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移。可选，默认 0。</p>
                     * @param _offset <p>分页偏移。可选，默认 0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>排序字段。可选，默认 EndTime；枚举 EndTime、StartTime、Count。排序字段。可选，默认 EndTime；枚举 EndTime、StartTime、Count；Count 表示按单个聚合告警事件的告警发生次数/命中次数排序，对应返回中的 occurrence_count</p>
                     * @return OrderBy <p>排序字段。可选，默认 EndTime；枚举 EndTime、StartTime、Count。排序字段。可选，默认 EndTime；枚举 EndTime、StartTime、Count；Count 表示按单个聚合告警事件的告警发生次数/命中次数排序，对应返回中的 occurrence_count</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段。可选，默认 EndTime；枚举 EndTime、StartTime、Count。排序字段。可选，默认 EndTime；枚举 EndTime、StartTime、Count；Count 表示按单个聚合告警事件的告警发生次数/命中次数排序，对应返回中的 occurrence_count</p>
                     * @param _orderBy <p>排序字段。可选，默认 EndTime；枚举 EndTime、StartTime、Count。排序字段。可选，默认 EndTime；枚举 EndTime、StartTime、Count；Count 表示按单个聚合告警事件的告警发生次数/命中次数排序，对应返回中的 occurrence_count</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>排序方向。可选，默认 desc；枚举 desc、asc。</p>
                     * @return Order <p>排序方向。可选，默认 desc；枚举 desc、asc。</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方向。可选，默认 desc；枚举 desc、asc。</p>
                     * @param _order <p>排序方向。可选，默认 desc；枚举 desc、asc。</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * <p>告警开始时间。可选，格式 YYYY-MM-DD HH:MM:SS；默认查询最近 1 小时。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>告警结束时间。可选，格式 YYYY-MM-DD HH:MM:SS；默认当前时间。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>告警严重级别过滤。可选；枚举 low、middle、high。</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>流量方向过滤。可选；枚举 outbound 出站、inbound 入站、lateral 横向。</p>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>处置状态过滤。可选；枚举 unhandled、handled、blocked、passed、isolated、ignored。</p>
                     */
                    std::string m_actionStatus;
                    bool m_actionStatusHasBeenSet;

                    /**
                     * <p>攻击链阶段过滤。可选；枚举 recon、brute_force、delivery、exploit、c2、lateral_movement、exfiltration。</p>
                     */
                    std::string m_killChain;
                    bool m_killChainHasBeenSet;

                    /**
                     * <p>攻击结果过滤。可选；枚举 attempt、success、fail、unknown。</p>
                     */
                    std::string m_attackResult;
                    bool m_attackResultHasBeenSet;

                    /**
                     * <p>IPS 策略动作过滤。可选；枚举 observe、block。</p>
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>攻击事件名称关键字过滤。可选，例如 SQL注入、暴力破解、恶意域名访问。</p>
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * <p>精确告警事件 ID 过滤。用于指定事件的写操作前检查和写操作后核验；事件重新聚合时返回原请求 ID 和当前事件 ID。无匹配返回空结果，多匹配或定位过程异常时失败，不退化为宽查询。</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>源 IP 过滤。可选。</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>目的 IP 过滤。可选。</p>
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * <p>云资源实例 ID 过滤。可选，例如 ins-xxxxxxxx。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>单页返回告警数。可选，默认 10，最大 50。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移。可选，默认 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序字段。可选，默认 EndTime；枚举 EndTime、StartTime、Count。排序字段。可选，默认 EndTime；枚举 EndTime、StartTime、Count；Count 表示按单个聚合告警事件的告警发生次数/命中次数排序，对应返回中的 occurrence_count</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序方向。可选，默认 desc；枚举 desc、asc。</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWALERTSREQUEST_H_
