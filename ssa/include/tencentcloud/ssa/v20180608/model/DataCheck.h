/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DATACHECK_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DATACHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 检查项详情对象
                */
                class DataCheck : public AbstractModel
                {
                public:
                    DataCheck();
                    ~DataCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项唯一标识符uuid
                     * @return Id 检查项唯一标识符uuid
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置检查项唯一标识符uuid
                     * @param _id 检查项唯一标识符uuid
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取检查项名称
                     * @return Name 检查项名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置检查项名称
                     * @param _name 检查项名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取检查项类型
                     * @return Type 检查项类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置检查项类型
                     * @param _type 检查项类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取最近一次检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastCheckTime 最近一次检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置最近一次检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastCheckTime 最近一次检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastCheckTime(const std::string& _lastCheckTime);

                    /**
                     * 判断参数 LastCheckTime 是否已赋值
                     * @return LastCheckTime 是否已赋值
                     * 
                     */
                    bool LastCheckTimeHasBeenSet() const;

                    /**
                     * 获取初始未检测状态0, 已通过为1，未通过为2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 初始未检测状态0, 已通过为1，未通过为2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置初始未检测状态0, 已通过为1，未通过为2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 初始未检测状态0, 已通过为1，未通过为2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取0-未忽略,1-已忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIgnored 0-未忽略,1-已忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsIgnored() const;

                    /**
                     * 设置0-未忽略,1-已忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIgnored 0-未忽略,1-已忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsIgnored(const uint64_t& _isIgnored);

                    /**
                     * 判断参数 IsIgnored 是否已赋值
                     * @return IsIgnored 是否已赋值
                     * 
                     */
                    bool IsIgnoredHasBeenSet() const;

                    /**
                     * 获取有风险的资源总数，未通过数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskCount 有风险的资源总数，未通过数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置有风险的资源总数，未通过数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskCount 有风险的资源总数，未通过数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取0-检测中,1-结束检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsChecked 0-检测中,1-结束检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsChecked() const;

                    /**
                     * 设置0-检测中,1-结束检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isChecked 0-检测中,1-结束检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsChecked(const uint64_t& _isChecked);

                    /**
                     * 判断参数 IsChecked 是否已赋值
                     * @return IsChecked 是否已赋值
                     * 
                     */
                    bool IsCheckedHasBeenSet() const;

                    /**
                     * 获取总资产数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetTotal 总资产数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetTotal() const;

                    /**
                     * 设置总资产数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetTotal 总资产数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetTotal(const int64_t& _assetTotal);

                    /**
                     * 判断参数 AssetTotal 是否已赋值
                     * @return AssetTotal 是否已赋值
                     * 
                     */
                    bool AssetTotalHasBeenSet() const;

                    /**
                     * 获取备注内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remarks 备注内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置备注内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remarks 备注内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemarks(const std::string& _remarks);

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                private:

                    /**
                     * 检查项唯一标识符uuid
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 检查项名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检查项类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 最近一次检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * 初始未检测状态0, 已通过为1，未通过为2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0-未忽略,1-已忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isIgnored;
                    bool m_isIgnoredHasBeenSet;

                    /**
                     * 有风险的资源总数，未通过数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 0-检测中,1-结束检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isChecked;
                    bool m_isCheckedHasBeenSet;

                    /**
                     * 总资产数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetTotal;
                    bool m_assetTotalHasBeenSet;

                    /**
                     * 备注内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DATACHECK_H_
