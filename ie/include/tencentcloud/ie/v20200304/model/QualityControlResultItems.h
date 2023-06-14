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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_QUALITYCONTROLRESULTITEMS_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_QUALITYCONTROLRESULTITEMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/QualityControlItem.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 质检结果项数组
                */
                class QualityControlResultItems : public AbstractModel
                {
                public:
                    QualityControlResultItems();
                    ~QualityControlResultItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异常类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 异常类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置异常类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 异常类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取质检结果项
                     * @return QualityControlItems 质检结果项
                     * 
                     */
                    std::vector<QualityControlItem> GetQualityControlItems() const;

                    /**
                     * 设置质检结果项
                     * @param _qualityControlItems 质检结果项
                     * 
                     */
                    void SetQualityControlItems(const std::vector<QualityControlItem>& _qualityControlItems);

                    /**
                     * 判断参数 QualityControlItems 是否已赋值
                     * @return QualityControlItems 是否已赋值
                     * 
                     */
                    bool QualityControlItemsHasBeenSet() const;

                private:

                    /**
                     * 异常类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 质检结果项
                     */
                    std::vector<QualityControlItem> m_qualityControlItems;
                    bool m_qualityControlItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_QUALITYCONTROLRESULTITEMS_H_
