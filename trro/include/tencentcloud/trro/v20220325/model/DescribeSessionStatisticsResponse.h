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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeSessionStatistics返回参数结构体
                */
                class DescribeSessionStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeSessionStatisticsResponse();
                    ~DescribeSessionStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>会话数量</p>
                     * @return SessionNum <p>会话数量</p>
                     * 
                     */
                    uint64_t GetSessionNum() const;

                    /**
                     * 判断参数 SessionNum 是否已赋值
                     * @return SessionNum 是否已赋值
                     * 
                     */
                    bool SessionNumHasBeenSet() const;

                    /**
                     * 获取<p>通话时长，单位：分钟</p>
                     * @return TotalDuration <p>通话时长，单位：分钟</p>
                     * 
                     */
                    uint64_t GetTotalDuration() const;

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     * 
                     */
                    bool TotalDurationHasBeenSet() const;

                    /**
                     * 获取<p>活跃现场设备数</p>
                     * @return ActiveFieldDeviceNum <p>活跃现场设备数</p>
                     * 
                     */
                    uint64_t GetActiveFieldDeviceNum() const;

                    /**
                     * 判断参数 ActiveFieldDeviceNum 是否已赋值
                     * @return ActiveFieldDeviceNum 是否已赋值
                     * 
                     */
                    bool ActiveFieldDeviceNumHasBeenSet() const;

                    /**
                     * 获取<p>活跃远端设备数</p>
                     * @return ActiveRemoteDeviceNum <p>活跃远端设备数</p>
                     * 
                     */
                    uint64_t GetActiveRemoteDeviceNum() const;

                    /**
                     * 判断参数 ActiveRemoteDeviceNum 是否已赋值
                     * @return ActiveRemoteDeviceNum 是否已赋值
                     * 
                     */
                    bool ActiveRemoteDeviceNumHasBeenSet() const;

                    /**
                     * 获取<p>优良会话占比，单位：%</p>
                     * @return NotBadSessionRatio <p>优良会话占比，单位：%</p>
                     * 
                     */
                    uint64_t GetNotBadSessionRatio() const;

                    /**
                     * 判断参数 NotBadSessionRatio 是否已赋值
                     * @return NotBadSessionRatio 是否已赋值
                     * 
                     */
                    bool NotBadSessionRatioHasBeenSet() const;

                private:

                    /**
                     * <p>会话数量</p>
                     */
                    uint64_t m_sessionNum;
                    bool m_sessionNumHasBeenSet;

                    /**
                     * <p>通话时长，单位：分钟</p>
                     */
                    uint64_t m_totalDuration;
                    bool m_totalDurationHasBeenSet;

                    /**
                     * <p>活跃现场设备数</p>
                     */
                    uint64_t m_activeFieldDeviceNum;
                    bool m_activeFieldDeviceNumHasBeenSet;

                    /**
                     * <p>活跃远端设备数</p>
                     */
                    uint64_t m_activeRemoteDeviceNum;
                    bool m_activeRemoteDeviceNumHasBeenSet;

                    /**
                     * <p>优良会话占比，单位：%</p>
                     */
                    uint64_t m_notBadSessionRatio;
                    bool m_notBadSessionRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSRESPONSE_H_
