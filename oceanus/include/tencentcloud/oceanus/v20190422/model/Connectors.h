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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CONNECTORS_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CONNECTORS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 解析Connector
                */
                class Connectors : public AbstractModel
                {
                public:
                    Connectors();
                    ~Connectors() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取是否已经被使用
                     * @return Existed 是否已经被使用
                     * 
                     */
                    bool GetExisted() const;

                    /**
                     * 设置是否已经被使用
                     * @param _existed 是否已经被使用
                     * 
                     */
                    void SetExisted(const bool& _existed);

                    /**
                     * 判断参数 Existed 是否已赋值
                     * @return Existed 是否已赋值
                     * 
                     */
                    bool ExistedHasBeenSet() const;

                private:

                    /**
                     * 连接方式
                     */
                    std::string m_connectionMethod;
                    bool m_connectionMethodHasBeenSet;

                    /**
                     * 连接器名称
                     */
                    std::string m_connector;
                    bool m_connectorHasBeenSet;

                    /**
                     * 是否已经被使用
                     */
                    bool m_existed;
                    bool m_existedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CONNECTORS_H_
