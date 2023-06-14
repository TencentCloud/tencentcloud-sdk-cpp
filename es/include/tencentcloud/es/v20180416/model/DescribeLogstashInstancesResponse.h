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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHINSTANCESRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/LogstashInstanceInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeLogstashInstances返回参数结构体
                */
                class DescribeLogstashInstancesResponse : public AbstractModel
                {
                public:
                    DescribeLogstashInstancesResponse();
                    ~DescribeLogstashInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的实例个数
                     * @return TotalCount 返回的实例个数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取实例详细信息列表
                     * @return InstanceList 实例详细信息列表
                     * 
                     */
                    std::vector<LogstashInstanceInfo> GetInstanceList() const;

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                private:

                    /**
                     * 返回的实例个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例详细信息列表
                     */
                    std::vector<LogstashInstanceInfo> m_instanceList;
                    bool m_instanceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHINSTANCESRESPONSE_H_
