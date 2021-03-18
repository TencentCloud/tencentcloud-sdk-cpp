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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CSV_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CSV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CSVSerde.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CSV类型数据格式
                */
                class CSV : public AbstractModel
                {
                public:
                    CSV();
                    ~CSV() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取压缩格式，["Snappy", "Gzip", "None"选一]。
                     * @return CodeCompress 压缩格式，["Snappy", "Gzip", "None"选一]。
                     */
                    std::string GetCodeCompress() const;

                    /**
                     * 设置压缩格式，["Snappy", "Gzip", "None"选一]。
                     * @param CodeCompress 压缩格式，["Snappy", "Gzip", "None"选一]。
                     */
                    void SetCodeCompress(const std::string& _codeCompress);

                    /**
                     * 判断参数 CodeCompress 是否已赋值
                     * @return CodeCompress 是否已赋值
                     */
                    bool CodeCompressHasBeenSet() const;

                    /**
                     * 获取CSV序列化及反序列化数据结构。
                     * @return CSVSerde CSV序列化及反序列化数据结构。
                     */
                    CSVSerde GetCSVSerde() const;

                    /**
                     * 设置CSV序列化及反序列化数据结构。
                     * @param CSVSerde CSV序列化及反序列化数据结构。
                     */
                    void SetCSVSerde(const CSVSerde& _cSVSerde);

                    /**
                     * 判断参数 CSVSerde 是否已赋值
                     * @return CSVSerde 是否已赋值
                     */
                    bool CSVSerdeHasBeenSet() const;

                    /**
                     * 获取标题行，默认为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadLines 标题行，默认为0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetHeadLines() const;

                    /**
                     * 设置标题行，默认为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HeadLines 标题行，默认为0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHeadLines(const int64_t& _headLines);

                    /**
                     * 判断参数 HeadLines 是否已赋值
                     * @return HeadLines 是否已赋值
                     */
                    bool HeadLinesHasBeenSet() const;

                    /**
                     * 获取格式，默认值为CSV
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Format 格式，默认值为CSV
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置格式，默认值为CSV
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Format 格式，默认值为CSV
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * 压缩格式，["Snappy", "Gzip", "None"选一]。
                     */
                    std::string m_codeCompress;
                    bool m_codeCompressHasBeenSet;

                    /**
                     * CSV序列化及反序列化数据结构。
                     */
                    CSVSerde m_cSVSerde;
                    bool m_cSVSerdeHasBeenSet;

                    /**
                     * 标题行，默认为0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_headLines;
                    bool m_headLinesHasBeenSet;

                    /**
                     * 格式，默认值为CSV
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CSV_H_
