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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCESALEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCESALEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceSpec.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 可售卖资源规格信息
                */
                class ResourceSaleInfo : public AbstractModel
                {
                public:
                    ResourceSaleInfo();
                    ~ResourceSaleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>可售卖资源规格</p>
                     * @return ResourceSpec <p>可售卖资源规格</p>
                     * 
                     */
                    ResourceSpec GetResourceSpec() const;

                    /**
                     * 设置<p>可售卖资源规格</p>
                     * @param _resourceSpec <p>可售卖资源规格</p>
                     * 
                     */
                    void SetResourceSpec(const ResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取<p>规格步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Step <p>规格步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置<p>规格步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _step <p>规格步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStep(const int64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取<p>最大资源数量，仅GU有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxSpec <p>最大资源数量，仅GU有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxSpec() const;

                    /**
                     * 设置<p>最大资源数量，仅GU有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxSpec <p>最大资源数量，仅GU有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxSpec(const int64_t& _maxSpec);

                    /**
                     * 判断参数 MaxSpec 是否已赋值
                     * @return MaxSpec 是否已赋值
                     * 
                     */
                    bool MaxSpecHasBeenSet() const;

                    /**
                     * 获取<p>库存情况，对当前地域该计费项实时可新增数量的分级预估。取值复用 BcpConstants 库存状态常量：</p><ul><li>EnoughStock：余量充足</li><li>NormalStock：余量正常</li><li>UnderStock：余量紧张</li><li>WithoutStock：无库存</li></ul><p>该值为底层提供的预估值，不代表保证可发货量，仅用于展示库存概况。当请求 Region 与资源池地域不一致、cold-start 缓存未 ready、或该计费项在快照中缺失时返回 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusCategory <p>库存情况，对当前地域该计费项实时可新增数量的分级预估。取值复用 BcpConstants 库存状态常量：</p><ul><li>EnoughStock：余量充足</li><li>NormalStock：余量正常</li><li>UnderStock：余量紧张</li><li>WithoutStock：无库存</li></ul><p>该值为底层提供的预估值，不代表保证可发货量，仅用于展示库存概况。当请求 Region 与资源池地域不一致、cold-start 缓存未 ready、或该计费项在快照中缺失时返回 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusCategory() const;

                    /**
                     * 设置<p>库存情况，对当前地域该计费项实时可新增数量的分级预估。取值复用 BcpConstants 库存状态常量：</p><ul><li>EnoughStock：余量充足</li><li>NormalStock：余量正常</li><li>UnderStock：余量紧张</li><li>WithoutStock：无库存</li></ul><p>该值为底层提供的预估值，不代表保证可发货量，仅用于展示库存概况。当请求 Region 与资源池地域不一致、cold-start 缓存未 ready、或该计费项在快照中缺失时返回 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusCategory <p>库存情况，对当前地域该计费项实时可新增数量的分级预估。取值复用 BcpConstants 库存状态常量：</p><ul><li>EnoughStock：余量充足</li><li>NormalStock：余量正常</li><li>UnderStock：余量紧张</li><li>WithoutStock：无库存</li></ul><p>该值为底层提供的预估值，不代表保证可发货量，仅用于展示库存概况。当请求 Region 与资源池地域不一致、cold-start 缓存未 ready、或该计费项在快照中缺失时返回 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusCategory(const std::string& _statusCategory);

                    /**
                     * 判断参数 StatusCategory 是否已赋值
                     * @return StatusCategory 是否已赋值
                     * 
                     */
                    bool StatusCategoryHasBeenSet() const;

                private:

                    /**
                     * <p>可售卖资源规格</p>
                     */
                    ResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * <p>规格步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * <p>最大资源数量，仅GU有值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxSpec;
                    bool m_maxSpecHasBeenSet;

                    /**
                     * <p>库存情况，对当前地域该计费项实时可新增数量的分级预估。取值复用 BcpConstants 库存状态常量：</p><ul><li>EnoughStock：余量充足</li><li>NormalStock：余量正常</li><li>UnderStock：余量紧张</li><li>WithoutStock：无库存</li></ul><p>该值为底层提供的预估值，不代表保证可发货量，仅用于展示库存概况。当请求 Region 与资源池地域不一致、cold-start 缓存未 ready、或该计费项在快照中缺失时返回 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusCategory;
                    bool m_statusCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCESALEINFO_H_
