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

#ifndef TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPINDUSTRY_H_
#define TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPINDUSTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Icr
    {
        namespace V20211014
        {
            namespace Model
            {
                /**
                * 获取成员列表回包Industry
                */
                class GetIndustryV1HomeMembersRespIndustry : public AbstractModel
                {
                public:
                    GetIndustryV1HomeMembersRespIndustry();
                    ~GetIndustryV1HomeMembersRespIndustry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取行业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 行业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置行业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD 行业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取行业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndustryName 行业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndustryName() const;

                    /**
                     * 设置行业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _industryName 行业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndustryName(const std::string& _industryName);

                    /**
                     * 判断参数 IndustryName 是否已赋值
                     * @return IndustryName 是否已赋值
                     * 
                     */
                    bool IndustryNameHasBeenSet() const;

                private:

                    /**
                     * 行业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 行业名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_industryName;
                    bool m_industryNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPINDUSTRY_H_
