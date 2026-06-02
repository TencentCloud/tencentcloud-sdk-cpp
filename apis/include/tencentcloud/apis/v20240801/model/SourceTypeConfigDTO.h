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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_SOURCETYPECONFIGDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_SOURCETYPECONFIGDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * SourceTypeConfigDTO
                */
                class SourceTypeConfigDTO : public AbstractModel
                {
                public:
                    SourceTypeConfigDTO();
                    ~SourceTypeConfigDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReqSourceType json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReqSourceType() const;

                    /**
                     * 设置json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reqSourceType json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReqSourceType(const std::string& _reqSourceType);

                    /**
                     * 判断参数 ReqSourceType 是否已赋值
                     * @return ReqSourceType 是否已赋值
                     * 
                     */
                    bool ReqSourceTypeHasBeenSet() const;

                    /**
                     * 获取json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReqTargetType json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReqTargetType() const;

                    /**
                     * 设置json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reqTargetType json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReqTargetType(const std::string& _reqTargetType);

                    /**
                     * 判断参数 ReqTargetType 是否已赋值
                     * @return ReqTargetType 是否已赋值
                     * 
                     */
                    bool ReqTargetTypeHasBeenSet() const;

                    /**
                     * 获取json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResSourceType json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResSourceType() const;

                    /**
                     * 设置json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resSourceType json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResSourceType(const std::string& _resSourceType);

                    /**
                     * 判断参数 ResSourceType 是否已赋值
                     * @return ResSourceType 是否已赋值
                     * 
                     */
                    bool ResSourceTypeHasBeenSet() const;

                    /**
                     * 获取json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResTargetType json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResTargetType() const;

                    /**
                     * 设置json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resTargetType json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResTargetType(const std::string& _resTargetType);

                    /**
                     * 判断参数 ResTargetType 是否已赋值
                     * @return ResTargetType 是否已赋值
                     * 
                     */
                    bool ResTargetTypeHasBeenSet() const;

                private:

                    /**
                     * json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reqSourceType;
                    bool m_reqSourceTypeHasBeenSet;

                    /**
                     * json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reqTargetType;
                    bool m_reqTargetTypeHasBeenSet;

                    /**
                     * json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resSourceType;
                    bool m_resSourceTypeHasBeenSet;

                    /**
                     * json xml urlencoded amf0 amf3 hessian1 hessian2

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resTargetType;
                    bool m_resTargetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_SOURCETYPECONFIGDTO_H_
