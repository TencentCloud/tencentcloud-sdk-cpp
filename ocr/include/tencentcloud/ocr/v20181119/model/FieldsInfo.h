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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_FIELDSINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_FIELDSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/CoordList.h>
#include <tencentcloud/ocr/v20181119/model/SubItemGroup.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 用于展示抽取出的信息
                */
                class FieldsInfo : public AbstractModel
                {
                public:
                    FieldsInfo();
                    ~FieldsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户自定义的提取字段名。</p>
                     * @return KeyName <p>用户自定义的提取字段名。</p>
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置<p>用户自定义的提取字段名。</p>
                     * @param _keyName <p>用户自定义的提取字段名。</p>
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义的提取字段名的提示词。</p>
                     * @return KeyPrompt <p>用户自定义的提取字段名的提示词。</p>
                     * 
                     */
                    std::string GetKeyPrompt() const;

                    /**
                     * 设置<p>用户自定义的提取字段名的提示词。</p>
                     * @param _keyPrompt <p>用户自定义的提取字段名的提示词。</p>
                     * 
                     */
                    void SetKeyPrompt(const std::string& _keyPrompt);

                    /**
                     * 判断参数 KeyPrompt 是否已赋值
                     * @return KeyPrompt 是否已赋值
                     * 
                     */
                    bool KeyPromptHasBeenSet() const;

                    /**
                     * 获取<p>出参字段对应的值。</p><p>注意：此字段可能返回 null，表示取不到有效值。</p>
                     * @return KeyValue <p>出参字段对应的值。</p><p>注意：此字段可能返回 null，表示取不到有效值。</p>
                     * 
                     */
                    std::string GetKeyValue() const;

                    /**
                     * 设置<p>出参字段对应的值。</p><p>注意：此字段可能返回 null，表示取不到有效值。</p>
                     * @param _keyValue <p>出参字段对应的值。</p><p>注意：此字段可能返回 null，表示取不到有效值。</p>
                     * 
                     */
                    void SetKeyValue(const std::string& _keyValue);

                    /**
                     * 判断参数 KeyValue 是否已赋值
                     * @return KeyValue 是否已赋值
                     * 
                     */
                    bool KeyValueHasBeenSet() const;

                    /**
                     * 获取<p>出参类型。</p><p>注：与入参对应同个值。</p>
                     * @return KeyType <p>出参类型。</p><p>注：与入参对应同个值。</p>
                     * 
                     */
                    int64_t GetKeyType() const;

                    /**
                     * 设置<p>出参类型。</p><p>注：与入参对应同个值。</p>
                     * @param _keyType <p>出参类型。</p><p>注：与入参对应同个值。</p>
                     * 
                     */
                    void SetKeyType(const int64_t& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取<p>文本行坐标，以四个顶点坐标表示。</p><p>注：仅当入参EnableCoord不为null时生效，默认是false。</p>
                     * @return Polygon <p>文本行坐标，以四个顶点坐标表示。</p><p>注：仅当入参EnableCoord不为null时生效，默认是false。</p>
                     * 
                     */
                    CoordList GetPolygon() const;

                    /**
                     * 设置<p>文本行坐标，以四个顶点坐标表示。</p><p>注：仅当入参EnableCoord不为null时生效，默认是false。</p>
                     * @param _polygon <p>文本行坐标，以四个顶点坐标表示。</p><p>注：仅当入参EnableCoord不为null时生效，默认是false。</p>
                     * 
                     */
                    void SetPolygon(const CoordList& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取<p>嵌套FieldsInfo结构，仅当KeyType=1时有效。</p>
                     * @return SubItems <p>嵌套FieldsInfo结构，仅当KeyType=1时有效。</p>
                     * 
                     */
                    std::vector<SubItemGroup> GetSubItems() const;

                    /**
                     * 设置<p>嵌套FieldsInfo结构，仅当KeyType=1时有效。</p>
                     * @param _subItems <p>嵌套FieldsInfo结构，仅当KeyType=1时有效。</p>
                     * 
                     */
                    void SetSubItems(const std::vector<SubItemGroup>& _subItems);

                    /**
                     * 判断参数 SubItems 是否已赋值
                     * @return SubItems 是否已赋值
                     * 
                     */
                    bool SubItemsHasBeenSet() const;

                private:

                    /**
                     * <p>用户自定义的提取字段名。</p>
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * <p>用户自定义的提取字段名的提示词。</p>
                     */
                    std::string m_keyPrompt;
                    bool m_keyPromptHasBeenSet;

                    /**
                     * <p>出参字段对应的值。</p><p>注意：此字段可能返回 null，表示取不到有效值。</p>
                     */
                    std::string m_keyValue;
                    bool m_keyValueHasBeenSet;

                    /**
                     * <p>出参类型。</p><p>注：与入参对应同个值。</p>
                     */
                    int64_t m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * <p>文本行坐标，以四个顶点坐标表示。</p><p>注：仅当入参EnableCoord不为null时生效，默认是false。</p>
                     */
                    CoordList m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * <p>嵌套FieldsInfo结构，仅当KeyType=1时有效。</p>
                     */
                    std::vector<SubItemGroup> m_subItems;
                    bool m_subItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_FIELDSINFO_H_
