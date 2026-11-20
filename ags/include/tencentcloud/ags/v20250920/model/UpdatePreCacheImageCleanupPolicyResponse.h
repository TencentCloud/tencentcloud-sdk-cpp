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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_UPDATEPRECACHEIMAGECLEANUPPOLICYRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_UPDATEPRECACHEIMAGECLEANUPPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/PreCacheImageCleanupPolicy.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * UpdatePreCacheImageCleanupPolicy返回参数结构体
                */
                class UpdatePreCacheImageCleanupPolicyResponse : public AbstractModel
                {
                public:
                    UpdatePreCacheImageCleanupPolicyResponse();
                    ~UpdatePreCacheImageCleanupPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>清理策略详情</p>
                     * @return CleanupPolicy <p>清理策略详情</p>
                     * 
                     */
                    PreCacheImageCleanupPolicy GetCleanupPolicy() const;

                    /**
                     * 判断参数 CleanupPolicy 是否已赋值
                     * @return CleanupPolicy 是否已赋值
                     * 
                     */
                    bool CleanupPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>清理策略详情</p>
                     */
                    PreCacheImageCleanupPolicy m_cleanupPolicy;
                    bool m_cleanupPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_UPDATEPRECACHEIMAGECLEANUPPOLICYRESPONSE_H_
