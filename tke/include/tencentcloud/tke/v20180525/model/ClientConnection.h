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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLIENTCONNECTION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLIENTCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 调度器客户端连接配置参数
                */
                class ClientConnection : public AbstractModel
                {
                public:
                    ClientConnection();
                    ~ClientConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端与服务器连接时每秒允许的最大查询数
                     * @return QPS 客户端与服务器连接时每秒允许的最大查询数
                     * 
                     */
                    double GetQPS() const;

                    /**
                     * 设置客户端与服务器连接时每秒允许的最大查询数
                     * @param _qPS 客户端与服务器连接时每秒允许的最大查询数
                     * 
                     */
                    void SetQPS(const double& _qPS);

                    /**
                     * 判断参数 QPS 是否已赋值
                     * @return QPS 是否已赋值
                     * 
                     */
                    bool QPSHasBeenSet() const;

                    /**
                     * 获取客户端在短时间内超过QPS限制的突发请求数量
                     * @return Burst 客户端在短时间内超过QPS限制的突发请求数量
                     * 
                     */
                    uint64_t GetBurst() const;

                    /**
                     * 设置客户端在短时间内超过QPS限制的突发请求数量
                     * @param _burst 客户端在短时间内超过QPS限制的突发请求数量
                     * 
                     */
                    void SetBurst(const uint64_t& _burst);

                    /**
                     * 判断参数 Burst 是否已赋值
                     * @return Burst 是否已赋值
                     * 
                     */
                    bool BurstHasBeenSet() const;

                private:

                    /**
                     * 客户端与服务器连接时每秒允许的最大查询数
                     */
                    double m_qPS;
                    bool m_qPSHasBeenSet;

                    /**
                     * 客户端在短时间内超过QPS限制的突发请求数量
                     */
                    uint64_t m_burst;
                    bool m_burstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLIENTCONNECTION_H_
