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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEUSERSTAGSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEUSERSTAGSREQUEST_H_

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
                * UpdateWorkspaceUsersTags请求参数结构体
                */
                class UpdateWorkspaceUsersTagsRequest : public AbstractModel
                {
                public:
                    UpdateWorkspaceUsersTagsRequest();
                    ~UpdateWorkspaceUsersTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>必填，用户UIN列表，单次最多100个</p>
                     * @return UserUins <p>必填，用户UIN列表，单次最多100个</p>
                     * 
                     */
                    std::vector<std::string> GetUserUins() const;

                    /**
                     * 设置<p>必填，用户UIN列表，单次最多100个</p>
                     * @param _userUins <p>必填，用户UIN列表，单次最多100个</p>
                     * 
                     */
                    void SetUserUins(const std::vector<std::string>& _userUins);

                    /**
                     * 判断参数 UserUins 是否已赋值
                     * @return UserUins 是否已赋值
                     * 
                     */
                    bool UserUinsHasBeenSet() const;

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
                     * 获取<p>待更新的标签集合（标签维度及标签值通过 ID 指定），覆盖更新语义：传入后将被覆盖为目标用户的全部直绑标签，不传或传空数组则清空目标用户的所有直绑标签。每个元素中 TagId 必填，Values[].TagValueId 必填；传入的 TagValue、Source、GroupNames 服务端不读取，无需传入。标签维度与标签值可先通过 CreateTags / CreateTagValues 创建，再通过 ListTags 获取 ID（TagId 取 Items[].TagId，TagValueId 取 Items[].TagValues[].TagValueId）。</p>
                     * @return Tags <p>待更新的标签集合（标签维度及标签值通过 ID 指定），覆盖更新语义：传入后将被覆盖为目标用户的全部直绑标签，不传或传空数组则清空目标用户的所有直绑标签。每个元素中 TagId 必填，Values[].TagValueId 必填；传入的 TagValue、Source、GroupNames 服务端不读取，无需传入。标签维度与标签值可先通过 CreateTags / CreateTagValues 创建，再通过 ListTags 获取 ID（TagId 取 Items[].TagId，TagValueId 取 Items[].TagValues[].TagValueId）。</p>
                     * 
                     */
                    std::vector<UserTagInfo> GetTags() const;

                    /**
                     * 设置<p>待更新的标签集合（标签维度及标签值通过 ID 指定），覆盖更新语义：传入后将被覆盖为目标用户的全部直绑标签，不传或传空数组则清空目标用户的所有直绑标签。每个元素中 TagId 必填，Values[].TagValueId 必填；传入的 TagValue、Source、GroupNames 服务端不读取，无需传入。标签维度与标签值可先通过 CreateTags / CreateTagValues 创建，再通过 ListTags 获取 ID（TagId 取 Items[].TagId，TagValueId 取 Items[].TagValues[].TagValueId）。</p>
                     * @param _tags <p>待更新的标签集合（标签维度及标签值通过 ID 指定），覆盖更新语义：传入后将被覆盖为目标用户的全部直绑标签，不传或传空数组则清空目标用户的所有直绑标签。每个元素中 TagId 必填，Values[].TagValueId 必填；传入的 TagValue、Source、GroupNames 服务端不读取，无需传入。标签维度与标签值可先通过 CreateTags / CreateTagValues 创建，再通过 ListTags 获取 ID（TagId 取 Items[].TagId，TagValueId 取 Items[].TagValues[].TagValueId）。</p>
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
                     * <p>必填，用户UIN列表，单次最多100个</p>
                     */
                    std::vector<std::string> m_userUins;
                    bool m_userUinsHasBeenSet;

                    /**
                     * <p>必填，工作空间ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>待更新的标签集合（标签维度及标签值通过 ID 指定），覆盖更新语义：传入后将被覆盖为目标用户的全部直绑标签，不传或传空数组则清空目标用户的所有直绑标签。每个元素中 TagId 必填，Values[].TagValueId 必填；传入的 TagValue、Source、GroupNames 服务端不读取，无需传入。标签维度与标签值可先通过 CreateTags / CreateTagValues 创建，再通过 ListTags 获取 ID（TagId 取 Items[].TagId，TagValueId 取 Items[].TagValues[].TagValueId）。</p>
                     */
                    std::vector<UserTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKSPACEUSERSTAGSREQUEST_H_
