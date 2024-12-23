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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_RISKLEVELRISK_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_RISKLEVELRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 风险等级列表
                */
                class RiskLevelRisk : public AbstractModel
                {
                public:
                    RiskLevelRisk();
                    ~RiskLevelRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险id
                     * @return Id 风险id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置风险id
                     * @param _id 风险id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取风险等级列表
                     * @return RiskLevelName 风险等级列表
                     * 
                     */
                    std::string GetRiskLevelName() const;

                    /**
                     * 设置风险等级列表
                     * @param _riskLevelName 风险等级列表
                     * 
                     */
                    void SetRiskLevelName(const std::string& _riskLevelName);

                    /**
                     * 判断参数 RiskLevelName 是否已赋值
                     * @return RiskLevelName 是否已赋值
                     * 
                     */
                    bool RiskLevelNameHasBeenSet() const;

                    /**
                     * 获取风险级别描述
                     * @return RiskLevelDescription 风险级别描述
                     * 
                     */
                    std::string GetRiskLevelDescription() const;

                    /**
                     * 设置风险级别描述
                     * @param _riskLevelDescription 风险级别描述
                     * 
                     */
                    void SetRiskLevelDescription(const std::string& _riskLevelDescription);

                    /**
                     * 判断参数 RiskLevelDescription 是否已赋值
                     * @return RiskLevelDescription 是否已赋值
                     * 
                     */
                    bool RiskLevelDescriptionHasBeenSet() const;

                    /**
                     * 获取引用的分类分级模板
                     * @return IdentifyComplianceName 引用的分类分级模板
                     * 
                     */
                    std::string GetIdentifyComplianceName() const;

                    /**
                     * 设置引用的分类分级模板
                     * @param _identifyComplianceName 引用的分类分级模板
                     * 
                     */
                    void SetIdentifyComplianceName(const std::string& _identifyComplianceName);

                    /**
                     * 判断参数 IdentifyComplianceName 是否已赋值
                     * @return IdentifyComplianceName 是否已赋值
                     * 
                     */
                    bool IdentifyComplianceNameHasBeenSet() const;

                    /**
                     * 获取类型，区分自定义还是系统内置
                     * @return Type 类型，区分自定义还是系统内置
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，区分自定义还是系统内置
                     * @param _type 类型，区分自定义还是系统内置
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 风险id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 风险等级列表
                     */
                    std::string m_riskLevelName;
                    bool m_riskLevelNameHasBeenSet;

                    /**
                     * 风险级别描述
                     */
                    std::string m_riskLevelDescription;
                    bool m_riskLevelDescriptionHasBeenSet;

                    /**
                     * 引用的分类分级模板
                     */
                    std::string m_identifyComplianceName;
                    bool m_identifyComplianceNameHasBeenSet;

                    /**
                     * 类型，区分自定义还是系统内置
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_RISKLEVELRISK_H_
