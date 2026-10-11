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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPEC_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SparkJobSpec.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 作业资源规格（跨引擎平铺载体；字段须与请求 MajorType 匹配）。
                */
                class Spec : public AbstractModel
                {
                public:
                    Spec();
                    ~Spec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>SPARK 资源规格（CU 维度）；MajorType=SPARK 时必填，其余引擎字段须为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spark <p>SPARK 资源规格（CU 维度）；MajorType=SPARK 时必填，其余引擎字段须为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SparkJobSpec GetSpark() const;

                    /**
                     * 设置<p>SPARK 资源规格（CU 维度）；MajorType=SPARK 时必填，其余引擎字段须为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spark <p>SPARK 资源规格（CU 维度）；MajorType=SPARK 时必填，其余引擎字段须为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpark(const SparkJobSpec& _spark);

                    /**
                     * 判断参数 Spark 是否已赋值
                     * @return Spark 是否已赋值
                     * 
                     */
                    bool SparkHasBeenSet() const;

                private:

                    /**
                     * <p>SPARK 资源规格（CU 维度）；MajorType=SPARK 时必填，其余引擎字段须为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SparkJobSpec m_spark;
                    bool m_sparkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPEC_H_
