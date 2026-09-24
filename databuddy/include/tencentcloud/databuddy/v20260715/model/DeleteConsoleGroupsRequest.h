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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETECONSOLEGROUPSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETECONSOLEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * DeleteConsoleGroups请求参数结构体
                */
                class DeleteConsoleGroupsRequest : public AbstractModel
                {
                public:
                    DeleteConsoleGroupsRequest();
                    ~DeleteConsoleGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>要删除的用户组 ID 列表，单次最多100个</p>
                     * @return GroupIds <p>要删除的用户组 ID 列表，单次最多100个</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>要删除的用户组 ID 列表，单次最多100个</p>
                     * @param _groupIds <p>要删除的用户组 ID 列表，单次最多100个</p>
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>要删除的用户组 ID 列表，单次最多100个</p>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETECONSOLEGROUPSREQUEST_H_
