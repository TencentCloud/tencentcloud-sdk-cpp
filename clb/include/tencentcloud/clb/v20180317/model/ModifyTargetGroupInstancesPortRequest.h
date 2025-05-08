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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPINSTANCESPORTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPINSTANCESPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupInstance.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyTargetGroupInstancesPort请求参数结构体
                */
                class ModifyTargetGroupInstancesPortRequest : public AbstractModel
                {
                public:
                    ModifyTargetGroupInstancesPortRequest();
                    ~ModifyTargetGroupInstancesPortRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组ID。
                     * @return TargetGroupId 目标组ID。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组ID。
                     * @param _targetGroupId 目标组ID。
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
                     * 获取待修改端口的服务器数组，在这个接口 NewPort 和 Port 为必填项。
                     * @return TargetGroupInstances 待修改端口的服务器数组，在这个接口 NewPort 和 Port 为必填项。
                     * 
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置待修改端口的服务器数组，在这个接口 NewPort 和 Port 为必填项。
                     * @param _targetGroupInstances 待修改端口的服务器数组，在这个接口 NewPort 和 Port 为必填项。
                     * 
                     */
                    void SetTargetGroupInstances(const std::vector<TargetGroupInstance>& _targetGroupInstances);

                    /**
                     * 判断参数 TargetGroupInstances 是否已赋值
                     * @return TargetGroupInstances 是否已赋值
                     * 
                     */
                    bool TargetGroupInstancesHasBeenSet() const;

                private:

                    /**
                     * 目标组ID。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 待修改端口的服务器数组，在这个接口 NewPort 和 Port 为必填项。
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPINSTANCESPORTREQUEST_H_
