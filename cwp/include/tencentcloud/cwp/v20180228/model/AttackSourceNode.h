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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCENODE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 攻击溯源节点
                */
                class AttackSourceNode : public AbstractModel
                {
                public:
                    AttackSourceNode();
                    ~AttackSourceNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID，为空的时候表示没有对应事件
                     * @return EventId 事件ID，为空的时候表示没有对应事件
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置事件ID，为空的时候表示没有对应事件
                     * @param _eventId 事件ID，为空的时候表示没有对应事件
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
                     * 获取BRUTEFORCE:密码破解、MALWARE:木马、BASH:高危命令、RISK_DNS:恶意请求、LOGIN:异地登录、HOST:主机节点, TIME_ORDER：通用节点
                     * @return EventType BRUTEFORCE:密码破解、MALWARE:木马、BASH:高危命令、RISK_DNS:恶意请求、LOGIN:异地登录、HOST:主机节点, TIME_ORDER：通用节点
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置BRUTEFORCE:密码破解、MALWARE:木马、BASH:高危命令、RISK_DNS:恶意请求、LOGIN:异地登录、HOST:主机节点, TIME_ORDER：通用节点
                     * @param _eventType BRUTEFORCE:密码破解、MALWARE:木马、BASH:高危命令、RISK_DNS:恶意请求、LOGIN:异地登录、HOST:主机节点, TIME_ORDER：通用节点
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取节点ip 当节点为HOST时
                     * @return Ip 节点ip 当节点为HOST时
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置节点ip 当节点为HOST时
                     * @param _ip 节点ip 当节点为HOST时
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取等级  0：提示，1：低危,  2：中危,  3：高危,  4：严重
                     * @return Level 等级  0：提示，1：低危,  2：中危,  3：高危,  4：严重
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置等级  0：提示，1：低危,  2：中危,  3：高危,  4：严重
                     * @param _level 等级  0：提示，1：低危,  2：中危,  3：高危,  4：严重
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return NodeId 节点ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点ID
                     * @param _nodeId 节点ID
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取通用节点的描述
                     * @return NodeDesc 通用节点的描述
                     * 
                     */
                    std::string GetNodeDesc() const;

                    /**
                     * 设置通用节点的描述
                     * @param _nodeDesc 通用节点的描述
                     * 
                     */
                    void SetNodeDesc(const std::string& _nodeDesc);

                    /**
                     * 判断参数 NodeDesc 是否已赋值
                     * @return NodeDesc 是否已赋值
                     * 
                     */
                    bool NodeDescHasBeenSet() const;

                    /**
                     * 获取时间线编号，同一个编号的节点属于同一个时间线
                     * @return TimeLineNum 时间线编号，同一个编号的节点属于同一个时间线
                     * 
                     */
                    uint64_t GetTimeLineNum() const;

                    /**
                     * 设置时间线编号，同一个编号的节点属于同一个时间线
                     * @param _timeLineNum 时间线编号，同一个编号的节点属于同一个时间线
                     * 
                     */
                    void SetTimeLineNum(const uint64_t& _timeLineNum);

                    /**
                     * 判断参数 TimeLineNum 是否已赋值
                     * @return TimeLineNum 是否已赋值
                     * 
                     */
                    bool TimeLineNumHasBeenSet() const;

                    /**
                     * 获取节点详情
                     * @return NodeDetail 节点详情
                     * 
                     */
                    std::string GetNodeDetail() const;

                    /**
                     * 设置节点详情
                     * @param _nodeDetail 节点详情
                     * 
                     */
                    void SetNodeDetail(const std::string& _nodeDetail);

                    /**
                     * 判断参数 NodeDetail 是否已赋值
                     * @return NodeDetail 是否已赋值
                     * 
                     */
                    bool NodeDetailHasBeenSet() const;

                private:

                    /**
                     * 事件ID，为空的时候表示没有对应事件
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * BRUTEFORCE:密码破解、MALWARE:木马、BASH:高危命令、RISK_DNS:恶意请求、LOGIN:异地登录、HOST:主机节点, TIME_ORDER：通用节点
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 节点ip 当节点为HOST时
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 等级  0：提示，1：低危,  2：中危,  3：高危,  4：严重
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 通用节点的描述
                     */
                    std::string m_nodeDesc;
                    bool m_nodeDescHasBeenSet;

                    /**
                     * 时间线编号，同一个编号的节点属于同一个时间线
                     */
                    uint64_t m_timeLineNum;
                    bool m_timeLineNumHasBeenSet;

                    /**
                     * 节点详情
                     */
                    std::string m_nodeDetail;
                    bool m_nodeDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCENODE_H_
