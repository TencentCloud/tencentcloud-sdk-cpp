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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETEMPLATEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseSubtitleConfig.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseWatermarkConfig.h>
#include <tencentcloud/mps/v20190612/model/SmartErasePrivacyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能擦除模板详情
                */
                class SmartEraseTemplateItem : public AbstractModel
                {
                public:
                    SmartEraseTemplateItem();
                    ~SmartEraseTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能擦除模板唯一标识
                     * @return Definition 智能擦除模板唯一标识
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置智能擦除模板唯一标识
                     * @param _definition 智能擦除模板唯一标识
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
                     * 获取智能擦除模板名称
                     * @return Name 智能擦除模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置智能擦除模板名称
                     * @param _name 智能擦除模板名称
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
                     * 获取智能擦除模板描述信息
                     * @return Comment 智能擦除模板描述信息
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置智能擦除模板描述信息
                     * @param _comment 智能擦除模板描述信息
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
                     * 获取模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
                     * @return Type 模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
                     * @param _type 模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
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
                     * 获取擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * @return EraseType 擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * 
                     */
                    std::string GetEraseType() const;

                    /**
                     * 设置擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * @param _eraseType 擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * 
                     */
                    void SetEraseType(const std::string& _eraseType);

                    /**
                     * 判断参数 EraseType 是否已赋值
                     * @return EraseType 是否已赋值
                     * 
                     */
                    bool EraseTypeHasBeenSet() const;

                    /**
                     * 获取字幕擦除配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EraseSubtitleConfig 字幕擦除配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置字幕擦除配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eraseSubtitleConfig 字幕擦除配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEraseSubtitleConfig(const SmartEraseSubtitleConfig& _eraseSubtitleConfig);

                    /**
                     * 判断参数 EraseSubtitleConfig 是否已赋值
                     * @return EraseSubtitleConfig 是否已赋值
                     * 
                     */
                    bool EraseSubtitleConfigHasBeenSet() const;

                    /**
                     * 获取水印擦除配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EraseWatermarkConfig 水印擦除配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置水印擦除配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eraseWatermarkConfig 水印擦除配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEraseWatermarkConfig(const SmartEraseWatermarkConfig& _eraseWatermarkConfig);

                    /**
                     * 判断参数 EraseWatermarkConfig 是否已赋值
                     * @return EraseWatermarkConfig 是否已赋值
                     * 
                     */
                    bool EraseWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取隐私保护配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErasePrivacyConfig 隐私保护配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置隐私保护配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _erasePrivacyConfig 隐私保护配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErasePrivacyConfig(const SmartErasePrivacyConfig& _erasePrivacyConfig);

                    /**
                     * 判断参数 ErasePrivacyConfig 是否已赋值
                     * @return ErasePrivacyConfig 是否已赋值
                     * 
                     */
                    bool ErasePrivacyConfigHasBeenSet() const;

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
                     * 获取智能擦除预设模板别名
                     * @return AliasName 智能擦除预设模板别名
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置智能擦除预设模板别名
                     * @param _aliasName 智能擦除预设模板别名
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                private:

                    /**
                     * 智能擦除模板唯一标识
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 智能擦除模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 智能擦除模板描述信息
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * 字幕擦除配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * 水印擦除配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * 隐私保护配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

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
                     * 智能擦除预设模板别名
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETEMPLATEITEM_H_
