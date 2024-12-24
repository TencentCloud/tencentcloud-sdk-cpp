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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_EMRDIAGNOSISES_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_EMRDIAGNOSISES_H_

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
                * 诊断列表
                */
                class EmrDiagnosises : public AbstractModel
                {
                public:
                    EmrDiagnosises();
                    ~EmrDiagnosises() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断名称
                     * @return DiagnosisName 诊断名称
                     * 
                     */
                    std::string GetDiagnosisName() const;

                    /**
                     * 设置诊断名称
                     * @param _diagnosisName 诊断名称
                     * 
                     */
                    void SetDiagnosisName(const std::string& _diagnosisName);

                    /**
                     * 判断参数 DiagnosisName 是否已赋值
                     * @return DiagnosisName 是否已赋值
                     * 
                     */
                    bool DiagnosisNameHasBeenSet() const;

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
                     * 诊断名称
                     */
                    std::string m_diagnosisName;
                    bool m_diagnosisNameHasBeenSet;

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

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_EMRDIAGNOSISES_H_
