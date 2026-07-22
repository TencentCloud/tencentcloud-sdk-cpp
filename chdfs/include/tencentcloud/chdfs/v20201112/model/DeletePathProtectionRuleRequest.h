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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DELETEPATHPROTECTIONRULEREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DELETEPATHPROTECTIONRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DeletePathProtectionRule请求参数结构体
                */
                class DeletePathProtectionRuleRequest : public AbstractModel
                {
                public:
                    DeletePathProtectionRuleRequest();
                    ~DeletePathProtectionRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路径保护规则ID
                     * @return PathProtectionRuleId 路径保护规则ID
                     * 
                     */
                    uint64_t GetPathProtectionRuleId() const;

                    /**
                     * 设置路径保护规则ID
                     * @param _pathProtectionRuleId 路径保护规则ID
                     * 
                     */
                    void SetPathProtectionRuleId(const uint64_t& _pathProtectionRuleId);

                    /**
                     * 判断参数 PathProtectionRuleId 是否已赋值
                     * @return PathProtectionRuleId 是否已赋值
                     * 
                     */
                    bool PathProtectionRuleIdHasBeenSet() const;

                private:

                    /**
                     * 路径保护规则ID
                     */
                    uint64_t m_pathProtectionRuleId;
                    bool m_pathProtectionRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DELETEPATHPROTECTIONRULEREQUEST_H_
