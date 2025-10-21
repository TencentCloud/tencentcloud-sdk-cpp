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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINTEGRATIONNODECOLUMNSCHEMARESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINTEGRATIONNODECOLUMNSCHEMARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeSchema.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetIntegrationNodeColumnSchema返回参数结构体
                */
                class GetIntegrationNodeColumnSchemaResponse : public AbstractModel
                {
                public:
                    GetIntegrationNodeColumnSchemaResponse();
                    ~GetIntegrationNodeColumnSchemaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Schemas 字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntegrationNodeSchema> GetSchemas() const;

                    /**
                     * 判断参数 Schemas 是否已赋值
                     * @return Schemas 是否已赋值
                     * 
                     */
                    bool SchemasHasBeenSet() const;

                private:

                    /**
                     * 字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntegrationNodeSchema> m_schemas;
                    bool m_schemasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINTEGRATIONNODECOLUMNSCHEMARESPONSE_H_
