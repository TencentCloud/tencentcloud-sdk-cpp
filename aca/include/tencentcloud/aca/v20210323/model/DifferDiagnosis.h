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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_DIFFERDIAGNOSIS_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_DIFFERDIAGNOSIS_H_

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
                * 鉴别诊断
                */
                class DifferDiagnosis : public AbstractModel
                {
                public:
                    DifferDiagnosis();
                    ~DifferDiagnosis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴别名称
                     * @return DifferName 鉴别名称
                     * 
                     */
                    std::string GetDifferName() const;

                    /**
                     * 设置鉴别名称
                     * @param _differName 鉴别名称
                     * 
                     */
                    void SetDifferName(const std::string& _differName);

                    /**
                     * 判断参数 DifferName 是否已赋值
                     * @return DifferName 是否已赋值
                     * 
                     */
                    bool DifferNameHasBeenSet() const;

                    /**
                     * 获取鉴别提示
                     * @return DifferTips 鉴别提示
                     * 
                     */
                    std::string GetDifferTips() const;

                    /**
                     * 设置鉴别提示
                     * @param _differTips 鉴别提示
                     * 
                     */
                    void SetDifferTips(const std::string& _differTips);

                    /**
                     * 判断参数 DifferTips 是否已赋值
                     * @return DifferTips 是否已赋值
                     * 
                     */
                    bool DifferTipsHasBeenSet() const;

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

                private:

                    /**
                     * 鉴别名称
                     */
                    std::string m_differName;
                    bool m_differNameHasBeenSet;

                    /**
                     * 鉴别提示
                     */
                    std::string m_differTips;
                    bool m_differTipsHasBeenSet;

                    /**
                     * 疾病指南信息
                     */
                    std::string m_diseaseGuideInfo;
                    bool m_diseaseGuideInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_DIFFERDIAGNOSIS_H_
