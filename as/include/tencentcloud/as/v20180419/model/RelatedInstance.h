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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_RELATEDINSTANCE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_RELATEDINSTANCE_H_

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
                * 与本次伸缩活动相关的实例信息。
                */
                class RelatedInstance : public AbstractModel
                {
                public:
                    RelatedInstance();
                    ~RelatedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取实例在伸缩活动中的状态。取值如下：
INIT：初始化中
RUNNING：实例操作中
SUCCESSFUL：活动成功
FAILED：活动失败
                     * @return InstanceStatus 实例在伸缩活动中的状态。取值如下：
INIT：初始化中
RUNNING：实例操作中
SUCCESSFUL：活动成功
FAILED：活动失败
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例在伸缩活动中的状态。取值如下：
INIT：初始化中
RUNNING：实例操作中
SUCCESSFUL：活动成功
FAILED：活动失败
                     * @param _instanceStatus 实例在伸缩活动中的状态。取值如下：
INIT：初始化中
RUNNING：实例操作中
SUCCESSFUL：活动成功
FAILED：活动失败
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例在伸缩活动中的状态。取值如下：
INIT：初始化中
RUNNING：实例操作中
SUCCESSFUL：活动成功
FAILED：活动失败
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_RELATEDINSTANCE_H_
