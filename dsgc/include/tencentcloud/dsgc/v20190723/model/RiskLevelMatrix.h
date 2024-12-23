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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_RISKLEVELMATRIX_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_RISKLEVELMATRIX_H_

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
                * 风险级别详情的矩阵
                */
                class RiskLevelMatrix : public AbstractModel
                {
                public:
                    RiskLevelMatrix();
                    ~RiskLevelMatrix() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储id
                     * @return Id 存储id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置存储id
                     * @param _id 存储id
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
                     * 获取分类分级levelID
                     * @return SensitiveLevelId 分类分级levelID
                     * 
                     */
                    int64_t GetSensitiveLevelId() const;

                    /**
                     * 设置分类分级levelID
                     * @param _sensitiveLevelId 分类分级levelID
                     * 
                     */
                    void SetSensitiveLevelId(const int64_t& _sensitiveLevelId);

                    /**
                     * 判断参数 SensitiveLevelId 是否已赋值
                     * @return SensitiveLevelId 是否已赋值
                     * 
                     */
                    bool SensitiveLevelIdHasBeenSet() const;

                    /**
                     * 获取分类分级名称
                     * @return SensitiveLevelName 分类分级名称
                     * 
                     */
                    std::string GetSensitiveLevelName() const;

                    /**
                     * 设置分类分级名称
                     * @param _sensitiveLevelName 分类分级名称
                     * 
                     */
                    void SetSensitiveLevelName(const std::string& _sensitiveLevelName);

                    /**
                     * 判断参数 SensitiveLevelName 是否已赋值
                     * @return SensitiveLevelName 是否已赋值
                     * 
                     */
                    bool SensitiveLevelNameHasBeenSet() const;

                    /**
                     * 获取漏洞级别
                     * @return VulnerabilityLevel 漏洞级别
                     * 
                     */
                    std::string GetVulnerabilityLevel() const;

                    /**
                     * 设置漏洞级别
                     * @param _vulnerabilityLevel 漏洞级别
                     * 
                     */
                    void SetVulnerabilityLevel(const std::string& _vulnerabilityLevel);

                    /**
                     * 判断参数 VulnerabilityLevel 是否已赋值
                     * @return VulnerabilityLevel 是否已赋值
                     * 
                     */
                    bool VulnerabilityLevelHasBeenSet() const;

                    /**
                     * 获取风险级别
                     * @return RiskLevel 风险级别
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险级别
                     * @param _riskLevel 风险级别
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                private:

                    /**
                     * 存储id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 分类分级levelID
                     */
                    int64_t m_sensitiveLevelId;
                    bool m_sensitiveLevelIdHasBeenSet;

                    /**
                     * 分类分级名称
                     */
                    std::string m_sensitiveLevelName;
                    bool m_sensitiveLevelNameHasBeenSet;

                    /**
                     * 漏洞级别
                     */
                    std::string m_vulnerabilityLevel;
                    bool m_vulnerabilityLevelHasBeenSet;

                    /**
                     * 风险级别
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_RISKLEVELMATRIX_H_
