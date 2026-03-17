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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEDBREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEDBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DeleteDB请求参数结构体
                */
                class DeleteDBRequest : public AbstractModel
                {
                public:
                    DeleteDBRequest();
                    ~DeleteDBRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID，形如mssql-rljoi3bf</p>
                     * @return InstanceId <p>实例ID，形如mssql-rljoi3bf</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID，形如mssql-rljoi3bf</p>
                     * @param _instanceId <p>实例ID，形如mssql-rljoi3bf</p>
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
                     * 获取<p>数据库名数组</p>
                     * @return Names <p>数据库名数组</p>
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置<p>数据库名数组</p>
                     * @param _names <p>数据库名数组</p>
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取<p>删除数据库前是否创建备份。</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @return NoDoBackup <p>删除数据库前是否创建备份。</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetNoDoBackup() const;

                    /**
                     * 设置<p>删除数据库前是否创建备份。</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @param _noDoBackup <p>删除数据库前是否创建备份。</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    void SetNoDoBackup(const uint64_t& _noDoBackup);

                    /**
                     * 判断参数 NoDoBackup 是否已赋值
                     * @return NoDoBackup 是否已赋值
                     * 
                     */
                    bool NoDoBackupHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID，形如mssql-rljoi3bf</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>数据库名数组</p>
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * <p>删除数据库前是否创建备份。</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     */
                    uint64_t m_noDoBackup;
                    bool m_noDoBackupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEDBREQUEST_H_
