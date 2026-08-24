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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_SUPPORTREGIONINFO_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_SUPPORTREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/SupportZoneRule.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 支持的生产地域配置详情，包含支持类型与可用区粒度规则。
                */
                class SupportRegionInfo : public AbstractModel
                {
                public:
                    SupportRegionInfo();
                    ~SupportRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生产地域。
                     * @return SourceRegion 生产地域。
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置生产地域。
                     * @param _sourceRegion 生产地域。
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

                    /**
                     * 获取支持类型：REGION（地域级，整个生产地域均支持容灾）；ZONE（可用区级，按 SupportZoneRules 控制粒度）。
                     * @return SupportType 支持类型：REGION（地域级，整个生产地域均支持容灾）；ZONE（可用区级，按 SupportZoneRules 控制粒度）。
                     * 
                     */
                    std::string GetSupportType() const;

                    /**
                     * 设置支持类型：REGION（地域级，整个生产地域均支持容灾）；ZONE（可用区级，按 SupportZoneRules 控制粒度）。
                     * @param _supportType 支持类型：REGION（地域级，整个生产地域均支持容灾）；ZONE（可用区级，按 SupportZoneRules 控制粒度）。
                     * 
                     */
                    void SetSupportType(const std::string& _supportType);

                    /**
                     * 判断参数 SupportType 是否已赋值
                     * @return SupportType 是否已赋值
                     * 
                     */
                    bool SupportTypeHasBeenSet() const;

                    /**
                     * 获取配置状态：valid（生效）/ invalid（停用）。
                     * @return Status 配置状态：valid（生效）/ invalid（停用）。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置配置状态：valid（生效）/ invalid（停用）。
                     * @param _status 配置状态：valid（生效）/ invalid（停用）。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取可用区级容灾规则列表。仅当 SupportType=ZONE 时有效；REGION 类型时该字段返回空数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportZoneRules 可用区级容灾规则列表。仅当 SupportType=ZONE 时有效；REGION 类型时该字段返回空数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SupportZoneRule> GetSupportZoneRules() const;

                    /**
                     * 设置可用区级容灾规则列表。仅当 SupportType=ZONE 时有效；REGION 类型时该字段返回空数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportZoneRules 可用区级容灾规则列表。仅当 SupportType=ZONE 时有效；REGION 类型时该字段返回空数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportZoneRules(const std::vector<SupportZoneRule>& _supportZoneRules);

                    /**
                     * 判断参数 SupportZoneRules 是否已赋值
                     * @return SupportZoneRules 是否已赋值
                     * 
                     */
                    bool SupportZoneRulesHasBeenSet() const;

                private:

                    /**
                     * 生产地域。
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * 支持类型：REGION（地域级，整个生产地域均支持容灾）；ZONE（可用区级，按 SupportZoneRules 控制粒度）。
                     */
                    std::string m_supportType;
                    bool m_supportTypeHasBeenSet;

                    /**
                     * 配置状态：valid（生效）/ invalid（停用）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 可用区级容灾规则列表。仅当 SupportType=ZONE 时有效；REGION 类型时该字段返回空数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SupportZoneRule> m_supportZoneRules;
                    bool m_supportZoneRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_SUPPORTREGIONINFO_H_
