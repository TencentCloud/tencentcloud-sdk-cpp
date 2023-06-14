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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CLONEDBREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CLONEDBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/RenameRestoreDatabase.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CloneDB请求参数结构体
                */
                class CloneDBRequest : public AbstractModel
                {
                public:
                    CloneDBRequest();
                    ~CloneDBRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-j8kv137v
                     * @return InstanceId 实例ID，形如mssql-j8kv137v
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-j8kv137v
                     * @param _instanceId 实例ID，形如mssql-j8kv137v
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
                     * 获取按照ReNameRestoreDatabase中的库进行克隆，并重命名，新库名称必须指定
                     * @return RenameRestore 按照ReNameRestoreDatabase中的库进行克隆，并重命名，新库名称必须指定
                     * 
                     */
                    std::vector<RenameRestoreDatabase> GetRenameRestore() const;

                    /**
                     * 设置按照ReNameRestoreDatabase中的库进行克隆，并重命名，新库名称必须指定
                     * @param _renameRestore 按照ReNameRestoreDatabase中的库进行克隆，并重命名，新库名称必须指定
                     * 
                     */
                    void SetRenameRestore(const std::vector<RenameRestoreDatabase>& _renameRestore);

                    /**
                     * 判断参数 RenameRestore 是否已赋值
                     * @return RenameRestore 是否已赋值
                     * 
                     */
                    bool RenameRestoreHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-j8kv137v
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 按照ReNameRestoreDatabase中的库进行克隆，并重命名，新库名称必须指定
                     */
                    std::vector<RenameRestoreDatabase> m_renameRestore;
                    bool m_renameRestoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CLONEDBREQUEST_H_
