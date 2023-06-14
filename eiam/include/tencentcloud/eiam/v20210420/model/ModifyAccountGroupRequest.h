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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYACCOUNTGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYACCOUNTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ModifyAccountGroup请求参数结构体
                */
                class ModifyAccountGroupRequest : public AbstractModel
                {
                public:
                    ModifyAccountGroupRequest();
                    ~ModifyAccountGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账号组ID。
                     * @return AccountGroupId 账号组ID。
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置账号组ID。
                     * @param _accountGroupId 账号组ID。
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取账号组名。未传入该参数时，表示不进行修改。
                     * @return GroupName 账号组名。未传入该参数时，表示不进行修改。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置账号组名。未传入该参数时，表示不进行修改。
                     * @param _groupName 账号组名。未传入该参数时，表示不进行修改。
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
                     * 获取描述，未传入该参数时，表示不进行修改。
                     * @return Description 描述，未传入该参数时，表示不进行修改。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述，未传入该参数时，表示不进行修改。
                     * @param _description 描述，未传入该参数时，表示不进行修改。
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
                     * 账号组ID。
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 账号组名。未传入该参数时，表示不进行修改。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 描述，未传入该参数时，表示不进行修改。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYACCOUNTGROUPREQUEST_H_
