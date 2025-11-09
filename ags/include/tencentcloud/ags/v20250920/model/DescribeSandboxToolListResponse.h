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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESANDBOXTOOLLISTRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESANDBOXTOOLLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/SandboxTool.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeSandboxToolList返回参数结构体
                */
                class DescribeSandboxToolListResponse : public AbstractModel
                {
                public:
                    DescribeSandboxToolListResponse();
                    ~DescribeSandboxToolListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取沙箱工具列表
                     * @return SandboxToolSet 沙箱工具列表
                     * 
                     */
                    std::vector<SandboxTool> GetSandboxToolSet() const;

                    /**
                     * 判断参数 SandboxToolSet 是否已赋值
                     * @return SandboxToolSet 是否已赋值
                     * 
                     */
                    bool SandboxToolSetHasBeenSet() const;

                    /**
                     * 获取符合条件的沙箱工具总数
                     * @return TotalCount 符合条件的沙箱工具总数
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
                     * 沙箱工具列表
                     */
                    std::vector<SandboxTool> m_sandboxToolSet;
                    bool m_sandboxToolSetHasBeenSet;

                    /**
                     * 符合条件的沙箱工具总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESANDBOXTOOLLISTRESPONSE_H_
