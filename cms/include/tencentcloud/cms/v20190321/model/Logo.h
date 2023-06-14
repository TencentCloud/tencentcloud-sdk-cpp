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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_LOGO_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_LOGO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/RrectF.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * Logo审核结果
                */
                class Logo : public AbstractModel
                {
                public:
                    Logo();
                    ~Logo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取logo图标置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Confidence logo图标置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置logo图标置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _confidence logo图标置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取logo图标坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RrectF logo图标坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RrectF GetRrectF() const;

                    /**
                     * 设置logo图标坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rrectF logo图标坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRrectF(const RrectF& _rrectF);

                    /**
                     * 判断参数 RrectF 是否已赋值
                     * @return RrectF 是否已赋值
                     * 
                     */
                    bool RrectFHasBeenSet() const;

                    /**
                     * 获取logo图标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name logo图标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置logo图标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name logo图标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * logo图标置信度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * logo图标坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RrectF m_rrectF;
                    bool m_rrectFHasBeenSet;

                    /**
                     * logo图标名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_LOGO_H_
