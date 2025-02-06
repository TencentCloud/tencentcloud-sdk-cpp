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

#ifndef TENCENTCLOUD_TCCATALOG_V20241024_MODEL_TCCCONNECTION_H_
#define TENCENTCLOUD_TCCATALOG_V20241024_MODEL_TCCCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tccatalog/v20241024/model/NetWork.h>


namespace TencentCloud
{
    namespace Tccatalog
    {
        namespace V20241024
        {
            namespace Model
            {
                /**
                * Tcc数据目录连接配置
                */
                class TccConnection : public AbstractModel
                {
                public:
                    TccConnection();
                    ~TccConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎终端节点服务Id
                     * @return EndpointServiceId 引擎终端节点服务Id
                     * 
                     */
                    std::string GetEndpointServiceId() const;

                    /**
                     * 设置引擎终端节点服务Id
                     * @param _endpointServiceId 引擎终端节点服务Id
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
                     * 获取元数据连接串
                     * @return MetaStoreUrl 元数据连接串
                     * 
                     */
                    std::string GetMetaStoreUrl() const;

                    /**
                     * 设置元数据连接串
                     * @param _metaStoreUrl 元数据连接串
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
                     * 获取网络信息
                     * @return NetWork 网络信息
                     * 
                     */
                    NetWork GetNetWork() const;

                    /**
                     * 设置网络信息
                     * @param _netWork 网络信息
                     * 
                     */
                    void SetNetWork(const NetWork& _netWork);

                    /**
                     * 判断参数 NetWork 是否已赋值
                     * @return NetWork 是否已赋值
                     * 
                     */
                    bool NetWorkHasBeenSet() const;

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
                     * 获取hive location
                     * @return Location hive location
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置hive location
                     * @param _location hive location
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取HMS终端节点服务
                     * @return HmsEndpointServiceId HMS终端节点服务
                     * 
                     */
                    std::string GetHmsEndpointServiceId() const;

                    /**
                     * 设置HMS终端节点服务
                     * @param _hmsEndpointServiceId HMS终端节点服务
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
                     * 引擎终端节点服务Id
                     */
                    std::string m_endpointServiceId;
                    bool m_endpointServiceIdHasBeenSet;

                    /**
                     * 元数据连接串
                     */
                    std::string m_metaStoreUrl;
                    bool m_metaStoreUrlHasBeenSet;

                    /**
                     * 网络信息
                     */
                    NetWork m_netWork;
                    bool m_netWorkHasBeenSet;

                    /**
                     * hive版本
                     */
                    std::string m_hiveVersion;
                    bool m_hiveVersionHasBeenSet;

                    /**
                     * hive location
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * HMS终端节点服务
                     */
                    std::string m_hmsEndpointServiceId;
                    bool m_hmsEndpointServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_MODEL_TCCCONNECTION_H_
