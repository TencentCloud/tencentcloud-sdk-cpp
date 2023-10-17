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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENTVERSION_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENTVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/PURL.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * 描述组件的一条版本信息。
                */
                class ComponentVersion : public AbstractModel
                {
                public:
                    ComponentVersion();
                    ~ComponentVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该组件的PURL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PURL 该组件的PURL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PURL GetPURL() const;

                    /**
                     * 设置该组件的PURL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pURL 该组件的PURL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPURL(const PURL& _pURL);

                    /**
                     * 判断参数 PURL 是否已赋值
                     * @return PURL 是否已赋值
                     * 
                     */
                    bool PURLHasBeenSet() const;

                    /**
                     * 获取该组件版本的许可证表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicenseExpression 该组件版本的许可证表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLicenseExpression() const;

                    /**
                     * 设置该组件版本的许可证表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licenseExpression 该组件版本的许可证表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicenseExpression(const std::string& _licenseExpression);

                    /**
                     * 判断参数 LicenseExpression 是否已赋值
                     * @return LicenseExpression 是否已赋值
                     * 
                     */
                    bool LicenseExpressionHasBeenSet() const;

                private:

                    /**
                     * 该组件的PURL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PURL m_pURL;
                    bool m_pURLHasBeenSet;

                    /**
                     * 该组件版本的许可证表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_licenseExpression;
                    bool m_licenseExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_COMPONENTVERSION_H_
