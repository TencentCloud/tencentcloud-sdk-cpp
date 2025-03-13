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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCHRELATEDINSTANCE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCHRELATEDINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 刷新批次关联实例，包含单个实例的刷新活动状态、对应伸缩活动等信息。
                */
                class RefreshBatchRelatedInstance : public AbstractModel
                {
                public:
                    RefreshBatchRelatedInstance();
                    ~RefreshBatchRelatedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取刷新实例状态。如果在刷新时实例被移出或销毁，状态会更新为 NOT_FOUND。取值如下：<li>WAITING：待刷新</li><li>INIT：初始化中</li><li>RUNNING：刷新中</li><li>FAILED：刷新失败</li><li>CANCELLED：已取消</li><li>SUCCESSFUL：刷新成功</li><li>NOT_FOUND：实例不存在</li>
                     * @return InstanceStatus 刷新实例状态。如果在刷新时实例被移出或销毁，状态会更新为 NOT_FOUND。取值如下：<li>WAITING：待刷新</li><li>INIT：初始化中</li><li>RUNNING：刷新中</li><li>FAILED：刷新失败</li><li>CANCELLED：已取消</li><li>SUCCESSFUL：刷新成功</li><li>NOT_FOUND：实例不存在</li>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置刷新实例状态。如果在刷新时实例被移出或销毁，状态会更新为 NOT_FOUND。取值如下：<li>WAITING：待刷新</li><li>INIT：初始化中</li><li>RUNNING：刷新中</li><li>FAILED：刷新失败</li><li>CANCELLED：已取消</li><li>SUCCESSFUL：刷新成功</li><li>NOT_FOUND：实例不存在</li>
                     * @param _instanceStatus 刷新实例状态。如果在刷新时实例被移出或销毁，状态会更新为 NOT_FOUND。取值如下：<li>WAITING：待刷新</li><li>INIT：初始化中</li><li>RUNNING：刷新中</li><li>FAILED：刷新失败</li><li>CANCELLED：已取消</li><li>SUCCESSFUL：刷新成功</li><li>NOT_FOUND：实例不存在</li>
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例刷新中最近一次伸缩活动 ID，可通过 DescribeAutoScalingActivities 接口查询。
需注意伸缩活动与实例刷新活动不同，一次实例刷新活动可能包括多次伸缩活动。
                     * @return LastActivityId 实例刷新中最近一次伸缩活动 ID，可通过 DescribeAutoScalingActivities 接口查询。
需注意伸缩活动与实例刷新活动不同，一次实例刷新活动可能包括多次伸缩活动。
                     * 
                     */
                    std::string GetLastActivityId() const;

                    /**
                     * 设置实例刷新中最近一次伸缩活动 ID，可通过 DescribeAutoScalingActivities 接口查询。
需注意伸缩活动与实例刷新活动不同，一次实例刷新活动可能包括多次伸缩活动。
                     * @param _lastActivityId 实例刷新中最近一次伸缩活动 ID，可通过 DescribeAutoScalingActivities 接口查询。
需注意伸缩活动与实例刷新活动不同，一次实例刷新活动可能包括多次伸缩活动。
                     * 
                     */
                    void SetLastActivityId(const std::string& _lastActivityId);

                    /**
                     * 判断参数 LastActivityId 是否已赋值
                     * @return LastActivityId 是否已赋值
                     * 
                     */
                    bool LastActivityIdHasBeenSet() const;

                    /**
                     * 获取实例刷新状态信息。
                     * @return InstanceStatusMessage 实例刷新状态信息。
                     * 
                     */
                    std::string GetInstanceStatusMessage() const;

                    /**
                     * 设置实例刷新状态信息。
                     * @param _instanceStatusMessage 实例刷新状态信息。
                     * 
                     */
                    void SetInstanceStatusMessage(const std::string& _instanceStatusMessage);

                    /**
                     * 判断参数 InstanceStatusMessage 是否已赋值
                     * @return InstanceStatusMessage 是否已赋值
                     * 
                     */
                    bool InstanceStatusMessageHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 刷新实例状态。如果在刷新时实例被移出或销毁，状态会更新为 NOT_FOUND。取值如下：<li>WAITING：待刷新</li><li>INIT：初始化中</li><li>RUNNING：刷新中</li><li>FAILED：刷新失败</li><li>CANCELLED：已取消</li><li>SUCCESSFUL：刷新成功</li><li>NOT_FOUND：实例不存在</li>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例刷新中最近一次伸缩活动 ID，可通过 DescribeAutoScalingActivities 接口查询。
需注意伸缩活动与实例刷新活动不同，一次实例刷新活动可能包括多次伸缩活动。
                     */
                    std::string m_lastActivityId;
                    bool m_lastActivityIdHasBeenSet;

                    /**
                     * 实例刷新状态信息。
                     */
                    std::string m_instanceStatusMessage;
                    bool m_instanceStatusMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCHRELATEDINSTANCE_H_
