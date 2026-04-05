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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORSET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/Tag.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * 全球加速实例信息
                */
                class GlobalAcceleratorSet : public AbstractModel
                {
                public:
                    GlobalAcceleratorSet();
                    ~GlobalAcceleratorSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>全球加速实例ID。</p>
                     * @return GlobalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>全球加速实例ID。</p>
                     * @param _globalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>全球加速实例名称。</p>
                     * @return Name <p>全球加速实例名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>全球加速实例名称。</p>
                     * @param _name <p>全球加速实例名称。</p>
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
                     * 获取<p>全球加速实例描述。</p>
                     * @return Description <p>全球加速实例描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>全球加速实例描述。</p>
                     * @param _description <p>全球加速实例描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>全球加速实例创建时间。</p>
                     * @return CreateTime <p>全球加速实例创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>全球加速实例创建时间。</p>
                     * @param _createTime <p>全球加速实例创建时间。</p>
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
                     * 获取<p>全球加速实例状态。</p>
                     * @return State <p>全球加速实例状态。</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>全球加速实例状态。</p>
                     * @param _state <p>全球加速实例状态。</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>全球加速实例付费类型。</p>
                     * @return InstanceChargeType <p>全球加速实例付费类型。</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>全球加速实例付费类型。</p>
                     * @param _instanceChargeType <p>全球加速实例付费类型。</p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>全球加速实例DdosId。</p>
                     * @return DdosId <p>全球加速实例DdosId。</p>
                     * 
                     */
                    std::string GetDdosId() const;

                    /**
                     * 设置<p>全球加速实例DdosId。</p>
                     * @param _ddosId <p>全球加速实例DdosId。</p>
                     * 
                     */
                    void SetDdosId(const std::string& _ddosId);

                    /**
                     * 判断参数 DdosId 是否已赋值
                     * @return DdosId 是否已赋值
                     * 
                     */
                    bool DdosIdHasBeenSet() const;

                    /**
                     * 获取<p>所属加速实例监听器个数。</p>
                     * @return ListenerCounts <p>所属加速实例监听器个数。</p>
                     * 
                     */
                    uint64_t GetListenerCounts() const;

                    /**
                     * 设置<p>所属加速实例监听器个数。</p>
                     * @param _listenerCounts <p>所属加速实例监听器个数。</p>
                     * 
                     */
                    void SetListenerCounts(const uint64_t& _listenerCounts);

                    /**
                     * 判断参数 ListenerCounts 是否已赋值
                     * @return ListenerCounts 是否已赋值
                     * 
                     */
                    bool ListenerCountsHasBeenSet() const;

                    /**
                     * 获取<p>所属加速实例加速地域个数。</p>
                     * @return AcceleratorAreaCounts <p>所属加速实例加速地域个数。</p>
                     * 
                     */
                    uint64_t GetAcceleratorAreaCounts() const;

                    /**
                     * 设置<p>所属加速实例加速地域个数。</p>
                     * @param _acceleratorAreaCounts <p>所属加速实例加速地域个数。</p>
                     * 
                     */
                    void SetAcceleratorAreaCounts(const uint64_t& _acceleratorAreaCounts);

                    /**
                     * 判断参数 AcceleratorAreaCounts 是否已赋值
                     * @return AcceleratorAreaCounts 是否已赋值
                     * 
                     */
                    bool AcceleratorAreaCountsHasBeenSet() const;

                    /**
                     * 获取<p>全球加速实例状态。</p>
                     * @return Status <p>全球加速实例状态。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>全球加速实例状态。</p>
                     * @param _status <p>全球加速实例状态。</p>
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
                     * 获取<p>域名。</p>
                     * @return Cname <p>域名。</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>域名。</p>
                     * @param _cname <p>域名。</p>
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取<p>跨境类型；HighQuality（精品跨境）、Unicom（联通跨境）、NotAvailable（未开通）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrossBorderType <p>跨境类型；HighQuality（精品跨境）、Unicom（联通跨境）、NotAvailable（未开通）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrossBorderType() const;

                    /**
                     * 设置<p>跨境类型；HighQuality（精品跨境）、Unicom（联通跨境）、NotAvailable（未开通）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crossBorderType <p>跨境类型；HighQuality（精品跨境）、Unicom（联通跨境）、NotAvailable（未开通）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrossBorderType(const std::string& _crossBorderType);

                    /**
                     * 判断参数 CrossBorderType 是否已赋值
                     * @return CrossBorderType 是否已赋值
                     * 
                     */
                    bool CrossBorderTypeHasBeenSet() const;

                    /**
                     * 获取<p>标签信息。</p>
                     * @return TagSet <p>标签信息。</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签信息。</p>
                     * @param _tagSet <p>标签信息。</p>
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * <p>全球加速实例ID。</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>全球加速实例名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>全球加速实例描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>全球加速实例创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>全球加速实例状态。</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>全球加速实例付费类型。</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>全球加速实例DdosId。</p>
                     */
                    std::string m_ddosId;
                    bool m_ddosIdHasBeenSet;

                    /**
                     * <p>所属加速实例监听器个数。</p>
                     */
                    uint64_t m_listenerCounts;
                    bool m_listenerCountsHasBeenSet;

                    /**
                     * <p>所属加速实例加速地域个数。</p>
                     */
                    uint64_t m_acceleratorAreaCounts;
                    bool m_acceleratorAreaCountsHasBeenSet;

                    /**
                     * <p>全球加速实例状态。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>域名。</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>跨境类型；HighQuality（精品跨境）、Unicom（联通跨境）、NotAvailable（未开通）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crossBorderType;
                    bool m_crossBorderTypeHasBeenSet;

                    /**
                     * <p>标签信息。</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORSET_H_
