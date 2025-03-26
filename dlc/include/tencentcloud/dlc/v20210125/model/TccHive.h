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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TCCHIVE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TCCHIVE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/NetWork.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * TccHive数据结构
                */
                class TccHive : public AbstractModel
                {
                public:
                    TccHive();
                    ~TccHive() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取终端节点服务ID
                     * @return EndpointServiceId 终端节点服务ID
                     * 
                     */
                    std::string GetEndpointServiceId() const;

                    /**
                     * 设置终端节点服务ID
                     * @param _endpointServiceId 终端节点服务ID
                     * 
                     */
                    void SetEndpointServiceId(const std::string& _endpointServiceId);

                    /**
                     * 判断参数 EndpointServiceId 是否已赋值
                     * @return EndpointServiceId 是否已赋值
                     * 
                     */
                    bool EndpointServiceIdHasBeenSet() const;

                    /**
                     * 获取thrift连接地址
                     * @return MetaStoreUrl thrift连接地址
                     * 
                     */
                    std::string GetMetaStoreUrl() const;

                    /**
                     * 设置thrift连接地址
                     * @param _metaStoreUrl thrift连接地址
                     * 
                     */
                    void SetMetaStoreUrl(const std::string& _metaStoreUrl);

                    /**
                     * 判断参数 MetaStoreUrl 是否已赋值
                     * @return MetaStoreUrl 是否已赋值
                     * 
                     */
                    bool MetaStoreUrlHasBeenSet() const;

                    /**
                     * 获取hive版本
                     * @return HiveVersion hive版本
                     * 
                     */
                    std::string GetHiveVersion() const;

                    /**
                     * 设置hive版本
                     * @param _hiveVersion hive版本
                     * 
                     */
                    void SetHiveVersion(const std::string& _hiveVersion);

                    /**
                     * 判断参数 HiveVersion 是否已赋值
                     * @return HiveVersion 是否已赋值
                     * 
                     */
                    bool HiveVersionHasBeenSet() const;

                    /**
                     * 获取网络信息
                     * @return TccConnection 网络信息
                     * 
                     */
                    NetWork GetTccConnection() const;

                    /**
                     * 设置网络信息
                     * @param _tccConnection 网络信息
                     * 
                     */
                    void SetTccConnection(const NetWork& _tccConnection);

                    /**
                     * 判断参数 TccConnection 是否已赋值
                     * @return TccConnection 是否已赋值
                     * 
                     */
                    bool TccConnectionHasBeenSet() const;

                    /**
                     * 获取Hms终端节点服务ID
                     * @return HmsEndpointServiceId Hms终端节点服务ID
                     * 
                     */
                    std::string GetHmsEndpointServiceId() const;

                    /**
                     * 设置Hms终端节点服务ID
                     * @param _hmsEndpointServiceId Hms终端节点服务ID
                     * 
                     */
                    void SetHmsEndpointServiceId(const std::string& _hmsEndpointServiceId);

                    /**
                     * 判断参数 HmsEndpointServiceId 是否已赋值
                     * @return HmsEndpointServiceId 是否已赋值
                     * 
                     */
                    bool HmsEndpointServiceIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 终端节点服务ID
                     */
                    std::string m_endpointServiceId;
                    bool m_endpointServiceIdHasBeenSet;

                    /**
                     * thrift连接地址
                     */
                    std::string m_metaStoreUrl;
                    bool m_metaStoreUrlHasBeenSet;

                    /**
                     * hive版本
                     */
                    std::string m_hiveVersion;
                    bool m_hiveVersionHasBeenSet;

                    /**
                     * 网络信息
                     */
                    NetWork m_tccConnection;
                    bool m_tccConnectionHasBeenSet;

                    /**
                     * Hms终端节点服务ID
                     */
                    std::string m_hmsEndpointServiceId;
                    bool m_hmsEndpointServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TCCHIVE_H_
