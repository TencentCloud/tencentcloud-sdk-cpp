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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPRWINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPRWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyInstanceWeight.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 数据库代理组读写分离信息
                */
                class ProxyGroupRwInfo : public AbstractModel
                {
                public:
                    ProxyGroupRwInfo();
                    ~ProxyGroupRwInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>一致性类型 eventual-最终一致性,global-全局一致性,session-会话一致性</p>
                     * @return ConsistencyType <p>一致性类型 eventual-最终一致性,global-全局一致性,session-会话一致性</p>
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置<p>一致性类型 eventual-最终一致性,global-全局一致性,session-会话一致性</p>
                     * @param _consistencyType <p>一致性类型 eventual-最终一致性,global-全局一致性,session-会话一致性</p>
                     * 
                     */
                    void SetConsistencyType(const std::string& _consistencyType);

                    /**
                     * 判断参数 ConsistencyType 是否已赋值
                     * @return ConsistencyType 是否已赋值
                     * 
                     */
                    bool ConsistencyTypeHasBeenSet() const;

                    /**
                     * 获取<p>一致性超时时间</p>
                     * @return ConsistencyTimeOut <p>一致性超时时间</p>
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置<p>一致性超时时间</p>
                     * @param _consistencyTimeOut <p>一致性超时时间</p>
                     * 
                     */
                    void SetConsistencyTimeOut(const int64_t& _consistencyTimeOut);

                    /**
                     * 判断参数 ConsistencyTimeOut 是否已赋值
                     * @return ConsistencyTimeOut 是否已赋值
                     * 
                     */
                    bool ConsistencyTimeOutHasBeenSet() const;

                    /**
                     * 获取<p>权重模式 system-系统分配，custom-自定义</p>
                     * @return WeightMode <p>权重模式 system-系统分配，custom-自定义</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>权重模式 system-系统分配，custom-自定义</p>
                     * @param _weightMode <p>权重模式 system-系统分配，custom-自定义</p>
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启故障转移</p>
                     * @return FailOver <p>是否开启故障转移</p>
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置<p>是否开启故障转移</p>
                     * @param _failOver <p>是否开启故障转移</p>
                     * 
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取<p>是否自动添加只读实例，yes-是，no-不自动添加</p>
                     * @return AutoAddRo <p>是否自动添加只读实例，yes-是，no-不自动添加</p>
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置<p>是否自动添加只读实例，yes-是，no-不自动添加</p>
                     * @param _autoAddRo <p>是否自动添加只读实例，yes-是，no-不自动添加</p>
                     * 
                     */
                    void SetAutoAddRo(const std::string& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取<p>实例权重数组</p>
                     * @return InstanceWeights <p>实例权重数组</p>
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置<p>实例权重数组</p>
                     * @param _instanceWeights <p>实例权重数组</p>
                     * 
                     */
                    void SetInstanceWeights(const std::vector<ProxyInstanceWeight>& _instanceWeights);

                    /**
                     * 判断参数 InstanceWeights 是否已赋值
                     * @return InstanceWeights 是否已赋值
                     * 
                     */
                    bool InstanceWeightsHasBeenSet() const;

                    /**
                     * 获取<p>是否开通读写节点，yse-是，no-否</p>
                     * @return OpenRw <p>是否开通读写节点，yse-是，no-否</p>
                     * 
                     */
                    std::string GetOpenRw() const;

                    /**
                     * 设置<p>是否开通读写节点，yse-是，no-否</p>
                     * @param _openRw <p>是否开通读写节点，yse-是，no-否</p>
                     * 
                     */
                    void SetOpenRw(const std::string& _openRw);

                    /**
                     * 判断参数 OpenRw 是否已赋值
                     * @return OpenRw 是否已赋值
                     * 
                     */
                    bool OpenRwHasBeenSet() const;

                    /**
                     * 获取<p>读写属性，可选值：READWRITE,READONLY</p>
                     * @return RwType <p>读写属性，可选值：READWRITE,READONLY</p>
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置<p>读写属性，可选值：READWRITE,READONLY</p>
                     * @param _rwType <p>读写属性，可选值：READWRITE,READONLY</p>
                     * 
                     */
                    void SetRwType(const std::string& _rwType);

                    /**
                     * 判断参数 RwType 是否已赋值
                     * @return RwType 是否已赋值
                     * 
                     */
                    bool RwTypeHasBeenSet() const;

                    /**
                     * 获取<p>事务拆分</p>
                     * @return TransSplit <p>事务拆分</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>事务拆分</p>
                     * @param _transSplit <p>事务拆分</p>
                     * 
                     */
                    void SetTransSplit(const bool& _transSplit);

                    /**
                     * 判断参数 TransSplit 是否已赋值
                     * @return TransSplit 是否已赋值
                     * 
                     */
                    bool TransSplitHasBeenSet() const;

                    /**
                     * 获取<p>连接模式，可选值：balance，nearby</p>
                     * @return AccessMode <p>连接模式，可选值：balance，nearby</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>连接模式，可选值：balance，nearby</p>
                     * @param _accessMode <p>连接模式，可选值：balance，nearby</p>
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取<p>是否将libra节点当作普通RO节点</p>
                     * @return ApNodeAsRoNode <p>是否将libra节点当作普通RO节点</p>
                     * 
                     */
                    bool GetApNodeAsRoNode() const;

                    /**
                     * 设置<p>是否将libra节点当作普通RO节点</p>
                     * @param _apNodeAsRoNode <p>是否将libra节点当作普通RO节点</p>
                     * 
                     */
                    void SetApNodeAsRoNode(const bool& _apNodeAsRoNode);

                    /**
                     * 判断参数 ApNodeAsRoNode 是否已赋值
                     * @return ApNodeAsRoNode 是否已赋值
                     * 
                     */
                    bool ApNodeAsRoNodeHasBeenSet() const;

                    /**
                     * 获取<p>libra节点故障，是否转发给其他节点</p>
                     * @return ApQueryToOtherNode <p>libra节点故障，是否转发给其他节点</p>
                     * 
                     */
                    bool GetApQueryToOtherNode() const;

                    /**
                     * 设置<p>libra节点故障，是否转发给其他节点</p>
                     * @param _apQueryToOtherNode <p>libra节点故障，是否转发给其他节点</p>
                     * 
                     */
                    void SetApQueryToOtherNode(const bool& _apQueryToOtherNode);

                    /**
                     * 判断参数 ApQueryToOtherNode 是否已赋值
                     * @return ApQueryToOtherNode 是否已赋值
                     * 
                     */
                    bool ApQueryToOtherNodeHasBeenSet() const;

                private:

                    /**
                     * <p>一致性类型 eventual-最终一致性,global-全局一致性,session-会话一致性</p>
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * <p>一致性超时时间</p>
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * <p>权重模式 system-系统分配，custom-自定义</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>是否开启故障转移</p>
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>是否自动添加只读实例，yes-是，no-不自动添加</p>
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>实例权重数组</p>
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * <p>是否开通读写节点，yse-是，no-否</p>
                     */
                    std::string m_openRw;
                    bool m_openRwHasBeenSet;

                    /**
                     * <p>读写属性，可选值：READWRITE,READONLY</p>
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * <p>事务拆分</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>连接模式，可选值：balance，nearby</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>是否将libra节点当作普通RO节点</p>
                     */
                    bool m_apNodeAsRoNode;
                    bool m_apNodeAsRoNodeHasBeenSet;

                    /**
                     * <p>libra节点故障，是否转发给其他节点</p>
                     */
                    bool m_apQueryToOtherNode;
                    bool m_apQueryToOtherNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPRWINFO_H_
