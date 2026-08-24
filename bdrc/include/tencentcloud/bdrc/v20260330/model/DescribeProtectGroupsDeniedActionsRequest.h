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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPROTECTGROUPSDENIEDACTIONSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPROTECTGROUPSDENIEDACTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeProtectGroupsDeniedActions请求参数结构体
                */
                class DescribeProtectGroupsDeniedActionsRequest : public AbstractModel
                {
                public:
                    DescribeProtectGroupsDeniedActionsRequest();
                    ~DescribeProtectGroupsDeniedActionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取保护组ID列表
                     * @return ProtectGroupIds 保护组ID列表
                     * 
                     */
                    std::vector<std::string> GetProtectGroupIds() const;

                    /**
                     * 设置保护组ID列表
                     * @param _protectGroupIds 保护组ID列表
                     * 
                     */
                    void SetProtectGroupIds(const std::vector<std::string>& _protectGroupIds);

                    /**
                     * 判断参数 ProtectGroupIds 是否已赋值
                     * @return ProtectGroupIds 是否已赋值
                     * 
                     */
                    bool ProtectGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 保护组ID列表
                     */
                    std::vector<std::string> m_protectGroupIds;
                    bool m_protectGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPROTECTGROUPSDENIEDACTIONSREQUEST_H_
