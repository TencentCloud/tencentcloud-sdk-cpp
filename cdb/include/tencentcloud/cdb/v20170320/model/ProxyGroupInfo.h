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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ProxyNode.h>
#include <tencentcloud/cdb/v20170320/model/ProxyAddress.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 代理组详情
                */
                class ProxyGroupInfo : public AbstractModel
                {
                public:
                    ProxyGroupInfo();
                    ~ProxyGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理组ID
                     * @return ProxyGroupId 代理组ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置代理组ID
                     * @param _proxyGroupId 代理组ID
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
                     * 获取代理版本
                     * @return ProxyVersion 代理版本
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置代理版本
                     * @param _proxyVersion 代理版本
                     * 
                     */
                    void SetProxyVersion(const std::string& _proxyVersion);

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     * 
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取代理支持升级版本
                     * @return SupportUpgradeProxyVersion 代理支持升级版本
                     * 
                     */
                    std::string GetSupportUpgradeProxyVersion() const;

                    /**
                     * 设置代理支持升级版本
                     * @param _supportUpgradeProxyVersion 代理支持升级版本
                     * 
                     */
                    void SetSupportUpgradeProxyVersion(const std::string& _supportUpgradeProxyVersion);

                    /**
                     * 判断参数 SupportUpgradeProxyVersion 是否已赋值
                     * @return SupportUpgradeProxyVersion 是否已赋值
                     * 
                     */
                    bool SupportUpgradeProxyVersionHasBeenSet() const;

                    /**
                     * 获取代理状态
                     * @return Status 代理状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置代理状态
                     * @param _status 代理状态
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
                     * 获取代理任务状态
                     * @return TaskStatus 代理任务状态
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置代理任务状态
                     * @param _taskStatus 代理任务状态
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取代理组节点信息
                     * @return ProxyNode 代理组节点信息
                     * 
                     */
                    std::vector<ProxyNode> GetProxyNode() const;

                    /**
                     * 设置代理组节点信息
                     * @param _proxyNode 代理组节点信息
                     * 
                     */
                    void SetProxyNode(const std::vector<ProxyNode>& _proxyNode);

                    /**
                     * 判断参数 ProxyNode 是否已赋值
                     * @return ProxyNode 是否已赋值
                     * 
                     */
                    bool ProxyNodeHasBeenSet() const;

                    /**
                     * 获取代理组地址信息
                     * @return ProxyAddress 代理组地址信息
                     * 
                     */
                    std::vector<ProxyAddress> GetProxyAddress() const;

                    /**
                     * 设置代理组地址信息
                     * @param _proxyAddress 代理组地址信息
                     * 
                     */
                    void SetProxyAddress(const std::vector<ProxyAddress>& _proxyAddress);

                    /**
                     * 判断参数 ProxyAddress 是否已赋值
                     * @return ProxyAddress 是否已赋值
                     * 
                     */
                    bool ProxyAddressHasBeenSet() const;

                    /**
                     * 获取连接池阈值
                     * @return ConnectionPoolLimit 连接池阈值
                     * 
                     */
                    uint64_t GetConnectionPoolLimit() const;

                    /**
                     * 设置连接池阈值
                     * @param _connectionPoolLimit 连接池阈值
                     * 
                     */
                    void SetConnectionPoolLimit(const uint64_t& _connectionPoolLimit);

                    /**
                     * 判断参数 ConnectionPoolLimit 是否已赋值
                     * @return ConnectionPoolLimit 是否已赋值
                     * 
                     */
                    bool ConnectionPoolLimitHasBeenSet() const;

                    /**
                     * 获取支持创建地址
                     * @return SupportCreateProxyAddress 支持创建地址
                     * 
                     */
                    bool GetSupportCreateProxyAddress() const;

                    /**
                     * 设置支持创建地址
                     * @param _supportCreateProxyAddress 支持创建地址
                     * 
                     */
                    void SetSupportCreateProxyAddress(const bool& _supportCreateProxyAddress);

                    /**
                     * 判断参数 SupportCreateProxyAddress 是否已赋值
                     * @return SupportCreateProxyAddress 是否已赋值
                     * 
                     */
                    bool SupportCreateProxyAddressHasBeenSet() const;

                    /**
                     * 获取支持升级代理版本所需的cdb版本
                     * @return SupportUpgradeProxyMysqlVersion 支持升级代理版本所需的cdb版本
                     * 
                     */
                    std::string GetSupportUpgradeProxyMysqlVersion() const;

                    /**
                     * 设置支持升级代理版本所需的cdb版本
                     * @param _supportUpgradeProxyMysqlVersion 支持升级代理版本所需的cdb版本
                     * 
                     */
                    void SetSupportUpgradeProxyMysqlVersion(const std::string& _supportUpgradeProxyMysqlVersion);

                    /**
                     * 判断参数 SupportUpgradeProxyMysqlVersion 是否已赋值
                     * @return SupportUpgradeProxyMysqlVersion 是否已赋值
                     * 
                     */
                    bool SupportUpgradeProxyMysqlVersionHasBeenSet() const;

                private:

                    /**
                     * 代理组ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 代理版本
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * 代理支持升级版本
                     */
                    std::string m_supportUpgradeProxyVersion;
                    bool m_supportUpgradeProxyVersionHasBeenSet;

                    /**
                     * 代理状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 代理任务状态
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 代理组节点信息
                     */
                    std::vector<ProxyNode> m_proxyNode;
                    bool m_proxyNodeHasBeenSet;

                    /**
                     * 代理组地址信息
                     */
                    std::vector<ProxyAddress> m_proxyAddress;
                    bool m_proxyAddressHasBeenSet;

                    /**
                     * 连接池阈值
                     */
                    uint64_t m_connectionPoolLimit;
                    bool m_connectionPoolLimitHasBeenSet;

                    /**
                     * 支持创建地址
                     */
                    bool m_supportCreateProxyAddress;
                    bool m_supportCreateProxyAddressHasBeenSet;

                    /**
                     * 支持升级代理版本所需的cdb版本
                     */
                    std::string m_supportUpgradeProxyMysqlVersion;
                    bool m_supportUpgradeProxyMysqlVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUPINFO_H_
