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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICELOCATION_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICELOCATION_H_

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
                * 设备点位坐标值
                */
                class DeviceLocation : public AbstractModel
                {
                public:
                    DeviceLocation();
                    ~DeviceLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取点位X坐标值
                     * @return X 点位X坐标值
                     * 
                     */
                    double GetX() const;

                    /**
                     * 设置点位X坐标值
                     * @param _x 点位X坐标值
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
                     * 获取点位Y坐标值
                     * @return Y 点位Y坐标值
                     * 
                     */
                    double GetY() const;

                    /**
                     * 设置点位Y坐标值
                     * @param _y 点位Y坐标值
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
                     * 获取点位Z坐标值
                     * @return Z 点位Z坐标值
                     * 
                     */
                    double GetZ() const;

                    /**
                     * 设置点位Z坐标值
                     * @param _z 点位Z坐标值
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
                     * 点位X坐标值
                     */
                    double m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 点位Y坐标值
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 点位Z坐标值
                     */
                    double m_z;
                    bool m_zHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICELOCATION_H_
