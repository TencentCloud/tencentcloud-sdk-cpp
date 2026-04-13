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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTOREDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTOREDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/RestoreDatabases.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * RestoreDBInstance请求参数结构体
                */
                class RestoreDBInstanceRequest : public AbstractModel
                {
                public:
                    RestoreDBInstanceRequest();
                    ~RestoreDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb/instance">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb/instance">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb/instance">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb/instance">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>指定回档的目标时间点。该时间必须处于实例的备份保留期内。</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return RestoreTime <p>指定回档的目标时间点。该时间必须处于实例的备份保留期内。</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置<p>指定回档的目标时间点。该时间必须处于实例的备份保留期内。</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _restoreTime <p>指定回档的目标时间点。该时间必须处于实例的备份保留期内。</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     * 
                     */
                    bool RestoreTimeHasBeenSet() const;

                    /**
                     * 获取<p>回档的库表信息。</p>
                     * @return Databases <p>回档的库表信息。</p>
                     * 
                     */
                    std::vector<RestoreDatabases> GetDatabases() const;

                    /**
                     * 设置<p>回档的库表信息。</p>
                     * @param _databases <p>回档的库表信息。</p>
                     * 
                     */
                    void SetDatabases(const std::vector<RestoreDatabases>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb/instance">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>指定回档的目标时间点。该时间必须处于实例的备份保留期内。</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * <p>回档的库表信息。</p>
                     */
                    std::vector<RestoreDatabases> m_databases;
                    bool m_databasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTOREDBINSTANCEREQUEST_H_
