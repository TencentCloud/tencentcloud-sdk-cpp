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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_EXTRACTIONFIELDRESULT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_EXTRACTIONFIELDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/PositionInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同信息提取字段值信息。
                */
                class ExtractionFieldResult : public AbstractModel
                {
                public:
                    ExtractionFieldResult();
                    ~ExtractionFieldResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段ID
                     * @return Id 字段ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置字段ID
                     * @param _id 字段ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用于合同智能提取的字段名称。
                     * @return Name 用于合同智能提取的字段名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用于合同智能提取的字段名称。
                     * @param _name 用于合同智能提取的字段名称。
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
                     * 获取合同智能提取的字段类型，目前仅支持TEXT、DATE、NUMBER、OPTION类型。

类型支持如下： 1、TEXT（文本） 2、DATE（日期） 3、NUMBER（数字） 4、OPTION（选项值）
                     * @return Type 合同智能提取的字段类型，目前仅支持TEXT、DATE、NUMBER、OPTION类型。

类型支持如下： 1、TEXT（文本） 2、DATE（日期） 3、NUMBER（数字） 4、OPTION（选项值）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置合同智能提取的字段类型，目前仅支持TEXT、DATE、NUMBER、OPTION类型。

类型支持如下： 1、TEXT（文本） 2、DATE（日期） 3、NUMBER（数字） 4、OPTION（选项值）
                     * @param _type 合同智能提取的字段类型，目前仅支持TEXT、DATE、NUMBER、OPTION类型。

类型支持如下： 1、TEXT（文本） 2、DATE（日期） 3、NUMBER（数字） 4、OPTION（选项值）
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
                     * 获取提取出合同中的字段信息。
                     * @return Values 提取出合同中的字段信息。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置提取出合同中的字段信息。
                     * @param _values 提取出合同中的字段信息。
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取是否需要语义提取，默认为false
                     * @return RequiresSemanticExtraction 是否需要语义提取，默认为false
                     * 
                     */
                    bool GetRequiresSemanticExtraction() const;

                    /**
                     * 设置是否需要语义提取，默认为false
                     * @param _requiresSemanticExtraction 是否需要语义提取，默认为false
                     * 
                     */
                    void SetRequiresSemanticExtraction(const bool& _requiresSemanticExtraction);

                    /**
                     * 判断参数 RequiresSemanticExtraction 是否已赋值
                     * @return RequiresSemanticExtraction 是否已赋值
                     * 
                     */
                    bool RequiresSemanticExtractionHasBeenSet() const;

                    /**
                     * 获取提取出值在合同中的坐标位置信息
                     * @return Positions 提取出值在合同中的坐标位置信息
                     * 
                     */
                    std::vector<PositionInfo> GetPositions() const;

                    /**
                     * 设置提取出值在合同中的坐标位置信息
                     * @param _positions 提取出值在合同中的坐标位置信息
                     * 
                     */
                    void SetPositions(const std::vector<PositionInfo>& _positions);

                    /**
                     * 判断参数 Positions 是否已赋值
                     * @return Positions 是否已赋值
                     * 
                     */
                    bool PositionsHasBeenSet() const;

                private:

                    /**
                     * 字段ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用于合同智能提取的字段名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 合同智能提取的字段类型，目前仅支持TEXT、DATE、NUMBER、OPTION类型。

类型支持如下： 1、TEXT（文本） 2、DATE（日期） 3、NUMBER（数字） 4、OPTION（选项值）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 提取出合同中的字段信息。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否需要语义提取，默认为false
                     */
                    bool m_requiresSemanticExtraction;
                    bool m_requiresSemanticExtractionHasBeenSet;

                    /**
                     * 提取出值在合同中的坐标位置信息
                     */
                    std::vector<PositionInfo> m_positions;
                    bool m_positionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EXTRACTIONFIELDRESULT_H_
