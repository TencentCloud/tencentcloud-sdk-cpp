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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPAUXILIARYINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPAUXILIARYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppAppeal.h>
#include <tencentcloud/adp/v20260520/model/SearchResourceStatusInfo.h>
#include <tencentcloud/adp/v20260520/model/SpecialStatusInfo.h>
#include <tencentcloud/adp/v20260520/model/AppSubStatusInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用辅助信息 - 包含各类辅助状态和扩展信息(用户不可修改)
                */
                class AppAuxiliaryInfo : public AbstractModel
                {
                public:
                    AppAuxiliaryInfo();
                    ~AppAuxiliaryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取申诉信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Appeal 申诉信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppAppeal GetAppeal() const;

                    /**
                     * 设置申诉信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appeal 申诉信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppeal(const AppAppeal& _appeal);

                    /**
                     * 判断参数 Appeal 是否已赋值
                     * @return Appeal 是否已赋值
                     * 
                     */
                    bool AppealHasBeenSet() const;

                    /**
                     * 获取搜索资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchResourceStatus 搜索资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SearchResourceStatusInfo GetSearchResourceStatus() const;

                    /**
                     * 设置搜索资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchResourceStatus 搜索资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchResourceStatus(const SearchResourceStatusInfo& _searchResourceStatus);

                    /**
                     * 判断参数 SearchResourceStatus 是否已赋值
                     * @return SearchResourceStatus 是否已赋值
                     * 
                     */
                    bool SearchResourceStatusHasBeenSet() const;

                    /**
                     * 获取特殊状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecialStatusInfo 特殊状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SpecialStatusInfo GetSpecialStatusInfo() const;

                    /**
                     * 设置特殊状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specialStatusInfo 特殊状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecialStatusInfo(const SpecialStatusInfo& _specialStatusInfo);

                    /**
                     * 判断参数 SpecialStatusInfo 是否已赋值
                     * @return SpecialStatusInfo 是否已赋值
                     * 
                     */
                    bool SpecialStatusInfoHasBeenSet() const;

                    /**
                     * 获取子状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubStatus 子状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppSubStatusInfo GetSubStatus() const;

                    /**
                     * 设置子状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subStatus 子状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubStatus(const AppSubStatusInfo& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                private:

                    /**
                     * 申诉信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppAppeal m_appeal;
                    bool m_appealHasBeenSet;

                    /**
                     * 搜索资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SearchResourceStatusInfo m_searchResourceStatus;
                    bool m_searchResourceStatusHasBeenSet;

                    /**
                     * 特殊状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SpecialStatusInfo m_specialStatusInfo;
                    bool m_specialStatusInfoHasBeenSet;

                    /**
                     * 子状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppSubStatusInfo m_subStatus;
                    bool m_subStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPAUXILIARYINFO_H_
