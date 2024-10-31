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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTANDENDPOINTSERVICEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTANDENDPOINTSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateEndPointAndEndPointService请求参数结构体
                */
                class CreateEndPointAndEndPointServiceRequest : public AbstractModel
                {
                public:
                    CreateEndPointAndEndPointServiceRequest();
                    ~CreateEndPointAndEndPointServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID
                     * @return VpcId VPC实例ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID
                     * @param _vpcId VPC实例ID
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
                     * 获取是否自动接受
                     * @return AutoAcceptFlag 是否自动接受
                     * 
                     */
                    bool GetAutoAcceptFlag() const;

                    /**
                     * 设置是否自动接受
                     * @param _autoAcceptFlag 是否自动接受
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
                     * 获取后端服务ID
                     * @return ServiceInstanceId 后端服务ID
                     * 
                     */
                    std::string GetServiceInstanceId() const;

                    /**
                     * 设置后端服务ID
                     * @param _serviceInstanceId 后端服务ID
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
                     * 获取终端节点名称
                     * @return EndPointName 终端节点名称
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置终端节点名称
                     * @param _endPointName 终端节点名称
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取终端节点地域，必须要和终端节点服务所属地域一致
                     * @return EndPointRegion 终端节点地域，必须要和终端节点服务所属地域一致
                     * 
                     */
                    std::string GetEndPointRegion() const;

                    /**
                     * 设置终端节点地域，必须要和终端节点服务所属地域一致
                     * @param _endPointRegion 终端节点地域，必须要和终端节点服务所属地域一致
                     * 
                     */
                    void SetEndPointRegion(const std::string& _endPointRegion);

                    /**
                     * 判断参数 EndPointRegion 是否已赋值
                     * @return EndPointRegion 是否已赋值
                     * 
                     */
                    bool EndPointRegionHasBeenSet() const;

                    /**
                     * 获取终端节点服务名称
                     * @return EndPointServiceName 终端节点服务名称
                     * 
                     */
                    std::string GetEndPointServiceName() const;

                    /**
                     * 设置终端节点服务名称
                     * @param _endPointServiceName 终端节点服务名称
                     * 
                     */
                    void SetEndPointServiceName(const std::string& _endPointServiceName);

                    /**
                     * 判断参数 EndPointServiceName 是否已赋值
                     * @return EndPointServiceName 是否已赋值
                     * 
                     */
                    bool EndPointServiceNameHasBeenSet() const;

                    /**
                     * 获取挂载的PAAS服务类型，CLB,CDB,CRS
                     * @return ServiceType 挂载的PAAS服务类型，CLB,CDB,CRS
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置挂载的PAAS服务类型，CLB,CDB,CRS
                     * @param _serviceType 挂载的PAAS服务类型，CLB,CDB,CRS
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
                     * 获取终端节点ip数量
                     * @return IpNum 终端节点ip数量
                     * 
                     */
                    int64_t GetIpNum() const;

                    /**
                     * 设置终端节点ip数量
                     * @param _ipNum 终端节点ip数量
                     * 
                     */
                    void SetIpNum(const int64_t& _ipNum);

                    /**
                     * 判断参数 IpNum 是否已赋值
                     * @return IpNum 是否已赋值
                     * 
                     */
                    bool IpNumHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 是否自动接受
                     */
                    bool m_autoAcceptFlag;
                    bool m_autoAcceptFlagHasBeenSet;

                    /**
                     * 后端服务ID
                     */
                    std::string m_serviceInstanceId;
                    bool m_serviceInstanceIdHasBeenSet;

                    /**
                     * 终端节点名称
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * 终端节点地域，必须要和终端节点服务所属地域一致
                     */
                    std::string m_endPointRegion;
                    bool m_endPointRegionHasBeenSet;

                    /**
                     * 终端节点服务名称
                     */
                    std::string m_endPointServiceName;
                    bool m_endPointServiceNameHasBeenSet;

                    /**
                     * 挂载的PAAS服务类型，CLB,CDB,CRS
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 终端节点ip数量
                     */
                    int64_t m_ipNum;
                    bool m_ipNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTANDENDPOINTSERVICEREQUEST_H_
