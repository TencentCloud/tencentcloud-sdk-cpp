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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTRESULTREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTRESULTREQUEST_H_

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
                * DescribeDLPFileDetectResult请求参数结构体
                */
                class DescribeDLPFileDetectResultRequest : public AbstractModel
                {
                public:
                    DescribeDLPFileDetectResultRequest();
                    ~DescribeDLPFileDetectResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取管理域实例ID，用于CAM管理域权限分配
                     * @return DomainInstanceId 管理域实例ID，用于CAM管理域权限分配
                     * 
                     */
                    std::string GetDomainInstanceId() const;

                    /**
                     * 设置管理域实例ID，用于CAM管理域权限分配
                     * @param _domainInstanceId 管理域实例ID，用于CAM管理域权限分配
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
                     * 获取查询ID，即提交送检任务接口（CreateDLPFileDetectionTask）返回的任务ID（DLPFileDetectionTaskID）
                     * @return QueryID 查询ID，即提交送检任务接口（CreateDLPFileDetectionTask）返回的任务ID（DLPFileDetectionTaskID）
                     * 
                     */
                    std::string GetQueryID() const;

                    /**
                     * 设置查询ID，即提交送检任务接口（CreateDLPFileDetectionTask）返回的任务ID（DLPFileDetectionTaskID）
                     * @param _queryID 查询ID，即提交送检任务接口（CreateDLPFileDetectionTask）返回的任务ID（DLPFileDetectionTaskID）
                     * 
                     */
                    void SetQueryID(const std::string& _queryID);

                    /**
                     * 判断参数 QueryID 是否已赋值
                     * @return QueryID 是否已赋值
                     * 
                     */
                    bool QueryIDHasBeenSet() const;

                private:

                    /**
                     * 管理域实例ID，用于CAM管理域权限分配
                     */
                    std::string m_domainInstanceId;
                    bool m_domainInstanceIdHasBeenSet;

                    /**
                     * 查询ID，即提交送检任务接口（CreateDLPFileDetectionTask）返回的任务ID（DLPFileDetectionTaskID）
                     */
                    std::string m_queryID;
                    bool m_queryIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTRESULTREQUEST_H_
