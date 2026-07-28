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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYGROUPINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ProxyNode.h>
#include <tencentcloud/postgres/v20170312/model/ProxyAddress.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Proxy 实例（组）详细信息，包含基础信息、节点列表、接入地址列表。
                */
                class ProxyGroupInfo : public AbstractModel
                {
                public:
                    ProxyGroupInfo();
                    ~ProxyGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Proxy 实例 ID，格式形如：proxygroup-xxxxxxxx</p>
                     * @return ProxyGroupId <p>Proxy 实例 ID，格式形如：proxygroup-xxxxxxxx</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>Proxy 实例 ID，格式形如：proxygroup-xxxxxxxx</p>
                     * @param _proxyGroupId <p>Proxy 实例 ID，格式形如：proxygroup-xxxxxxxx</p>
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
                     * 获取<p>Proxy 状态：running/isolated/offline 等</p>
                     * @return Status <p>Proxy 状态：running/isolated/offline 等</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Proxy 状态：running/isolated/offline 等</p>
                     * @param _status <p>Proxy 状态：running/isolated/offline 等</p>
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
                     * 获取<p>Proxy 任务状态，无任务时为空</p>
                     * @return TaskStatus <p>Proxy 任务状态，无任务时为空</p>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>Proxy 任务状态，无任务时为空</p>
                     * @param _taskStatus <p>Proxy 任务状态，无任务时为空</p>
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
                     * 获取<p>Proxy 描述</p>
                     * @return Description <p>Proxy 描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Proxy 描述</p>
                     * @param _description <p>Proxy 描述</p>
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
                     * 获取<p>Proxy 内核版本号</p>
                     * @return ProxyVersion <p>Proxy 内核版本号</p>
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置<p>Proxy 内核版本号</p>
                     * @param _proxyVersion <p>Proxy 内核版本号</p>
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
                     * 获取<p>连接池阈值（连接数）</p>
                     * @return ConnectionPoolLimit <p>连接池阈值（连接数）</p>
                     * 
                     */
                    int64_t GetConnectionPoolLimit() const;

                    /**
                     * 设置<p>连接池阈值（连接数）</p>
                     * @param _connectionPoolLimit <p>连接池阈值（连接数）</p>
                     * 
                     */
                    void SetConnectionPoolLimit(const int64_t& _connectionPoolLimit);

                    /**
                     * 判断参数 ConnectionPoolLimit 是否已赋值
                     * @return ConnectionPoolLimit 是否已赋值
                     * 
                     */
                    bool ConnectionPoolLimitHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 节点列表</p>
                     * @return ProxyNodeSet <p>Proxy 节点列表</p>
                     * 
                     */
                    std::vector<ProxyNode> GetProxyNodeSet() const;

                    /**
                     * 设置<p>Proxy 节点列表</p>
                     * @param _proxyNodeSet <p>Proxy 节点列表</p>
                     * 
                     */
                    void SetProxyNodeSet(const std::vector<ProxyNode>& _proxyNodeSet);

                    /**
                     * 判断参数 ProxyNodeSet 是否已赋值
                     * @return ProxyNodeSet 是否已赋值
                     * 
                     */
                    bool ProxyNodeSetHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 接入地址列表</p>
                     * @return ProxyAddressSet <p>Proxy 接入地址列表</p>
                     * 
                     */
                    std::vector<ProxyAddress> GetProxyAddressSet() const;

                    /**
                     * 设置<p>Proxy 接入地址列表</p>
                     * @param _proxyAddressSet <p>Proxy 接入地址列表</p>
                     * 
                     */
                    void SetProxyAddressSet(const std::vector<ProxyAddress>& _proxyAddressSet);

                    /**
                     * 判断参数 ProxyAddressSet 是否已赋值
                     * @return ProxyAddressSet 是否已赋值
                     * 
                     */
                    bool ProxyAddressSetHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，格式：YYYY-MM-DD HH:MM:SS</p>
                     * @return CreateTime <p>创建时间，格式：YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，格式：YYYY-MM-DD HH:MM:SS</p>
                     * @param _createTime <p>创建时间，格式：YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Proxy 实例 ID，格式形如：proxygroup-xxxxxxxx</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>Proxy 状态：running/isolated/offline 等</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Proxy 任务状态，无任务时为空</p>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>Proxy 描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Proxy 内核版本号</p>
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * <p>连接池阈值（连接数）</p>
                     */
                    int64_t m_connectionPoolLimit;
                    bool m_connectionPoolLimitHasBeenSet;

                    /**
                     * <p>Proxy 节点列表</p>
                     */
                    std::vector<ProxyNode> m_proxyNodeSet;
                    bool m_proxyNodeSetHasBeenSet;

                    /**
                     * <p>Proxy 接入地址列表</p>
                     */
                    std::vector<ProxyAddress> m_proxyAddressSet;
                    bool m_proxyAddressSetHasBeenSet;

                    /**
                     * <p>创建时间，格式：YYYY-MM-DD HH:MM:SS</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYGROUPINFO_H_
