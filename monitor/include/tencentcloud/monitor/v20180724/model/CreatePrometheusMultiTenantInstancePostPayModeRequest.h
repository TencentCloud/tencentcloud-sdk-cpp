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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSMULTITENANTINSTANCEPOSTPAYMODEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSMULTITENANTINSTANCEPOSTPAYMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>


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
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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
                     * 获取VPC ID(可通过 vpc:DescribeVpcs 接口获取，与实例同地域)
                     * @return VpcId VPC ID(可通过 vpc:DescribeVpcs 接口获取，与实例同地域)
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID(可通过 vpc:DescribeVpcs 接口获取，与实例同地域)
                     * @param _vpcId VPC ID(可通过 vpc:DescribeVpcs 接口获取，与实例同地域)
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
                     * 获取子网 ID(可通过 vpc:DescribeSubnets 接口获取)
                     * @return SubnetId 子网 ID(可通过 vpc:DescribeSubnets 接口获取)
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网 ID(可通过 vpc:DescribeSubnets 接口获取)
                     * @param _subnetId 子网 ID(可通过 vpc:DescribeSubnets 接口获取)
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
                     * 获取数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一
                     * @return DataRetentionTime 数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一
                     * 
                     */
                    int64_t GetDataRetentionTime() const;

                    /**
                     * 设置数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一
                     * @param _dataRetentionTime 数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一
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
                     * 获取可用区(与子网同可用区)
                     * @return Zone 可用区(与子网同可用区)
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区(与子网同可用区)
                     * @param _zone 可用区(与子网同可用区)
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
                     * 获取实例的标签
                     * @return TagSpecification 实例的标签
                     * 
                     */
                    std::vector<PrometheusTag> GetTagSpecification() const;

                    /**
                     * 设置实例的标签
                     * @param _tagSpecification 实例的标签
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
                     * 获取需要关联的 Grafana 实例
                     * @return GrafanaInstanceId 需要关联的 Grafana 实例
                     * 
                     */
                    std::string GetGrafanaInstanceId() const;

                    /**
                     * 设置需要关联的 Grafana 实例
                     * @param _grafanaInstanceId 需要关联的 Grafana 实例
                     * 
                     */
                    void SetGrafanaInstanceId(const std::string& _grafanaInstanceId);

                    /**
                     * 判断参数 GrafanaInstanceId 是否已赋值
                     * @return GrafanaInstanceId 是否已赋值
                     * 
                     */
                    bool GrafanaInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * VPC ID(可通过 vpc:DescribeVpcs 接口获取，与实例同地域)
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID(可通过 vpc:DescribeSubnets 接口获取)
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * 可用区(与子网同可用区)
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例的标签
                     */
                    std::vector<PrometheusTag> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 需要关联的 Grafana 实例
                     */
                    std::string m_grafanaInstanceId;
                    bool m_grafanaInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSMULTITENANTINSTANCEPOSTPAYMODEREQUEST_H_
