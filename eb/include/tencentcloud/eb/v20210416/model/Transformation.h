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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_TRANSFORMATION_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_TRANSFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/Extraction.h>
#include <tencentcloud/eb/v20210416/model/EtlFilter.h>
#include <tencentcloud/eb/v20210416/model/Transform.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 一个转换器
                */
                class Transformation : public AbstractModel
                {
                public:
                    Transformation();
                    ~Transformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述如何提取数据，{"ExtractionInputPath":"$.data.payload","Format":"JSON"}
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extraction 描述如何提取数据，{"ExtractionInputPath":"$.data.payload","Format":"JSON"}
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Extraction GetExtraction() const;

                    /**
                     * 设置描述如何提取数据，{"ExtractionInputPath":"$.data.payload","Format":"JSON"}
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraction 描述如何提取数据，{"ExtractionInputPath":"$.data.payload","Format":"JSON"}
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraction(const Extraction& _extraction);

                    /**
                     * 判断参数 Extraction 是否已赋值
                     * @return Extraction 是否已赋值
                     * 
                     */
                    bool ExtractionHasBeenSet() const;

                    /**
                     * 获取描述如何过滤数据;{"Filter":"{\"source\":\"ckafka.cloud.tencent\"}"}
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EtlFilter 描述如何过滤数据;{"Filter":"{\"source\":\"ckafka.cloud.tencent\"}"}
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EtlFilter GetEtlFilter() const;

                    /**
                     * 设置描述如何过滤数据;{"Filter":"{\"source\":\"ckafka.cloud.tencent\"}"}
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _etlFilter 描述如何过滤数据;{"Filter":"{\"source\":\"ckafka.cloud.tencent\"}"}
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEtlFilter(const EtlFilter& _etlFilter);

                    /**
                     * 判断参数 EtlFilter 是否已赋值
                     * @return EtlFilter 是否已赋值
                     * 
                     */
                    bool EtlFilterHasBeenSet() const;

                    /**
                     * 获取描述如何数据转换;"OutputStructs":[{"Key":"op","Value":"$.op","ValueType":"JSONPATH"}]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Transform 描述如何数据转换;"OutputStructs":[{"Key":"op","Value":"$.op","ValueType":"JSONPATH"}]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Transform GetTransform() const;

                    /**
                     * 设置描述如何数据转换;"OutputStructs":[{"Key":"op","Value":"$.op","ValueType":"JSONPATH"}]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transform 描述如何数据转换;"OutputStructs":[{"Key":"op","Value":"$.op","ValueType":"JSONPATH"}]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransform(const Transform& _transform);

                    /**
                     * 判断参数 Transform 是否已赋值
                     * @return Transform 是否已赋值
                     * 
                     */
                    bool TransformHasBeenSet() const;

                private:

                    /**
                     * 描述如何提取数据，{"ExtractionInputPath":"$.data.payload","Format":"JSON"}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Extraction m_extraction;
                    bool m_extractionHasBeenSet;

                    /**
                     * 描述如何过滤数据;{"Filter":"{\"source\":\"ckafka.cloud.tencent\"}"}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EtlFilter m_etlFilter;
                    bool m_etlFilterHasBeenSet;

                    /**
                     * 描述如何数据转换;"OutputStructs":[{"Key":"op","Value":"$.op","ValueType":"JSONPATH"}]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Transform m_transform;
                    bool m_transformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_TRANSFORMATION_H_
