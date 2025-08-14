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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ModifyGroup请求参数结构体
                */
                class ModifyGroupRequest : public AbstractModel
                {
                public:
                    ModifyGroupRequest();
                    ~ModifyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署组ID，按照【部署组ID】进行过滤，可通过调用DescribeGroups查询已创建的项目列表或登录控制台进行查看；也可以调用CreateGroup创建新的项目。部署组ID例如：group-9yn2q8yd。
                     * @return GroupId 部署组ID，按照【部署组ID】进行过滤，可通过调用DescribeGroups查询已创建的项目列表或登录控制台进行查看；也可以调用CreateGroup创建新的项目。部署组ID例如：group-9yn2q8yd。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID，按照【部署组ID】进行过滤，可通过调用DescribeGroups查询已创建的项目列表或登录控制台进行查看；也可以调用CreateGroup创建新的项目。部署组ID例如：group-9yn2q8yd。
                     * @param _groupId 部署组ID，按照【部署组ID】进行过滤，可通过调用DescribeGroups查询已创建的项目列表或登录控制台进行查看；也可以调用CreateGroup创建新的项目。部署组ID例如：group-9yn2q8yd。
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
                     * 获取部署组名称
                     * @return GroupName 部署组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置部署组名称
                     * @param _groupName 部署组名称
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
                     * 获取部署组描述
                     * @return GroupDesc 部署组描述
                     * 
                     */
                    std::string GetGroupDesc() const;

                    /**
                     * 设置部署组描述
                     * @param _groupDesc 部署组描述
                     * 
                     */
                    void SetGroupDesc(const std::string& _groupDesc);

                    /**
                     * 判断参数 GroupDesc 是否已赋值
                     * @return GroupDesc 是否已赋值
                     * 
                     */
                    bool GroupDescHasBeenSet() const;

                    /**
                     * 获取部署组备注
                     * @return Alias 部署组备注
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置部署组备注
                     * @param _alias 部署组备注
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                private:

                    /**
                     * 部署组ID，按照【部署组ID】进行过滤，可通过调用DescribeGroups查询已创建的项目列表或登录控制台进行查看；也可以调用CreateGroup创建新的项目。部署组ID例如：group-9yn2q8yd。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 部署组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 部署组描述
                     */
                    std::string m_groupDesc;
                    bool m_groupDescHasBeenSet;

                    /**
                     * 部署组备注
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYGROUPREQUEST_H_
