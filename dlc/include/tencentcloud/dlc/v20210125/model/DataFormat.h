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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAFORMAT_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAFORMAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TextFile.h>
#include <tencentcloud/dlc/v20210125/model/CSV.h>
#include <tencentcloud/dlc/v20210125/model/Other.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据表数据格式。
                */
                class DataFormat : public AbstractModel
                {
                public:
                    DataFormat();
                    ~DataFormat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本格式，TextFile。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextFile 文本格式，TextFile。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextFile GetTextFile() const;

                    /**
                     * 设置文本格式，TextFile。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textFile 文本格式，TextFile。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextFile(const TextFile& _textFile);

                    /**
                     * 判断参数 TextFile 是否已赋值
                     * @return TextFile 是否已赋值
                     * 
                     */
                    bool TextFileHasBeenSet() const;

                    /**
                     * 获取文本格式，CSV。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CSV 文本格式，CSV。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CSV GetCSV() const;

                    /**
                     * 设置文本格式，CSV。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cSV 文本格式，CSV。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCSV(const CSV& _cSV);

                    /**
                     * 判断参数 CSV 是否已赋值
                     * @return CSV 是否已赋值
                     * 
                     */
                    bool CSVHasBeenSet() const;

                    /**
                     * 获取文本格式，Json。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Json 文本格式，Json。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Other GetJson() const;

                    /**
                     * 设置文本格式，Json。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _json 文本格式，Json。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJson(const Other& _json);

                    /**
                     * 判断参数 Json 是否已赋值
                     * @return Json 是否已赋值
                     * 
                     */
                    bool JsonHasBeenSet() const;

                    /**
                     * 获取Parquet格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Parquet Parquet格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Other GetParquet() const;

                    /**
                     * 设置Parquet格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parquet Parquet格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParquet(const Other& _parquet);

                    /**
                     * 判断参数 Parquet 是否已赋值
                     * @return Parquet 是否已赋值
                     * 
                     */
                    bool ParquetHasBeenSet() const;

                    /**
                     * 获取ORC格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ORC ORC格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Other GetORC() const;

                    /**
                     * 设置ORC格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oRC ORC格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetORC(const Other& _oRC);

                    /**
                     * 判断参数 ORC 是否已赋值
                     * @return ORC 是否已赋值
                     * 
                     */
                    bool ORCHasBeenSet() const;

                    /**
                     * 获取AVRO格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AVRO AVRO格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Other GetAVRO() const;

                    /**
                     * 设置AVRO格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aVRO AVRO格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAVRO(const Other& _aVRO);

                    /**
                     * 判断参数 AVRO 是否已赋值
                     * @return AVRO 是否已赋值
                     * 
                     */
                    bool AVROHasBeenSet() const;

                private:

                    /**
                     * 文本格式，TextFile。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextFile m_textFile;
                    bool m_textFileHasBeenSet;

                    /**
                     * 文本格式，CSV。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CSV m_cSV;
                    bool m_cSVHasBeenSet;

                    /**
                     * 文本格式，Json。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Other m_json;
                    bool m_jsonHasBeenSet;

                    /**
                     * Parquet格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Other m_parquet;
                    bool m_parquetHasBeenSet;

                    /**
                     * ORC格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Other m_oRC;
                    bool m_oRCHasBeenSet;

                    /**
                     * AVRO格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Other m_aVRO;
                    bool m_aVROHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAFORMAT_H_
