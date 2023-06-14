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

#ifndef TENCENTCLOUD_MONGODB_V20180408_MODEL_CLIENTCONNECTION_H_
#define TENCENTCLOUD_MONGODB_V20180408_MODEL_CLIENTCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 客户端连接信息，包括客户端IP和连接数
                */
                class ClientConnection : public AbstractModel
                {
                public:
                    ClientConnection();
                    ~ClientConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接的客户端IP
                     * @return IP 连接的客户端IP
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置连接的客户端IP
                     * @param _iP 连接的客户端IP
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取对应客户端IP的连接数
                     * @return Count 对应客户端IP的连接数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置对应客户端IP的连接数
                     * @param _count 对应客户端IP的连接数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 连接的客户端IP
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 对应客户端IP的连接数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20180408_MODEL_CLIENTCONNECTION_H_
