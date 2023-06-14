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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCONTAINERNETSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCONTAINERNETSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyContainerNetStatus请求参数结构体
                */
                class ModifyContainerNetStatusRequest : public AbstractModel
                {
                public:
                    ModifyContainerNetStatusRequest();
                    ~ModifyContainerNetStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取容器ID
                     * @return ContainerID 容器ID
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置容器ID
                     * @param _containerID 容器ID
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取状态(
隔离容器: EVENT_ISOLATE_CONTAINER
恢复容器: EVENT_RESOTRE_CONTAINER
)
                     * @return Status 状态(
隔离容器: EVENT_ISOLATE_CONTAINER
恢复容器: EVENT_RESOTRE_CONTAINER
)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态(
隔离容器: EVENT_ISOLATE_CONTAINER
恢复容器: EVENT_RESOTRE_CONTAINER
)
                     * @param _status 状态(
隔离容器: EVENT_ISOLATE_CONTAINER
恢复容器: EVENT_RESOTRE_CONTAINER
)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 容器ID
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * 状态(
隔离容器: EVENT_ISOLATE_CONTAINER
恢复容器: EVENT_RESOTRE_CONTAINER
)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCONTAINERNETSTATUSREQUEST_H_
