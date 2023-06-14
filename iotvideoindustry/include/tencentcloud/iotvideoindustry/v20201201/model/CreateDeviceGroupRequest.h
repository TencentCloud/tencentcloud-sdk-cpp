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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATEDEVICEGROUPREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATEDEVICEGROUPREQUEST_H_

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
                * CreateDeviceGroup请求参数结构体
                */
                class CreateDeviceGroupRequest : public AbstractModel
                {
                public:
                    CreateDeviceGroupRequest();
                    ~CreateDeviceGroupRequest() = default;
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
                     * 获取父分组ID
                     * @return ParentId 父分组ID
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置父分组ID
                     * @param _parentId 父分组ID
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

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

                private:

                    /**
                     * 分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 父分组ID
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 分组描述
                     */
                    std::string m_groupDescribe;
                    bool m_groupDescribeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATEDEVICEGROUPREQUEST_H_
