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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_DOCTORINFO_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_DOCTORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 医生信息
                */
                class DoctorInfo : public AbstractModel
                {
                public:
                    DoctorInfo();
                    ~DoctorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取医生ID
                     * @return DoctorId 医生ID
                     * 
                     */
                    std::string GetDoctorId() const;

                    /**
                     * 设置医生ID
                     * @param _doctorId 医生ID
                     * 
                     */
                    void SetDoctorId(const std::string& _doctorId);

                    /**
                     * 判断参数 DoctorId 是否已赋值
                     * @return DoctorId 是否已赋值
                     * 
                     */
                    bool DoctorIdHasBeenSet() const;

                    /**
                     * 获取医生姓名
                     * @return DoctorName 医生姓名
                     * 
                     */
                    std::string GetDoctorName() const;

                    /**
                     * 设置医生姓名
                     * @param _doctorName 医生姓名
                     * 
                     */
                    void SetDoctorName(const std::string& _doctorName);

                    /**
                     * 判断参数 DoctorName 是否已赋值
                     * @return DoctorName 是否已赋值
                     * 
                     */
                    bool DoctorNameHasBeenSet() const;

                    /**
                     * 获取医生电话
                     * @return DoctorPhone 医生电话
                     * 
                     */
                    std::string GetDoctorPhone() const;

                    /**
                     * 设置医生电话
                     * @param _doctorPhone 医生电话
                     * 
                     */
                    void SetDoctorPhone(const std::string& _doctorPhone);

                    /**
                     * 判断参数 DoctorPhone 是否已赋值
                     * @return DoctorPhone 是否已赋值
                     * 
                     */
                    bool DoctorPhoneHasBeenSet() const;

                private:

                    /**
                     * 医生ID
                     */
                    std::string m_doctorId;
                    bool m_doctorIdHasBeenSet;

                    /**
                     * 医生姓名
                     */
                    std::string m_doctorName;
                    bool m_doctorNameHasBeenSet;

                    /**
                     * 医生电话
                     */
                    std::string m_doctorPhone;
                    bool m_doctorPhoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_DOCTORINFO_H_
