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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_REDISINSTANCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_REDISINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Redis 实例信息
                */
                class RedisInstance : public AbstractModel
                {
                public:
                    RedisInstance();
                    ~RedisInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取redis实例id
                     * @return Id redis实例id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置redis实例id
                     * @param _id redis实例id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取实例 ip
                     * @return Host 实例 ip
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置实例 ip
                     * @param _host 实例 ip
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取实例端口
                     * @return Port 实例端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置实例端口
                     * @param _port 实例端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * redis实例id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 实例 ip
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 实例端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_REDISINSTANCE_H_
