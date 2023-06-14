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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEMACHINEGROUPREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEMACHINEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteMachineGroup请求参数结构体
                */
                class DeleteMachineGroupRequest : public AbstractModel
                {
                public:
                    DeleteMachineGroupRequest();
                    ~DeleteMachineGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器组ID
                     * @return GroupId 机器组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置机器组ID
                     * @param _groupId 机器组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 机器组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEMACHINEGROUPREQUEST_H_
