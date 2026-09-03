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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PROMETHEUSINSTANCEITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PROMETHEUSINSTANCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Prometheus 实例概览
                */
                class PrometheusInstanceItem : public AbstractModel
                {
                public:
                    PrometheusInstanceItem();
                    ~PrometheusInstanceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Prometheus 实例 ID，例如 prom-xxxxxxxx</p>
                     * @return InstanceId <p>Prometheus 实例 ID，例如 prom-xxxxxxxx</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Prometheus 实例 ID，例如 prom-xxxxxxxx</p>
                     * @param _instanceId <p>Prometheus 实例 ID，例如 prom-xxxxxxxx</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>所属 VPC ID</p>
                     * @return VpcId <p>所属 VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>所属 VPC ID</p>
                     * @param _vpcId <p>所属 VPC ID</p>
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
                     * 获取<p>所属子网 ID</p>
                     * @return SubnetId <p>所属子网 ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>所属子网 ID</p>
                     * @param _subnetId <p>所属子网 ID</p>
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
                     * 获取<p>实例状态：1=创建中, 2=运行中, 3=异常, 4=重启中, 5=销毁中, 6=已停机, 7=已删除, 8=欠费停服中, 9=欠费已停服</p>
                     * @return InstanceStatus <p>实例状态：1=创建中, 2=运行中, 3=异常, 4=重启中, 5=销毁中, 6=已停机, 7=已删除, 8=欠费停服中, 9=欠费已停服</p>
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置<p>实例状态：1=创建中, 2=运行中, 3=异常, 4=重启中, 5=销毁中, 6=已停机, 7=已删除, 8=欠费停服中, 9=欠费已停服</p>
                     * @param _instanceStatus <p>实例状态：1=创建中, 2=运行中, 3=异常, 4=重启中, 5=销毁中, 6=已停机, 7=已删除, 8=欠费停服中, 9=欠费已停服</p>
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>是否与 TKE 集群同 VPC；true 会被前置排序</p>
                     * @return SameVpcWithTke <p>是否与 TKE 集群同 VPC；true 会被前置排序</p>
                     * 
                     */
                    bool GetSameVpcWithTke() const;

                    /**
                     * 设置<p>是否与 TKE 集群同 VPC；true 会被前置排序</p>
                     * @param _sameVpcWithTke <p>是否与 TKE 集群同 VPC；true 会被前置排序</p>
                     * 
                     */
                    void SetSameVpcWithTke(const bool& _sameVpcWithTke);

                    /**
                     * 判断参数 SameVpcWithTke 是否已赋值
                     * @return SameVpcWithTke 是否已赋值
                     * 
                     */
                    bool SameVpcWithTkeHasBeenSet() const;

                private:

                    /**
                     * <p>Prometheus 实例 ID，例如 prom-xxxxxxxx</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>所属 VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>所属子网 ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例状态：1=创建中, 2=运行中, 3=异常, 4=重启中, 5=销毁中, 6=已停机, 7=已删除, 8=欠费停服中, 9=欠费已停服</p>
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>是否与 TKE 集群同 VPC；true 会被前置排序</p>
                     */
                    bool m_sameVpcWithTke;
                    bool m_sameVpcWithTkeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PROMETHEUSINSTANCEITEM_H_
