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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_MATERIALINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_MATERIALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 素材信息响应体
                */
                class MaterialInfo : public AbstractModel
                {
                public:
                    MaterialInfo();
                    ~MaterialInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取素材id
                     * @return MaterialId 素材id
                     * 
                     */
                    uint64_t GetMaterialId() const;

                    /**
                     * 设置素材id
                     * @param _materialId 素材id
                     * 
                     */
                    void SetMaterialId(const uint64_t& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     * 
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取素材名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaterialName 素材名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaterialName() const;

                    /**
                     * 设置素材名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _materialName 素材名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaterialName(const std::string& _materialName);

                    /**
                     * 判断参数 MaterialName 是否已赋值
                     * @return MaterialName 是否已赋值
                     * 
                     */
                    bool MaterialNameHasBeenSet() const;

                    /**
                     * 获取素材状态, -1: 删除 0: 启用 1: 禁用
                     * @return Status 素材状态, -1: 删除 0: 启用 1: 禁用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置素材状态, -1: 删除 0: 启用 1: 禁用
                     * @param _status 素材状态, -1: 删除 0: 启用 1: 禁用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 素材id
                     */
                    uint64_t m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 素材名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_materialName;
                    bool m_materialNameHasBeenSet;

                    /**
                     * 素材状态, -1: 删除 0: 启用 1: 禁用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_MATERIALINFO_H_
