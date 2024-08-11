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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYYARNDEPLOYREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYYARNDEPLOYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyYarnDeploy请求参数结构体
                */
                class ModifyYarnDeployRequest : public AbstractModel
                {
                public:
                    ModifyYarnDeployRequest();
                    ~ModifyYarnDeployRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取切换后的调度器，可选值为fair、capacity
                     * @return NewScheduler 切换后的调度器，可选值为fair、capacity
                     * 
                     */
                    std::string GetNewScheduler() const;

                    /**
                     * 设置切换后的调度器，可选值为fair、capacity
                     * @param _newScheduler 切换后的调度器，可选值为fair、capacity
                     * 
                     */
                    void SetNewScheduler(const std::string& _newScheduler);

                    /**
                     * 判断参数 NewScheduler 是否已赋值
                     * @return NewScheduler 是否已赋值
                     * 
                     */
                    bool NewSchedulerHasBeenSet() const;

                    /**
                     * 获取现在使用的调度器，可选值为fair、capacity
                     * @return OldScheduler 现在使用的调度器，可选值为fair、capacity
                     * 
                     */
                    std::string GetOldScheduler() const;

                    /**
                     * 设置现在使用的调度器，可选值为fair、capacity
                     * @param _oldScheduler 现在使用的调度器，可选值为fair、capacity
                     * 
                     */
                    void SetOldScheduler(const std::string& _oldScheduler);

                    /**
                     * 判断参数 OldScheduler 是否已赋值
                     * @return OldScheduler 是否已赋值
                     * 
                     */
                    bool OldSchedulerHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 切换后的调度器，可选值为fair、capacity
                     */
                    std::string m_newScheduler;
                    bool m_newSchedulerHasBeenSet;

                    /**
                     * 现在使用的调度器，可选值为fair、capacity
                     */
                    std::string m_oldScheduler;
                    bool m_oldSchedulerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYYARNDEPLOYREQUEST_H_
