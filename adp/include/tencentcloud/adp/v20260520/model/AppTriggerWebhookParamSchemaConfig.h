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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWEBHOOKPARAMSCHEMACONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWEBHOOKPARAMSCHEMACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerParamSchema.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppTriggerWebhookParamSchemaConfig
                */
                class AppTriggerWebhookParamSchemaConfig : public AbstractModel
                {
                public:
                    AppTriggerWebhookParamSchemaConfig();
                    ~AppTriggerWebhookParamSchemaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>触发器API参数列表</p>
                     * @return SchemaList <p>触发器API参数列表</p>
                     * 
                     */
                    std::vector<AppTriggerParamSchema> GetSchemaList() const;

                    /**
                     * 设置<p>触发器API参数列表</p>
                     * @param _schemaList <p>触发器API参数列表</p>
                     * 
                     */
                    void SetSchemaList(const std::vector<AppTriggerParamSchema>& _schemaList);

                    /**
                     * 判断参数 SchemaList 是否已赋值
                     * @return SchemaList 是否已赋值
                     * 
                     */
                    bool SchemaListHasBeenSet() const;

                private:

                    /**
                     * <p>触发器API参数列表</p>
                     */
                    std::vector<AppTriggerParamSchema> m_schemaList;
                    bool m_schemaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWEBHOOKPARAMSCHEMACONFIG_H_
