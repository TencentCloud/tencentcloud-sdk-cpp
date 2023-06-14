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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_ADDMEMBERINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_ADDMEMBERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 添加的团队成员信息
                */
                class AddMemberInfo : public AbstractModel
                {
                public:
                    AddMemberInfo();
                    ~AddMemberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取团队成员 ID。
                     * @return MemberId 团队成员 ID。
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置团队成员 ID。
                     * @param _memberId 团队成员 ID。
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取团队成员备注。
                     * @return Remark 团队成员备注。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置团队成员备注。
                     * @param _remark 团队成员备注。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取团队成员角色，不填则默认添加普通成员。可选值：
<li>Admin：团队管理员；</li>
<li>Member：普通成员。</li>
                     * @return Role 团队成员角色，不填则默认添加普通成员。可选值：
<li>Admin：团队管理员；</li>
<li>Member：普通成员。</li>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置团队成员角色，不填则默认添加普通成员。可选值：
<li>Admin：团队管理员；</li>
<li>Member：普通成员。</li>
                     * @param _role 团队成员角色，不填则默认添加普通成员。可选值：
<li>Admin：团队管理员；</li>
<li>Member：普通成员。</li>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * 团队成员 ID。
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 团队成员备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 团队成员角色，不填则默认添加普通成员。可选值：
<li>Admin：团队管理员；</li>
<li>Member：普通成员。</li>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_ADDMEMBERINFO_H_
