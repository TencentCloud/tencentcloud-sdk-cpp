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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CODEPOSITION_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CODEPOSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 二维码在图片中的位置，由边界点的坐标表示
                */
                class CodePosition : public AbstractModel
                {
                public:
                    CodePosition();
                    ~CodePosition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取二维码边界点X轴坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FloatX 二维码边界点X轴坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFloatX() const;

                    /**
                     * 设置二维码边界点X轴坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _floatX 二维码边界点X轴坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFloatX(const double& _floatX);

                    /**
                     * 判断参数 FloatX 是否已赋值
                     * @return FloatX 是否已赋值
                     * 
                     */
                    bool FloatXHasBeenSet() const;

                    /**
                     * 获取二维码边界点Y轴坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FloatY 二维码边界点Y轴坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFloatY() const;

                    /**
                     * 设置二维码边界点Y轴坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _floatY 二维码边界点Y轴坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFloatY(const double& _floatY);

                    /**
                     * 判断参数 FloatY 是否已赋值
                     * @return FloatY 是否已赋值
                     * 
                     */
                    bool FloatYHasBeenSet() const;

                private:

                    /**
                     * 二维码边界点X轴坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_floatX;
                    bool m_floatXHasBeenSet;

                    /**
                     * 二维码边界点Y轴坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_floatY;
                    bool m_floatYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CODEPOSITION_H_
