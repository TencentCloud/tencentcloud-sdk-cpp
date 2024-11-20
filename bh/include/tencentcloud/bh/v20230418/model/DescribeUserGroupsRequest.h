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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEUSERGROUPSREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEUSERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeUserGroups请求参数结构体
                */
                class DescribeUserGroupsRequest : public AbstractModel
                {
                public:
                    DescribeUserGroupsRequest();
                    ~DescribeUserGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组ID集合
                     * @return IdSet 用户组ID集合
                     * 
                     */
                    std::vector<uint64_t> GetIdSet() const;

                    /**
                     * 设置用户组ID集合
                     * @param _idSet 用户组ID集合
                     * 
                     */
                    void SetIdSet(const std::vector<uint64_t>& _idSet);

                    /**
                     * 判断参数 IdSet 是否已赋值
                     * @return IdSet 是否已赋值
                     * 
                     */
                    bool IdSetHasBeenSet() const;

                    /**
                     * 获取用户组名，模糊查询,长度：0-64字符
                     * @return Name 用户组名，模糊查询,长度：0-64字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户组名，模糊查询,长度：0-64字符
                     * @param _name 用户组名，模糊查询,长度：0-64字符
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
                     * 获取每页条目数量，缺省20，最大500
                     * @return Limit 每页条目数量，缺省20，最大500
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数量，缺省20，最大500
                     * @param _limit 每页条目数量，缺省20，最大500
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
                     * 获取部门ID，用于过滤属于某个部门的用户组
                     * @return DepartmentId 部门ID，用于过滤属于某个部门的用户组
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置部门ID，用于过滤属于某个部门的用户组
                     * @param _departmentId 部门ID，用于过滤属于某个部门的用户组
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
                     * 用户组ID集合
                     */
                    std::vector<uint64_t> m_idSet;
                    bool m_idSetHasBeenSet;

                    /**
                     * 用户组名，模糊查询,长度：0-64字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分页偏移位置，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条目数量，缺省20，最大500
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 部门ID，用于过滤属于某个部门的用户组
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEUSERGROUPSREQUEST_H_
