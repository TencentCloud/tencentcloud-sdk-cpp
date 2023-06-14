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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESPROJECTREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBInstancesProject请求参数结构体
                */
                class ModifyDBInstancesProjectRequest : public AbstractModel
                {
                public:
                    ModifyDBInstancesProjectRequest();
                    ~ModifyDBInstancesProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID集合。注意：当前已不支持同时操作多个实例，这里只能传入单个实例ID。
                     * @return DBInstanceIdSet 实例ID集合。注意：当前已不支持同时操作多个实例，这里只能传入单个实例ID。
                     * 
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 设置实例ID集合。注意：当前已不支持同时操作多个实例，这里只能传入单个实例ID。
                     * @param _dBInstanceIdSet 实例ID集合。注意：当前已不支持同时操作多个实例，这里只能传入单个实例ID。
                     * 
                     */
                    void SetDBInstanceIdSet(const std::vector<std::string>& _dBInstanceIdSet);

                    /**
                     * 判断参数 DBInstanceIdSet 是否已赋值
                     * @return DBInstanceIdSet 是否已赋值
                     * 
                     */
                    bool DBInstanceIdSetHasBeenSet() const;

                    /**
                     * 获取所属新项目的ID
                     * @return ProjectId 所属新项目的ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属新项目的ID
                     * @param _projectId 所属新项目的ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID集合。注意：当前已不支持同时操作多个实例，这里只能传入单个实例ID。
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                    /**
                     * 所属新项目的ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESPROJECTREQUEST_H_
