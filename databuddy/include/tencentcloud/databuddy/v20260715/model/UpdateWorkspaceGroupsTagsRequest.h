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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEGROUPSTAGSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEGROUPSTAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/UserTagInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateWorkspaceGroupsTags请求参数结构体
                */
                class UpdateWorkspaceGroupsTagsRequest : public AbstractModel
                {
                public:
                    UpdateWorkspaceGroupsTagsRequest();
                    ~UpdateWorkspaceGroupsTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>必填，用户组ID列表，单次最多100个；可通过 ListWorkspaceGroups 接口获取</p>
                     * @return GroupIds <p>必填，用户组ID列表，单次最多100个；可通过 ListWorkspaceGroups 接口获取</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>必填，用户组ID列表，单次最多100个；可通过 ListWorkspaceGroups 接口获取</p>
                     * @param _groupIds <p>必填，用户组ID列表，单次最多100个；可通过 ListWorkspaceGroups 接口获取</p>
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>必填，工作空间ID</p>
                     * @return WorkspaceId <p>必填，工作空间ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>必填，工作空间ID</p>
                     * @param _workspaceId <p>必填，工作空间ID</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>标签列表，覆盖写用户组的标签；传即覆盖更新，不传或为空则清除全部标签</p>
                     * @return Tags <p>标签列表，覆盖写用户组的标签；传即覆盖更新，不传或为空则清除全部标签</p>
                     * 
                     */
                    std::vector<UserTagInfo> GetTags() const;

                    /**
                     * 设置<p>标签列表，覆盖写用户组的标签；传即覆盖更新，不传或为空则清除全部标签</p>
                     * @param _tags <p>标签列表，覆盖写用户组的标签；传即覆盖更新，不传或为空则清除全部标签</p>
                     * 
                     */
                    void SetTags(const std::vector<UserTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>必填，用户组ID列表，单次最多100个；可通过 ListWorkspaceGroups 接口获取</p>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>必填，工作空间ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>标签列表，覆盖写用户组的标签；传即覆盖更新，不传或为空则清除全部标签</p>
                     */
                    std::vector<UserTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEGROUPSTAGSREQUEST_H_
