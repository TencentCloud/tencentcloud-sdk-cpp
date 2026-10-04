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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATESCHEMARSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATESCHEMARSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/Schema.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 创建schema的响应
                */
                class CreateSchemaRsp : public AbstractModel
                {
                public:
                    CreateSchemaRsp();
                    ~CreateSchemaRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取schema信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Schema schema信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Schema GetSchema() const;

                    /**
                     * 设置schema信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schema schema信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchema(const Schema& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                private:

                    /**
                     * schema信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Schema m_schema;
                    bool m_schemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATESCHEMARSP_H_
