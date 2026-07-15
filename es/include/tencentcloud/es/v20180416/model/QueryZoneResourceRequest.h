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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_QUERYZONERESOURCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_QUERYZONERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * QueryZoneResource请求参数结构体
                */
                class QueryZoneResourceRequest : public AbstractModel
                {
                public:
                    QueryZoneResourceRequest();
                    ~QueryZoneResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要检查的可用区
                     * @return Zones 要检查的可用区
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置要检查的可用区
                     * @param _zones 要检查的可用区
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取操作类型（create数据节点创建，masterCreate专用主节点创建，scaleUp数据节点纵向扩容，masterAdd添加专用主节点，masterScaleUp专用主节点纵向扩容）
                     * @return OptType 操作类型（create数据节点创建，masterCreate专用主节点创建，scaleUp数据节点纵向扩容，masterAdd添加专用主节点，masterScaleUp专用主节点纵向扩容）
                     * 
                     */
                    std::string GetOptType() const;

                    /**
                     * 设置操作类型（create数据节点创建，masterCreate专用主节点创建，scaleUp数据节点纵向扩容，masterAdd添加专用主节点，masterScaleUp专用主节点纵向扩容）
                     * @param _optType 操作类型（create数据节点创建，masterCreate专用主节点创建，scaleUp数据节点纵向扩容，masterAdd添加专用主节点，masterScaleUp专用主节点纵向扩容）
                     * 
                     */
                    void SetOptType(const std::string& _optType);

                    /**
                     * 判断参数 OptType 是否已赋值
                     * @return OptType 是否已赋值
                     * 
                     */
                    bool OptTypeHasBeenSet() const;

                    /**
                     * 获取实例ID(变配检查需要传递)
                     * @return InstanceId 实例ID(变配检查需要传递)
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID(变配检查需要传递)
                     * @param _instanceId 实例ID(变配检查需要传递)
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取集群部署方式
<li>0, 单可用区部署</li>
<li>1, 多可用区部署</li>
                     * @return DeployMode 集群部署方式
<li>0, 单可用区部署</li>
<li>1, 多可用区部署</li>
                     * 
                     */
                    uint64_t GetDeployMode() const;

                    /**
                     * 设置集群部署方式
<li>0, 单可用区部署</li>
<li>1, 多可用区部署</li>
                     * @param _deployMode 集群部署方式
<li>0, 单可用区部署</li>
<li>1, 多可用区部署</li>
                     * 
                     */
                    void SetDeployMode(const uint64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取计费类型<li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：按小时后付费</li>
                     * @return ChargeType 计费类型<li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：按小时后付费</li>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费类型<li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：按小时后付费</li>
                     * @param _chargeType 计费类型<li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：按小时后付费</li>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取ES版本号如5.6.4，6.4.3，6.8.2，7.5.1
                     * @return EsVersion ES版本号如5.6.4，6.4.3，6.8.2，7.5.1
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置ES版本号如5.6.4，6.4.3，6.8.2，7.5.1
                     * @param _esVersion ES版本号如5.6.4，6.4.3，6.8.2，7.5.1
                     * 
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     * 
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取cdcId，使用cdc子网时传递
                     * @return CdcId cdcId，使用cdc子网时传递
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置cdcId，使用cdc子网时传递
                     * @param _cdcId cdcId，使用cdc子网时传递
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * 要检查的可用区
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 操作类型（create数据节点创建，masterCreate专用主节点创建，scaleUp数据节点纵向扩容，masterAdd添加专用主节点，masterScaleUp专用主节点纵向扩容）
                     */
                    std::string m_optType;
                    bool m_optTypeHasBeenSet;

                    /**
                     * 实例ID(变配检查需要传递)
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群部署方式
<li>0, 单可用区部署</li>
<li>1, 多可用区部署</li>
                     */
                    uint64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 计费类型<li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：按小时后付费</li>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * ES版本号如5.6.4，6.4.3，6.8.2，7.5.1
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * cdcId，使用cdc子网时传递
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_QUERYZONERESOURCEREQUEST_H_
