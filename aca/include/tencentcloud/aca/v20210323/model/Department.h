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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_DEPARTMENT_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_DEPARTMENT_H_

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
                * 科室信息
                */
                class Department : public AbstractModel
                {
                public:
                    Department();
                    ~Department() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取科室ID
                     * @return Id 科室ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置科室ID
                     * @param _id 科室ID
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
                     * 获取科室名称
                     * @return Name 科室名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置科室名称
                     * @param _name 科室名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取科室类型 0:门诊  1:住院  2:门诊+住院
                     * @return Scope 科室类型 0:门诊  1:住院  2:门诊+住院
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置科室类型 0:门诊  1:住院  2:门诊+住院
                     * @param _scope 科室类型 0:门诊  1:住院  2:门诊+住院
                     * 
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取门诊区开关 true:此科室对应的门诊区开启智能审方功能, false:此科室对应的门诊区关闭智能审方功能; 仅对scope为0/2的科室生效
                     * @return OutpatientOn 门诊区开关 true:此科室对应的门诊区开启智能审方功能, false:此科室对应的门诊区关闭智能审方功能; 仅对scope为0/2的科室生效
                     * 
                     */
                    bool GetOutpatientOn() const;

                    /**
                     * 设置门诊区开关 true:此科室对应的门诊区开启智能审方功能, false:此科室对应的门诊区关闭智能审方功能; 仅对scope为0/2的科室生效
                     * @param _outpatientOn 门诊区开关 true:此科室对应的门诊区开启智能审方功能, false:此科室对应的门诊区关闭智能审方功能; 仅对scope为0/2的科室生效
                     * 
                     */
                    void SetOutpatientOn(const bool& _outpatientOn);

                    /**
                     * 判断参数 OutpatientOn 是否已赋值
                     * @return OutpatientOn 是否已赋值
                     * 
                     */
                    bool OutpatientOnHasBeenSet() const;

                    /**
                     * 获取住院区开关 true:此科室对应的住院区开启智能审方功能, false:此科室对应的住院区关闭智能审方功能; 仅对scope为1/2的科室生效
                     * @return InHospitalOn 住院区开关 true:此科室对应的住院区开启智能审方功能, false:此科室对应的住院区关闭智能审方功能; 仅对scope为1/2的科室生效
                     * 
                     */
                    bool GetInHospitalOn() const;

                    /**
                     * 设置住院区开关 true:此科室对应的住院区开启智能审方功能, false:此科室对应的住院区关闭智能审方功能; 仅对scope为1/2的科室生效
                     * @param _inHospitalOn 住院区开关 true:此科室对应的住院区开启智能审方功能, false:此科室对应的住院区关闭智能审方功能; 仅对scope为1/2的科室生效
                     * 
                     */
                    void SetInHospitalOn(const bool& _inHospitalOn);

                    /**
                     * 判断参数 InHospitalOn 是否已赋值
                     * @return InHospitalOn 是否已赋值
                     * 
                     */
                    bool InHospitalOnHasBeenSet() const;

                private:

                    /**
                     * 科室ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 科室名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 科室类型 0:门诊  1:住院  2:门诊+住院
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 门诊区开关 true:此科室对应的门诊区开启智能审方功能, false:此科室对应的门诊区关闭智能审方功能; 仅对scope为0/2的科室生效
                     */
                    bool m_outpatientOn;
                    bool m_outpatientOnHasBeenSet;

                    /**
                     * 住院区开关 true:此科室对应的住院区开启智能审方功能, false:此科室对应的住院区关闭智能审方功能; 仅对scope为1/2的科室生效
                     */
                    bool m_inHospitalOn;
                    bool m_inHospitalOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_DEPARTMENT_H_
