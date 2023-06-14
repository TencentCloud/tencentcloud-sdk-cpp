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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCEPROJECTREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCEPROJECTREQUEST_H_

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
                * ModifyDBInstanceProject请求参数结构体
                */
                class ModifyDBInstanceProjectRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceProjectRequest();
                    ~ModifyDBInstanceProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID数组，形如mssql-j8kv137v
                     * @return InstanceIdSet 实例ID数组，形如mssql-j8kv137v
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置实例ID数组，形如mssql-j8kv137v
                     * @param _instanceIdSet 实例ID数组，形如mssql-j8kv137v
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取项目ID，为0的话表示默认项目
                     * @return ProjectId 项目ID，为0的话表示默认项目
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID，为0的话表示默认项目
                     * @param _projectId 项目ID，为0的话表示默认项目
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID数组，形如mssql-j8kv137v
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 项目ID，为0的话表示默认项目
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCEPROJECTREQUEST_H_
