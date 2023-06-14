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

#ifndef TENCENTCLOUD_BPAAS_V20181217_MODEL_SCF_H_
#define TENCENTCLOUD_BPAAS_V20181217_MODEL_SCF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bpaas/v20181217/model/ScfParam.h>


namespace TencentCloud
{
    namespace Bpaas
    {
        namespace V20181217
        {
            namespace Model
            {
                /**
                * 云函数SCF
                */
                class Scf : public AbstractModel
                {
                public:
                    Scf();
                    ~Scf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scf函数地域id
                     * @return ScfRegion Scf函数地域id
                     * 
                     */
                    std::string GetScfRegion() const;

                    /**
                     * 设置Scf函数地域id
                     * @param _scfRegion Scf函数地域id
                     * 
                     */
                    void SetScfRegion(const std::string& _scfRegion);

                    /**
                     * 判断参数 ScfRegion 是否已赋值
                     * @return ScfRegion 是否已赋值
                     * 
                     */
                    bool ScfRegionHasBeenSet() const;

                    /**
                     * 获取Scf函数地域
                     * @return ScfRegionName Scf函数地域
                     * 
                     */
                    std::string GetScfRegionName() const;

                    /**
                     * 设置Scf函数地域
                     * @param _scfRegionName Scf函数地域
                     * 
                     */
                    void SetScfRegionName(const std::string& _scfRegionName);

                    /**
                     * 判断参数 ScfRegionName 是否已赋值
                     * @return ScfRegionName 是否已赋值
                     * 
                     */
                    bool ScfRegionNameHasBeenSet() const;

                    /**
                     * 获取Scf函数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScfName Scf函数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScfName() const;

                    /**
                     * 设置Scf函数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scfName Scf函数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScfName(const std::string& _scfName);

                    /**
                     * 判断参数 ScfName 是否已赋值
                     * @return ScfName 是否已赋值
                     * 
                     */
                    bool ScfNameHasBeenSet() const;

                    /**
                     * 获取Scf函数入参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params Scf函数入参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScfParam> GetParams() const;

                    /**
                     * 设置Scf函数入参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params Scf函数入参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::vector<ScfParam>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * Scf函数地域id
                     */
                    std::string m_scfRegion;
                    bool m_scfRegionHasBeenSet;

                    /**
                     * Scf函数地域
                     */
                    std::string m_scfRegionName;
                    bool m_scfRegionNameHasBeenSet;

                    /**
                     * Scf函数名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scfName;
                    bool m_scfNameHasBeenSet;

                    /**
                     * Scf函数入参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScfParam> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BPAAS_V20181217_MODEL_SCF_H_
