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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPLISTREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeReadOnlyGroupList请求参数结构体
                */
                class DescribeReadOnlyGroupListRequest : public AbstractModel
                {
                public:
                    DescribeReadOnlyGroupListRequest();
                    ~DescribeReadOnlyGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例ID，格式如：mssql-3l3fgqn7
                     * @return InstanceId 主实例ID，格式如：mssql-3l3fgqn7
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置主实例ID，格式如：mssql-3l3fgqn7
                     * @param _instanceId 主实例ID，格式如：mssql-3l3fgqn7
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 主实例ID，格式如：mssql-3l3fgqn7
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPLISTREQUEST_H_
