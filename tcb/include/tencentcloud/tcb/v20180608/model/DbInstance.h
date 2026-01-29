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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DBINSTANCE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 数据库连接器实例信息
                */
                class DbInstance : public AbstractModel
                {
                public:
                    DbInstance();
                    ~DbInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云开发环境ID
                     * @return EnvId 云开发环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置云开发环境ID
                     * @param _envId 云开发环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取MySQL 连接器实例 ID；`"default"` 或为空表示使用 TCB 环境的默认连接器
                     * @return InstanceId MySQL 连接器实例 ID；`"default"` 或为空表示使用 TCB 环境的默认连接器
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置MySQL 连接器实例 ID；`"default"` 或为空表示使用 TCB 环境的默认连接器
                     * @param _instanceId MySQL 连接器实例 ID；`"default"` 或为空表示使用 TCB 环境的默认连接器
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
                     * 获取数据库名；为空时使用连接器配置的默认数据库名
                     * @return Schema 数据库名；为空时使用连接器配置的默认数据库名
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置数据库名；为空时使用连接器配置的默认数据库名
                     * @param _schema 数据库名；为空时使用连接器配置的默认数据库名
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
                     * 云开发环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * MySQL 连接器实例 ID；`"default"` 或为空表示使用 TCB 环境的默认连接器
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库名；为空时使用连接器配置的默认数据库名
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DBINSTANCE_H_
