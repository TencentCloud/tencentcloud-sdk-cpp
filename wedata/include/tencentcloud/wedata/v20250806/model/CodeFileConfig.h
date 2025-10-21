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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEFILECONFIG_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEFILECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/NotebookSessionInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据探索脚本配置
                */
                class CodeFileConfig : public AbstractModel
                {
                public:
                    CodeFileConfig();
                    ~CodeFileConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高级运行参数,变量替换，map-json String,String
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 高级运行参数,变量替换，map-json String,String
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置高级运行参数,变量替换，map-json String,String
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 高级运行参数,变量替换，map-json String,String
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取notebook kernel session信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotebookSessionInfo notebook kernel session信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NotebookSessionInfo GetNotebookSessionInfo() const;

                    /**
                     * 设置notebook kernel session信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notebookSessionInfo notebook kernel session信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotebookSessionInfo(const NotebookSessionInfo& _notebookSessionInfo);

                    /**
                     * 判断参数 NotebookSessionInfo 是否已赋值
                     * @return NotebookSessionInfo 是否已赋值
                     * 
                     */
                    bool NotebookSessionInfoHasBeenSet() const;

                private:

                    /**
                     * 高级运行参数,变量替换，map-json String,String
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * notebook kernel session信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NotebookSessionInfo m_notebookSessionInfo;
                    bool m_notebookSessionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEFILECONFIG_H_
