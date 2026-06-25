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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEENDPOINTS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEENDPOINTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型路由网络服务信息
                */
                class ServiceEndPoints : public AbstractModel
                {
                public:
                    ServiceEndPoints();
                    ~ServiceEndPoints() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>证书ID</p>
                     * @return CertId <p>证书ID</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>证书ID</p>
                     * @param _certId <p>证书ID</p>
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取<p>监听端口</p>
                     * @return Port <p>监听端口</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>监听端口</p>
                     * @param _port <p>监听端口</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>网络协议</p>
                     * @return Schema <p>网络协议</p>
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置<p>网络协议</p>
                     * @param _schema <p>网络协议</p>
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                private:

                    /**
                     * <p>证书ID</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>监听端口</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>网络协议</p>
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEENDPOINTS_H_
