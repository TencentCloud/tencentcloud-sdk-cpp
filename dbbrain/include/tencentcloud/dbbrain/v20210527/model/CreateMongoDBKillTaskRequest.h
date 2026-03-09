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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEMONGODBKILLTASKREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEMONGODBKILLTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * CreateMongoDBKillTask请求参数结构体
                */
                class CreateMongoDBKillTaskRequest : public AbstractModel
                {
                public:
                    CreateMongoDBKillTaskRequest();
                    ~CreateMongoDBKillTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取kill会话任务的关联实例ID。
                     * @return InstanceId kill会话任务的关联实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置kill会话任务的关联实例ID。
                     * @param _instanceId kill会话任务的关联实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取任务持续时间，单位秒，手动关闭任务传-1。
                     * @return Duration 任务持续时间，单位秒，手动关闭任务传-1。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置任务持续时间，单位秒，手动关闭任务传-1。
                     * @param _duration 任务持续时间，单位秒，手动关闭任务传-1。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取任务过滤条件，客户端IP。
                     * @return Host 任务过滤条件，客户端IP。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置任务过滤条件，客户端IP。
                     * @param _host 任务过滤条件，客户端IP。
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
                     * 获取命名空间
                     * @return DB 命名空间
                     * 
                     */
                    std::vector<std::string> GetDB() const;

                    /**
                     * 设置命名空间
                     * @param _dB 命名空间
                     * 
                     */
                    void SetDB(const std::vector<std::string>& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取update,insert,query,getmore,remove,killcursors,command,compressed,none
                     * @return Type update,insert,query,getmore,remove,killcursors,command,compressed,none
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置update,insert,query,getmore,remove,killcursors,command,compressed,none
                     * @param _type update,insert,query,getmore,remove,killcursors,command,compressed,none
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取kill任务过滤条件，会话持续时长，单位秒。
                     * @return Time kill任务过滤条件，会话持续时长，单位秒。
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置kill任务过滤条件，会话持续时长，单位秒。
                     * @param _time kill任务过滤条件，会话持续时长，单位秒。
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * kill会话任务的关联实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 任务持续时间，单位秒，手动关闭任务传-1。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 任务过滤条件，客户端IP。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::vector<std::string> m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * update,insert,query,getmore,remove,killcursors,command,compressed,none
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * kill任务过滤条件，会话持续时长，单位秒。
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEMONGODBKILLTASKREQUEST_H_
