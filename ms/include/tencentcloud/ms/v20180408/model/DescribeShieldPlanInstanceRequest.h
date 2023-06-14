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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDPLANINSTANCEREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDPLANINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeShieldPlanInstance请求参数结构体
                */
                class DescribeShieldPlanInstanceRequest : public AbstractModel
                {
                public:
                    DescribeShieldPlanInstanceRequest();
                    ~DescribeShieldPlanInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取服务类别id
                     * @return Pid 服务类别id
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置服务类别id
                     * @param _pid 服务类别id
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                private:

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 服务类别id
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDPLANINSTANCEREQUEST_H_
