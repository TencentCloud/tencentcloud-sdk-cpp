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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCEVNCURLREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCEVNCURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstanceVncUrl请求参数结构体
                */
                class DescribeInstanceVncUrlRequest : public AbstractModel
                {
                public:
                    DescribeInstanceVncUrlRequest();
                    ~DescribeInstanceVncUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一个操作的实例ID。可通过[ DescribeInstances ](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * @return InstanceId 一个操作的实例ID。可通过[ DescribeInstances ](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置一个操作的实例ID。可通过[ DescribeInstances ](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * @param _instanceId 一个操作的实例ID。可通过[ DescribeInstances ](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
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
                     * 一个操作的实例ID。可通过[ DescribeInstances ](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCEVNCURLREQUEST_H_
