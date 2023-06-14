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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERCONTROLLERSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERCONTROLLERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ControllerStatus.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterControllers返回参数结构体
                */
                class DescribeClusterControllersResponse : public AbstractModel
                {
                public:
                    DescribeClusterControllersResponse();
                    ~DescribeClusterControllersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取描述集群中各个控制器的状态
                     * @return ControllerStatusSet 描述集群中各个控制器的状态
                     * 
                     */
                    std::vector<ControllerStatus> GetControllerStatusSet() const;

                    /**
                     * 判断参数 ControllerStatusSet 是否已赋值
                     * @return ControllerStatusSet 是否已赋值
                     * 
                     */
                    bool ControllerStatusSetHasBeenSet() const;

                private:

                    /**
                     * 描述集群中各个控制器的状态
                     */
                    std::vector<ControllerStatus> m_controllerStatusSet;
                    bool m_controllerStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERCONTROLLERSRESPONSE_H_
