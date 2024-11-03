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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKBYIPTIMESLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKBYIPTIMESLISTREQUEST_H_

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
                * DescribeBlockByIpTimesList请求参数结构体
                */
                class DescribeBlockByIpTimesListRequest : public AbstractModel
                {
                public:
                    DescribeBlockByIpTimesListRequest();
                    ~DescribeBlockByIpTimesListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取ip查询条件
                     * @return Ip ip查询条件
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置ip查询条件
                     * @param _ip ip查询条件
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
                     * 获取方向
                     * @return Direction 方向
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置方向
                     * @param _direction 方向
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
                     * 获取vpc间防火墙开关边id
                     * @return EdgeId vpc间防火墙开关边id
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置vpc间防火墙开关边id
                     * @param _edgeId vpc间防火墙开关边id
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取日志来源 move：vpc间防火墙
                     * @return LogSource 日志来源 move：vpc间防火墙
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置日志来源 move：vpc间防火墙
                     * @param _logSource 日志来源 move：vpc间防火墙
                     * 
                     */
                    void SetLogSource(const std::string& _logSource);

                    /**
                     * 判断参数 LogSource 是否已赋值
                     * @return LogSource 是否已赋值
                     * 
                     */
                    bool LogSourceHasBeenSet() const;

                    /**
                     * 获取来源
                     * @return Source 来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
                     * @param _source 来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Zone 地域
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地域
                     * @param _zone 地域
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * ip查询条件
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 方向
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * vpc间防火墙开关边id
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 日志来源 move：vpc间防火墙
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * 来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKBYIPTIMESLISTREQUEST_H_
