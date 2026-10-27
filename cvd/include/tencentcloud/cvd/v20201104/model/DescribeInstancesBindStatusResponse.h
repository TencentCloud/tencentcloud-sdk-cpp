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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCESBINDSTATUSRESPONSE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCESBINDSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/BindStatusInfo.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeInstancesBindStatus返回参数结构体
                */
                class DescribeInstancesBindStatusResponse : public AbstractModel
                {
                public:
                    DescribeInstancesBindStatusResponse();
                    ~DescribeInstancesBindStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>桌面实例状态列表</p>
                     * @return InstanceBindStatusList <p>桌面实例状态列表</p>
                     * 
                     */
                    std::vector<BindStatusInfo> GetInstanceBindStatusList() const;

                    /**
                     * 判断参数 InstanceBindStatusList 是否已赋值
                     * @return InstanceBindStatusList 是否已赋值
                     * 
                     */
                    bool InstanceBindStatusListHasBeenSet() const;

                private:

                    /**
                     * <p>桌面实例状态列表</p>
                     */
                    std::vector<BindStatusInfo> m_instanceBindStatusList;
                    bool m_instanceBindStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCESBINDSTATUSRESPONSE_H_
