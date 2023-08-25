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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DECRIBESUGGESTRISKLEVELMATRIXREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DECRIBESUGGESTRISKLEVELMATRIXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/RiskMatrixLevel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DecribeSuggestRiskLevelMatrix请求参数结构体
                */
                class DecribeSuggestRiskLevelMatrixRequest : public AbstractModel
                {
                public:
                    DecribeSuggestRiskLevelMatrixRequest();
                    ~DecribeSuggestRiskLevelMatrixRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dspaId

                     * @return DspaId dspaId

                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspaId

                     * @param _dspaId dspaId

                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取分类分级等级列表
                     * @return SensitiveLevelList 分类分级等级列表
                     * 
                     */
                    std::vector<RiskMatrixLevel> GetSensitiveLevelList() const;

                    /**
                     * 设置分类分级等级列表
                     * @param _sensitiveLevelList 分类分级等级列表
                     * 
                     */
                    void SetSensitiveLevelList(const std::vector<RiskMatrixLevel>& _sensitiveLevelList);

                    /**
                     * 判断参数 SensitiveLevelList 是否已赋值
                     * @return SensitiveLevelList 是否已赋值
                     * 
                     */
                    bool SensitiveLevelListHasBeenSet() const;

                    /**
                     * 获取脆弱项等级列表
                     * @return VulnerabilityLevelList 脆弱项等级列表
                     * 
                     */
                    std::vector<RiskMatrixLevel> GetVulnerabilityLevelList() const;

                    /**
                     * 设置脆弱项等级列表
                     * @param _vulnerabilityLevelList 脆弱项等级列表
                     * 
                     */
                    void SetVulnerabilityLevelList(const std::vector<RiskMatrixLevel>& _vulnerabilityLevelList);

                    /**
                     * 判断参数 VulnerabilityLevelList 是否已赋值
                     * @return VulnerabilityLevelList 是否已赋值
                     * 
                     */
                    bool VulnerabilityLevelListHasBeenSet() const;

                private:

                    /**
                     * dspaId

                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 分类分级等级列表
                     */
                    std::vector<RiskMatrixLevel> m_sensitiveLevelList;
                    bool m_sensitiveLevelListHasBeenSet;

                    /**
                     * 脆弱项等级列表
                     */
                    std::vector<RiskMatrixLevel> m_vulnerabilityLevelList;
                    bool m_vulnerabilityLevelListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DECRIBESUGGESTRISKLEVELMATRIXREQUEST_H_
