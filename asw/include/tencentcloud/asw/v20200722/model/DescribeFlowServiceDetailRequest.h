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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEFLOWSERVICEDETAILREQUEST_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEFLOWSERVICEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asw
    {
        namespace V20200722
        {
            namespace Model
            {
                /**
                * DescribeFlowServiceDetail请求参数结构体
                */
                class DescribeFlowServiceDetailRequest : public AbstractModel
                {
                public:
                    DescribeFlowServiceDetailRequest();
                    ~DescribeFlowServiceDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取状态机所属服务资源名
                     * @return FlowServiceResource 状态机所属服务资源名
                     * 
                     */
                    std::string GetFlowServiceResource() const;

                    /**
                     * 设置状态机所属服务资源名
                     * @param _flowServiceResource 状态机所属服务资源名
                     * 
                     */
                    void SetFlowServiceResource(const std::string& _flowServiceResource);

                    /**
                     * 判断参数 FlowServiceResource 是否已赋值
                     * @return FlowServiceResource 是否已赋值
                     * 
                     */
                    bool FlowServiceResourceHasBeenSet() const;

                private:

                    /**
                     * 状态机所属服务资源名
                     */
                    std::string m_flowServiceResource;
                    bool m_flowServiceResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEFLOWSERVICEDETAILREQUEST_H_
