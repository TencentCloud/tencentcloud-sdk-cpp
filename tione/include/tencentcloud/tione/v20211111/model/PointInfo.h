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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_POINTINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_POINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 点信息描述
                */
                class PointInfo : public AbstractModel
                {
                public:
                    PointInfo();
                    ~PointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取X坐标值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return X X坐标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetX() const;

                    /**
                     * 设置X坐标值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param X X坐标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetX(const double& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取Y坐标值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Y Y坐标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetY() const;

                    /**
                     * 设置Y坐标值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Y Y坐标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetY(const double& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     */
                    bool YHasBeenSet() const;

                private:

                    /**
                     * X坐标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Y坐标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_POINTINFO_H_
