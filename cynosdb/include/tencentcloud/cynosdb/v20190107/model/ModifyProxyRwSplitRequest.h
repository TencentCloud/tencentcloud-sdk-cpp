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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyProxyRwSplit请求参数结构体
                */
                class ModifyProxyRwSplitRequest : public AbstractModel
                {
                public:
                    ModifyProxyRwSplitRequest();
                    ~ModifyProxyRwSplitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID，例如cynosdbmysql-asd123</p>
                     * @return ClusterId <p>集群ID，例如cynosdbmysql-asd123</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID，例如cynosdbmysql-asd123</p>
                     * @param _clusterId <p>集群ID，例如cynosdbmysql-asd123</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>数据库代理组ID，例如cynosdbmysql-proxy-qwe123</p>
                     * @return ProxyGroupId <p>数据库代理组ID，例如cynosdbmysql-proxy-qwe123</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>数据库代理组ID，例如cynosdbmysql-proxy-qwe123</p>
                     * @param _proxyGroupId <p>数据库代理组ID，例如cynosdbmysql-proxy-qwe123</p>
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>一致性类型；“eventual&quot;-最终一致性, &quot;session&quot;-会话一致性, &quot;global&quot;-全局一致性</p>
                     * @return ConsistencyType <p>一致性类型；“eventual&quot;-最终一致性, &quot;session&quot;-会话一致性, &quot;global&quot;-全局一致性</p>
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置<p>一致性类型；“eventual&quot;-最终一致性, &quot;session&quot;-会话一致性, &quot;global&quot;-全局一致性</p>
                     * @param _consistencyType <p>一致性类型；“eventual&quot;-最终一致性, &quot;session&quot;-会话一致性, &quot;global&quot;-全局一致性</p>
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
                     * 获取<p>一致性超时时间。<br>取值范围：0~1000000（微秒）,设置0则表示若只读实例出现延迟, 导致一致性策略不满足, 请求将一直等待。</p>
                     * @return ConsistencyTimeOut <p>一致性超时时间。<br>取值范围：0~1000000（微秒）,设置0则表示若只读实例出现延迟, 导致一致性策略不满足, 请求将一直等待。</p>
                     * 
                     */
                    std::string GetConsistencyTimeOut() const;

                    /**
                     * 设置<p>一致性超时时间。<br>取值范围：0~1000000（微秒）,设置0则表示若只读实例出现延迟, 导致一致性策略不满足, 请求将一直等待。</p>
                     * @param _consistencyTimeOut <p>一致性超时时间。<br>取值范围：0~1000000（微秒）,设置0则表示若只读实例出现延迟, 导致一致性策略不满足, 请求将一直等待。</p>
                     * 
                     */
                    void SetConsistencyTimeOut(const std::string& _consistencyTimeOut);

                    /**
                     * 判断参数 ConsistencyTimeOut 是否已赋值
                     * @return ConsistencyTimeOut 是否已赋值
                     * 
                     */
                    bool ConsistencyTimeOutHasBeenSet() const;

                    /**
                     * 获取<p>读写权重分配模式；系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     * @return WeightMode <p>读写权重分配模式；系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>读写权重分配模式；系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     * @param _weightMode <p>读写权重分配模式；系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
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
                     * 获取<p>实例只读权重。</p>
                     * @return InstanceWeights <p>实例只读权重。</p>
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置<p>实例只读权重。</p>
                     * @param _instanceWeights <p>实例只读权重。</p>
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
                     * 获取<p>是否开启故障转移，代理出现故障后，连接地址将路由到主实例，取值：&quot;yes&quot; , &quot;no&quot;</p>
                     * @return FailOver <p>是否开启故障转移，代理出现故障后，连接地址将路由到主实例，取值：&quot;yes&quot; , &quot;no&quot;</p>
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置<p>是否开启故障转移，代理出现故障后，连接地址将路由到主实例，取值：&quot;yes&quot; , &quot;no&quot;</p>
                     * @param _failOver <p>是否开启故障转移，代理出现故障后，连接地址将路由到主实例，取值：&quot;yes&quot; , &quot;no&quot;</p>
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
                     * 获取<p>是否自动添加只读实例，取值：&quot;yes&quot; , &quot;no&quot;</p>
                     * @return AutoAddRo <p>是否自动添加只读实例，取值：&quot;yes&quot; , &quot;no&quot;</p>
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置<p>是否自动添加只读实例，取值：&quot;yes&quot; , &quot;no&quot;</p>
                     * @param _autoAddRo <p>是否自动添加只读实例，取值：&quot;yes&quot; , &quot;no&quot;</p>
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
                     * 获取<p>是否打开读写分离。<br>该参数已废弃，请通过RwType设置读写属性。</p>
                     * @return OpenRw <p>是否打开读写分离。<br>该参数已废弃，请通过RwType设置读写属性。</p>
                     * 
                     */
                    std::string GetOpenRw() const;

                    /**
                     * 设置<p>是否打开读写分离。<br>该参数已废弃，请通过RwType设置读写属性。</p>
                     * @param _openRw <p>是否打开读写分离。<br>该参数已废弃，请通过RwType设置读写属性。</p>
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
                     * 获取<p>读写类型：<br>READWRITE,READONLY</p>
                     * @return RwType <p>读写类型：<br>READWRITE,READONLY</p>
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置<p>读写类型：<br>READWRITE,READONLY</p>
                     * @param _rwType <p>读写类型：<br>READWRITE,READONLY</p>
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
                     * 获取<p>事务拆分。<br>在一个事务中拆分读和写到不同的实例上去执行。</p>
                     * @return TransSplit <p>事务拆分。<br>在一个事务中拆分读和写到不同的实例上去执行。</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>事务拆分。<br>在一个事务中拆分读和写到不同的实例上去执行。</p>
                     * @param _transSplit <p>事务拆分。<br>在一个事务中拆分读和写到不同的实例上去执行。</p>
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
                     * 获取<p>连接模式：<br>nearby,balance</p>
                     * @return AccessMode <p>连接模式：<br>nearby,balance</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>连接模式：<br>nearby,balance</p>
                     * @param _accessMode <p>连接模式：<br>nearby,balance</p>
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
                     * 获取<p>是否打开连接池：<br>yes,no</p>
                     * @return OpenConnectionPool <p>是否打开连接池：<br>yes,no</p>
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置<p>是否打开连接池：<br>yes,no</p>
                     * @param _openConnectionPool <p>是否打开连接池：<br>yes,no</p>
                     * 
                     */
                    void SetOpenConnectionPool(const std::string& _openConnectionPool);

                    /**
                     * 判断参数 OpenConnectionPool 是否已赋值
                     * @return OpenConnectionPool 是否已赋值
                     * 
                     */
                    bool OpenConnectionPoolHasBeenSet() const;

                    /**
                     * 获取<p>连接池类型：<br>SessionConnectionPool</p>
                     * @return ConnectionPoolType <p>连接池类型：<br>SessionConnectionPool</p>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>连接池类型：<br>SessionConnectionPool</p>
                     * @param _connectionPoolType <p>连接池类型：<br>SessionConnectionPool</p>
                     * 
                     */
                    void SetConnectionPoolType(const std::string& _connectionPoolType);

                    /**
                     * 判断参数 ConnectionPoolType 是否已赋值
                     * @return ConnectionPoolType 是否已赋值
                     * 
                     */
                    bool ConnectionPoolTypeHasBeenSet() const;

                    /**
                     * 获取<p>连接池时间。<br>可选范围:0~300（秒）</p>
                     * @return ConnectionPoolTimeOut <p>连接池时间。<br>可选范围:0~300（秒）</p>
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置<p>连接池时间。<br>可选范围:0~300（秒）</p>
                     * @param _connectionPoolTimeOut <p>连接池时间。<br>可选范围:0~300（秒）</p>
                     * 
                     */
                    void SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut);

                    /**
                     * 判断参数 ConnectionPoolTimeOut 是否已赋值
                     * @return ConnectionPoolTimeOut 是否已赋值
                     * 
                     */
                    bool ConnectionPoolTimeOutHasBeenSet() const;

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
                     * <p>集群ID，例如cynosdbmysql-asd123</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>数据库代理组ID，例如cynosdbmysql-proxy-qwe123</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>一致性类型；“eventual&quot;-最终一致性, &quot;session&quot;-会话一致性, &quot;global&quot;-全局一致性</p>
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * <p>一致性超时时间。<br>取值范围：0~1000000（微秒）,设置0则表示若只读实例出现延迟, 导致一致性策略不满足, 请求将一直等待。</p>
                     */
                    std::string m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * <p>读写权重分配模式；系统自动分配：&quot;system&quot;， 自定义：&quot;custom&quot;</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>实例只读权重。</p>
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * <p>是否开启故障转移，代理出现故障后，连接地址将路由到主实例，取值：&quot;yes&quot; , &quot;no&quot;</p>
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>是否自动添加只读实例，取值：&quot;yes&quot; , &quot;no&quot;</p>
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>是否打开读写分离。<br>该参数已废弃，请通过RwType设置读写属性。</p>
                     */
                    std::string m_openRw;
                    bool m_openRwHasBeenSet;

                    /**
                     * <p>读写类型：<br>READWRITE,READONLY</p>
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * <p>事务拆分。<br>在一个事务中拆分读和写到不同的实例上去执行。</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>连接模式：<br>nearby,balance</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>是否打开连接池：<br>yes,no</p>
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * <p>连接池类型：<br>SessionConnectionPool</p>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>连接池时间。<br>可选范围:0~300（秒）</p>
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

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

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPROXYRWSPLITREQUEST_H_
