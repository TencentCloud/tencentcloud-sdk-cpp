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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_RESOURCEPROTECTSTAT_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_RESOURCEPROTECTSTAT_H_

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
                * 产品受保护统计信息
                */
                class ResourceProtectStat : public AbstractModel
                {
                public:
                    ResourceProtectStat();
                    ~ResourceProtectStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取受保护资源数
                     * @return ProtectedCount 受保护资源数
                     * 
                     */
                    int64_t GetProtectedCount() const;

                    /**
                     * 设置受保护资源数
                     * @param _protectedCount 受保护资源数
                     * 
                     */
                    void SetProtectedCount(const int64_t& _protectedCount);

                    /**
                     * 判断参数 ProtectedCount 是否已赋值
                     * @return ProtectedCount 是否已赋值
                     * 
                     */
                    bool ProtectedCountHasBeenSet() const;

                    /**
                     * 获取资源总数
                     * @return TotalCount 资源总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置资源总数
                     * @param _totalCount 资源总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 受保护资源数
                     */
                    int64_t m_protectedCount;
                    bool m_protectedCountHasBeenSet;

                    /**
                     * 资源总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_RESOURCEPROTECTSTAT_H_
