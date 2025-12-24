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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_RESOURCE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/TkeMeta.h>
#include <tencentcloud/apm/v20210622/model/CVMMeta.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 资源层信息
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取tke资源层信息
                     * @return TKEMeta tke资源层信息
                     * 
                     */
                    std::vector<TkeMeta> GetTKEMeta() const;

                    /**
                     * 设置tke资源层信息
                     * @param _tKEMeta tke资源层信息
                     * 
                     */
                    void SetTKEMeta(const std::vector<TkeMeta>& _tKEMeta);

                    /**
                     * 判断参数 TKEMeta 是否已赋值
                     * @return TKEMeta 是否已赋值
                     * 
                     */
                    bool TKEMetaHasBeenSet() const;

                    /**
                     * 获取cvm资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CVMMeta cvm资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CVMMeta> GetCVMMeta() const;

                    /**
                     * 设置cvm资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cVMMeta cvm资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCVMMeta(const std::vector<CVMMeta>& _cVMMeta);

                    /**
                     * 判断参数 CVMMeta 是否已赋值
                     * @return CVMMeta 是否已赋值
                     * 
                     */
                    bool CVMMetaHasBeenSet() const;

                private:

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * tke资源层信息
                     */
                    std::vector<TkeMeta> m_tKEMeta;
                    bool m_tKEMetaHasBeenSet;

                    /**
                     * cvm资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CVMMeta> m_cVMMeta;
                    bool m_cVMMetaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_RESOURCE_H_
