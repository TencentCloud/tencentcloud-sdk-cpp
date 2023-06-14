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

#ifndef TENCENTCLOUD_TMS_V20200713_MODEL_RISKDETAILS_H_
#define TENCENTCLOUD_TMS_V20200713_MODEL_RISKDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * 账号风险检测结果
                */
                class RiskDetails : public AbstractModel
                {
                public:
                    RiskDetails();
                    ~RiskDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险类别，RiskAccount，RiskIP, RiskIMEI
                     * @return Label 风险类别，RiskAccount，RiskIP, RiskIMEI
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置风险类别，RiskAccount，RiskIP, RiskIMEI
                     * @param _label 风险类别，RiskAccount，RiskIP, RiskIMEI
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取风险等级，1:疑似，2：恶意
                     * @return Level 风险等级，1:疑似，2：恶意
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置风险等级，1:疑似，2：恶意
                     * @param _level 风险等级，1:疑似，2：恶意
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * 风险类别，RiskAccount，RiskIP, RiskIMEI
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 风险等级，1:疑似，2：恶意
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_RISKDETAILS_H_
