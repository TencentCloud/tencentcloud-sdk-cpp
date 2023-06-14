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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTEMPLATEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ClassificationConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/TagConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/CoverConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/FrameTagConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI 智能分析模板详情
                */
                class AIAnalysisTemplateItem : public AbstractModel
                {
                public:
                    AIAnalysisTemplateItem();
                    ~AIAnalysisTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能分析模板唯一标识。
                     * @return Definition 智能分析模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置智能分析模板唯一标识。
                     * @param _definition 智能分析模板唯一标识。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取智能分析模板名称。
                     * @return Name 智能分析模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置智能分析模板名称。
                     * @param _name 智能分析模板名称。
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
                     * 获取智能分析模板描述信息。
                     * @return Comment 智能分析模板描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置智能分析模板描述信息。
                     * @param _comment 智能分析模板描述信息。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取智能分类任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationConfigure 智能分类任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClassificationConfigureInfo GetClassificationConfigure() const;

                    /**
                     * 设置智能分类任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classificationConfigure 智能分类任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassificationConfigure(const ClassificationConfigureInfo& _classificationConfigure);

                    /**
                     * 判断参数 ClassificationConfigure 是否已赋值
                     * @return ClassificationConfigure 是否已赋值
                     * 
                     */
                    bool ClassificationConfigureHasBeenSet() const;

                    /**
                     * 获取智能标签任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagConfigure 智能标签任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TagConfigureInfo GetTagConfigure() const;

                    /**
                     * 设置智能标签任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagConfigure 智能标签任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagConfigure(const TagConfigureInfo& _tagConfigure);

                    /**
                     * 判断参数 TagConfigure 是否已赋值
                     * @return TagConfigure 是否已赋值
                     * 
                     */
                    bool TagConfigureHasBeenSet() const;

                    /**
                     * 获取智能封面任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverConfigure 智能封面任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CoverConfigureInfo GetCoverConfigure() const;

                    /**
                     * 设置智能封面任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverConfigure 智能封面任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverConfigure(const CoverConfigureInfo& _coverConfigure);

                    /**
                     * 判断参数 CoverConfigure 是否已赋值
                     * @return CoverConfigure 是否已赋值
                     * 
                     */
                    bool CoverConfigureHasBeenSet() const;

                    /**
                     * 获取智能按帧标签任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameTagConfigure 智能按帧标签任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FrameTagConfigureInfo GetFrameTagConfigure() const;

                    /**
                     * 设置智能按帧标签任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameTagConfigure 智能按帧标签任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameTagConfigure(const FrameTagConfigureInfo& _frameTagConfigure);

                    /**
                     * 判断参数 FrameTagConfigure 是否已赋值
                     * @return FrameTagConfigure 是否已赋值
                     * 
                     */
                    bool FrameTagConfigureHasBeenSet() const;

                    /**
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _createTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
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
                     * 获取模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _updateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
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
                     * 获取模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 智能分析模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 智能分析模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 智能分析模板描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 智能分类任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClassificationConfigureInfo m_classificationConfigure;
                    bool m_classificationConfigureHasBeenSet;

                    /**
                     * 智能标签任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TagConfigureInfo m_tagConfigure;
                    bool m_tagConfigureHasBeenSet;

                    /**
                     * 智能封面任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CoverConfigureInfo m_coverConfigure;
                    bool m_coverConfigureHasBeenSet;

                    /**
                     * 智能按帧标签任务控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FrameTagConfigureInfo m_frameTagConfigure;
                    bool m_frameTagConfigureHasBeenSet;

                    /**
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTEMPLATEITEM_H_
