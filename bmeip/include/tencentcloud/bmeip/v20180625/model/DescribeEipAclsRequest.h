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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPACLSREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPACLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeEipAcls请求参数结构体
                */
                class DescribeEipAclsRequest : public AbstractModel
                {
                public:
                    DescribeEipAclsRequest();
                    ~DescribeEipAclsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ACL 名称，支持模糊查找
                     * @return AclName ACL 名称，支持模糊查找
                     */
                    std::string GetAclName() const;

                    /**
                     * 设置ACL 名称，支持模糊查找
                     * @param AclName ACL 名称，支持模糊查找
                     */
                    void SetAclName(const std::string& _aclName);

                    /**
                     * 判断参数 AclName 是否已赋值
                     * @return AclName 是否已赋值
                     */
                    bool AclNameHasBeenSet() const;

                    /**
                     * 获取ACL 实例 ID 列表，数组下标从 0 开始
                     * @return AclIds ACL 实例 ID 列表，数组下标从 0 开始
                     */
                    std::vector<std::string> GetAclIds() const;

                    /**
                     * 设置ACL 实例 ID 列表，数组下标从 0 开始
                     * @param AclIds ACL 实例 ID 列表，数组下标从 0 开始
                     */
                    void SetAclIds(const std::vector<std::string>& _aclIds);

                    /**
                     * 判断参数 AclIds 是否已赋值
                     * @return AclIds 是否已赋值
                     */
                    bool AclIdsHasBeenSet() const;

                    /**
                     * 获取分页参数。偏移量，默认为 0
                     * @return Offset 分页参数。偏移量，默认为 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数。偏移量，默认为 0
                     * @param Offset 分页参数。偏移量，默认为 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页参数。每一页的 EIPACL 列表数目
                     * @return Limit 分页参数。每一页的 EIPACL 列表数目
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数。每一页的 EIPACL 列表数目
                     * @param Limit 分页参数。每一页的 EIPACL 列表数目
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * ACL 名称，支持模糊查找
                     */
                    std::string m_aclName;
                    bool m_aclNameHasBeenSet;

                    /**
                     * ACL 实例 ID 列表，数组下标从 0 开始
                     */
                    std::vector<std::string> m_aclIds;
                    bool m_aclIdsHasBeenSet;

                    /**
                     * 分页参数。偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数。每一页的 EIPACL 列表数目
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPACLSREQUEST_H_
