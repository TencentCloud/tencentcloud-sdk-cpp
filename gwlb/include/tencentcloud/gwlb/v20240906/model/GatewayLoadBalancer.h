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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_GATEWAYLOADBALANCER_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_GATEWAYLOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/TagInfo.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * 网关负载均衡实例的信息
                */
                class GatewayLoadBalancer : public AbstractModel
                {
                public:
                    GatewayLoadBalancer();
                    ~GatewayLoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关负载均衡实例 ID。
                     * @return LoadBalancerId 网关负载均衡实例 ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置网关负载均衡实例 ID。
                     * @param _loadBalancerId 网关负载均衡实例 ID。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取网关负载均衡实例的名称。
                     * @return LoadBalancerName 网关负载均衡实例的名称。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置网关负载均衡实例的名称。
                     * @param _loadBalancerName 网关负载均衡实例的名称。
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取网关负载均衡所属私有网络。
                     * @return VpcId 网关负载均衡所属私有网络。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置网关负载均衡所属私有网络。
                     * @param _vpcId 网关负载均衡所属私有网络。
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
                     * 获取网关负载均衡所属子网。
                     * @return SubnetId 网关负载均衡所属子网。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置网关负载均衡所属子网。
                     * @param _subnetId 网关负载均衡所属子网。
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
                     * 获取网关负载均衡提供服务的虚拟IP。
                     * @return Vips 网关负载均衡提供服务的虚拟IP。
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置网关负载均衡提供服务的虚拟IP。
                     * @param _vips 网关负载均衡提供服务的虚拟IP。
                     * 
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     * 
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取网关负载均衡实例状态。
0：创建中，1：正常运行，3：删除中。
                     * @return Status 网关负载均衡实例状态。
0：创建中，1：正常运行，3：删除中。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置网关负载均衡实例状态。
0：创建中，1：正常运行，3：删除中。
                     * @param _status 网关负载均衡实例状态。
0：创建中，1：正常运行，3：删除中。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取关联的目标组唯一ID。
                     * @return TargetGroupId 关联的目标组唯一ID。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置关联的目标组唯一ID。
                     * @param _targetGroupId 关联的目标组唯一ID。
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取是否开启删除保护功能。
                     * @return DeleteProtect 是否开启删除保护功能。
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置是否开启删除保护功能。
                     * @param _deleteProtect 是否开启删除保护功能。
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的标签信息。
                     * @return Tags 负载均衡实例的标签信息。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置负载均衡实例的标签信息。
                     * @param _tags 负载均衡实例的标签信息。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取网关负载均衡实例的计费类型，POSTPAID_BY_HOUR：按量计费
                     * @return ChargeType 网关负载均衡实例的计费类型，POSTPAID_BY_HOUR：按量计费
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置网关负载均衡实例的计费类型，POSTPAID_BY_HOUR：按量计费
                     * @param _chargeType 网关负载均衡实例的计费类型，POSTPAID_BY_HOUR：按量计费
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
                     * 获取0：表示未被隔离，1：表示被隔离。
                     * @return Isolation 0：表示未被隔离，1：表示被隔离。
                     * 
                     */
                    uint64_t GetIsolation() const;

                    /**
                     * 设置0：表示未被隔离，1：表示被隔离。
                     * @param _isolation 0：表示未被隔离，1：表示被隔离。
                     * 
                     */
                    void SetIsolation(const uint64_t& _isolation);

                    /**
                     * 判断参数 Isolation 是否已赋值
                     * @return Isolation 是否已赋值
                     * 
                     */
                    bool IsolationHasBeenSet() const;

                    /**
                     * 获取网关负载均衡实例被隔离的时间
                     * @return IsolatedTime 网关负载均衡实例被隔离的时间
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置网关负载均衡实例被隔离的时间
                     * @param _isolatedTime 网关负载均衡实例被隔离的时间
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取是否开启配置修改保护功能。
                     * @return OperateProtect 是否开启配置修改保护功能。
                     * 
                     */
                    bool GetOperateProtect() const;

                    /**
                     * 设置是否开启配置修改保护功能。
                     * @param _operateProtect 是否开启配置修改保护功能。
                     * 
                     */
                    void SetOperateProtect(const bool& _operateProtect);

                    /**
                     * 判断参数 OperateProtect 是否已赋值
                     * @return OperateProtect 是否已赋值
                     * 
                     */
                    bool OperateProtectHasBeenSet() const;

                private:

                    /**
                     * 网关负载均衡实例 ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 网关负载均衡实例的名称。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 网关负载均衡所属私有网络。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 网关负载均衡所属子网。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 网关负载均衡提供服务的虚拟IP。
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * 网关负载均衡实例状态。
0：创建中，1：正常运行，3：删除中。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 关联的目标组唯一ID。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 是否开启删除保护功能。
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                    /**
                     * 负载均衡实例的标签信息。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 网关负载均衡实例的计费类型，POSTPAID_BY_HOUR：按量计费
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 0：表示未被隔离，1：表示被隔离。
                     */
                    uint64_t m_isolation;
                    bool m_isolationHasBeenSet;

                    /**
                     * 网关负载均衡实例被隔离的时间
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * 是否开启配置修改保护功能。
                     */
                    bool m_operateProtect;
                    bool m_operateProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_GATEWAYLOADBALANCER_H_
