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
                     * 获取终端节点服务Id
                     * @return EndpointServiceId 终端节点服务Id
                     * 
                     */
                    std::string GetEndpointServiceId() const;

                    /**
                     * 设置终端节点服务Id
                     * @param _endpointServiceId 终端节点服务Id
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
                     * 获取	网络信息
                     * @return NetWork 	网络信息
                     * 
                     */
                    NetWork GetNetWork() const;

                    /**
                     * 设置	网络信息
                     * @param _netWork 	网络信息
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
                     * 终端节点服务Id
                     */
                    std::string m_endpointServiceId;
                    bool m_endpointServiceIdHasBeenSet;

                    /**
                     * 元数据连接串
                     */
                    std::string m_metaStoreUrl;
                    bool m_metaStoreUrlHasBeenSet;

                    /**
                     * 	网络信息
                     */
                    NetWork m_netWork;
                    bool m_netWorkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_MODEL_TCCCONNECTION_H_
