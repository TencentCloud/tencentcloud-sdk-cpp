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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_LOGINDATA_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_LOGINDATA_H_

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
                * 登录请求对象
                */
                class LoginData : public AbstractModel
                {
                public:
                    LoginData();
                    ~LoginData() = default;
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
                     * 获取医生名称
                     * @return DoctorName 医生名称
                     * 
                     */
                    std::string GetDoctorName() const;

                    /**
                     * 设置医生名称
                     * @param _doctorName 医生名称
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
                     * 获取医生职级 主治医师、副主任医师、主任医师
                     * @return DoctorLevel 医生职级 主治医师、副主任医师、主任医师
                     * 
                     */
                    std::string GetDoctorLevel() const;

                    /**
                     * 设置医生职级 主治医师、副主任医师、主任医师
                     * @param _doctorLevel 医生职级 主治医师、副主任医师、主任医师
                     * 
                     */
                    void SetDoctorLevel(const std::string& _doctorLevel);

                    /**
                     * 判断参数 DoctorLevel 是否已赋值
                     * @return DoctorLevel 是否已赋值
                     * 
                     */
                    bool DoctorLevelHasBeenSet() const;

                    /**
                     * 获取医生科室 当前登录科室
                     * @return DoctorDepartment 医生科室 当前登录科室
                     * 
                     */
                    std::string GetDoctorDepartment() const;

                    /**
                     * 设置医生科室 当前登录科室
                     * @param _doctorDepartment 医生科室 当前登录科室
                     * 
                     */
                    void SetDoctorDepartment(const std::string& _doctorDepartment);

                    /**
                     * 判断参数 DoctorDepartment 是否已赋值
                     * @return DoctorDepartment 是否已赋值
                     * 
                     */
                    bool DoctorDepartmentHasBeenSet() const;

                    /**
                     * 获取科室ID
                     * @return DepartmentId 科室ID
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置科室ID
                     * @param _departmentId 科室ID
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                private:

                    /**
                     * 医生ID
                     */
                    std::string m_doctorId;
                    bool m_doctorIdHasBeenSet;

                    /**
                     * 医生名称
                     */
                    std::string m_doctorName;
                    bool m_doctorNameHasBeenSet;

                    /**
                     * 医生职级 主治医师、副主任医师、主任医师
                     */
                    std::string m_doctorLevel;
                    bool m_doctorLevelHasBeenSet;

                    /**
                     * 医生科室 当前登录科室
                     */
                    std::string m_doctorDepartment;
                    bool m_doctorDepartmentHasBeenSet;

                    /**
                     * 科室ID
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_LOGINDATA_H_
