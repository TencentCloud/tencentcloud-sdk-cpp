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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyRefComplianceInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm分类分级数据项列表项
                */
                class DspmIdentifyRuleItem : public AbstractModel
                {
                public:
                    DspmIdentifyRuleItem();
                    ~DspmIdentifyRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据项id</p>
                     * @return Id <p>数据项id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>数据项id</p>
                     * @param _id <p>数据项id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>数据项名称</p>
                     * @return Name <p>数据项名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据项名称</p>
                     * @param _name <p>数据项名称</p>
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
                     * 获取<p>数据项描述</p>
                     * @return Description <p>数据项描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>数据项描述</p>
                     * @param _description <p>数据项描述</p>
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
                     * 获取<p>数据项是否启用</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * @return Status <p>数据项是否启用</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>数据项是否启用</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * @param _status <p>数据项是否启用</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
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
                     * 获取<p>数据项类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * @return Type <p>数据项类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>数据项类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * @param _type <p>数据项类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

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
                     * 获取<p>结构化规则配置状态</p>
                     * @return StructuredStatus <p>结构化规则配置状态</p>
                     * 
                     */
                    bool GetStructuredStatus() const;

                    /**
                     * 设置<p>结构化规则配置状态</p>
                     * @param _structuredStatus <p>结构化规则配置状态</p>
                     * 
                     */
                    void SetStructuredStatus(const bool& _structuredStatus);

                    /**
                     * 判断参数 StructuredStatus 是否已赋值
                     * @return StructuredStatus 是否已赋值
                     * 
                     */
                    bool StructuredStatusHasBeenSet() const;

                    /**
                     * 获取<p>非结构化规则配置状态</p>
                     * @return UnStructuredStatus <p>非结构化规则配置状态</p>
                     * 
                     */
                    bool GetUnStructuredStatus() const;

                    /**
                     * 设置<p>非结构化规则配置状态</p>
                     * @param _unStructuredStatus <p>非结构化规则配置状态</p>
                     * 
                     */
                    void SetUnStructuredStatus(const bool& _unStructuredStatus);

                    /**
                     * 判断参数 UnStructuredStatus 是否已赋值
                     * @return UnStructuredStatus 是否已赋值
                     * 
                     */
                    bool UnStructuredStatusHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return ComplianceRelations <p>无</p>
                     * 
                     */
                    std::vector<DspmIdentifyRefComplianceInfo> GetComplianceRelations() const;

                    /**
                     * 设置<p>无</p>
                     * @param _complianceRelations <p>无</p>
                     * 
                     */
                    void SetComplianceRelations(const std::vector<DspmIdentifyRefComplianceInfo>& _complianceRelations);

                    /**
                     * 判断参数 ComplianceRelations 是否已赋值
                     * @return ComplianceRelations 是否已赋值
                     * 
                     */
                    bool ComplianceRelationsHasBeenSet() const;

                private:

                    /**
                     * <p>数据项id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>数据项名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数据项描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>数据项是否启用</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据项类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>结构化规则配置状态</p>
                     */
                    bool m_structuredStatus;
                    bool m_structuredStatusHasBeenSet;

                    /**
                     * <p>非结构化规则配置状态</p>
                     */
                    bool m_unStructuredStatus;
                    bool m_unStructuredStatusHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::vector<DspmIdentifyRefComplianceInfo> m_complianceRelations;
                    bool m_complianceRelationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYRULEITEM_H_
