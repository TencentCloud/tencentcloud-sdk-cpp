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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_UPDATEDEVICEGROUPREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_UPDATEDEVICEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * UpdateDeviceGroup请求参数结构体
                */
                class UpdateDeviceGroupRequest : public AbstractModel
                {
                public:
                    UpdateDeviceGroupRequest();
                    ~UpdateDeviceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组名称
                     * @return GroupName 分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称
                     * @param _groupName 分组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
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
                     * 获取分组描述
                     * @return GroupDescribe 分组描述
                     * 
                     */
                    std::string GetGroupDescribe() const;

                    /**
                     * 设置分组描述
                     * @param _groupDescribe 分组描述
                     * 
                     */
                    void SetGroupDescribe(const std::string& _groupDescribe);

                    /**
                     * 判断参数 GroupDescribe 是否已赋值
                     * @return GroupDescribe 是否已赋值
                     * 
                     */
                    bool GroupDescribeHasBeenSet() const;

                    /**
                     * 获取新父分组ID，用于修改分组路径
                     * @return NewParentId 新父分组ID，用于修改分组路径
                     * 
                     */
                    std::string GetNewParentId() const;

                    /**
                     * 设置新父分组ID，用于修改分组路径
                     * @param _newParentId 新父分组ID，用于修改分组路径
                     * 
                     */
                    void SetNewParentId(const std::string& _newParentId);

                    /**
                     * 判断参数 NewParentId 是否已赋值
                     * @return NewParentId 是否已赋值
                     * 
                     */
                    bool NewParentIdHasBeenSet() const;

                private:

                    /**
                     * 分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组描述
                     */
                    std::string m_groupDescribe;
                    bool m_groupDescribeHasBeenSet;

                    /**
                     * 新父分组ID，用于修改分组路径
                     */
                    std::string m_newParentId;
                    bool m_newParentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_UPDATEDEVICEGROUPREQUEST_H_
