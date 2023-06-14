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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEACLISTSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEACLISTSREQUEST_H_

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
                * DescribeAcLists请求参数结构体
                */
                class DescribeAcListsRequest : public AbstractModel
                {
                public:
                    DescribeAcListsRequest();
                    ~DescribeAcListsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取策略
                     * @return Strategy 策略
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置策略
                     * @param _strategy 策略
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
                     * 获取搜索值
                     * @return SearchValue 搜索值
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置搜索值
                     * @param _searchValue 搜索值
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取每页条数
                     * @return Limit 每页条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param _limit 每页条数
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
                     * 获取偏移值
                     * @return Offset 偏移值
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移值
                     * @param _offset 偏移值
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
                     * 获取出站还是入站，1：入站，0：出站
                     * @return Direction 出站还是入站，1：入站，0：出站
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置出站还是入站，1：入站，0：出站
                     * @param _direction 出站还是入站，1：入站，0：出站
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取EdgeId值
                     * @return EdgeId EdgeId值
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置EdgeId值
                     * @param _edgeId EdgeId值
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
                     * 获取规则是否开启，'0': 未开启，'1': 开启, 默认为'0'
                     * @return Status 规则是否开启，'0': 未开启，'1': 开启, 默认为'0'
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则是否开启，'0': 未开启，'1': 开启, 默认为'0'
                     * @param _status 规则是否开启，'0': 未开启，'1': 开启, 默认为'0'
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Area 地域
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域
                     * @param _area 地域
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 策略
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 搜索值
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 每页条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移值
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 出站还是入站，1：入站，0：出站
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * EdgeId值
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 规则是否开启，'0': 未开启，'1': 开启, 默认为'0'
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEACLISTSREQUEST_H_
