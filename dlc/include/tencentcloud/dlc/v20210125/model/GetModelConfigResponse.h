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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETMODELCONFIGRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETMODELCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GetModelConfig返回参数结构体
                */
                class GetModelConfigResponse : public AbstractModel
                {
                public:
                    GetModelConfigResponse();
                    ~GetModelConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>config.json 原始内容（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigJson <p>config.json 原始内容（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigJson() const;

                    /**
                     * 判断参数 ConfigJson 是否已赋值
                     * @return ConfigJson 是否已赋值
                     * 
                     */
                    bool ConfigJsonHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>config.json 原始内容（JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configJson;
                    bool m_configJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETMODELCONFIGRESPONSE_H_
