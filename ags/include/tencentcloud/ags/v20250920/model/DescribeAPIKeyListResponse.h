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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEAPIKEYLISTRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEAPIKEYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/APIKeyInfo.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeAPIKeyList返回参数结构体
                */
                class DescribeAPIKeyListResponse : public AbstractModel
                {
                public:
                    DescribeAPIKeyListResponse();
                    ~DescribeAPIKeyListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API密钥简略信息列表。
                     * @return APIKeySet API密钥简略信息列表。
                     * 
                     */
                    std::vector<APIKeyInfo> GetAPIKeySet() const;

                    /**
                     * 判断参数 APIKeySet 是否已赋值
                     * @return APIKeySet 是否已赋值
                     * 
                     */
                    bool APIKeySetHasBeenSet() const;

                    /**
                     * 获取列表中API密钥数量
                     * @return TotalCount 列表中API密钥数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * API密钥简略信息列表。
                     */
                    std::vector<APIKeyInfo> m_aPIKeySet;
                    bool m_aPIKeySetHasBeenSet;

                    /**
                     * 列表中API密钥数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEAPIKEYLISTRESPONSE_H_
