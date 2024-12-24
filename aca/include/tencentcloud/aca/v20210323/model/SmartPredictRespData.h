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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_SMARTPREDICTRESPDATA_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_SMARTPREDICTRESPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/DiagnosisInfo.h>
#include <tencentcloud/aca/v20210323/model/RationalDrugInfo.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 智能问诊响应数据
                */
                class SmartPredictRespData : public AbstractModel
                {
                public:
                    SmartPredictRespData();
                    ~SmartPredictRespData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断辅助内容
                     * @return DiagnosisInfo 诊断辅助内容
                     * 
                     */
                    DiagnosisInfo GetDiagnosisInfo() const;

                    /**
                     * 设置诊断辅助内容
                     * @param _diagnosisInfo 诊断辅助内容
                     * 
                     */
                    void SetDiagnosisInfo(const DiagnosisInfo& _diagnosisInfo);

                    /**
                     * 判断参数 DiagnosisInfo 是否已赋值
                     * @return DiagnosisInfo 是否已赋值
                     * 
                     */
                    bool DiagnosisInfoHasBeenSet() const;

                    /**
                     * 获取用药风险信息
                     * @return RationalDrugInfo 用药风险信息
                     * 
                     */
                    RationalDrugInfo GetRationalDrugInfo() const;

                    /**
                     * 设置用药风险信息
                     * @param _rationalDrugInfo 用药风险信息
                     * 
                     */
                    void SetRationalDrugInfo(const RationalDrugInfo& _rationalDrugInfo);

                    /**
                     * 判断参数 RationalDrugInfo 是否已赋值
                     * @return RationalDrugInfo 是否已赋值
                     * 
                     */
                    bool RationalDrugInfoHasBeenSet() const;

                private:

                    /**
                     * 诊断辅助内容
                     */
                    DiagnosisInfo m_diagnosisInfo;
                    bool m_diagnosisInfoHasBeenSet;

                    /**
                     * 用药风险信息
                     */
                    RationalDrugInfo m_rationalDrugInfo;
                    bool m_rationalDrugInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_SMARTPREDICTRESPDATA_H_
