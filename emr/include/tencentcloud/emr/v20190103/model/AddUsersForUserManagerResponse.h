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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ADDUSERSFORUSERMANAGERRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ADDUSERSFORUSERMANAGERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * AddUsersForUserManager返回参数结构体
                */
                class AddUsersForUserManagerResponse : public AbstractModel
                {
                public:
                    AddUsersForUserManagerResponse();
                    ~AddUsersForUserManagerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取添加成功的用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessUserList 添加成功的用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSuccessUserList() const;

                    /**
                     * 判断参数 SuccessUserList 是否已赋值
                     * @return SuccessUserList 是否已赋值
                     * 
                     */
                    bool SuccessUserListHasBeenSet() const;

                    /**
                     * 获取添加失败的用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedUserList 添加失败的用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFailedUserList() const;

                    /**
                     * 判断参数 FailedUserList 是否已赋值
                     * @return FailedUserList 是否已赋值
                     * 
                     */
                    bool FailedUserListHasBeenSet() const;

                    /**
                     * 获取流程id。大于0表示启动了流程；等于0表示没有启动流程
                     * @return FlowId 流程id。大于0表示启动了流程；等于0表示没有启动流程
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 添加成功的用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_successUserList;
                    bool m_successUserListHasBeenSet;

                    /**
                     * 添加失败的用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failedUserList;
                    bool m_failedUserListHasBeenSet;

                    /**
                     * 流程id。大于0表示启动了流程；等于0表示没有启动流程
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ADDUSERSFORUSERMANAGERRESPONSE_H_
