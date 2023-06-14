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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_POOLINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_POOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ServerMachineInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ProxyMachineInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * center资源池中的机器信息
                */
                class PoolInfo : public AbstractModel
                {
                public:
                    PoolInfo();
                    ~PoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一id
                     * @return PoolUid 唯一id
                     * 
                     */
                    int64_t GetPoolUid() const;

                    /**
                     * 设置唯一id
                     * @param _poolUid 唯一id
                     * 
                     */
                    void SetPoolUid(const int64_t& _poolUid);

                    /**
                     * 判断参数 PoolUid 是否已赋值
                     * @return PoolUid 是否已赋值
                     * 
                     */
                    bool PoolUidHasBeenSet() const;

                    /**
                     * 获取是否支持ipv6
                     * @return Ipv6Enable 是否支持ipv6
                     * 
                     */
                    int64_t GetIpv6Enable() const;

                    /**
                     * 设置是否支持ipv6
                     * @param _ipv6Enable 是否支持ipv6
                     * 
                     */
                    void SetIpv6Enable(const int64_t& _ipv6Enable);

                    /**
                     * 判断参数 Ipv6Enable 是否已赋值
                     * @return Ipv6Enable 是否已赋值
                     * 
                     */
                    bool Ipv6EnableHasBeenSet() const;

                    /**
                     * 获取剩余可用app
                     * @return AvailableAppCount 剩余可用app
                     * 
                     */
                    int64_t GetAvailableAppCount() const;

                    /**
                     * 设置剩余可用app
                     * @param _availableAppCount 剩余可用app
                     * 
                     */
                    void SetAvailableAppCount(const int64_t& _availableAppCount);

                    /**
                     * 判断参数 AvailableAppCount 是否已赋值
                     * @return AvailableAppCount 是否已赋值
                     * 
                     */
                    bool AvailableAppCountHasBeenSet() const;

                    /**
                     * 获取svr机器列表
                     * @return ServerList svr机器列表
                     * 
                     */
                    std::vector<ServerMachineInfo> GetServerList() const;

                    /**
                     * 设置svr机器列表
                     * @param _serverList svr机器列表
                     * 
                     */
                    void SetServerList(const std::vector<ServerMachineInfo>& _serverList);

                    /**
                     * 判断参数 ServerList 是否已赋值
                     * @return ServerList 是否已赋值
                     * 
                     */
                    bool ServerListHasBeenSet() const;

                    /**
                     * 获取proxy机器列表
                     * @return ProxyList proxy机器列表
                     * 
                     */
                    std::vector<ProxyMachineInfo> GetProxyList() const;

                    /**
                     * 设置proxy机器列表
                     * @param _proxyList proxy机器列表
                     * 
                     */
                    void SetProxyList(const std::vector<ProxyMachineInfo>& _proxyList);

                    /**
                     * 判断参数 ProxyList 是否已赋值
                     * @return ProxyList 是否已赋值
                     * 
                     */
                    bool ProxyListHasBeenSet() const;

                private:

                    /**
                     * 唯一id
                     */
                    int64_t m_poolUid;
                    bool m_poolUidHasBeenSet;

                    /**
                     * 是否支持ipv6
                     */
                    int64_t m_ipv6Enable;
                    bool m_ipv6EnableHasBeenSet;

                    /**
                     * 剩余可用app
                     */
                    int64_t m_availableAppCount;
                    bool m_availableAppCountHasBeenSet;

                    /**
                     * svr机器列表
                     */
                    std::vector<ServerMachineInfo> m_serverList;
                    bool m_serverListHasBeenSet;

                    /**
                     * proxy机器列表
                     */
                    std::vector<ProxyMachineInfo> m_proxyList;
                    bool m_proxyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_POOLINFO_H_
