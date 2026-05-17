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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKTRENDINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKTRENDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 对象存储风险趋势图
                */
                class CosRiskTrendInfo : public AbstractModel
                {
                public:
                    CosRiskTrendInfo();
                    ~CosRiskTrendInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前日期
                     * @return CurrentDateStr 当前日期
                     * 
                     */
                    std::string GetCurrentDateStr() const;

                    /**
                     * 设置当前日期
                     * @param _currentDateStr 当前日期
                     * 
                     */
                    void SetCurrentDateStr(const std::string& _currentDateStr);

                    /**
                     * 判断参数 CurrentDateStr 是否已赋值
                     * @return CurrentDateStr 是否已赋值
                     * 
                     */
                    bool CurrentDateStrHasBeenSet() const;

                    /**
                     * 获取风险数据信息
                     * @return RiskDataSet 风险数据信息
                     * 
                     */
                    std::vector<CosRiskInfo> GetRiskDataSet() const;

                    /**
                     * 设置风险数据信息
                     * @param _riskDataSet 风险数据信息
                     * 
                     */
                    void SetRiskDataSet(const std::vector<CosRiskInfo>& _riskDataSet);

                    /**
                     * 判断参数 RiskDataSet 是否已赋值
                     * @return RiskDataSet 是否已赋值
                     * 
                     */
                    bool RiskDataSetHasBeenSet() const;

                private:

                    /**
                     * 当前日期
                     */
                    std::string m_currentDateStr;
                    bool m_currentDateStrHasBeenSet;

                    /**
                     * 风险数据信息
                     */
                    std::vector<CosRiskInfo> m_riskDataSet;
                    bool m_riskDataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKTRENDINFO_H_
