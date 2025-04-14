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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETARGETGROUPINSTANCESTATUSREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETARGETGROUPINSTANCESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * DescribeTargetGroupInstanceStatus请求参数结构体
                */
                class DescribeTargetGroupInstanceStatusRequest : public AbstractModel
                {
                public:
                    DescribeTargetGroupInstanceStatusRequest();
                    ~DescribeTargetGroupInstanceStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组唯一id。可通过[DescribeTargetGroupList](https://cloud.tencent.com/document/api/1782/111692)接口获取。
                     * @return TargetGroupId 目标组唯一id。可通过[DescribeTargetGroupList](https://cloud.tencent.com/document/api/1782/111692)接口获取。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组唯一id。可通过[DescribeTargetGroupList](https://cloud.tencent.com/document/api/1782/111692)接口获取。
                     * @param _targetGroupId 目标组唯一id。可通过[DescribeTargetGroupList](https://cloud.tencent.com/document/api/1782/111692)接口获取。
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取目标组绑定的后端服务ip列表
                     * @return TargetGroupInstanceIps 目标组绑定的后端服务ip列表
                     * 
                     */
                    std::vector<std::string> GetTargetGroupInstanceIps() const;

                    /**
                     * 设置目标组绑定的后端服务ip列表
                     * @param _targetGroupInstanceIps 目标组绑定的后端服务ip列表
                     * 
                     */
                    void SetTargetGroupInstanceIps(const std::vector<std::string>& _targetGroupInstanceIps);

                    /**
                     * 判断参数 TargetGroupInstanceIps 是否已赋值
                     * @return TargetGroupInstanceIps 是否已赋值
                     * 
                     */
                    bool TargetGroupInstanceIpsHasBeenSet() const;

                private:

                    /**
                     * 目标组唯一id。可通过[DescribeTargetGroupList](https://cloud.tencent.com/document/api/1782/111692)接口获取。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 目标组绑定的后端服务ip列表
                     */
                    std::vector<std::string> m_targetGroupInstanceIps;
                    bool m_targetGroupInstanceIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETARGETGROUPINSTANCESTATUSREQUEST_H_
