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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSYNCMODEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSYNCMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDBSyncMode请求参数结构体
                */
                class DescribeDBSyncModeRequest : public AbstractModel
                {
                public:
                    DescribeDBSyncModeRequest();
                    ~DescribeDBSyncModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改同步模式的实例ID。形如：dcdbt-ow728lmc。
                     * @return InstanceId 待修改同步模式的实例ID。形如：dcdbt-ow728lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待修改同步模式的实例ID。形如：dcdbt-ow728lmc。
                     * @param _instanceId 待修改同步模式的实例ID。形如：dcdbt-ow728lmc。
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
                     * 待修改同步模式的实例ID。形如：dcdbt-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSYNCMODEREQUEST_H_
