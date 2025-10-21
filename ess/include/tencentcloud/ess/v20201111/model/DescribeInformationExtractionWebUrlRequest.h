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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINFORMATIONEXTRACTIONWEBURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINFORMATIONEXTRACTIONWEBURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeInformationExtractionWebUrl请求参数结构体
                */
                class DescribeInformationExtractionWebUrlRequest : public AbstractModel
                {
                public:
                    DescribeInformationExtractionWebUrlRequest();
                    ~DescribeInformationExtractionWebUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。使用此接口时，必须填写userId。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。使用此接口时，必须填写userId。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取合同信息提取任务ID，该参数可通过回调事件[回调通知](https://qian.tencent.com/developers/company/callback_types_v2)获取或者从控制台信息提取任务列表获取。

注意：`不填写任务ID时返回信息提取任务列表URL，填写任务ID时返回信息提取任务详情URL`
                     * @return TaskId 合同信息提取任务ID，该参数可通过回调事件[回调通知](https://qian.tencent.com/developers/company/callback_types_v2)获取或者从控制台信息提取任务列表获取。

注意：`不填写任务ID时返回信息提取任务列表URL，填写任务ID时返回信息提取任务详情URL`
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置合同信息提取任务ID，该参数可通过回调事件[回调通知](https://qian.tencent.com/developers/company/callback_types_v2)获取或者从控制台信息提取任务列表获取。

注意：`不填写任务ID时返回信息提取任务列表URL，填写任务ID时返回信息提取任务详情URL`
                     * @param _taskId 合同信息提取任务ID，该参数可通过回调事件[回调通知](https://qian.tencent.com/developers/company/callback_types_v2)获取或者从控制台信息提取任务列表获取。

注意：`不填写任务ID时返回信息提取任务列表URL，填写任务ID时返回信息提取任务详情URL`
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。使用此接口时，必须填写userId。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同信息提取任务ID，该参数可通过回调事件[回调通知](https://qian.tencent.com/developers/company/callback_types_v2)获取或者从控制台信息提取任务列表获取。

注意：`不填写任务ID时返回信息提取任务列表URL，填写任务ID时返回信息提取任务详情URL`
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINFORMATIONEXTRACTIONWEBURLREQUEST_H_
