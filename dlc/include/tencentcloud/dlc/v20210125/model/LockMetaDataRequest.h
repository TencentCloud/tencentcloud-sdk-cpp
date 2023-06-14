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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LOCKMETADATAREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LOCKMETADATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/LockComponentInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * LockMetaData请求参数结构体
                */
                class LockMetaDataRequest : public AbstractModel
                {
                public:
                    LockMetaDataRequest();
                    ~LockMetaDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加锁内容
                     * @return LockComponentList 加锁内容
                     * 
                     */
                    std::vector<LockComponentInfo> GetLockComponentList() const;

                    /**
                     * 设置加锁内容
                     * @param _lockComponentList 加锁内容
                     * 
                     */
                    void SetLockComponentList(const std::vector<LockComponentInfo>& _lockComponentList);

                    /**
                     * 判断参数 LockComponentList 是否已赋值
                     * @return LockComponentList 是否已赋值
                     * 
                     */
                    bool LockComponentListHasBeenSet() const;

                    /**
                     * 获取数据源名称
                     * @return DatasourceConnectionName 数据源名称
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源名称
                     * @param _datasourceConnectionName 数据源名称
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取事务id
                     * @return TxnId 事务id
                     * 
                     */
                    int64_t GetTxnId() const;

                    /**
                     * 设置事务id
                     * @param _txnId 事务id
                     * 
                     */
                    void SetTxnId(const int64_t& _txnId);

                    /**
                     * 判断参数 TxnId 是否已赋值
                     * @return TxnId 是否已赋值
                     * 
                     */
                    bool TxnIdHasBeenSet() const;

                    /**
                     * 获取客户端信息
                     * @return AgentInfo 客户端信息
                     * 
                     */
                    std::string GetAgentInfo() const;

                    /**
                     * 设置客户端信息
                     * @param _agentInfo 客户端信息
                     * 
                     */
                    void SetAgentInfo(const std::string& _agentInfo);

                    /**
                     * 判断参数 AgentInfo 是否已赋值
                     * @return AgentInfo 是否已赋值
                     * 
                     */
                    bool AgentInfoHasBeenSet() const;

                    /**
                     * 获取主机名
                     * @return Hostname 主机名
                     * 
                     */
                    std::string GetHostname() const;

                    /**
                     * 设置主机名
                     * @param _hostname 主机名
                     * 
                     */
                    void SetHostname(const std::string& _hostname);

                    /**
                     * 判断参数 Hostname 是否已赋值
                     * @return Hostname 是否已赋值
                     * 
                     */
                    bool HostnameHasBeenSet() const;

                private:

                    /**
                     * 加锁内容
                     */
                    std::vector<LockComponentInfo> m_lockComponentList;
                    bool m_lockComponentListHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 事务id
                     */
                    int64_t m_txnId;
                    bool m_txnIdHasBeenSet;

                    /**
                     * 客户端信息
                     */
                    std::string m_agentInfo;
                    bool m_agentInfoHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_hostname;
                    bool m_hostnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LOCKMETADATAREQUEST_H_
