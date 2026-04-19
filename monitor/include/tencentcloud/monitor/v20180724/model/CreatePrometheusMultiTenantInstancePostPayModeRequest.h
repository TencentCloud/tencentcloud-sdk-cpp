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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSMULTITENANTINSTANCEPOSTPAYMODEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSMULTITENANTINSTANCEPOSTPAYMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusRuleKV.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreatePrometheusMultiTenantInstancePostPayMode请求参数结构体
                */
                class CreatePrometheusMultiTenantInstancePostPayModeRequest : public AbstractModel
                {
                public:
                    CreatePrometheusMultiTenantInstancePostPayModeRequest();
                    ~CreatePrometheusMultiTenantInstancePostPayModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例名</p>
                     * @return InstanceName <p>实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名</p>
                     * @param _instanceName <p>实例名</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID(可通过 vpc:DescribeVpcs 接口获取，与实例同地域)</p>
                     * @return VpcId <p>VPC ID(可通过 vpc:DescribeVpcs 接口获取，与实例同地域)</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID(可通过 vpc:DescribeVpcs 接口获取，与实例同地域)</p>
                     * @param _vpcId <p>VPC ID(可通过 vpc:DescribeVpcs 接口获取，与实例同地域)</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网 ID(可通过 vpc:DescribeSubnets 接口获取)</p>
                     * @return SubnetId <p>子网 ID(可通过 vpc:DescribeSubnets 接口获取)</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID(可通过 vpc:DescribeSubnets 接口获取)</p>
                     * @param _subnetId <p>子网 ID(可通过 vpc:DescribeSubnets 接口获取)</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一</p>
                     * @return DataRetentionTime <p>数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一</p>
                     * 
                     */
                    int64_t GetDataRetentionTime() const;

                    /**
                     * 设置<p>数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一</p>
                     * @param _dataRetentionTime <p>数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一</p>
                     * 
                     */
                    void SetDataRetentionTime(const int64_t& _dataRetentionTime);

                    /**
                     * 判断参数 DataRetentionTime 是否已赋值
                     * @return DataRetentionTime 是否已赋值
                     * 
                     */
                    bool DataRetentionTimeHasBeenSet() const;

                    /**
                     * 获取<p>可用区(与子网同可用区)</p>
                     * @return Zone <p>可用区(与子网同可用区)</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区(与子网同可用区)</p>
                     * @param _zone <p>可用区(与子网同可用区)</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>实例的标签</p>
                     * @return TagSpecification <p>实例的标签</p>
                     * 
                     */
                    std::vector<PrometheusTag> GetTagSpecification() const;

                    /**
                     * 设置<p>实例的标签</p>
                     * @param _tagSpecification <p>实例的标签</p>
                     * 
                     */
                    void SetTagSpecification(const std::vector<PrometheusTag>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取<p>需要关联的 Grafana 实例</p>
                     * @return GrafanaInstanceId <p>需要关联的 Grafana 实例</p>
                     * 
                     */
                    std::string GetGrafanaInstanceId() const;

                    /**
                     * 设置<p>需要关联的 Grafana 实例</p>
                     * @param _grafanaInstanceId <p>需要关联的 Grafana 实例</p>
                     * 
                     */
                    void SetGrafanaInstanceId(const std::string& _grafanaInstanceId);

                    /**
                     * 判断参数 GrafanaInstanceId 是否已赋值
                     * @return GrafanaInstanceId 是否已赋值
                     * 
                     */
                    bool GrafanaInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * @return InstanceAttributes <p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetInstanceAttributes() const;

                    /**
                     * 设置<p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * @param _instanceAttributes <p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * 
                     */
                    void SetInstanceAttributes(const std::vector<PrometheusRuleKV>& _instanceAttributes);

                    /**
                     * 判断参数 InstanceAttributes 是否已赋值
                     * @return InstanceAttributes 是否已赋值
                     * 
                     */
                    bool InstanceAttributesHasBeenSet() const;

                private:

                    /**
                     * <p>实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>VPC ID(可通过 vpc:DescribeVpcs 接口获取，与实例同地域)</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID(可通过 vpc:DescribeSubnets 接口获取)</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一</p>
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * <p>可用区(与子网同可用区)</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例的标签</p>
                     */
                    std::vector<PrometheusTag> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * <p>需要关联的 Grafana 实例</p>
                     */
                    std::string m_grafanaInstanceId;
                    bool m_grafanaInstanceIdHasBeenSet;

                    /**
                     * <p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     */
                    std::vector<PrometheusRuleKV> m_instanceAttributes;
                    bool m_instanceAttributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSMULTITENANTINSTANCEPOSTPAYMODEREQUEST_H_
