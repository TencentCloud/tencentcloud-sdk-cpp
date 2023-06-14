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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPACLSRESPONSE_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPACLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmeip/v20180625/model/EipAcl.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeEipAcls返回参数结构体
                */
                class DescribeEipAclsResponse : public AbstractModel
                {
                public:
                    DescribeEipAclsResponse();
                    ~DescribeEipAclsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回 EIPACL 列表总数
                     * @return TotalCount 返回 EIPACL 列表总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取EIPACL列表
                     * @return EipAclList EIPACL列表
                     * 
                     */
                    std::vector<EipAcl> GetEipAclList() const;

                    /**
                     * 判断参数 EipAclList 是否已赋值
                     * @return EipAclList 是否已赋值
                     * 
                     */
                    bool EipAclListHasBeenSet() const;

                private:

                    /**
                     * 返回 EIPACL 列表总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * EIPACL列表
                     */
                    std::vector<EipAcl> m_eipAclList;
                    bool m_eipAclListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPACLSRESPONSE_H_
