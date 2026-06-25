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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERQUOTA_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型路由相关配额
                */
                class ModelRouterQuota : public AbstractModel
                {
                public:
                    ModelRouterQuota();
                    ~ModelRouterQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配额名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaType <p>配额名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置<p>配额名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaType <p>配额名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId <p>资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId <p>资源ID</p>
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
                     * 获取<p>配额上限</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limit <p>配额上限</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>配额上限</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limit <p>配额上限</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>已使用配额数量</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Used <p>已使用配额数量</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUsed() const;

                    /**
                     * 设置<p>已使用配额数量</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _used <p>已使用配额数量</p><p>单位：个</p>
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

                    /**
                     * 获取<p>剩余配额数量</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Available <p>剩余配额数量</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAvailable() const;

                    /**
                     * 设置<p>剩余配额数量</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _available <p>剩余配额数量</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailable(const uint64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * <p>配额名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * <p>资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>配额上限</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>已使用配额数量</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * <p>剩余配额数量</p><p>单位：个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERQUOTA_H_
