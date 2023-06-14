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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBESERVERMANAGETASKREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBESERVERMANAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeServerManageTask请求参数结构体
                */
                class DescribeServerManageTaskRequest : public AbstractModel
                {
                public:
                    DescribeServerManageTaskRequest();
                    ~DescribeServerManageTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境Id
                     * @return EnvId 环境Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境Id
                     * @param _envId 环境Id
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
                     * 获取服务名
                     * @return ServerName 服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名
                     * @param _serverName 服务名
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取操作标识
                     * @return OperatorRemark 操作标识
                     * 
                     */
                    std::string GetOperatorRemark() const;

                    /**
                     * 设置操作标识
                     * @param _operatorRemark 操作标识
                     * 
                     */
                    void SetOperatorRemark(const std::string& _operatorRemark);

                    /**
                     * 判断参数 OperatorRemark 是否已赋值
                     * @return OperatorRemark 是否已赋值
                     * 
                     */
                    bool OperatorRemarkHasBeenSet() const;

                private:

                    /**
                     * 环境Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 任务Id
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 操作标识
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBESERVERMANAGETASKREQUEST_H_
