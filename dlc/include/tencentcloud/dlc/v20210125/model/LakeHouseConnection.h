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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LAKEHOUSECONNECTION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LAKEHOUSECONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/RangerConnection.h>
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
                * tcc lakehouse 连接信息
                */
                class LakeHouseConnection : public AbstractModel
                {
                public:
                    LakeHouseConnection();
                    ~LakeHouseConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>元数据服务id</p>
                     * @return MetastoreEndpointServiceId <p>元数据服务id</p>
                     * 
                     */
                    std::string GetMetastoreEndpointServiceId() const;

                    /**
                     * 设置<p>元数据服务id</p>
                     * @param _metastoreEndpointServiceId <p>元数据服务id</p>
                     * 
                     */
                    void SetMetastoreEndpointServiceId(const std::string& _metastoreEndpointServiceId);

                    /**
                     * 判断参数 MetastoreEndpointServiceId 是否已赋值
                     * @return MetastoreEndpointServiceId 是否已赋值
                     * 
                     */
                    bool MetastoreEndpointServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>endpoint服务id</p>
                     * @return EndpointServiceId <p>endpoint服务id</p>
                     * 
                     */
                    std::string GetEndpointServiceId() const;

                    /**
                     * 设置<p>endpoint服务id</p>
                     * @param _endpointServiceId <p>endpoint服务id</p>
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
                     * 获取<p>元数据url</p>
                     * @return MetaStoreUrl <p>元数据url</p>
                     * 
                     */
                    std::string GetMetaStoreUrl() const;

                    /**
                     * 设置<p>元数据url</p>
                     * @param _metaStoreUrl <p>元数据url</p>
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
                     * 获取<p>ranger信息</p>
                     * @return RangerConnection <p>ranger信息</p>
                     * 
                     */
                    RangerConnection GetRangerConnection() const;

                    /**
                     * 设置<p>ranger信息</p>
                     * @param _rangerConnection <p>ranger信息</p>
                     * 
                     */
                    void SetRangerConnection(const RangerConnection& _rangerConnection);

                    /**
                     * 判断参数 RangerConnection 是否已赋值
                     * @return RangerConnection 是否已赋值
                     * 
                     */
                    bool RangerConnectionHasBeenSet() const;

                    /**
                     * 获取<p>hive版本</p>
                     * @return HiveVersion <p>hive版本</p>
                     * 
                     */
                    std::string GetHiveVersion() const;

                    /**
                     * 设置<p>hive版本</p>
                     * @param _hiveVersion <p>hive版本</p>
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
                     * 获取<p>存储位置</p>
                     * @return Location <p>存储位置</p>
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置<p>存储位置</p>
                     * @param _location <p>存储位置</p>
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
                     * 获取<p>网络信息</p>
                     * @return NetWork <p>网络信息</p>
                     * 
                     */
                    NetWork GetNetWork() const;

                    /**
                     * 设置<p>网络信息</p>
                     * @param _netWork <p>网络信息</p>
                     * 
                     */
                    void SetNetWork(const NetWork& _netWork);

                    /**
                     * 判断参数 NetWork 是否已赋值
                     * @return NetWork 是否已赋值
                     * 
                     */
                    bool NetWorkHasBeenSet() const;

                private:

                    /**
                     * <p>元数据服务id</p>
                     */
                    std::string m_metastoreEndpointServiceId;
                    bool m_metastoreEndpointServiceIdHasBeenSet;

                    /**
                     * <p>endpoint服务id</p>
                     */
                    std::string m_endpointServiceId;
                    bool m_endpointServiceIdHasBeenSet;

                    /**
                     * <p>元数据url</p>
                     */
                    std::string m_metaStoreUrl;
                    bool m_metaStoreUrlHasBeenSet;

                    /**
                     * <p>ranger信息</p>
                     */
                    RangerConnection m_rangerConnection;
                    bool m_rangerConnectionHasBeenSet;

                    /**
                     * <p>hive版本</p>
                     */
                    std::string m_hiveVersion;
                    bool m_hiveVersionHasBeenSet;

                    /**
                     * <p>存储位置</p>
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>网络信息</p>
                     */
                    NetWork m_netWork;
                    bool m_netWorkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LAKEHOUSECONNECTION_H_
