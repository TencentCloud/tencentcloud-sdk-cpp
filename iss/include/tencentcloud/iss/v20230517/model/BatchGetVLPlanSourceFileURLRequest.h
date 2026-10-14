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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_BATCHGETVLPLANSOURCEFILEURLREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_BATCHGETVLPLANSOURCEFILEURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * BatchGetVLPlanSourceFileURL请求参数结构体
                */
                class BatchGetVLPlanSourceFileURLRequest : public AbstractModel
                {
                public:
                    BatchGetVLPlanSourceFileURLRequest();
                    ~BatchGetVLPlanSourceFileURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分析结果 ID 列表，最多 200 个</p>
                     * @return VLPlanResultIds <p>分析结果 ID 列表，最多 200 个</p>
                     * 
                     */
                    std::vector<std::string> GetVLPlanResultIds() const;

                    /**
                     * 设置<p>分析结果 ID 列表，最多 200 个</p>
                     * @param _vLPlanResultIds <p>分析结果 ID 列表，最多 200 个</p>
                     * 
                     */
                    void SetVLPlanResultIds(const std::vector<std::string>& _vLPlanResultIds);

                    /**
                     * 判断参数 VLPlanResultIds 是否已赋值
                     * @return VLPlanResultIds 是否已赋值
                     * 
                     */
                    bool VLPlanResultIdsHasBeenSet() const;

                    /**
                     * 获取<p>URL 有效期（秒），范围 [60, 86400]，默认 600</p>
                     * @return Expire <p>URL 有效期（秒），范围 [60, 86400]，默认 600</p>
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置<p>URL 有效期（秒），范围 [60, 86400]，默认 600</p>
                     * @param _expire <p>URL 有效期（秒），范围 [60, 86400]，默认 600</p>
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                private:

                    /**
                     * <p>分析结果 ID 列表，最多 200 个</p>
                     */
                    std::vector<std::string> m_vLPlanResultIds;
                    bool m_vLPlanResultIdsHasBeenSet;

                    /**
                     * <p>URL 有效期（秒），范围 [60, 86400]，默认 600</p>
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_BATCHGETVLPLANSOURCEFILEURLREQUEST_H_
