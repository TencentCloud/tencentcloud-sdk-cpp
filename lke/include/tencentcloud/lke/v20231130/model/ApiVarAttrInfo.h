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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_APIVARATTRINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_APIVARATTRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 自定义变量和标签关系数据
                */
                class ApiVarAttrInfo : public AbstractModel
                {
                public:
                    ApiVarAttrInfo();
                    ~ApiVarAttrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义变量id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiVarId 自定义变量id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiVarId() const;

                    /**
                     * 设置自定义变量id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiVarId 自定义变量id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiVarId(const std::string& _apiVarId);

                    /**
                     * 判断参数 ApiVarId 是否已赋值
                     * @return ApiVarId 是否已赋值
                     * 
                     */
                    bool ApiVarIdHasBeenSet() const;

                    /**
                     * 获取标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrBizId 标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttrBizId() const;

                    /**
                     * 设置标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attrBizId 标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttrBizId(const std::string& _attrBizId);

                    /**
                     * 判断参数 AttrBizId 是否已赋值
                     * @return AttrBizId 是否已赋值
                     * 
                     */
                    bool AttrBizIdHasBeenSet() const;

                private:

                    /**
                     * 自定义变量id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiVarId;
                    bool m_apiVarIdHasBeenSet;

                    /**
                     * 标签id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attrBizId;
                    bool m_attrBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_APIVARATTRINFO_H_
