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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETSERVICELINKEDROLEDELETIONSTATUSREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETSERVICELINKEDROLEDELETIONSTATUSREQUEST_H_

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
                * GetServiceLinkedRoleDeletionStatus请求参数结构体
                */
                class GetServiceLinkedRoleDeletionStatusRequest : public AbstractModel
                {
                public:
                    GetServiceLinkedRoleDeletionStatusRequest();
                    ~GetServiceLinkedRoleDeletionStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除任务ID
                     * @return DeletionTaskId 删除任务ID
                     * 
                     */
                    std::string GetDeletionTaskId() const;

                    /**
                     * 设置删除任务ID
                     * @param _deletionTaskId 删除任务ID
                     * 
                     */
                    void SetDeletionTaskId(const std::string& _deletionTaskId);

                    /**
                     * 判断参数 DeletionTaskId 是否已赋值
                     * @return DeletionTaskId 是否已赋值
                     * 
                     */
                    bool DeletionTaskIdHasBeenSet() const;

                private:

                    /**
                     * 删除任务ID
                     */
                    std::string m_deletionTaskId;
                    bool m_deletionTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETSERVICELINKEDROLEDELETIONSTATUSREQUEST_H_
