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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PRODUCTINGESTTASKDETAIL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PRODUCTINGESTTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ProductIngestTaskItem.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/EBPFCollectRule.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 产品接入任务详情
                */
                class ProductIngestTaskDetail : public AbstractModel
                {
                public:
                    ProductIngestTaskDetail();
                    ~ProductIngestTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>接入任务id</p>
                     * @return TaskId <p>接入任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>接入任务id</p>
                     * @param _taskId <p>接入任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>接入任务信息</p>
                     * @return ProductIngestTaskItem <p>接入任务信息</p>
                     * 
                     */
                    ProductIngestTaskItem GetProductIngestTaskItem() const;

                    /**
                     * 设置<p>接入任务信息</p>
                     * @param _productIngestTaskItem <p>接入任务信息</p>
                     * 
                     */
                    void SetProductIngestTaskItem(const ProductIngestTaskItem& _productIngestTaskItem);

                    /**
                     * 判断参数 ProductIngestTaskItem 是否已赋值
                     * @return ProductIngestTaskItem 是否已赋值
                     * 
                     */
                    bool ProductIngestTaskItemHasBeenSet() const;

                    /**
                     * 获取<p>接入实例选择方式</p><p>枚举值：</p><ul><li>0： 全部实例</li><li>1： 按标签筛选</li><li>2： 手动选择</li></ul>
                     * @return SelectionMode <p>接入实例选择方式</p><p>枚举值：</p><ul><li>0： 全部实例</li><li>1： 按标签筛选</li><li>2： 手动选择</li></ul>
                     * 
                     */
                    uint64_t GetSelectionMode() const;

                    /**
                     * 设置<p>接入实例选择方式</p><p>枚举值：</p><ul><li>0： 全部实例</li><li>1： 按标签筛选</li><li>2： 手动选择</li></ul>
                     * @param _selectionMode <p>接入实例选择方式</p><p>枚举值：</p><ul><li>0： 全部实例</li><li>1： 按标签筛选</li><li>2： 手动选择</li></ul>
                     * 
                     */
                    void SetSelectionMode(const uint64_t& _selectionMode);

                    /**
                     * 判断参数 SelectionMode 是否已赋值
                     * @return SelectionMode 是否已赋值
                     * 
                     */
                    bool SelectionModeHasBeenSet() const;

                    /**
                     * 获取<p>所选实例id列表</p>
                     * @return InstanceIds <p>所选实例id列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>所选实例id列表</p>
                     * @param _instanceIds <p>所选实例id列表</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>所选接入实例所处范围标签</p>
                     * @return Tags <p>所选接入实例所处范围标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>所选接入实例所处范围标签</p>
                     * @param _tags <p>所选接入实例所处范围标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>eBPF 采集规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EBPFCollectRule <p>eBPF 采集规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EBPFCollectRule GetEBPFCollectRule() const;

                    /**
                     * 设置<p>eBPF 采集规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eBPFCollectRule <p>eBPF 采集规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEBPFCollectRule(const EBPFCollectRule& _eBPFCollectRule);

                    /**
                     * 判断参数 EBPFCollectRule 是否已赋值
                     * @return EBPFCollectRule 是否已赋值
                     * 
                     */
                    bool EBPFCollectRuleHasBeenSet() const;

                private:

                    /**
                     * <p>接入任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>接入任务信息</p>
                     */
                    ProductIngestTaskItem m_productIngestTaskItem;
                    bool m_productIngestTaskItemHasBeenSet;

                    /**
                     * <p>接入实例选择方式</p><p>枚举值：</p><ul><li>0： 全部实例</li><li>1： 按标签筛选</li><li>2： 手动选择</li></ul>
                     */
                    uint64_t m_selectionMode;
                    bool m_selectionModeHasBeenSet;

                    /**
                     * <p>所选实例id列表</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>所选接入实例所处范围标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>eBPF 采集规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EBPFCollectRule m_eBPFCollectRule;
                    bool m_eBPFCollectRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PRODUCTINGESTTASKDETAIL_H_
