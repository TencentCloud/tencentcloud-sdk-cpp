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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CANCELTRAININGJOBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CANCELTRAININGJOBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CancelTrainingJobInstance请求参数结构体
                */
                class CancelTrainingJobInstanceRequest : public AbstractModel
                {
                public:
                    CancelTrainingJobInstanceRequest();
                    ~CancelTrainingJobInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID（即 RayJob UUID，与 JobId 同值，保留兼容）</p>
                     * @return InstanceId <p>实例 ID（即 RayJob UUID，与 JobId 同值，保留兼容）</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID（即 RayJob UUID，与 JobId 同值，保留兼容）</p>
                     * @param _instanceId <p>实例 ID（即 RayJob UUID，与 JobId 同值，保留兼容）</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID（即 RayJob UUID，与 JobId 同值，保留兼容）</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CANCELTRAININGJOBINSTANCEREQUEST_H_
