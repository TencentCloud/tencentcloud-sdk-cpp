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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TemplateGroup.h>
#include <tencentcloud/cfg/v20210820/model/TemplateMonitor.h>
#include <tencentcloud/cfg/v20210820/model/TemplatePolicy.h>
#include <tencentcloud/cfg/v20210820/model/TagWithDescribe.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 经验库
                */
                class Template : public AbstractModel
                {
                public:
                    Template();
                    ~Template() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取经验库ID
                     * @return TemplateId 经验库ID
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置经验库ID
                     * @param TemplateId 经验库ID
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取经验库标题
                     * @return TemplateTitle 经验库标题
                     */
                    std::string GetTemplateTitle() const;

                    /**
                     * 设置经验库标题
                     * @param TemplateTitle 经验库标题
                     */
                    void SetTemplateTitle(const std::string& _templateTitle);

                    /**
                     * 判断参数 TemplateTitle 是否已赋值
                     * @return TemplateTitle 是否已赋值
                     */
                    bool TemplateTitleHasBeenSet() const;

                    /**
                     * 获取经验库描述
                     * @return TemplateDescription 经验库描述
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 设置经验库描述
                     * @param TemplateDescription 经验库描述
                     */
                    void SetTemplateDescription(const std::string& _templateDescription);

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateTag 自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTemplateTag() const;

                    /**
                     * 设置自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TemplateTag 自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTemplateTag(const std::string& _templateTag);

                    /**
                     * 判断参数 TemplateTag 是否已赋值
                     * @return TemplateTag 是否已赋值
                     */
                    bool TemplateTagHasBeenSet() const;

                    /**
                     * 获取使用状态。1 ---- 使用中，2 --- 停用
                     * @return TemplateIsUsed 使用状态。1 ---- 使用中，2 --- 停用
                     */
                    int64_t GetTemplateIsUsed() const;

                    /**
                     * 设置使用状态。1 ---- 使用中，2 --- 停用
                     * @param TemplateIsUsed 使用状态。1 ---- 使用中，2 --- 停用
                     */
                    void SetTemplateIsUsed(const int64_t& _templateIsUsed);

                    /**
                     * 判断参数 TemplateIsUsed 是否已赋值
                     * @return TemplateIsUsed 是否已赋值
                     */
                    bool TemplateIsUsedHasBeenSet() const;

                    /**
                     * 获取经验库创建时间
                     * @return TemplateCreateTime 经验库创建时间
                     */
                    std::string GetTemplateCreateTime() const;

                    /**
                     * 设置经验库创建时间
                     * @param TemplateCreateTime 经验库创建时间
                     */
                    void SetTemplateCreateTime(const std::string& _templateCreateTime);

                    /**
                     * 判断参数 TemplateCreateTime 是否已赋值
                     * @return TemplateCreateTime 是否已赋值
                     */
                    bool TemplateCreateTimeHasBeenSet() const;

                    /**
                     * 获取经验库更新时间
                     * @return TemplateUpdateTime 经验库更新时间
                     */
                    std::string GetTemplateUpdateTime() const;

                    /**
                     * 设置经验库更新时间
                     * @param TemplateUpdateTime 经验库更新时间
                     */
                    void SetTemplateUpdateTime(const std::string& _templateUpdateTime);

                    /**
                     * 判断参数 TemplateUpdateTime 是否已赋值
                     * @return TemplateUpdateTime 是否已赋值
                     */
                    bool TemplateUpdateTimeHasBeenSet() const;

                    /**
                     * 获取经验库模式。1:手工执行，2:自动执行
                     * @return TemplateMode 经验库模式。1:手工执行，2:自动执行
                     */
                    int64_t GetTemplateMode() const;

                    /**
                     * 设置经验库模式。1:手工执行，2:自动执行
                     * @param TemplateMode 经验库模式。1:手工执行，2:自动执行
                     */
                    void SetTemplateMode(const int64_t& _templateMode);

                    /**
                     * 判断参数 TemplateMode 是否已赋值
                     * @return TemplateMode 是否已赋值
                     */
                    bool TemplateModeHasBeenSet() const;

                    /**
                     * 获取自动暂停时长。单位分钟
                     * @return TemplatePauseDuration 自动暂停时长。单位分钟
                     */
                    int64_t GetTemplatePauseDuration() const;

                    /**
                     * 设置自动暂停时长。单位分钟
                     * @param TemplatePauseDuration 自动暂停时长。单位分钟
                     */
                    void SetTemplatePauseDuration(const int64_t& _templatePauseDuration);

                    /**
                     * 判断参数 TemplatePauseDuration 是否已赋值
                     * @return TemplatePauseDuration 是否已赋值
                     */
                    bool TemplatePauseDurationHasBeenSet() const;

                    /**
                     * 获取演练创建者Uin
                     * @return TemplateOwnerUin 演练创建者Uin
                     */
                    std::string GetTemplateOwnerUin() const;

                    /**
                     * 设置演练创建者Uin
                     * @param TemplateOwnerUin 演练创建者Uin
                     */
                    void SetTemplateOwnerUin(const std::string& _templateOwnerUin);

                    /**
                     * 判断参数 TemplateOwnerUin 是否已赋值
                     * @return TemplateOwnerUin 是否已赋值
                     */
                    bool TemplateOwnerUinHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return TemplateRegionId 地域ID
                     */
                    int64_t GetTemplateRegionId() const;

                    /**
                     * 设置地域ID
                     * @param TemplateRegionId 地域ID
                     */
                    void SetTemplateRegionId(const int64_t& _templateRegionId);

                    /**
                     * 判断参数 TemplateRegionId 是否已赋值
                     * @return TemplateRegionId 是否已赋值
                     */
                    bool TemplateRegionIdHasBeenSet() const;

                    /**
                     * 获取动作组
                     * @return TemplateGroups 动作组
                     */
                    std::vector<TemplateGroup> GetTemplateGroups() const;

                    /**
                     * 设置动作组
                     * @param TemplateGroups 动作组
                     */
                    void SetTemplateGroups(const std::vector<TemplateGroup>& _templateGroups);

                    /**
                     * 判断参数 TemplateGroups 是否已赋值
                     * @return TemplateGroups 是否已赋值
                     */
                    bool TemplateGroupsHasBeenSet() const;

                    /**
                     * 获取监控指标
                     * @return TemplateMonitors 监控指标
                     */
                    std::vector<TemplateMonitor> GetTemplateMonitors() const;

                    /**
                     * 设置监控指标
                     * @param TemplateMonitors 监控指标
                     */
                    void SetTemplateMonitors(const std::vector<TemplateMonitor>& _templateMonitors);

                    /**
                     * 判断参数 TemplateMonitors 是否已赋值
                     * @return TemplateMonitors 是否已赋值
                     */
                    bool TemplateMonitorsHasBeenSet() const;

                    /**
                     * 获取护栏监控
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplatePolicy 护栏监控
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TemplatePolicy GetTemplatePolicy() const;

                    /**
                     * 设置护栏监控
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TemplatePolicy 护栏监控
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTemplatePolicy(const TemplatePolicy& _templatePolicy);

                    /**
                     * 判断参数 TemplatePolicy 是否已赋值
                     * @return TemplatePolicy 是否已赋值
                     */
                    bool TemplatePolicyHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagWithDescribe> GetTags() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<TagWithDescribe>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 经验库ID
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 经验库标题
                     */
                    std::string m_templateTitle;
                    bool m_templateTitleHasBeenSet;

                    /**
                     * 经验库描述
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * 自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateTag;
                    bool m_templateTagHasBeenSet;

                    /**
                     * 使用状态。1 ---- 使用中，2 --- 停用
                     */
                    int64_t m_templateIsUsed;
                    bool m_templateIsUsedHasBeenSet;

                    /**
                     * 经验库创建时间
                     */
                    std::string m_templateCreateTime;
                    bool m_templateCreateTimeHasBeenSet;

                    /**
                     * 经验库更新时间
                     */
                    std::string m_templateUpdateTime;
                    bool m_templateUpdateTimeHasBeenSet;

                    /**
                     * 经验库模式。1:手工执行，2:自动执行
                     */
                    int64_t m_templateMode;
                    bool m_templateModeHasBeenSet;

                    /**
                     * 自动暂停时长。单位分钟
                     */
                    int64_t m_templatePauseDuration;
                    bool m_templatePauseDurationHasBeenSet;

                    /**
                     * 演练创建者Uin
                     */
                    std::string m_templateOwnerUin;
                    bool m_templateOwnerUinHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_templateRegionId;
                    bool m_templateRegionIdHasBeenSet;

                    /**
                     * 动作组
                     */
                    std::vector<TemplateGroup> m_templateGroups;
                    bool m_templateGroupsHasBeenSet;

                    /**
                     * 监控指标
                     */
                    std::vector<TemplateMonitor> m_templateMonitors;
                    bool m_templateMonitorsHasBeenSet;

                    /**
                     * 护栏监控
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TemplatePolicy m_templatePolicy;
                    bool m_templatePolicyHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagWithDescribe> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATE_H_
