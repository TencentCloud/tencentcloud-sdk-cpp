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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_AIOPSSCRIPTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_AIOPSSCRIPTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据运维脚本信息
                */
                class AiopsScriptInfo : public AbstractModel
                {
                public:
                    AiopsScriptInfo();
                    ~AiopsScriptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContent 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContent 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取脚本所在COS的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosPath 脚本所在COS的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置脚本所在COS的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosPath 脚本所在COS的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosPath(const std::string& _cosPath);

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     * 
                     */
                    bool CosPathHasBeenSet() const;

                    /**
                     * 获取脚本所在COS的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosRegion 脚本所在COS的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置脚本所在COS的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosRegion 脚本所在COS的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取脚本所在COS的桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketName 脚本所在COS的桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置脚本所在COS的桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketName 脚本所在COS的桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                private:

                    /**
                     * 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 脚本所在COS的路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * 脚本所在COS的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 脚本所在COS的桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_AIOPSSCRIPTINFO_H_
