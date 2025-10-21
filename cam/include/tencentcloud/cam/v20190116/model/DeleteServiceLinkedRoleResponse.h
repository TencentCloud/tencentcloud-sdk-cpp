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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DELETESERVICELINKEDROLERESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DELETESERVICELINKEDROLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DeleteServiceLinkedRole返回参数结构体
                */
                class DeleteServiceLinkedRoleResponse : public AbstractModel
                {
                public:
                    DeleteServiceLinkedRoleResponse();
                    ~DeleteServiceLinkedRoleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取删除任务ID，可用于检查删除服务相关角色状态。
                     * @return DeletionTaskId 删除任务ID，可用于检查删除服务相关角色状态。
                     * 
                     */
                    std::string GetDeletionTaskId() const;

                    /**
                     * 判断参数 DeletionTaskId 是否已赋值
                     * @return DeletionTaskId 是否已赋值
                     * 
                     */
                    bool DeletionTaskIdHasBeenSet() const;

                private:

                    /**
                     * 删除任务ID，可用于检查删除服务相关角色状态。
                     */
                    std::string m_deletionTaskId;
                    bool m_deletionTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DELETESERVICELINKEDROLERESPONSE_H_
