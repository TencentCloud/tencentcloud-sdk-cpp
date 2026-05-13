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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Resource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 规格管理，规格类型描述
                */
                class NodeResource : public AbstractModel
                {
                public:
                    NodeResource();
                    ~NodeResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配置Id</p>
                     * @return ResourceConfigId <p>配置Id</p>
                     * 
                     */
                    uint64_t GetResourceConfigId() const;

                    /**
                     * 设置<p>配置Id</p>
                     * @param _resourceConfigId <p>配置Id</p>
                     * 
                     */
                    void SetResourceConfigId(const uint64_t& _resourceConfigId);

                    /**
                     * 判断参数 ResourceConfigId 是否已赋值
                     * @return ResourceConfigId 是否已赋值
                     * 
                     */
                    bool ResourceConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>Resource</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource <p>Resource</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置<p>Resource</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource <p>Resource</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const Resource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否默认配置,DEFAULT,BACKUP</p>
                     * @return IsDefault <p>是否默认配置,DEFAULT,BACKUP</p>
                     * 
                     */
                    std::string GetIsDefault() const;

                    /**
                     * 设置<p>是否默认配置,DEFAULT,BACKUP</p>
                     * @param _isDefault <p>是否默认配置,DEFAULT,BACKUP</p>
                     * 
                     */
                    void SetIsDefault(const std::string& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取<p>该类型剩余</p>
                     * @return MaxResourceNum <p>该类型剩余</p>
                     * 
                     */
                    uint64_t GetMaxResourceNum() const;

                    /**
                     * 设置<p>该类型剩余</p>
                     * @param _maxResourceNum <p>该类型剩余</p>
                     * 
                     */
                    void SetMaxResourceNum(const uint64_t& _maxResourceNum);

                    /**
                     * 判断参数 MaxResourceNum 是否已赋值
                     * @return MaxResourceNum 是否已赋值
                     * 
                     */
                    bool MaxResourceNumHasBeenSet() const;

                    /**
                     * 获取<p>支持的包销时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrepaidUnderwritePeriods <p>支持的包销时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetPrepaidUnderwritePeriods() const;

                    /**
                     * 设置<p>支持的包销时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prepaidUnderwritePeriods <p>支持的包销时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrepaidUnderwritePeriods(const std::vector<int64_t>& _prepaidUnderwritePeriods);

                    /**
                     * 判断参数 PrepaidUnderwritePeriods 是否已赋值
                     * @return PrepaidUnderwritePeriods 是否已赋值
                     * 
                     */
                    bool PrepaidUnderwritePeriodsHasBeenSet() const;

                    /**
                     * 获取<p>配额数量</p>
                     * @return QuotaNum <p>配额数量</p>
                     * 
                     */
                    int64_t GetQuotaNum() const;

                    /**
                     * 设置<p>配额数量</p>
                     * @param _quotaNum <p>配额数量</p>
                     * 
                     */
                    void SetQuotaNum(const int64_t& _quotaNum);

                    /**
                     * 判断参数 QuotaNum 是否已赋值
                     * @return QuotaNum 是否已赋值
                     * 
                     */
                    bool QuotaNumHasBeenSet() const;

                    /**
                     * 获取<p>配额单位</p>
                     * @return QuotaUnit <p>配额单位</p>
                     * 
                     */
                    std::string GetQuotaUnit() const;

                    /**
                     * 设置<p>配额单位</p>
                     * @param _quotaUnit <p>配额单位</p>
                     * 
                     */
                    void SetQuotaUnit(const std::string& _quotaUnit);

                    /**
                     * 判断参数 QuotaUnit 是否已赋值
                     * @return QuotaUnit 是否已赋值
                     * 
                     */
                    bool QuotaUnitHasBeenSet() const;

                private:

                    /**
                     * <p>配置Id</p>
                     */
                    uint64_t m_resourceConfigId;
                    bool m_resourceConfigIdHasBeenSet;

                    /**
                     * <p>Resource</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>是否默认配置,DEFAULT,BACKUP</p>
                     */
                    std::string m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>该类型剩余</p>
                     */
                    uint64_t m_maxResourceNum;
                    bool m_maxResourceNumHasBeenSet;

                    /**
                     * <p>支持的包销时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_prepaidUnderwritePeriods;
                    bool m_prepaidUnderwritePeriodsHasBeenSet;

                    /**
                     * <p>配额数量</p>
                     */
                    int64_t m_quotaNum;
                    bool m_quotaNumHasBeenSet;

                    /**
                     * <p>配额单位</p>
                     */
                    std::string m_quotaUnit;
                    bool m_quotaUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCE_H_
