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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UNINSTALLKEYSANDBOXSKILLREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UNINSTALLKEYSANDBOXSKILLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * UninstallKeySandboxSkill请求参数结构体
                */
                class UninstallKeySandboxSkillRequest : public AbstractModel
                {
                public:
                    UninstallKeySandboxSkillRequest();
                    ~UninstallKeySandboxSkillRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器实例ID列表
入参限制：最多一次操作100个
                     * @return InstanceIdList 机器实例ID列表
入参限制：最多一次操作100个
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置机器实例ID列表
入参限制：最多一次操作100个
                     * @param _instanceIdList 机器实例ID列表
入参限制：最多一次操作100个
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取集团账号的成员ID
                     * @return MemberId 集团账号的成员ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员ID
                     * @param _memberId 集团账号的成员ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * 机器实例ID列表
入参限制：最多一次操作100个
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * 集团账号的成员ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UNINSTALLKEYSANDBOXSKILLREQUEST_H_
