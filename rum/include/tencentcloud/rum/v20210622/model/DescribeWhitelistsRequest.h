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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEWHITELISTSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEWHITELISTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeWhitelists请求参数结构体
                */
                class DescribeWhitelistsRequest : public AbstractModel
                {
                public:
                    DescribeWhitelistsRequest();
                    ~DescribeWhitelistsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例instance-ID
                     * @return InstanceID 实例instance-ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例instance-ID
                     * @param _instanceID 实例instance-ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * 实例instance-ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEWHITELISTSREQUEST_H_
