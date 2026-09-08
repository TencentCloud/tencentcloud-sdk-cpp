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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENPOSTGRESTSERVICEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENPOSTGRESTSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ParamEntry.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * OpenPostgRESTService请求参数结构体
                */
                class OpenPostgRESTServiceRequest : public AbstractModel
                {
                public:
                    OpenPostgRESTServiceRequest();
                    ~OpenPostgRESTServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return DBInstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _dBInstanceId <p>实例ID</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启外网</p>
                     * @return EnableWanNet <p>是否开启外网</p>
                     * 
                     */
                    bool GetEnableWanNet() const;

                    /**
                     * 设置<p>是否开启外网</p>
                     * @param _enableWanNet <p>是否开启外网</p>
                     * 
                     */
                    void SetEnableWanNet(const bool& _enableWanNet);

                    /**
                     * 判断参数 EnableWanNet 是否已赋值
                     * @return EnableWanNet 是否已赋值
                     * 
                     */
                    bool EnableWanNetHasBeenSet() const;

                    /**
                     * 获取<p>PostgREST服务参数</p>
                     * @return RestConfig <p>PostgREST服务参数</p>
                     * 
                     */
                    std::vector<ParamEntry> GetRestConfig() const;

                    /**
                     * 设置<p>PostgREST服务参数</p>
                     * @param _restConfig <p>PostgREST服务参数</p>
                     * 
                     */
                    void SetRestConfig(const std::vector<ParamEntry>& _restConfig);

                    /**
                     * 判断参数 RestConfig 是否已赋值
                     * @return RestConfig 是否已赋值
                     * 
                     */
                    bool RestConfigHasBeenSet() const;

                    /**
                     * 获取<p>VPC</p><p>参数格式：私有网络ID，形如vpc-e6w23k31。非必选，不传默认使用实例的vpc</p>
                     * @return VpcId <p>VPC</p><p>参数格式：私有网络ID，形如vpc-e6w23k31。非必选，不传默认使用实例的vpc</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC</p><p>参数格式：私有网络ID，形如vpc-e6w23k31。非必选，不传默认使用实例的vpc</p>
                     * @param _vpcId <p>VPC</p><p>参数格式：私有网络ID，形如vpc-e6w23k31。非必选，不传默认使用实例的vpc</p>
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
                     * 获取<p>私有网络子网ID，形如subnet-51lcif9y。非必选，不传则使用实例的子网</p>
                     * @return SubnetId <p>私有网络子网ID，形如subnet-51lcif9y。非必选，不传则使用实例的子网</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络子网ID，形如subnet-51lcif9y。非必选，不传则使用实例的子网</p>
                     * @param _subnetId <p>私有网络子网ID，形如subnet-51lcif9y。非必选，不传则使用实例的子网</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>是否开启外网</p>
                     */
                    bool m_enableWanNet;
                    bool m_enableWanNetHasBeenSet;

                    /**
                     * <p>PostgREST服务参数</p>
                     */
                    std::vector<ParamEntry> m_restConfig;
                    bool m_restConfigHasBeenSet;

                    /**
                     * <p>VPC</p><p>参数格式：私有网络ID，形如vpc-e6w23k31。非必选，不传默认使用实例的vpc</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络子网ID，形如subnet-51lcif9y。非必选，不传则使用实例的子网</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENPOSTGRESTSERVICEREQUEST_H_
