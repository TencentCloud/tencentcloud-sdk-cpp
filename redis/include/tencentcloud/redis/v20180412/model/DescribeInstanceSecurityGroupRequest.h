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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceSecurityGroup请求参数结构体
                */
                class DescribeInstanceSecurityGroupRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSecurityGroupRequest();
                    ~DescribeInstanceSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 列表，数组长度限制[0,100]。例如：["crs-f2ho5rsz\n"]
                     * @return InstanceIds 实例 ID 列表，数组长度限制[0,100]。例如：["crs-f2ho5rsz\n"]
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID 列表，数组长度限制[0,100]。例如：["crs-f2ho5rsz\n"]
                     * @param _instanceIds 实例 ID 列表，数组长度限制[0,100]。例如：["crs-f2ho5rsz\n"]
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 列表，数组长度限制[0,100]。例如：["crs-f2ho5rsz\n"]
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESECURITYGROUPREQUEST_H_
