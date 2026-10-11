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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COLUMNINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COLUMNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/DataMaskStrategyInfo.h>
#include <tencentcloud/databuddy/v20260715/model/CommonTagInfo.h>
#include <tencentcloud/databuddy/v20260715/model/DictDimensionInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 字段信息
                */
                class ColumnInfo : public AbstractModel
                {
                public:
                    ColumnInfo();
                    ~ColumnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称
                     * @return Name 字段名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名称
                     * @param _name 字段名称
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
                     * 获取字段类型
                     * @return Type 字段类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置字段类型
                     * @param _type 字段类型
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
                     * 获取字段描述
                     * @return Comment 字段描述
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置字段描述
                     * @param _comment 字段描述
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
                     * 获取字段设置
                     * @return FieldSetting 字段设置
                     * 
                     */
                    std::string GetFieldSetting() const;

                    /**
                     * 设置字段设置
                     * @param _fieldSetting 字段设置
                     * 
                     */
                    void SetFieldSetting(const std::string& _fieldSetting);

                    /**
                     * 判断参数 FieldSetting 是否已赋值
                     * @return FieldSetting 是否已赋值
                     * 
                     */
                    bool FieldSettingHasBeenSet() const;

                    /**
                     * 获取是否为主键
                     * @return IsPrimaryKey 是否为主键
                     * 
                     */
                    bool GetIsPrimaryKey() const;

                    /**
                     * 设置是否为主键
                     * @param _isPrimaryKey 是否为主键
                     * 
                     */
                    void SetIsPrimaryKey(const bool& _isPrimaryKey);

                    /**
                     * 判断参数 IsPrimaryKey 是否已赋值
                     * @return IsPrimaryKey 是否已赋值
                     * 
                     */
                    bool IsPrimaryKeyHasBeenSet() const;

                    /**
                     * 获取字段策略
                     * @return DataMaskStrategyInfo 字段策略
                     * 
                     */
                    DataMaskStrategyInfo GetDataMaskStrategyInfo() const;

                    /**
                     * 设置字段策略
                     * @param _dataMaskStrategyInfo 字段策略
                     * 
                     */
                    void SetDataMaskStrategyInfo(const DataMaskStrategyInfo& _dataMaskStrategyInfo);

                    /**
                     * 判断参数 DataMaskStrategyInfo 是否已赋值
                     * @return DataMaskStrategyInfo 是否已赋值
                     * 
                     */
                    bool DataMaskStrategyInfoHasBeenSet() const;

                    /**
                     * 获取字段级标签列表，仅当请求中FetchOption.FetchTags=true时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 字段级标签列表，仅当请求中FetchOption.FetchTags=true时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonTagInfo> GetTags() const;

                    /**
                     * 设置字段级标签列表，仅当请求中FetchOption.FetchTags=true时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 字段级标签列表，仅当请求中FetchOption.FetchTags=true时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<CommonTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取字段关联的字典维度信息，仅当请求中FetchOption.FetchDictDimensions=true时返回，默认不返回；若该字段未关联任何字典维度则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DictDimension 字段关联的字典维度信息，仅当请求中FetchOption.FetchDictDimensions=true时返回，默认不返回；若该字段未关联任何字典维度则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DictDimensionInfo GetDictDimension() const;

                    /**
                     * 设置字段关联的字典维度信息，仅当请求中FetchOption.FetchDictDimensions=true时返回，默认不返回；若该字段未关联任何字典维度则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dictDimension 字段关联的字典维度信息，仅当请求中FetchOption.FetchDictDimensions=true时返回，默认不返回；若该字段未关联任何字典维度则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDictDimension(const DictDimensionInfo& _dictDimension);

                    /**
                     * 判断参数 DictDimension 是否已赋值
                     * @return DictDimension 是否已赋值
                     * 
                     */
                    bool DictDimensionHasBeenSet() const;

                private:

                    /**
                     * 字段名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字段描述
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 字段设置
                     */
                    std::string m_fieldSetting;
                    bool m_fieldSettingHasBeenSet;

                    /**
                     * 是否为主键
                     */
                    bool m_isPrimaryKey;
                    bool m_isPrimaryKeyHasBeenSet;

                    /**
                     * 字段策略
                     */
                    DataMaskStrategyInfo m_dataMaskStrategyInfo;
                    bool m_dataMaskStrategyInfoHasBeenSet;

                    /**
                     * 字段级标签列表，仅当请求中FetchOption.FetchTags=true时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 字段关联的字典维度信息，仅当请求中FetchOption.FetchDictDimensions=true时返回，默认不返回；若该字段未关联任何字典维度则为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DictDimensionInfo m_dictDimension;
                    bool m_dictDimensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COLUMNINFO_H_
