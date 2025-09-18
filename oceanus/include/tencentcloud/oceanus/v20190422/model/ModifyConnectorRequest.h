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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYCONNECTORREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYCONNECTORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * ModifyConnector请求参数结构体
                */
                class ModifyConnectorRequest : public AbstractModel
                {
                public:
                    ModifyConnectorRequest();
                    ~ModifyConnectorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间
                     * @return WorkSpaceId 空间
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置空间
                     * @param _workSpaceId 空间
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取connector ID
                     * @return ConnectorResourceId connector ID
                     * 
                     */
                    std::string GetConnectorResourceId() const;

                    /**
                     * 设置connector ID
                     * @param _connectorResourceId connector ID
                     * 
                     */
                    void SetConnectorResourceId(const std::string& _connectorResourceId);

                    /**
                     * 判断参数 ConnectorResourceId 是否已赋值
                     * @return ConnectorResourceId 是否已赋值
                     * 
                     */
                    bool ConnectorResourceIdHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源版本
                     * @return VersionId 资源版本
                     * 
                     */
                    int64_t GetVersionId() const;

                    /**
                     * 设置资源版本
                     * @param _versionId 资源版本
                     * 
                     */
                    void SetVersionId(const int64_t& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取连接器名称
                     * @return Connector 连接器名称
                     * 
                     */
                    std::string GetConnector() const;

                    /**
                     * 设置连接器名称
                     * @param _connector 连接器名称
                     * 
                     */
                    void SetConnector(const std::string& _connector);

                    /**
                     * 判断参数 Connector 是否已赋值
                     * @return Connector 是否已赋值
                     * 
                     */
                    bool ConnectorHasBeenSet() const;

                    /**
                     * 获取连接方式
                     * @return ConnectionMethod 连接方式
                     * 
                     */
                    std::string GetConnectionMethod() const;

                    /**
                     * 设置连接方式
                     * @param _connectionMethod 连接方式
                     * 
                     */
                    void SetConnectionMethod(const std::string& _connectionMethod);

                    /**
                     * 判断参数 ConnectionMethod 是否已赋值
                     * @return ConnectionMethod 是否已赋值
                     * 
                     */
                    bool ConnectionMethodHasBeenSet() const;

                private:

                    /**
                     * 空间
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * connector ID
                     */
                    std::string m_connectorResourceId;
                    bool m_connectorResourceIdHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源版本
                     */
                    int64_t m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 连接器名称
                     */
                    std::string m_connector;
                    bool m_connectorHasBeenSet;

                    /**
                     * 连接方式
                     */
                    std::string m_connectionMethod;
                    bool m_connectionMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_MODIFYCONNECTORREQUEST_H_
