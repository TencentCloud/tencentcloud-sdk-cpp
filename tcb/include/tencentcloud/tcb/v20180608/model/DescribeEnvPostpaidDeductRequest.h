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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVPOSTPAIDDEDUCTREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVPOSTPAIDDEDUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeEnvPostpaidDeduct请求参数结构体
                */
                class DescribeEnvPostpaidDeductRequest : public AbstractModel
                {
                public:
                    DescribeEnvPostpaidDeductRequest();
                    ~DescribeEnvPostpaidDeductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源方列表
                     * @return ResourceTypes 资源方列表
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置资源方列表
                     * @param _resourceTypes 资源方列表
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
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
                     * 获取查询开始时间
                     * @return StartTime 查询开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间
                     * @param _startTime 查询开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return EndTime 查询结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _endTime 查询结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 资源方列表
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 查询开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVPOSTPAIDDEDUCTREQUEST_H_
