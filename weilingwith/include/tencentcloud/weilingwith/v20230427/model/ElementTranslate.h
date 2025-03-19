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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTTRANSLATE_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTTRANSLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 构件平移信息
                */
                class ElementTranslate : public AbstractModel
                {
                public:
                    ElementTranslate();
                    ~ElementTranslate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取X方向偏移量
                     * @return X X方向偏移量
                     * 
                     */
                    double GetX() const;

                    /**
                     * 设置X方向偏移量
                     * @param _x X方向偏移量
                     * 
                     */
                    void SetX(const double& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取Y方向偏移量
                     * @return Y Y方向偏移量
                     * 
                     */
                    double GetY() const;

                    /**
                     * 设置Y方向偏移量
                     * @param _y Y方向偏移量
                     * 
                     */
                    void SetY(const double& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取Z方向偏移量
                     * @return Z Z方向偏移量
                     * 
                     */
                    double GetZ() const;

                    /**
                     * 设置Z方向偏移量
                     * @param _z Z方向偏移量
                     * 
                     */
                    void SetZ(const double& _z);

                    /**
                     * 判断参数 Z 是否已赋值
                     * @return Z 是否已赋值
                     * 
                     */
                    bool ZHasBeenSet() const;

                private:

                    /**
                     * X方向偏移量
                     */
                    double m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Y方向偏移量
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                    /**
                     * Z方向偏移量
                     */
                    double m_z;
                    bool m_zHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTTRANSLATE_H_
