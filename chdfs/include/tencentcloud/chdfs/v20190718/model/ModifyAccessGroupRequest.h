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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_MODIFYACCESSGROUPREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_MODIFYACCESSGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * ModifyAccessGroup请求参数结构体
                */
                class ModifyAccessGroupRequest : public AbstractModel
                {
                public:
                    ModifyAccessGroupRequest();
                    ~ModifyAccessGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取权限组ID
                     * @return AccessGroupId 权限组ID
                     * 
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置权限组ID
                     * @param _accessGroupId 权限组ID
                     * 
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     * 
                     */
                    bool AccessGroupIdHasBeenSet() const;

                    /**
                     * 获取权限组名称
                     * @return AccessGroupName 权限组名称
                     * 
                     */
                    std::string GetAccessGroupName() const;

                    /**
                     * 设置权限组名称
                     * @param _accessGroupName 权限组名称
                     * 
                     */
                    void SetAccessGroupName(const std::string& _accessGroupName);

                    /**
                     * 判断参数 AccessGroupName 是否已赋值
                     * @return AccessGroupName 是否已赋值
                     * 
                     */
                    bool AccessGroupNameHasBeenSet() const;

                    /**
                     * 获取权限组描述
                     * @return Description 权限组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置权限组描述
                     * @param _description 权限组描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 权限组ID
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                    /**
                     * 权限组名称
                     */
                    std::string m_accessGroupName;
                    bool m_accessGroupNameHasBeenSet;

                    /**
                     * 权限组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_MODIFYACCESSGROUPREQUEST_H_
