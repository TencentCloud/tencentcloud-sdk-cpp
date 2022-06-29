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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEACLSREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEACLSREQUEST_H_

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
                * DescribeAcls请求参数结构体
                */
                class DescribeAclsRequest : public AbstractModel
                {
                public:
                    DescribeAclsRequest();
                    ~DescribeAclsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取访问权限ID集合
                     * @return IdSet 访问权限ID集合
                     */
                    std::vector<uint64_t> GetIdSet() const;

                    /**
                     * 设置访问权限ID集合
                     * @param IdSet 访问权限ID集合
                     */
                    void SetIdSet(const std::vector<uint64_t>& _idSet);

                    /**
                     * 判断参数 IdSet 是否已赋值
                     * @return IdSet 是否已赋值
                     */
                    bool IdSetHasBeenSet() const;

                    /**
                     * 获取访问权限名称，模糊查询，最长64字符
                     * @return Name 访问权限名称，模糊查询，最长64字符
                     */
                    std::string GetName() const;

                    /**
                     * 设置访问权限名称，模糊查询，最长64字符
                     * @param Name 访问权限名称，模糊查询，最长64字符
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分页偏移位置
                     * @return Offset 分页偏移位置
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置
                     * @param Offset 分页偏移位置
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条目数量，默认20，最大500
                     * @return Limit 每页条目数量，默认20，最大500
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数量，默认20，最大500
                     * @param Limit 每页条目数量，默认20，最大500
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取是否根据Name进行精确查询，默认值false
                     * @return Exact 是否根据Name进行精确查询，默认值false
                     */
                    bool GetExact() const;

                    /**
                     * 设置是否根据Name进行精确查询，默认值false
                     * @param Exact 是否根据Name进行精确查询，默认值false
                     */
                    void SetExact(const bool& _exact);

                    /**
                     * 判断参数 Exact 是否已赋值
                     * @return Exact 是否已赋值
                     */
                    bool ExactHasBeenSet() const;

                    /**
                     * 获取有访问权限的用户ID集合
                     * @return AuthorizedUserIdSet 有访问权限的用户ID集合
                     */
                    std::vector<uint64_t> GetAuthorizedUserIdSet() const;

                    /**
                     * 设置有访问权限的用户ID集合
                     * @param AuthorizedUserIdSet 有访问权限的用户ID集合
                     */
                    void SetAuthorizedUserIdSet(const std::vector<uint64_t>& _authorizedUserIdSet);

                    /**
                     * 判断参数 AuthorizedUserIdSet 是否已赋值
                     * @return AuthorizedUserIdSet 是否已赋值
                     */
                    bool AuthorizedUserIdSetHasBeenSet() const;

                    /**
                     * 获取有访问权限的资产ID集合
                     * @return AuthorizedDeviceIdSet 有访问权限的资产ID集合
                     */
                    std::vector<uint64_t> GetAuthorizedDeviceIdSet() const;

                    /**
                     * 设置有访问权限的资产ID集合
                     * @param AuthorizedDeviceIdSet 有访问权限的资产ID集合
                     */
                    void SetAuthorizedDeviceIdSet(const std::vector<uint64_t>& _authorizedDeviceIdSet);

                    /**
                     * 判断参数 AuthorizedDeviceIdSet 是否已赋值
                     * @return AuthorizedDeviceIdSet 是否已赋值
                     */
                    bool AuthorizedDeviceIdSetHasBeenSet() const;

                    /**
                     * 获取访问权限状态，1 - 已生效，2 - 未生效，3 - 已过期
                     * @return Status 访问权限状态，1 - 已生效，2 - 未生效，3 - 已过期
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置访问权限状态，1 - 已生效，2 - 未生效，3 - 已过期
                     * @param Status 访问权限状态，1 - 已生效，2 - 未生效，3 - 已过期
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 访问权限ID集合
                     */
                    std::vector<uint64_t> m_idSet;
                    bool m_idSetHasBeenSet;

                    /**
                     * 访问权限名称，模糊查询，最长64字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分页偏移位置
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条目数量，默认20，最大500
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否根据Name进行精确查询，默认值false
                     */
                    bool m_exact;
                    bool m_exactHasBeenSet;

                    /**
                     * 有访问权限的用户ID集合
                     */
                    std::vector<uint64_t> m_authorizedUserIdSet;
                    bool m_authorizedUserIdSetHasBeenSet;

                    /**
                     * 有访问权限的资产ID集合
                     */
                    std::vector<uint64_t> m_authorizedDeviceIdSet;
                    bool m_authorizedDeviceIdSetHasBeenSet;

                    /**
                     * 访问权限状态，1 - 已生效，2 - 未生效，3 - 已过期
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEACLSREQUEST_H_
