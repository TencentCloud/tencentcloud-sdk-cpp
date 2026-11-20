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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DELETEPRECACHEIMAGECLEANUPPOLICYREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DELETEPRECACHEIMAGECLEANUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DeletePreCacheImageCleanupPolicy请求参数结构体
                */
                class DeletePreCacheImageCleanupPolicyRequest : public AbstractModel
                {
                public:
                    DeletePreCacheImageCleanupPolicyRequest();
                    ~DeletePreCacheImageCleanupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>清理策略ID</p>
                     * @return CleanupPolicyId <p>清理策略ID</p>
                     * 
                     */
                    std::string GetCleanupPolicyId() const;

                    /**
                     * 设置<p>清理策略ID</p>
                     * @param _cleanupPolicyId <p>清理策略ID</p>
                     * 
                     */
                    void SetCleanupPolicyId(const std::string& _cleanupPolicyId);

                    /**
                     * 判断参数 CleanupPolicyId 是否已赋值
                     * @return CleanupPolicyId 是否已赋值
                     * 
                     */
                    bool CleanupPolicyIdHasBeenSet() const;

                private:

                    /**
                     * <p>清理策略ID</p>
                     */
                    std::string m_cleanupPolicyId;
                    bool m_cleanupPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DELETEPRECACHEIMAGECLEANUPPOLICYREQUEST_H_
