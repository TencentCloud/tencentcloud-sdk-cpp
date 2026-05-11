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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYCONFIG_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyZone.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 访问代理配置
                */
                class ProxyConfig : public AbstractModel
                {
                public:
                    ProxyConfig();
                    ~ProxyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据库代理组节点个数。该参数不再建议使用,建议使用ProxyZones</p>
                     * @return ProxyCount <p>数据库代理组节点个数。该参数不再建议使用,建议使用ProxyZones</p>
                     * @deprecated
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置<p>数据库代理组节点个数。该参数不再建议使用,建议使用ProxyZones</p>
                     * @param _proxyCount <p>数据库代理组节点个数。该参数不再建议使用,建议使用ProxyZones</p>
                     * @deprecated
                     */
                    void SetProxyCount(const int64_t& _proxyCount);

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     * @deprecated
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取<p>cpu核数</p>
                     * @return Cpu <p>cpu核数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>cpu核数</p>
                     * @param _cpu <p>cpu核数</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>内存</p>
                     * @return Mem <p>内存</p>
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>内存</p>
                     * @param _mem <p>内存</p>
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取<p>连接池类型:SessionConnectionPool(会话级别连接池 )</p>
                     * @return ConnectionPoolType <p>连接池类型:SessionConnectionPool(会话级别连接池 )</p>
                     * 
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置<p>连接池类型:SessionConnectionPool(会话级别连接池 )</p>
                     * @param _connectionPoolType <p>连接池类型:SessionConnectionPool(会话级别连接池 )</p>
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
                     * 获取<p>是否开启连接池,yes-开启，no-不开启</p>
                     * @return OpenConnectionPool <p>是否开启连接池,yes-开启，no-不开启</p>
                     * 
                     */
                    std::string GetOpenConnectionPool() const;

                    /**
                     * 设置<p>是否开启连接池,yes-开启，no-不开启</p>
                     * @param _openConnectionPool <p>是否开启连接池,yes-开启，no-不开启</p>
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
                     * 获取<p>连接池阈值:单位（秒）</p>
                     * @return ConnectionPoolTimeOut <p>连接池阈值:单位（秒）</p>
                     * 
                     */
                    int64_t GetConnectionPoolTimeOut() const;

                    /**
                     * 设置<p>连接池阈值:单位（秒）</p>
                     * @param _connectionPoolTimeOut <p>连接池阈值:单位（秒）</p>
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
                     * 获取<p>描述说明</p>
                     * @return Description <p>描述说明</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述说明</p>
                     * @param _description <p>描述说明</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>数据库节点信息（该参数与ProxyCount需要任选一个输入）</p>
                     * @return ProxyZones <p>数据库节点信息（该参数与ProxyCount需要任选一个输入）</p>
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置<p>数据库节点信息（该参数与ProxyCount需要任选一个输入）</p>
                     * @param _proxyZones <p>数据库节点信息（该参数与ProxyCount需要任选一个输入）</p>
                     * 
                     */
                    void SetProxyZones(const std::vector<ProxyZone>& _proxyZones);

                    /**
                     * 判断参数 ProxyZones 是否已赋值
                     * @return ProxyZones 是否已赋值
                     * 
                     */
                    bool ProxyZonesHasBeenSet() const;

                private:

                    /**
                     * <p>数据库代理组节点个数。该参数不再建议使用,建议使用ProxyZones</p>
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * <p>cpu核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>连接池类型:SessionConnectionPool(会话级别连接池 )</p>
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * <p>是否开启连接池,yes-开启，no-不开启</p>
                     */
                    std::string m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * <p>连接池阈值:单位（秒）</p>
                     */
                    int64_t m_connectionPoolTimeOut;
                    bool m_connectionPoolTimeOutHasBeenSet;

                    /**
                     * <p>描述说明</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>数据库节点信息（该参数与ProxyCount需要任选一个输入）</p>
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYCONFIG_H_
