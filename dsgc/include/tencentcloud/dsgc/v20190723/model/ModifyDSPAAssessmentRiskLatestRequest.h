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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKLATESTREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKLATESTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDSPAAssessmentRiskLatest请求参数结构体
                */
                class ModifyDSPAAssessmentRiskLatestRequest : public AbstractModel
                {
                public:
                    ModifyDSPAAssessmentRiskLatestRequest();
                    ~ModifyDSPAAssessmentRiskLatestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dspa实例id
                     * @return DspaId dspa实例id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspa实例id
                     * @param _dspaId dspa实例id
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
                     * 获取风险状态（waiting:待处理，processing:处理中，finished:已处理，ignored:已忽略）
                     * @return Status 风险状态（waiting:待处理，processing:处理中，finished:已处理，ignored:已忽略）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置风险状态（waiting:待处理，processing:处理中，finished:已处理，ignored:已忽略）
                     * @param _status 风险状态（waiting:待处理，processing:处理中，finished:已处理，ignored:已忽略）
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取最新风险项Id
                     * @return RiskLatestTableId 最新风险项Id
                     * @deprecated
                     */
                    uint64_t GetRiskLatestTableId() const;

                    /**
                     * 设置最新风险项Id
                     * @param _riskLatestTableId 最新风险项Id
                     * @deprecated
                     */
                    void SetRiskLatestTableId(const uint64_t& _riskLatestTableId);

                    /**
                     * 判断参数 RiskLatestTableId 是否已赋值
                     * @return RiskLatestTableId 是否已赋值
                     * @deprecated
                     */
                    bool RiskLatestTableIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取处置人
                     * @return ProcessPeople 处置人
                     * 
                     */
                    std::string GetProcessPeople() const;

                    /**
                     * 设置处置人
                     * @param _processPeople 处置人
                     * 
                     */
                    void SetProcessPeople(const std::string& _processPeople);

                    /**
                     * 判断参数 ProcessPeople 是否已赋值
                     * @return ProcessPeople 是否已赋值
                     * 
                     */
                    bool ProcessPeopleHasBeenSet() const;

                    /**
                     * 获取批量处理的列表
                     * @return BathRiskIdList 批量处理的列表
                     * 
                     */
                    std::vector<int64_t> GetBathRiskIdList() const;

                    /**
                     * 设置批量处理的列表
                     * @param _bathRiskIdList 批量处理的列表
                     * 
                     */
                    void SetBathRiskIdList(const std::vector<int64_t>& _bathRiskIdList);

                    /**
                     * 判断参数 BathRiskIdList 是否已赋值
                     * @return BathRiskIdList 是否已赋值
                     * 
                     */
                    bool BathRiskIdListHasBeenSet() const;

                private:

                    /**
                     * dspa实例id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 风险状态（waiting:待处理，processing:处理中，finished:已处理，ignored:已忽略）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最新风险项Id
                     */
                    uint64_t m_riskLatestTableId;
                    bool m_riskLatestTableIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 处置人
                     */
                    std::string m_processPeople;
                    bool m_processPeopleHasBeenSet;

                    /**
                     * 批量处理的列表
                     */
                    std::vector<int64_t> m_bathRiskIdList;
                    bool m_bathRiskIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKLATESTREQUEST_H_
