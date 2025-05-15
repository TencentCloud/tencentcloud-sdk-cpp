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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DELETENOTIFICATIONCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DELETENOTIFICATIONCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DeleteNotificationConfiguration请求参数结构体
                */
                class DeleteNotificationConfigurationRequest : public AbstractModel
                {
                public:
                    DeleteNotificationConfigurationRequest();
                    ~DeleteNotificationConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的通知ID，目前为必填参数。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeNotificationConfigurations](https://cloud.tencent.com/document/api/377/33183) ，取返回信息中的 AutoScalingNotificationId 获取通知ID。
                     * @return AutoScalingNotificationId 待删除的通知ID，目前为必填参数。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeNotificationConfigurations](https://cloud.tencent.com/document/api/377/33183) ，取返回信息中的 AutoScalingNotificationId 获取通知ID。
                     * 
                     */
                    std::string GetAutoScalingNotificationId() const;

                    /**
                     * 设置待删除的通知ID，目前为必填参数。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeNotificationConfigurations](https://cloud.tencent.com/document/api/377/33183) ，取返回信息中的 AutoScalingNotificationId 获取通知ID。
                     * @param _autoScalingNotificationId 待删除的通知ID，目前为必填参数。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeNotificationConfigurations](https://cloud.tencent.com/document/api/377/33183) ，取返回信息中的 AutoScalingNotificationId 获取通知ID。
                     * 
                     */
                    void SetAutoScalingNotificationId(const std::string& _autoScalingNotificationId);

                    /**
                     * 判断参数 AutoScalingNotificationId 是否已赋值
                     * @return AutoScalingNotificationId 是否已赋值
                     * 
                     */
                    bool AutoScalingNotificationIdHasBeenSet() const;

                private:

                    /**
                     * 待删除的通知ID，目前为必填参数。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeNotificationConfigurations](https://cloud.tencent.com/document/api/377/33183) ，取返回信息中的 AutoScalingNotificationId 获取通知ID。
                     */
                    std::string m_autoScalingNotificationId;
                    bool m_autoScalingNotificationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DELETENOTIFICATIONCONFIGURATIONREQUEST_H_
