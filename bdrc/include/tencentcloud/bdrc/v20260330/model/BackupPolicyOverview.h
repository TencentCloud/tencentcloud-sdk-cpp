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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPPOLICYOVERVIEW_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPPOLICYOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 备份策略概览
                */
                class BackupPolicyOverview : public AbstractModel
                {
                public:
                    BackupPolicyOverview();
                    ~BackupPolicyOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动备份策略总数
                     * @return TotalCount 自动备份策略总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置自动备份策略总数
                     * @param _totalCount 自动备份策略总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取已绑定资源的策略数
                     * @return BoundCount 已绑定资源的策略数
                     * 
                     */
                    int64_t GetBoundCount() const;

                    /**
                     * 设置已绑定资源的策略数
                     * @param _boundCount 已绑定资源的策略数
                     * 
                     */
                    void SetBoundCount(const int64_t& _boundCount);

                    /**
                     * 判断参数 BoundCount 是否已赋值
                     * @return BoundCount 是否已赋值
                     * 
                     */
                    bool BoundCountHasBeenSet() const;

                    /**
                     * 获取未绑定任何资源的策略数
                     * @return UnboundCount 未绑定任何资源的策略数
                     * 
                     */
                    int64_t GetUnboundCount() const;

                    /**
                     * 设置未绑定任何资源的策略数
                     * @param _unboundCount 未绑定任何资源的策略数
                     * 
                     */
                    void SetUnboundCount(const int64_t& _unboundCount);

                    /**
                     * 判断参数 UnboundCount 是否已赋值
                     * @return UnboundCount 是否已赋值
                     * 
                     */
                    bool UnboundCountHasBeenSet() const;

                private:

                    /**
                     * 自动备份策略总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 已绑定资源的策略数
                     */
                    int64_t m_boundCount;
                    bool m_boundCountHasBeenSet;

                    /**
                     * 未绑定任何资源的策略数
                     */
                    int64_t m_unboundCount;
                    bool m_unboundCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPPOLICYOVERVIEW_H_
