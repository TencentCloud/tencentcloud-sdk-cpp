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

#ifndef TENCENTCLOUD_EIS_V20200715_MODEL_LISTEISCONNECTOROPERATIONSREQUEST_H_
#define TENCENTCLOUD_EIS_V20200715_MODEL_LISTEISCONNECTOROPERATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20200715
        {
            namespace Model
            {
                /**
                * ListEisConnectorOperations请求参数结构体
                */
                class ListEisConnectorOperationsRequest : public AbstractModel
                {
                public:
                    ListEisConnectorOperationsRequest();
                    ~ListEisConnectorOperationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取连接器名称
                     * @return ConnectorName 连接器名称
                     * 
                     */
                    std::string GetConnectorName() const;

                    /**
                     * 设置连接器名称
                     * @param _connectorName 连接器名称
                     * 
                     */
                    void SetConnectorName(const std::string& _connectorName);

                    /**
                     * 判断参数 ConnectorName 是否已赋值
                     * @return ConnectorName 是否已赋值
                     * 
                     */
                    bool ConnectorNameHasBeenSet() const;

                    /**
                     * 获取连接器版本
                     * @return ConnectorVersion 连接器版本
                     * 
                     */
                    std::string GetConnectorVersion() const;

                    /**
                     * 设置连接器版本
                     * @param _connectorVersion 连接器版本
                     * 
                     */
                    void SetConnectorVersion(const std::string& _connectorVersion);

                    /**
                     * 判断参数 ConnectorVersion 是否已赋值
                     * @return ConnectorVersion 是否已赋值
                     * 
                     */
                    bool ConnectorVersionHasBeenSet() const;

                private:

                    /**
                     * 连接器名称
                     */
                    std::string m_connectorName;
                    bool m_connectorNameHasBeenSet;

                    /**
                     * 连接器版本
                     */
                    std::string m_connectorVersion;
                    bool m_connectorVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20200715_MODEL_LISTEISCONNECTOROPERATIONSREQUEST_H_
