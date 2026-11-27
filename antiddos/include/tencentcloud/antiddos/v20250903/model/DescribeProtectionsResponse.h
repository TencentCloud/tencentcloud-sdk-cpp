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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEPROTECTIONSRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEPROTECTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/ProtectionInfo.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * DescribeProtections返回参数结构体
                */
                class DescribeProtectionsResponse : public AbstractModel
                {
                public:
                    DescribeProtectionsResponse();
                    ~DescribeProtectionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>符合条件的防护实例个数。</p>
                     * @return TotalCount <p>符合条件的防护实例个数。</p>
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
                     * 获取<p>防护实例详细信息列表。</p>
                     * @return Protections <p>防护实例详细信息列表。</p>
                     * 
                     */
                    std::vector<ProtectionInfo> GetProtections() const;

                    /**
                     * 判断参数 Protections 是否已赋值
                     * @return Protections 是否已赋值
                     * 
                     */
                    bool ProtectionsHasBeenSet() const;

                private:

                    /**
                     * <p>符合条件的防护实例个数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>防护实例详细信息列表。</p>
                     */
                    std::vector<ProtectionInfo> m_protections;
                    bool m_protectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEPROTECTIONSRESPONSE_H_
