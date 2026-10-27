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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCESBINDSTATUSREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCESBINDSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeInstancesBindStatus请求参数结构体
                */
                class DescribeInstancesBindStatusRequest : public AbstractModel
                {
                public:
                    DescribeInstancesBindStatusRequest();
                    ~DescribeInstancesBindStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>拉取的桌面id列表</p>
                     * @return InstanceIds <p>拉取的桌面id列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>拉取的桌面id列表</p>
                     * @param _instanceIds <p>拉取的桌面id列表</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>实例所在区域</p>
                     * @return InstanceRegion <p>实例所在区域</p>
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置<p>实例所在区域</p>
                     * @param _instanceRegion <p>实例所在区域</p>
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                private:

                    /**
                     * <p>拉取的桌面id列表</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>实例所在区域</p>
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCESBINDSTATUSREQUEST_H_
