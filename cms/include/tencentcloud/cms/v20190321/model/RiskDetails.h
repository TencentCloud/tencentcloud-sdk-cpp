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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_RISKDETAILS_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_RISKDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
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
                     * 获取预留字段，暂时不使用
                     * @return Keywords 预留字段，暂时不使用
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置预留字段，暂时不使用
                     * @param _keywords 预留字段，暂时不使用
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取预留字段，暂时不用
                     * @return Lable 预留字段，暂时不用
                     * 
                     */
                    std::string GetLable() const;

                    /**
                     * 设置预留字段，暂时不用
                     * @param _lable 预留字段，暂时不用
                     * 
                     */
                    void SetLable(const std::string& _lable);

                    /**
                     * 判断参数 Lable 是否已赋值
                     * @return Lable 是否已赋值
                     * 
                     */
                    bool LableHasBeenSet() const;

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
                     * 预留字段，暂时不使用
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 预留字段，暂时不用
                     */
                    std::string m_lable;
                    bool m_lableHasBeenSet;

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

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_RISKDETAILS_H_
