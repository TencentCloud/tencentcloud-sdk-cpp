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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_CURRENTDIAGNOSIS_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_CURRENTDIAGNOSIS_H_

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
                * 当前诊断
                */
                class CurrentDiagnosis : public AbstractModel
                {
                public:
                    CurrentDiagnosis();
                    ~CurrentDiagnosis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断疾病
                     * @return DiagnoseDisease 诊断疾病
                     * 
                     */
                    std::string GetDiagnoseDisease() const;

                    /**
                     * 设置诊断疾病
                     * @param _diagnoseDisease 诊断疾病
                     * 
                     */
                    void SetDiagnoseDisease(const std::string& _diagnoseDisease);

                    /**
                     * 判断参数 DiagnoseDisease 是否已赋值
                     * @return DiagnoseDisease 是否已赋值
                     * 
                     */
                    bool DiagnoseDiseaseHasBeenSet() const;

                    /**
                     * 获取疾病指南信息
                     * @return DiseaseGuideInfo 疾病指南信息
                     * 
                     */
                    std::string GetDiseaseGuideInfo() const;

                    /**
                     * 设置疾病指南信息
                     * @param _diseaseGuideInfo 疾病指南信息
                     * 
                     */
                    void SetDiseaseGuideInfo(const std::string& _diseaseGuideInfo);

                    /**
                     * 判断参数 DiseaseGuideInfo 是否已赋值
                     * @return DiseaseGuideInfo 是否已赋值
                     * 
                     */
                    bool DiseaseGuideInfoHasBeenSet() const;

                    /**
                     * 获取标准名称
                     * @return StandardName 标准名称
                     * 
                     */
                    std::string GetStandardName() const;

                    /**
                     * 设置标准名称
                     * @param _standardName 标准名称
                     * 
                     */
                    void SetStandardName(const std::string& _standardName);

                    /**
                     * 判断参数 StandardName 是否已赋值
                     * @return StandardName 是否已赋值
                     * 
                     */
                    bool StandardNameHasBeenSet() const;

                private:

                    /**
                     * 诊断疾病
                     */
                    std::string m_diagnoseDisease;
                    bool m_diagnoseDiseaseHasBeenSet;

                    /**
                     * 疾病指南信息
                     */
                    std::string m_diseaseGuideInfo;
                    bool m_diseaseGuideInfoHasBeenSet;

                    /**
                     * 标准名称
                     */
                    std::string m_standardName;
                    bool m_standardNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_CURRENTDIAGNOSIS_H_
