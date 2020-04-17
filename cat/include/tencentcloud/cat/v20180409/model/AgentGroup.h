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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_AGENTGROUP_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_AGENTGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/CatAgent.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 拨测分组
                */
                class AgentGroup : public AbstractModel
                {
                public:
                    AgentGroup();
                    ~AgentGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拨测分组ID
                     * @return GroupId 拨测分组ID
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置拨测分组ID
                     * @param GroupId 拨测分组ID
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取拨测分组名称
                     * @return GroupName 拨测分组名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置拨测分组名称
                     * @param GroupName 拨测分组名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取是否默认拨测分组。1表示是，0表示否
                     * @return IsDefault 是否默认拨测分组。1表示是，0表示否
                     */
                    uint64_t GetIsDefault() const;

                    /**
                     * 设置是否默认拨测分组。1表示是，0表示否
                     * @param IsDefault 是否默认拨测分组。1表示是，0表示否
                     */
                    void SetIsDefault(const uint64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取使用本拨测分组的任务数
                     * @return TaskNum 使用本拨测分组的任务数
                     */
                    uint64_t GetTaskNum() const;

                    /**
                     * 设置使用本拨测分组的任务数
                     * @param TaskNum 使用本拨测分组的任务数
                     */
                    void SetTaskNum(const uint64_t& _taskNum);

                    /**
                     * 判断参数 TaskNum 是否已赋值
                     * @return TaskNum 是否已赋值
                     */
                    bool TaskNumHasBeenSet() const;

                    /**
                     * 获取拨测结点列表
                     * @return GroupDetail 拨测结点列表
                     */
                    std::vector<CatAgent> GetGroupDetail() const;

                    /**
                     * 设置拨测结点列表
                     * @param GroupDetail 拨测结点列表
                     */
                    void SetGroupDetail(const std::vector<CatAgent>& _groupDetail);

                    /**
                     * 判断参数 GroupDetail 是否已赋值
                     * @return GroupDetail 是否已赋值
                     */
                    bool GroupDetailHasBeenSet() const;

                    /**
                     * 获取最大拨测分组数
                     * @return MaxGroupNum 最大拨测分组数
                     */
                    uint64_t GetMaxGroupNum() const;

                    /**
                     * 设置最大拨测分组数
                     * @param MaxGroupNum 最大拨测分组数
                     */
                    void SetMaxGroupNum(const uint64_t& _maxGroupNum);

                    /**
                     * 判断参数 MaxGroupNum 是否已赋值
                     * @return MaxGroupNum 是否已赋值
                     */
                    bool MaxGroupNumHasBeenSet() const;

                private:

                    /**
                     * 拨测分组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 拨测分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 是否默认拨测分组。1表示是，0表示否
                     */
                    uint64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 使用本拨测分组的任务数
                     */
                    uint64_t m_taskNum;
                    bool m_taskNumHasBeenSet;

                    /**
                     * 拨测结点列表
                     */
                    std::vector<CatAgent> m_groupDetail;
                    bool m_groupDetailHasBeenSet;

                    /**
                     * 最大拨测分组数
                     */
                    uint64_t m_maxGroupNum;
                    bool m_maxGroupNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_AGENTGROUP_H_
