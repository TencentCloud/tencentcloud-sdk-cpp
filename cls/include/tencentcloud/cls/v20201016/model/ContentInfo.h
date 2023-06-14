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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONTENTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONTENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/CsvInfo.h>
#include <tencentcloud/cls/v20201016/model/JsonInfo.h>
#include <tencentcloud/cls/v20201016/model/ParquetInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 投递日志的内容格式配置
                */
                class ContentInfo : public AbstractModel
                {
                public:
                    ContentInfo();
                    ~ContentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容格式，支持json、csv
                     * @return Format 内容格式，支持json、csv
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置内容格式，支持json、csv
                     * @param _format 内容格式，支持json、csv
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取csv格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Csv csv格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CsvInfo GetCsv() const;

                    /**
                     * 设置csv格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _csv csv格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCsv(const CsvInfo& _csv);

                    /**
                     * 判断参数 Csv 是否已赋值
                     * @return Csv 是否已赋值
                     * 
                     */
                    bool CsvHasBeenSet() const;

                    /**
                     * 获取json格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Json json格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JsonInfo GetJson() const;

                    /**
                     * 设置json格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _json json格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJson(const JsonInfo& _json);

                    /**
                     * 判断参数 Json 是否已赋值
                     * @return Json 是否已赋值
                     * 
                     */
                    bool JsonHasBeenSet() const;

                    /**
                     * 获取parquet格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Parquet parquet格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ParquetInfo GetParquet() const;

                    /**
                     * 设置parquet格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parquet parquet格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParquet(const ParquetInfo& _parquet);

                    /**
                     * 判断参数 Parquet 是否已赋值
                     * @return Parquet 是否已赋值
                     * 
                     */
                    bool ParquetHasBeenSet() const;

                private:

                    /**
                     * 内容格式，支持json、csv
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * csv格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CsvInfo m_csv;
                    bool m_csvHasBeenSet;

                    /**
                     * json格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JsonInfo m_json;
                    bool m_jsonHasBeenSet;

                    /**
                     * parquet格式内容描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ParquetInfo m_parquet;
                    bool m_parquetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONTENTINFO_H_
