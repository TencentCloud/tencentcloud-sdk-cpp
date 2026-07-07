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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_QUOTAINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_QUOTAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 单个配额项的查询结果。每个结果对应一个配额类型；当请求中传入 ResourceIds 时，每个结果还会对应一个具体资源。
                */
                class QuotaInfo : public AbstractModel
                {
                public:
                    QuotaInfo();
                    ~QuotaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前剩余可用量，计算方式为 Limit - Used。仅当请求参数 DisplayFields 包含 available 时返回有效值；未请求时不返回或为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Available 当前剩余可用量，计算方式为 Limit - Used。仅当请求参数 DisplayFields 包含 available 时返回有效值；未请求时不返回或为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置当前剩余可用量，计算方式为 Limit - Used。仅当请求参数 DisplayFields 包含 available 时返回有效值；未请求时不返回或为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _available 当前剩余可用量，计算方式为 Limit - Used。仅当请求参数 DisplayFields 包含 available 时返回有效值；未请求时不返回或为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailable(const int64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取配额上限值。不同配额类型的单位不同，通常表示资源个数；超时时间类配额表示秒。
                     * @return Limit 配额上限值。不同配额类型的单位不同，通常表示资源个数；超时时间类配额表示秒。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置配额上限值。不同配额类型的单位不同，通常表示资源个数；超时时间类配额表示秒。
                     * @param _limit 配额上限值。不同配额类型的单位不同，通常表示资源个数；超时时间类配额表示秒。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取配额类型，与请求参数 QuotaTypes 中的取值对应。每种配额类型的含义请参考 QuotaTypes 参数说明。
                     * @return QuotaType 配额类型，与请求参数 QuotaTypes 中的取值对应。每种配额类型的含义请参考 QuotaTypes 参数说明。
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置配额类型，与请求参数 QuotaTypes 中的取值对应。每种配额类型的含义请参考 QuotaTypes 参数说明。
                     * @param _quotaType 配额类型，与请求参数 QuotaTypes 中的取值对应。每种配额类型的含义请参考 QuotaTypes 参数说明。
                     * 
                     */
                    void SetQuotaType(const std::string& _quotaType);

                    /**
                     * 判断参数 QuotaType 是否已赋值
                     * @return QuotaType 是否已赋值
                     * 
                     */
                    bool QuotaTypeHasBeenSet() const;

                    /**
                     * 获取资源 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取当前已使用量。仅当请求参数 DisplayFields 包含 used 时返回有效值；未请求时不返回或为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Used 当前已使用量。仅当请求参数 DisplayFields 包含 used 时返回有效值；未请求时不返回或为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUsed() const;

                    /**
                     * 设置当前已使用量。仅当请求参数 DisplayFields 包含 used 时返回有效值；未请求时不返回或为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _used 当前已使用量。仅当请求参数 DisplayFields 包含 used 时返回有效值；未请求时不返回或为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsed(const uint64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                private:

                    /**
                     * 当前剩余可用量，计算方式为 Limit - Used。仅当请求参数 DisplayFields 包含 available 时返回有效值；未请求时不返回或为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 配额上限值。不同配额类型的单位不同，通常表示资源个数；超时时间类配额表示秒。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 配额类型，与请求参数 QuotaTypes 中的取值对应。每种配额类型的含义请参考 QuotaTypes 参数说明。
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * 资源 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 当前已使用量。仅当请求参数 DisplayFields 包含 used 时返回有效值；未请求时不返回或为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_used;
                    bool m_usedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_QUOTAINFO_H_
