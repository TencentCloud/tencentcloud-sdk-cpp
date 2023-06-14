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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RIDEHAILINGDRIVERLICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RIDEHAILINGDRIVERLICENSEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RideHailingDriverLicenseOCR返回参数结构体
                */
                class RideHailingDriverLicenseOCRResponse : public AbstractModel
                {
                public:
                    RideHailingDriverLicenseOCRResponse();
                    ~RideHailingDriverLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取证号，对应网约车驾驶证字段：证号/从业资格证号/驾驶员证号/身份证号
                     * @return LicenseNumber 证号，对应网约车驾驶证字段：证号/从业资格证号/驾驶员证号/身份证号
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 判断参数 LicenseNumber 是否已赋值
                     * @return LicenseNumber 是否已赋值
                     * 
                     */
                    bool LicenseNumberHasBeenSet() const;

                    /**
                     * 获取有效起始日期
                     * @return StartDate 有效起始日期
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取有效期截止时间，对应网约车驾驶证字段：有效期至/营运期限止
                     * @return EndDate 有效期截止时间，对应网约车驾驶证字段：有效期至/营运期限止
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取初始发证日期，对应网约车驾驶证字段：初始领证日期/发证日期
                     * @return ReleaseDate 初始发证日期，对应网约车驾驶证字段：初始领证日期/发证日期
                     * 
                     */
                    std::string GetReleaseDate() const;

                    /**
                     * 判断参数 ReleaseDate 是否已赋值
                     * @return ReleaseDate 是否已赋值
                     * 
                     */
                    bool ReleaseDateHasBeenSet() const;

                private:

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 证号，对应网约车驾驶证字段：证号/从业资格证号/驾驶员证号/身份证号
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * 有效起始日期
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 有效期截止时间，对应网约车驾驶证字段：有效期至/营运期限止
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 初始发证日期，对应网约车驾驶证字段：初始领证日期/发证日期
                     */
                    std::string m_releaseDate;
                    bool m_releaseDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RIDEHAILINGDRIVERLICENSEOCRRESPONSE_H_
