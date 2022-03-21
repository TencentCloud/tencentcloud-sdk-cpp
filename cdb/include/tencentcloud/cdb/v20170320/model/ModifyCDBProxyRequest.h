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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RoWeight.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyCDBProxy请求参数结构体
                */
                class ModifyCDBProxyRequest : public AbstractModel
                {
                public:
                    ModifyCDBProxyRequest();
                    ~ModifyCDBProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库代理组唯一ID
                     * @return ProxyGroupId 数据库代理组唯一ID
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置数据库代理组唯一ID
                     * @param ProxyGroupId 数据库代理组唯一ID
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取是否开始延迟剔除，默认false，取值："true" | "false"
                     * @return IsKickout 是否开始延迟剔除，默认false，取值："true" | "false"
                     */
                    bool GetIsKickout() const;

                    /**
                     * 设置是否开始延迟剔除，默认false，取值："true" | "false"
                     * @param IsKickout 是否开始延迟剔除，默认false，取值："true" | "false"
                     */
                    void SetIsKickout(const bool& _isKickout);

                    /**
                     * 判断参数 IsKickout 是否已赋值
                     * @return IsKickout 是否已赋值
                     */
                    bool IsKickoutHasBeenSet() const;

                    /**
                     * 获取最少保留数，最小为0，最大为实例数量
                     * @return MinCount 最少保留数，最小为0，最大为实例数量
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置最少保留数，最小为0，最大为实例数量
                     * @param MinCount 最少保留数，最小为0，最大为实例数量
                     */
                    void SetMinCount(const uint64_t& _minCount);

                    /**
                     * 判断参数 MinCount 是否已赋值
                     * @return MinCount 是否已赋值
                     */
                    bool MinCountHasBeenSet() const;

                    /**
                     * 获取延迟剔除的阈值；如果IsKickOut="true", 该字段必填
                     * @return MaxDelay 延迟剔除的阈值；如果IsKickOut="true", 该字段必填
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置延迟剔除的阈值；如果IsKickOut="true", 该字段必填
                     * @param MaxDelay 延迟剔除的阈值；如果IsKickOut="true", 该字段必填
                     */
                    void SetMaxDelay(const uint64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取读写权重分配模式；系统自动分配："system"， 自定义："custom"
                     * @return WeightMode 读写权重分配模式；系统自动分配："system"， 自定义："custom"
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置读写权重分配模式；系统自动分配："system"， 自定义："custom"
                     * @param WeightMode 读写权重分配模式；系统自动分配："system"， 自定义："custom"
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取实例只读权重
                     * @return RoWeightValues 实例只读权重
                     */
                    RoWeight GetRoWeightValues() const;

                    /**
                     * 设置实例只读权重
                     * @param RoWeightValues 实例只读权重
                     */
                    void SetRoWeightValues(const RoWeight& _roWeightValues);

                    /**
                     * 判断参数 RoWeightValues 是否已赋值
                     * @return RoWeightValues 是否已赋值
                     */
                    bool RoWeightValuesHasBeenSet() const;

                    /**
                     * 获取是否开启故障转移，代理出现故障后，连接地址将路由到主实例，默认false，取值："true" | "false"
                     * @return FailOver 是否开启故障转移，代理出现故障后，连接地址将路由到主实例，默认false，取值："true" | "false"
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置是否开启故障转移，代理出现故障后，连接地址将路由到主实例，默认false，取值："true" | "false"
                     * @param FailOver 是否开启故障转移，代理出现故障后，连接地址将路由到主实例，默认false，取值："true" | "false"
                     */
                    void SetFailOver(const bool& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取是否自动添加只读实例，默认false，取值："true" | "false"
                     * @return AutoAddRo 是否自动添加只读实例，默认false，取值："true" | "false"
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置是否自动添加只读实例，默认false，取值："true" | "false"
                     * @param AutoAddRo 是否自动添加只读实例，默认false，取值："true" | "false"
                     */
                    void SetAutoAddRo(const bool& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     */
                    bool AutoAddRoHasBeenSet() const;

                private:

                    /**
                     * 数据库代理组唯一ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 是否开始延迟剔除，默认false，取值："true" | "false"
                     */
                    bool m_isKickout;
                    bool m_isKickoutHasBeenSet;

                    /**
                     * 最少保留数，最小为0，最大为实例数量
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * 延迟剔除的阈值；如果IsKickOut="true", 该字段必填
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * 读写权重分配模式；系统自动分配："system"， 自定义："custom"
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * 实例只读权重
                     */
                    RoWeight m_roWeightValues;
                    bool m_roWeightValuesHasBeenSet;

                    /**
                     * 是否开启故障转移，代理出现故障后，连接地址将路由到主实例，默认false，取值："true" | "false"
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * 是否自动添加只读实例，默认false，取值："true" | "false"
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYREQUEST_H_
