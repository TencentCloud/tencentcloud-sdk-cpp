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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_ADDUSERTOUSERGROUPRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_ADDUSERTOUSERGROUPRESPONSE_H_

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
                * AddUserToUserGroup返回参数结构体
                */
                class AddUserToUserGroupResponse : public AbstractModel
                {
                public:
                    AddUserToUserGroupResponse();
                    ~AddUserToUserGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取未成功加入用户组的用户ID列表信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedItems 未成功加入用户组的用户ID列表信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFailedItems() const;

                    /**
                     * 判断参数 FailedItems 是否已赋值
                     * @return FailedItems 是否已赋值
                     * 
                     */
                    bool FailedItemsHasBeenSet() const;

                private:

                    /**
                     * 未成功加入用户组的用户ID列表信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failedItems;
                    bool m_failedItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_ADDUSERTOUSERGROUPRESPONSE_H_
