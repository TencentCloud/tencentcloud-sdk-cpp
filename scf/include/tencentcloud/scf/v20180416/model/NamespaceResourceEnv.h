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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENV_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/NamespaceResourceEnvTKE.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 命名空间资源池配置
                */
                class NamespaceResourceEnv : public AbstractModel
                {
                public:
                    NamespaceResourceEnv();
                    ~NamespaceResourceEnv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基于TKE集群的资源池
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TKE 基于TKE集群的资源池
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NamespaceResourceEnvTKE GetTKE() const;

                    /**
                     * 设置基于TKE集群的资源池
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tKE 基于TKE集群的资源池
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTKE(const NamespaceResourceEnvTKE& _tKE);

                    /**
                     * 判断参数 TKE 是否已赋值
                     * @return TKE 是否已赋值
                     * 
                     */
                    bool TKEHasBeenSet() const;

                    /**
                     * 获取近离线计算类型的命名空间
                     * @return OFFLINE 近离线计算类型的命名空间
                     * 
                     */
                    bool GetOFFLINE() const;

                    /**
                     * 设置近离线计算类型的命名空间
                     * @param _oFFLINE 近离线计算类型的命名空间
                     * 
                     */
                    void SetOFFLINE(const bool& _oFFLINE);

                    /**
                     * 判断参数 OFFLINE 是否已赋值
                     * @return OFFLINE 是否已赋值
                     * 
                     */
                    bool OFFLINEHasBeenSet() const;

                private:

                    /**
                     * 基于TKE集群的资源池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NamespaceResourceEnvTKE m_tKE;
                    bool m_tKEHasBeenSet;

                    /**
                     * 近离线计算类型的命名空间
                     */
                    bool m_oFFLINE;
                    bool m_oFFLINEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENV_H_
