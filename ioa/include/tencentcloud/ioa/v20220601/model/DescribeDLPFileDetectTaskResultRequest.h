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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTTASKRESULTREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTTASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * DescribeDLPFileDetectTaskResult请求参数结构体
                */
                class DescribeDLPFileDetectTaskResultRequest : public AbstractModel
                {
                public:
                    DescribeDLPFileDetectTaskResultRequest();
                    ~DescribeDLPFileDetectTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @return DomainInstanceId 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    std::string GetDomainInstanceId() const;

                    /**
                     * 设置管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @param _domainInstanceId 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    void SetDomainInstanceId(const std::string& _domainInstanceId);

                    /**
                     * 判断参数 DomainInstanceId 是否已赋值
                     * @return DomainInstanceId 是否已赋值
                     * 
                     */
                    bool DomainInstanceIdHasBeenSet() const;

                    /**
                     * 获取任务请求Id
                     * @return TaskRequestId 任务请求Id
                     * 
                     */
                    std::string GetTaskRequestId() const;

                    /**
                     * 设置任务请求Id
                     * @param _taskRequestId 任务请求Id
                     * 
                     */
                    void SetTaskRequestId(const std::string& _taskRequestId);

                    /**
                     * 判断参数 TaskRequestId 是否已赋值
                     * @return TaskRequestId 是否已赋值
                     * 
                     */
                    bool TaskRequestIdHasBeenSet() const;

                private:

                    /**
                     * 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     */
                    std::string m_domainInstanceId;
                    bool m_domainInstanceIdHasBeenSet;

                    /**
                     * 任务请求Id
                     */
                    std::string m_taskRequestId;
                    bool m_taskRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTTASKRESULTREQUEST_H_
