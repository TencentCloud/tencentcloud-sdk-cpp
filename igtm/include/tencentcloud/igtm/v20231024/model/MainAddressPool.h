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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_MAINADDRESSPOOL_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_MAINADDRESSPOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/MainPoolWeight.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 主力地址池
                */
                class MainAddressPool : public AbstractModel
                {
                public:
                    MainAddressPool();
                    ~MainAddressPool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集合中的地址池id与权重，数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressPools <p>集合中的地址池id与权重，数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MainPoolWeight> GetAddressPools() const;

                    /**
                     * 设置<p>集合中的地址池id与权重，数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addressPools <p>集合中的地址池id与权重，数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddressPools(const std::vector<MainPoolWeight>& _addressPools);

                    /**
                     * 判断参数 AddressPools 是否已赋值
                     * @return AddressPools 是否已赋值
                     * 
                     */
                    bool AddressPoolsHasBeenSet() const;

                    /**
                     * 获取<p>地址池集合id</p>
                     * @return MainAddressPoolId <p>地址池集合id</p>
                     * 
                     */
                    uint64_t GetMainAddressPoolId() const;

                    /**
                     * 设置<p>地址池集合id</p>
                     * @param _mainAddressPoolId <p>地址池集合id</p>
                     * 
                     */
                    void SetMainAddressPoolId(const uint64_t& _mainAddressPoolId);

                    /**
                     * 判断参数 MainAddressPoolId 是否已赋值
                     * @return MainAddressPoolId 是否已赋值
                     * 
                     */
                    bool MainAddressPoolIdHasBeenSet() const;

                    /**
                     * 获取<p>切换阈值，不能大于主力集合内地址总数</p>
                     * @return MinSurviveNum <p>切换阈值，不能大于主力集合内地址总数</p>
                     * 
                     */
                    uint64_t GetMinSurviveNum() const;

                    /**
                     * 设置<p>切换阈值，不能大于主力集合内地址总数</p>
                     * @param _minSurviveNum <p>切换阈值，不能大于主力集合内地址总数</p>
                     * 
                     */
                    void SetMinSurviveNum(const uint64_t& _minSurviveNum);

                    /**
                     * 判断参数 MinSurviveNum 是否已赋值
                     * @return MinSurviveNum 是否已赋值
                     * 
                     */
                    bool MinSurviveNumHasBeenSet() const;

                    /**
                     * 获取<p>切换策略:ALL解析所有地址；WEIGHT：负载均衡。当为ALL时，解析地址的权重值为1；当为WEIGHT时；权重为地址池权重*地址权重</p>
                     * @return TrafficStrategy <p>切换策略:ALL解析所有地址；WEIGHT：负载均衡。当为ALL时，解析地址的权重值为1；当为WEIGHT时；权重为地址池权重*地址权重</p>
                     * 
                     */
                    std::string GetTrafficStrategy() const;

                    /**
                     * 设置<p>切换策略:ALL解析所有地址；WEIGHT：负载均衡。当为ALL时，解析地址的权重值为1；当为WEIGHT时；权重为地址池权重*地址权重</p>
                     * @param _trafficStrategy <p>切换策略:ALL解析所有地址；WEIGHT：负载均衡。当为ALL时，解析地址的权重值为1；当为WEIGHT时；权重为地址池权重*地址权重</p>
                     * 
                     */
                    void SetTrafficStrategy(const std::string& _trafficStrategy);

                    /**
                     * 判断参数 TrafficStrategy 是否已赋值
                     * @return TrafficStrategy 是否已赋值
                     * 
                     */
                    bool TrafficStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>集合中的地址池id与权重，数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MainPoolWeight> m_addressPools;
                    bool m_addressPoolsHasBeenSet;

                    /**
                     * <p>地址池集合id</p>
                     */
                    uint64_t m_mainAddressPoolId;
                    bool m_mainAddressPoolIdHasBeenSet;

                    /**
                     * <p>切换阈值，不能大于主力集合内地址总数</p>
                     */
                    uint64_t m_minSurviveNum;
                    bool m_minSurviveNumHasBeenSet;

                    /**
                     * <p>切换策略:ALL解析所有地址；WEIGHT：负载均衡。当为ALL时，解析地址的权重值为1；当为WEIGHT时；权重为地址池权重*地址权重</p>
                     */
                    std::string m_trafficStrategy;
                    bool m_trafficStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_MAINADDRESSPOOL_H_
