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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 集群列表Item
                */
                class AssetClusterListItem : public AbstractModel
                {
                public:
                    AssetClusterListItem();
                    ~AssetClusterListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群状态
CSR_RUNNING: 运行中
CSR_EXCEPTION:异常
CSR_DEL:已经删除
                     * @return Status 集群状态
CSR_RUNNING: 运行中
CSR_EXCEPTION:异常
CSR_DEL:已经删除
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置集群状态
CSR_RUNNING: 运行中
CSR_EXCEPTION:异常
CSR_DEL:已经删除
                     * @param _status 集群状态
CSR_RUNNING: 运行中
CSR_EXCEPTION:异常
CSR_DEL:已经删除
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
                     * 获取绑定规则名称
                     * @return BindRuleName 绑定规则名称
                     * 
                     */
                    std::string GetBindRuleName() const;

                    /**
                     * 设置绑定规则名称
                     * @param _bindRuleName 绑定规则名称
                     * 
                     */
                    void SetBindRuleName(const std::string& _bindRuleName);

                    /**
                     * 判断参数 BindRuleName 是否已赋值
                     * @return BindRuleName 是否已赋值
                     * 
                     */
                    bool BindRuleNameHasBeenSet() const;

                    /**
                     * 获取集群类型:
CT_TKE:TKE集群;
CT_USER_CREATE:用户自建集群;
CT_TKE_SERVERLESS:TKE Serverless集群;
                     * @return ClusterType 集群类型:
CT_TKE:TKE集群;
CT_USER_CREATE:用户自建集群;
CT_TKE_SERVERLESS:TKE Serverless集群;
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型:
CT_TKE:TKE集群;
CT_USER_CREATE:用户自建集群;
CT_TKE_SERVERLESS:TKE Serverless集群;
                     * @param _clusterType 集群类型:
CT_TKE:TKE集群;
CT_USER_CREATE:用户自建集群;
CT_TKE_SERVERLESS:TKE Serverless集群;
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群版本
                     * @return ClusterVersion 集群版本
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本
                     * @param _clusterVersion 集群版本
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取内存量
                     * @return MemLimit 内存量
                     * 
                     */
                    int64_t GetMemLimit() const;

                    /**
                     * 设置内存量
                     * @param _memLimit 内存量
                     * 
                     */
                    void SetMemLimit(const int64_t& _memLimit);

                    /**
                     * 判断参数 MemLimit 是否已赋值
                     * @return MemLimit 是否已赋值
                     * 
                     */
                    bool MemLimitHasBeenSet() const;

                    /**
                     * 获取cpu
                     * @return CpuLimit cpu
                     * 
                     */
                    int64_t GetCpuLimit() const;

                    /**
                     * 设置cpu
                     * @param _cpuLimit cpu
                     * 
                     */
                    void SetCpuLimit(const int64_t& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群状态
CSR_RUNNING: 运行中
CSR_EXCEPTION:异常
CSR_DEL:已经删除
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 绑定规则名称
                     */
                    std::string m_bindRuleName;
                    bool m_bindRuleNameHasBeenSet;

                    /**
                     * 集群类型:
CT_TKE:TKE集群;
CT_USER_CREATE:用户自建集群;
CT_TKE_SERVERLESS:TKE Serverless集群;
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群版本
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 内存量
                     */
                    int64_t m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * cpu
                     */
                    int64_t m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_
