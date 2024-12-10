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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTSERVICEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateVpcEndPointService请求参数结构体
                */
                class CreateVpcEndPointServiceRequest : public AbstractModel
                {
                public:
                    CreateVpcEndPointServiceRequest();
                    ~CreateVpcEndPointServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
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
                     * 获取终端节点服务名称。
                     * @return EndPointServiceName 终端节点服务名称。
                     * 
                     */
                    std::string GetEndPointServiceName() const;

                    /**
                     * 设置终端节点服务名称。
                     * @param _endPointServiceName 终端节点服务名称。
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
                     * 获取后端服务ID，比如lb-xxx。
                     * @return ServiceInstanceId 后端服务ID，比如lb-xxx。
                     * 
                     */
                    std::string GetServiceInstanceId() const;

                    /**
                     * 设置后端服务ID，比如lb-xxx。
                     * @param _serviceInstanceId 后端服务ID，比如lb-xxx。
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
                     * 获取~~是否是PassService类型。该字段已废弃，请不要使用该字段。~~
                     * @return IsPassService ~~是否是PassService类型。该字段已废弃，请不要使用该字段。~~
                     * 
                     */
                    bool GetIsPassService() const;

                    /**
                     * 设置~~是否是PassService类型。该字段已废弃，请不要使用该字段。~~
                     * @param _isPassService ~~是否是PassService类型。该字段已废弃，请不要使用该字段。~~
                     * 
                     */
                    void SetIsPassService(const bool& _isPassService);

                    /**
                     * 判断参数 IsPassService 是否已赋值
                     * @return IsPassService 是否已赋值
                     * 
                     */
                    bool IsPassServiceHasBeenSet() const;

                    /**
                     * 获取挂载的PAAS服务类型，CLB,CDB,CRS，不填默认挂载为CLB。
                     * @return ServiceType 挂载的PAAS服务类型，CLB,CDB,CRS，不填默认挂载为CLB。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置挂载的PAAS服务类型，CLB,CDB,CRS，不填默认挂载为CLB。
                     * @param _serviceType 挂载的PAAS服务类型，CLB,CDB,CRS，不填默认挂载为CLB。
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
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 终端节点服务名称。
                     */
                    std::string m_endPointServiceName;
                    bool m_endPointServiceNameHasBeenSet;

                    /**
                     * 是否自动接受。
                     */
                    bool m_autoAcceptFlag;
                    bool m_autoAcceptFlagHasBeenSet;

                    /**
                     * 后端服务ID，比如lb-xxx。
                     */
                    std::string m_serviceInstanceId;
                    bool m_serviceInstanceIdHasBeenSet;

                    /**
                     * ~~是否是PassService类型。该字段已废弃，请不要使用该字段。~~
                     */
                    bool m_isPassService;
                    bool m_isPassServiceHasBeenSet;

                    /**
                     * 挂载的PAAS服务类型，CLB,CDB,CRS，不填默认挂载为CLB。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTSERVICEREQUEST_H_
