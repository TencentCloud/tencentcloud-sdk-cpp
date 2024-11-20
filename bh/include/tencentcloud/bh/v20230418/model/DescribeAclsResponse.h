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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEACLSRESPONSE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEACLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Acl.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeAcls返回参数结构体
                */
                class DescribeAclsResponse : public AbstractModel
                {
                public:
                    DescribeAclsResponse();
                    ~DescribeAclsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取访问权限总数
                     * @return TotalCount 访问权限总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取访问权限列表
                     * @return AclSet 访问权限列表
                     * 
                     */
                    std::vector<Acl> GetAclSet() const;

                    /**
                     * 判断参数 AclSet 是否已赋值
                     * @return AclSet 是否已赋值
                     * 
                     */
                    bool AclSetHasBeenSet() const;

                private:

                    /**
                     * 访问权限总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 访问权限列表
                     */
                    std::vector<Acl> m_aclSet;
                    bool m_aclSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEACLSRESPONSE_H_
