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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_DESCRIBETASKREQUEST_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_DESCRIBETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * DescribeTask请求参数结构体
                */
                class DescribeTaskRequest : public AbstractModel
                {
                public:
                    DescribeTaskRequest();
                    ~DescribeTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 ID
                     * @return TaskId 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID
                     * @param _taskId 任务 ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数（暂时无需传入）。
                     * @return EccAppid 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数（暂时无需传入）。
                     * 
                     */
                    std::string GetEccAppid() const;

                    /**
                     * 设置业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数（暂时无需传入）。
                     * @param _eccAppid 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数（暂时无需传入）。
                     * 
                     */
                    void SetEccAppid(const std::string& _eccAppid);

                    /**
                     * 判断参数 EccAppid 是否已赋值
                     * @return EccAppid 是否已赋值
                     * 
                     */
                    bool EccAppidHasBeenSet() const;

                private:

                    /**
                     * 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数（暂时无需传入）。
                     */
                    std::string m_eccAppid;
                    bool m_eccAppidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_DESCRIBETASKREQUEST_H_
