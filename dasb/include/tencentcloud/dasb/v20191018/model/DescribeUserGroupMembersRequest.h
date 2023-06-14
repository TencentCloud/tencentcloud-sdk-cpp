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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEUSERGROUPMEMBERSREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEUSERGROUPMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * DescribeUserGroupMembers请求参数结构体
                */
                class DescribeUserGroupMembersRequest : public AbstractModel
                {
                public:
                    DescribeUserGroupMembersRequest();
                    ~DescribeUserGroupMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组ID
                     * @return Id 用户组ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置用户组ID
                     * @param _id 用户组ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取true - 查询已添加到该用户组的用户，false - 查询未添加到该用户组的用户
                     * @return Bound true - 查询已添加到该用户组的用户，false - 查询未添加到该用户组的用户
                     * 
                     */
                    bool GetBound() const;

                    /**
                     * 设置true - 查询已添加到该用户组的用户，false - 查询未添加到该用户组的用户
                     * @param _bound true - 查询已添加到该用户组的用户，false - 查询未添加到该用户组的用户
                     * 
                     */
                    void SetBound(const bool& _bound);

                    /**
                     * 判断参数 Bound 是否已赋值
                     * @return Bound 是否已赋值
                     * 
                     */
                    bool BoundHasBeenSet() const;

                    /**
                     * 获取用户名或用户姓名，最长64个字符，模糊查询
                     * @return Name 用户名或用户姓名，最长64个字符，模糊查询
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户名或用户姓名，最长64个字符，模糊查询
                     * @param _name 用户名或用户姓名，最长64个字符，模糊查询
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分页偏移位置，默认值为0
                     * @return Offset 分页偏移位置，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置，默认值为0
                     * @param _offset 分页偏移位置，默认值为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条目数量，默认20, 最大500
                     * @return Limit 每页条目数量，默认20, 最大500
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数量，默认20, 最大500
                     * @param _limit 每页条目数量，默认20, 最大500
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取所属部门ID
                     * @return DepartmentId 所属部门ID
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置所属部门ID
                     * @param _departmentId 所属部门ID
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                private:

                    /**
                     * 用户组ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * true - 查询已添加到该用户组的用户，false - 查询未添加到该用户组的用户
                     */
                    bool m_bound;
                    bool m_boundHasBeenSet;

                    /**
                     * 用户名或用户姓名，最长64个字符，模糊查询
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分页偏移位置，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条目数量，默认20, 最大500
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 所属部门ID
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEUSERGROUPMEMBERSREQUEST_H_
