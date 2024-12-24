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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_DICT_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_DICT_H_

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
                * 字典信息
                */
                class Dict : public AbstractModel
                {
                public:
                    Dict();
                    ~Dict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取给药频次编码
                     * @return FreqCode 给药频次编码
                     * 
                     */
                    std::string GetFreqCode() const;

                    /**
                     * 设置给药频次编码
                     * @param _freqCode 给药频次编码
                     * 
                     */
                    void SetFreqCode(const std::string& _freqCode);

                    /**
                     * 判断参数 FreqCode 是否已赋值
                     * @return FreqCode 是否已赋值
                     * 
                     */
                    bool FreqCodeHasBeenSet() const;

                    /**
                     * 获取给药频次名称
                     * @return FreqName 给药频次名称
                     * 
                     */
                    std::string GetFreqName() const;

                    /**
                     * 设置给药频次名称
                     * @param _freqName 给药频次名称
                     * 
                     */
                    void SetFreqName(const std::string& _freqName);

                    /**
                     * 判断参数 FreqName 是否已赋值
                     * @return FreqName 是否已赋值
                     * 
                     */
                    bool FreqNameHasBeenSet() const;

                    /**
                     * 获取是否禁用 0-启用 1-禁用
                     * @return Disable 是否禁用 0-启用 1-禁用
                     * 
                     */
                    int64_t GetDisable() const;

                    /**
                     * 设置是否禁用 0-启用 1-禁用
                     * @param _disable 是否禁用 0-启用 1-禁用
                     * 
                     */
                    void SetDisable(const int64_t& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取给药途径编码
                     * @return UsageCode 给药途径编码
                     * 
                     */
                    std::string GetUsageCode() const;

                    /**
                     * 设置给药途径编码
                     * @param _usageCode 给药途径编码
                     * 
                     */
                    void SetUsageCode(const std::string& _usageCode);

                    /**
                     * 判断参数 UsageCode 是否已赋值
                     * @return UsageCode 是否已赋值
                     * 
                     */
                    bool UsageCodeHasBeenSet() const;

                    /**
                     * 获取给药途径名称
                     * @return UsageName 给药途径名称
                     * 
                     */
                    std::string GetUsageName() const;

                    /**
                     * 设置给药途径名称
                     * @param _usageName 给药途径名称
                     * 
                     */
                    void SetUsageName(const std::string& _usageName);

                    /**
                     * 判断参数 UsageName 是否已赋值
                     * @return UsageName 是否已赋值
                     * 
                     */
                    bool UsageNameHasBeenSet() const;

                    /**
                     * 获取科室ID
                     * @return DeptId 科室ID
                     * 
                     */
                    std::string GetDeptId() const;

                    /**
                     * 设置科室ID
                     * @param _deptId 科室ID
                     * 
                     */
                    void SetDeptId(const std::string& _deptId);

                    /**
                     * 判断参数 DeptId 是否已赋值
                     * @return DeptId 是否已赋值
                     * 
                     */
                    bool DeptIdHasBeenSet() const;

                    /**
                     * 获取科室名称
                     * @return DeptName 科室名称
                     * 
                     */
                    std::string GetDeptName() const;

                    /**
                     * 设置科室名称
                     * @param _deptName 科室名称
                     * 
                     */
                    void SetDeptName(const std::string& _deptName);

                    /**
                     * 判断参数 DeptName 是否已赋值
                     * @return DeptName 是否已赋值
                     * 
                     */
                    bool DeptNameHasBeenSet() const;

                    /**
                     * 获取科室区域类型 0:门诊  1:住院  2:门诊+住院
                     * @return Scope 科室区域类型 0:门诊  1:住院  2:门诊+住院
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置科室区域类型 0:门诊  1:住院  2:门诊+住院
                     * @param _scope 科室区域类型 0:门诊  1:住院  2:门诊+住院
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
                     * 获取门诊开关
                     * @return OutpatientOn 门诊开关
                     * 
                     */
                    bool GetOutpatientOn() const;

                    /**
                     * 设置门诊开关
                     * @param _outpatientOn 门诊开关
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
                     * 获取住院
                     * @return InHospitalOn 住院
                     * 
                     */
                    bool GetInHospitalOn() const;

                    /**
                     * 设置住院
                     * @param _inHospitalOn 住院
                     * 
                     */
                    void SetInHospitalOn(const bool& _inHospitalOn);

                    /**
                     * 判断参数 InHospitalOn 是否已赋值
                     * @return InHospitalOn 是否已赋值
                     * 
                     */
                    bool InHospitalOnHasBeenSet() const;

                    /**
                     * 获取诊断编码
                     * @return DiagCode 诊断编码
                     * 
                     */
                    std::string GetDiagCode() const;

                    /**
                     * 设置诊断编码
                     * @param _diagCode 诊断编码
                     * 
                     */
                    void SetDiagCode(const std::string& _diagCode);

                    /**
                     * 判断参数 DiagCode 是否已赋值
                     * @return DiagCode 是否已赋值
                     * 
                     */
                    bool DiagCodeHasBeenSet() const;

                    /**
                     * 获取诊断名称
                     * @return DiagName 诊断名称
                     * 
                     */
                    std::string GetDiagName() const;

                    /**
                     * 设置诊断名称
                     * @param _diagName 诊断名称
                     * 
                     */
                    void SetDiagName(const std::string& _diagName);

                    /**
                     * 判断参数 DiagName 是否已赋值
                     * @return DiagName 是否已赋值
                     * 
                     */
                    bool DiagNameHasBeenSet() const;

                    /**
                     * 获取ICD代码
                     * @return IcdCode ICD代码
                     * 
                     */
                    std::string GetIcdCode() const;

                    /**
                     * 设置ICD代码
                     * @param _icdCode ICD代码
                     * 
                     */
                    void SetIcdCode(const std::string& _icdCode);

                    /**
                     * 判断参数 IcdCode 是否已赋值
                     * @return IcdCode 是否已赋值
                     * 
                     */
                    bool IcdCodeHasBeenSet() const;

                private:

                    /**
                     * 给药频次编码
                     */
                    std::string m_freqCode;
                    bool m_freqCodeHasBeenSet;

                    /**
                     * 给药频次名称
                     */
                    std::string m_freqName;
                    bool m_freqNameHasBeenSet;

                    /**
                     * 是否禁用 0-启用 1-禁用
                     */
                    int64_t m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * 给药途径编码
                     */
                    std::string m_usageCode;
                    bool m_usageCodeHasBeenSet;

                    /**
                     * 给药途径名称
                     */
                    std::string m_usageName;
                    bool m_usageNameHasBeenSet;

                    /**
                     * 科室ID
                     */
                    std::string m_deptId;
                    bool m_deptIdHasBeenSet;

                    /**
                     * 科室名称
                     */
                    std::string m_deptName;
                    bool m_deptNameHasBeenSet;

                    /**
                     * 科室区域类型 0:门诊  1:住院  2:门诊+住院
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 门诊开关
                     */
                    bool m_outpatientOn;
                    bool m_outpatientOnHasBeenSet;

                    /**
                     * 住院
                     */
                    bool m_inHospitalOn;
                    bool m_inHospitalOnHasBeenSet;

                    /**
                     * 诊断编码
                     */
                    std::string m_diagCode;
                    bool m_diagCodeHasBeenSet;

                    /**
                     * 诊断名称
                     */
                    std::string m_diagName;
                    bool m_diagNameHasBeenSet;

                    /**
                     * ICD代码
                     */
                    std::string m_icdCode;
                    bool m_icdCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_DICT_H_
