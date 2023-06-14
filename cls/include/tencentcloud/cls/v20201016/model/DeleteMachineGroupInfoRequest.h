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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEMACHINEGROUPINFOREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEMACHINEGROUPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MachineGroupTypeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteMachineGroupInfo请求参数结构体
                */
                class DeleteMachineGroupInfoRequest : public AbstractModel
                {
                public:
                    DeleteMachineGroupInfoRequest();
                    ~DeleteMachineGroupInfoRequest() = default;
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

                    /**
                     * 获取机器组类型
目前type支持 ip 和 label
                     * @return MachineGroupType 机器组类型
目前type支持 ip 和 label
                     * 
                     */
                    MachineGroupTypeInfo GetMachineGroupType() const;

                    /**
                     * 设置机器组类型
目前type支持 ip 和 label
                     * @param _machineGroupType 机器组类型
目前type支持 ip 和 label
                     * 
                     */
                    void SetMachineGroupType(const MachineGroupTypeInfo& _machineGroupType);

                    /**
                     * 判断参数 MachineGroupType 是否已赋值
                     * @return MachineGroupType 是否已赋值
                     * 
                     */
                    bool MachineGroupTypeHasBeenSet() const;

                private:

                    /**
                     * 机器组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 机器组类型
目前type支持 ip 和 label
                     */
                    MachineGroupTypeInfo m_machineGroupType;
                    bool m_machineGroupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEMACHINEGROUPINFOREQUEST_H_
