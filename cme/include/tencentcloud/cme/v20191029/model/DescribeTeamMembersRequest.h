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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETEAMMEMBERSREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETEAMMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeTeamMembers请求参数结构体
                */
                class DescribeTeamMembersRequest : public AbstractModel
                {
                public:
                    DescribeTeamMembersRequest();
                    ~DescribeTeamMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param Platform 平台名称，指定访问的平台。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取团队 ID。
                     * @return TeamId 团队 ID。
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置团队 ID。
                     * @param TeamId 团队 ID。
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取成员 ID 列表，限指定30个指定成员。
                     * @return MemberIds 成员 ID 列表，限指定30个指定成员。
                     */
                    std::vector<std::string> GetMemberIds() const;

                    /**
                     * 设置成员 ID 列表，限指定30个指定成员。
                     * @param MemberIds 成员 ID 列表，限指定30个指定成员。
                     */
                    void SetMemberIds(const std::vector<std::string>& _memberIds);

                    /**
                     * 判断参数 MemberIds 是否已赋值
                     * @return MemberIds 是否已赋值
                     */
                    bool MemberIdsHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0
                     * @return Offset 分页偏移量，默认值：0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0
                     * @param Offset 分页偏移量，默认值：0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：30，最大值：30。
                     * @return Limit 返回记录条数，默认值：30，最大值：30。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：30，最大值：30。
                     * @param Limit 返回记录条数，默认值：30，最大值：30。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @return Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @param Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 团队 ID。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * 成员 ID 列表，限指定30个指定成员。
                     */
                    std::vector<std::string> m_memberIds;
                    bool m_memberIdsHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：30，最大值：30。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETEAMMEMBERSREQUEST_H_
