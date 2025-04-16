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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/UserMessage.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 工作组信息
                */
                class WorkGroupInfo : public AbstractModel
                {
                public:
                    WorkGroupInfo();
                    ~WorkGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询到的工作组唯一Id
                     * @return WorkGroupId 查询到的工作组唯一Id
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置查询到的工作组唯一Id
                     * @param _workGroupId 查询到的工作组唯一Id
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取工作组名称
                     * @return WorkGroupName 工作组名称
                     * 
                     */
                    std::string GetWorkGroupName() const;

                    /**
                     * 设置工作组名称
                     * @param _workGroupName 工作组名称
                     * 
                     */
                    void SetWorkGroupName(const std::string& _workGroupName);

                    /**
                     * 判断参数 WorkGroupName 是否已赋值
                     * @return WorkGroupName 是否已赋值
                     * 
                     */
                    bool WorkGroupNameHasBeenSet() const;

                    /**
                     * 获取工作组描述
                     * @return WorkGroupDescription 工作组描述
                     * 
                     */
                    std::string GetWorkGroupDescription() const;

                    /**
                     * 设置工作组描述
                     * @param _workGroupDescription 工作组描述
                     * 
                     */
                    void SetWorkGroupDescription(const std::string& _workGroupDescription);

                    /**
                     * 判断参数 WorkGroupDescription 是否已赋值
                     * @return WorkGroupDescription 是否已赋值
                     * 
                     */
                    bool WorkGroupDescriptionHasBeenSet() const;

                    /**
                     * 获取工作组关联的用户数量
                     * @return UserNum 工作组关联的用户数量
                     * 
                     */
                    int64_t GetUserNum() const;

                    /**
                     * 设置工作组关联的用户数量
                     * @param _userNum 工作组关联的用户数量
                     * 
                     */
                    void SetUserNum(const int64_t& _userNum);

                    /**
                     * 判断参数 UserNum 是否已赋值
                     * @return UserNum 是否已赋值
                     * 
                     */
                    bool UserNumHasBeenSet() const;

                    /**
                     * 获取工作组关联的用户集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserSet 工作组关联的用户集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserMessage> GetUserSet() const;

                    /**
                     * 设置工作组关联的用户集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userSet 工作组关联的用户集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserSet(const std::vector<UserMessage>& _userSet);

                    /**
                     * 判断参数 UserSet 是否已赋值
                     * @return UserSet 是否已赋值
                     * 
                     */
                    bool UserSetHasBeenSet() const;

                    /**
                     * 获取工作组绑定的权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicySet 工作组绑定的权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置工作组绑定的权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policySet 工作组绑定的权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                    /**
                     * 获取工作组的创建人
                     * @return Creator 工作组的创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置工作组的创建人
                     * @param _creator 工作组的创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取工作组的创建时间，形如2021-07-28 16:19:32
                     * @return CreateTime 工作组的创建时间，形如2021-07-28 16:19:32
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置工作组的创建时间，形如2021-07-28 16:19:32
                     * @param _createTime 工作组的创建时间，形如2021-07-28 16:19:32
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 查询到的工作组唯一Id
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * 工作组名称
                     */
                    std::string m_workGroupName;
                    bool m_workGroupNameHasBeenSet;

                    /**
                     * 工作组描述
                     */
                    std::string m_workGroupDescription;
                    bool m_workGroupDescriptionHasBeenSet;

                    /**
                     * 工作组关联的用户数量
                     */
                    int64_t m_userNum;
                    bool m_userNumHasBeenSet;

                    /**
                     * 工作组关联的用户集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserMessage> m_userSet;
                    bool m_userSetHasBeenSet;

                    /**
                     * 工作组绑定的权限集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * 工作组的创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 工作组的创建时间，形如2021-07-28 16:19:32
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPINFO_H_
