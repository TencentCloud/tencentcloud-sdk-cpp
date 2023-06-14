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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlarmAnalysisConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 多维分析的分析维度
                */
                class AnalysisDimensional : public AbstractModel
                {
                public:
                    AnalysisDimensional();
                    ~AnalysisDimensional() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分析名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 分析名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分析名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 分析名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取分析类型：query，field ，original
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 分析类型：query，field ，original
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置分析类型：query，field ，original
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 分析类型：query，field ，original
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

                    /**
                     * 获取分析内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 分析内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置分析内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 分析内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigInfo 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmAnalysisConfig> GetConfigInfo() const;

                    /**
                     * 设置配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configInfo 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigInfo(const std::vector<AlarmAnalysisConfig>& _configInfo);

                    /**
                     * 判断参数 ConfigInfo 是否已赋值
                     * @return ConfigInfo 是否已赋值
                     * 
                     */
                    bool ConfigInfoHasBeenSet() const;

                private:

                    /**
                     * 分析名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分析类型：query，field ，original
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分析内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmAnalysisConfig> m_configInfo;
                    bool m_configInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_
