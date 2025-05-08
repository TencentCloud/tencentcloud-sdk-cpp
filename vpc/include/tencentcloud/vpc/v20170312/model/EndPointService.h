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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINTSERVICE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINTSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/EndPoint.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 终端节点服务对象。
                */
                class EndPointService : public AbstractModel
                {
                public:
                    EndPointService();
                    ~EndPointService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取终端节点服务ID
                     * @return EndPointServiceId 终端节点服务ID
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务ID
                     * @param _endPointServiceId 终端节点服务ID
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取VPCID。
                     * @return VpcId VPCID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPCID。
                     * @param _vpcId VPCID。
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
                     * 获取APPID。
                     * @return ServiceOwner APPID。
                     * 
                     */
                    std::string GetServiceOwner() const;

                    /**
                     * 设置APPID。
                     * @param _serviceOwner APPID。
                     * 
                     */
                    void SetServiceOwner(const std::string& _serviceOwner);

                    /**
                     * 判断参数 ServiceOwner 是否已赋值
                     * @return ServiceOwner 是否已赋值
                     * 
                     */
                    bool ServiceOwnerHasBeenSet() const;

                    /**
                     * 获取终端节点服务名称。
                     * @return ServiceName 终端节点服务名称。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置终端节点服务名称。
                     * @param _serviceName 终端节点服务名称。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取后端服务的VIP。
                     * @return ServiceVip 后端服务的VIP。
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置后端服务的VIP。
                     * @param _serviceVip 后端服务的VIP。
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取后端服务的ID，比如lb-lip4e6bp。
                     * @return ServiceInstanceId 后端服务的ID，比如lb-lip4e6bp。
                     * 
                     */
                    std::string GetServiceInstanceId() const;

                    /**
                     * 设置后端服务的ID，比如lb-lip4e6bp。
                     * @param _serviceInstanceId 后端服务的ID，比如lb-lip4e6bp。
                     * 
                     */
                    void SetServiceInstanceId(const std::string& _serviceInstanceId);

                    /**
                     * 判断参数 ServiceInstanceId 是否已赋值
                     * @return ServiceInstanceId 是否已赋值
                     * 
                     */
                    bool ServiceInstanceIdHasBeenSet() const;

                    /**
                     * 获取是否自动接受。
                     * @return AutoAcceptFlag 是否自动接受。
                     * 
                     */
                    bool GetAutoAcceptFlag() const;

                    /**
                     * 设置是否自动接受。
                     * @param _autoAcceptFlag 是否自动接受。
                     * 
                     */
                    void SetAutoAcceptFlag(const bool& _autoAcceptFlag);

                    /**
                     * 判断参数 AutoAcceptFlag 是否已赋值
                     * @return AutoAcceptFlag 是否已赋值
                     * 
                     */
                    bool AutoAcceptFlagHasBeenSet() const;

                    /**
                     * 获取关联的终端节点个数。
                     * @return EndPointCount 关联的终端节点个数。
                     * 
                     */
                    uint64_t GetEndPointCount() const;

                    /**
                     * 设置关联的终端节点个数。
                     * @param _endPointCount 关联的终端节点个数。
                     * 
                     */
                    void SetEndPointCount(const uint64_t& _endPointCount);

                    /**
                     * 判断参数 EndPointCount 是否已赋值
                     * @return EndPointCount 是否已赋值
                     * 
                     */
                    bool EndPointCountHasBeenSet() const;

                    /**
                     * 获取终端节点对象数组。
                     * @return EndPointSet 终端节点对象数组。
                     * 
                     */
                    std::vector<EndPoint> GetEndPointSet() const;

                    /**
                     * 设置终端节点对象数组。
                     * @param _endPointSet 终端节点对象数组。
                     * 
                     */
                    void SetEndPointSet(const std::vector<EndPoint>& _endPointSet);

                    /**
                     * 判断参数 EndPointSet 是否已赋值
                     * @return EndPointSet 是否已赋值
                     * 
                     */
                    bool EndPointSetHasBeenSet() const;

                    /**
                     * 获取创建时间。格式为YYYY-MM-DD HH:MM:SS字符串。
                     * @return CreateTime 创建时间。格式为YYYY-MM-DD HH:MM:SS字符串。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。格式为YYYY-MM-DD HH:MM:SS字符串。
                     * @param _createTime 创建时间。格式为YYYY-MM-DD HH:MM:SS字符串。
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
                     * 获取挂载的PAAS服务类型，CLB（负载均衡），CDB（云数据库 MySQL），CRS（云数据库 Redis），GWLB（网关负载均衡）。
                     * @return ServiceType 挂载的PAAS服务类型，CLB（负载均衡），CDB（云数据库 MySQL），CRS（云数据库 Redis），GWLB（网关负载均衡）。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置挂载的PAAS服务类型，CLB（负载均衡），CDB（云数据库 MySQL），CRS（云数据库 Redis），GWLB（网关负载均衡）。
                     * @param _serviceType 挂载的PAAS服务类型，CLB（负载均衡），CDB（云数据库 MySQL），CRS（云数据库 Redis），GWLB（网关负载均衡）。
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取CDC 集群唯一 ID
                     * @return CdcId CDC 集群唯一 ID
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC 集群唯一 ID
                     * @param _cdcId CDC 集群唯一 ID
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取终端节点服务Uin。
                     * @return ServiceUin 终端节点服务Uin。
                     * 
                     */
                    std::string GetServiceUin() const;

                    /**
                     * 设置终端节点服务Uin。
                     * @param _serviceUin 终端节点服务Uin。
                     * 
                     */
                    void SetServiceUin(const std::string& _serviceUin);

                    /**
                     * 判断参数 ServiceUin 是否已赋值
                     * @return ServiceUin 是否已赋值
                     * 
                     */
                    bool ServiceUinHasBeenSet() const;

                    /**
                     * 获取服务IP类型
                     * @return BusinessIpType 服务IP类型
                     * 
                     */
                    int64_t GetBusinessIpType() const;

                    /**
                     * 设置服务IP类型
                     * @param _businessIpType 服务IP类型
                     * 
                     */
                    void SetBusinessIpType(const int64_t& _businessIpType);

                    /**
                     * 判断参数 BusinessIpType 是否已赋值
                     * @return BusinessIpType 是否已赋值
                     * 
                     */
                    bool BusinessIpTypeHasBeenSet() const;

                    /**
                     * 获取标签键值对。	
                     * @return TagSet 标签键值对。	
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。	
                     * @param _tagSet 标签键值对。	
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 终端节点服务ID
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * VPCID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * APPID。
                     */
                    std::string m_serviceOwner;
                    bool m_serviceOwnerHasBeenSet;

                    /**
                     * 终端节点服务名称。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 后端服务的VIP。
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * 后端服务的ID，比如lb-lip4e6bp。
                     */
                    std::string m_serviceInstanceId;
                    bool m_serviceInstanceIdHasBeenSet;

                    /**
                     * 是否自动接受。
                     */
                    bool m_autoAcceptFlag;
                    bool m_autoAcceptFlagHasBeenSet;

                    /**
                     * 关联的终端节点个数。
                     */
                    uint64_t m_endPointCount;
                    bool m_endPointCountHasBeenSet;

                    /**
                     * 终端节点对象数组。
                     */
                    std::vector<EndPoint> m_endPointSet;
                    bool m_endPointSetHasBeenSet;

                    /**
                     * 创建时间。格式为YYYY-MM-DD HH:MM:SS字符串。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 挂载的PAAS服务类型，CLB（负载均衡），CDB（云数据库 MySQL），CRS（云数据库 Redis），GWLB（网关负载均衡）。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * CDC 集群唯一 ID
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * 终端节点服务Uin。
                     */
                    std::string m_serviceUin;
                    bool m_serviceUinHasBeenSet;

                    /**
                     * 服务IP类型
                     */
                    int64_t m_businessIpType;
                    bool m_businessIpTypeHasBeenSet;

                    /**
                     * 标签键值对。	
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINTSERVICE_H_
