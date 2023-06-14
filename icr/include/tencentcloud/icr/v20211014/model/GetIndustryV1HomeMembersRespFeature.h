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

#ifndef TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPFEATURE_H_
#define TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPFEATURE_H_

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
                * 获取成员列表接口回包Feature
                */
                class GetIndustryV1HomeMembersRespFeature : public AbstractModel
                {
                public:
                    GetIndustryV1HomeMembersRespFeature();
                    ~GetIndustryV1HomeMembersRespFeature() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取功能名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeatureName 功能名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFeatureName() const;

                    /**
                     * 设置功能名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _featureName 功能名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeatureName(const std::string& _featureName);

                    /**
                     * 判断参数 FeatureName 是否已赋值
                     * @return FeatureName 是否已赋值
                     * 
                     */
                    bool FeatureNameHasBeenSet() const;

                    /**
                     * 获取功能ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 功能ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置功能ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD 功能ID
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

                private:

                    /**
                     * 功能名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_featureName;
                    bool m_featureNameHasBeenSet;

                    /**
                     * 功能ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_MODEL_GETINDUSTRYV1HOMEMEMBERSRESPFEATURE_H_
