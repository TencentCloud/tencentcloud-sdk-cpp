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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_PERSONNELVISITCAR_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_PERSONNELVISITCAR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 人员到访时的车辆信息
                */
                class PersonnelVisitCar : public AbstractModel
                {
                public:
                    PersonnelVisitCar();
                    ~PersonnelVisitCar() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取车牌号
                     * @return CarNumber 车牌号
                     * 
                     */
                    std::string GetCarNumber() const;

                    /**
                     * 设置车牌号
                     * @param _carNumber 车牌号
                     * 
                     */
                    void SetCarNumber(const std::string& _carNumber);

                    /**
                     * 判断参数 CarNumber 是否已赋值
                     * @return CarNumber 是否已赋值
                     * 
                     */
                    bool CarNumberHasBeenSet() const;

                    /**
                     * 获取驾驶人姓名
                     * @return DriverName 驾驶人姓名
                     * 
                     */
                    std::string GetDriverName() const;

                    /**
                     * 设置驾驶人姓名
                     * @param _driverName 驾驶人姓名
                     * 
                     */
                    void SetDriverName(const std::string& _driverName);

                    /**
                     * 判断参数 DriverName 是否已赋值
                     * @return DriverName 是否已赋值
                     * 
                     */
                    bool DriverNameHasBeenSet() const;

                    /**
                     * 获取驾驶人身份证号
                     * @return DriverNumber 驾驶人身份证号
                     * 
                     */
                    std::string GetDriverNumber() const;

                    /**
                     * 设置驾驶人身份证号
                     * @param _driverNumber 驾驶人身份证号
                     * 
                     */
                    void SetDriverNumber(const std::string& _driverNumber);

                    /**
                     * 判断参数 DriverNumber 是否已赋值
                     * @return DriverNumber 是否已赋值
                     * 
                     */
                    bool DriverNumberHasBeenSet() const;

                private:

                    /**
                     * 车牌号
                     */
                    std::string m_carNumber;
                    bool m_carNumberHasBeenSet;

                    /**
                     * 驾驶人姓名
                     */
                    std::string m_driverName;
                    bool m_driverNameHasBeenSet;

                    /**
                     * 驾驶人身份证号
                     */
                    std::string m_driverNumber;
                    bool m_driverNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_PERSONNELVISITCAR_H_
