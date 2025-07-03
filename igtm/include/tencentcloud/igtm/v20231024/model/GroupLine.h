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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_GROUPLINE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_GROUPLINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 线路列表
                */
                class GroupLine : public AbstractModel
                {
                public:
                    GroupLine();
                    ~GroupLine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分组线路id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DnsLineId 分组线路id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDnsLineId() const;

                    /**
                     * 设置分组线路id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dnsLineId 分组线路id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDnsLineId(const uint64_t& _dnsLineId);

                    /**
                     * 判断参数 DnsLineId 是否已赋值
                     * @return DnsLineId 是否已赋值
                     * 
                     */
                    bool DnsLineIdHasBeenSet() const;

                    /**
                     * 获取父节点 0为根节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Parent 父节点 0为根节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetParent() const;

                    /**
                     * 设置父节点 0为根节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parent 父节点 0为根节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParent(const uint64_t& _parent);

                    /**
                     * 判断参数 Parent 是否已赋值
                     * @return Parent 是否已赋值
                     * 
                     */
                    bool ParentHasBeenSet() const;

                    /**
                     * 获取线路名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LineName 线路名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLineName() const;

                    /**
                     * 设置线路名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lineName 线路名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLineName(const std::string& _lineName);

                    /**
                     * 判断参数 LineName 是否已赋值
                     * @return LineName 是否已赋值
                     * 
                     */
                    bool LineNameHasBeenSet() const;

                    /**
                     * 获取10=9 DNSPod 线路 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LineId 10=9 DNSPod 线路 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 设置10=9 DNSPod 线路 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lineId 10=9 DNSPod 线路 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLineId(const std::string& _lineId);

                    /**
                     * 判断参数 LineId 是否已赋值
                     * @return LineId 是否已赋值
                     * 
                     */
                    bool LineIdHasBeenSet() const;

                    /**
                     * 获取是否已使用过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Useful 是否已使用过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUseful() const;

                    /**
                     * 设置是否已使用过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useful 是否已使用过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUseful(const bool& _useful);

                    /**
                     * 判断参数 Useful 是否已赋值
                     * @return Useful 是否已赋值
                     * 
                     */
                    bool UsefulHasBeenSet() const;

                    /**
                     * 获取0为未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubGroup 0为未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSubGroup() const;

                    /**
                     * 设置0为未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subGroup 0为未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubGroup(const uint64_t& _subGroup);

                    /**
                     * 判断参数 SubGroup 是否已赋值
                     * @return SubGroup 是否已赋值
                     * 
                     */
                    bool SubGroupHasBeenSet() const;

                    /**
                     * 获取权限标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinePackage 权限标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLinePackage() const;

                    /**
                     * 设置权限标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linePackage 权限标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinePackage(const uint64_t& _linePackage);

                    /**
                     * 判断参数 LinePackage 是否已赋值
                     * @return LinePackage 是否已赋值
                     * 
                     */
                    bool LinePackageHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 分组线路id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_dnsLineId;
                    bool m_dnsLineIdHasBeenSet;

                    /**
                     * 父节点 0为根节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_parent;
                    bool m_parentHasBeenSet;

                    /**
                     * 线路名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lineName;
                    bool m_lineNameHasBeenSet;

                    /**
                     * 10=9 DNSPod 线路 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                    /**
                     * 是否已使用过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_useful;
                    bool m_usefulHasBeenSet;

                    /**
                     * 0为未使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_subGroup;
                    bool m_subGroupHasBeenSet;

                    /**
                     * 权限标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_linePackage;
                    bool m_linePackageHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_GROUPLINE_H_
