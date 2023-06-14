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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETETABLECONFIGREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETETABLECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DeleteTableConfig请求参数结构体
                */
                class DeleteTableConfigRequest : public AbstractModel
                {
                public:
                    DeleteTableConfigRequest();
                    ~DeleteTableConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业ID
                     * @return JobId 作业ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID
                     * @param _jobId 作业ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取调试作业ID
                     * @return DebugId 调试作业ID
                     * 
                     */
                    int64_t GetDebugId() const;

                    /**
                     * 设置调试作业ID
                     * @param _debugId 调试作业ID
                     * 
                     */
                    void SetDebugId(const int64_t& _debugId);

                    /**
                     * 判断参数 DebugId 是否已赋值
                     * @return DebugId 是否已赋值
                     * 
                     */
                    bool DebugIdHasBeenSet() const;

                    /**
                     * 获取表名
                     * @return TableName 表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
                     * @param _tableName 表名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * 作业ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 调试作业ID
                     */
                    int64_t m_debugId;
                    bool m_debugIdHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DELETETABLECONFIGREQUEST_H_
