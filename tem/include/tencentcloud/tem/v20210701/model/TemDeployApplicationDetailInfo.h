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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_TEMDEPLOYAPPLICATIONDETAILINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_TEMDEPLOYAPPLICATIONDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/DeployStrategyConf.h>
#include <tencentcloud/tem/v20210701/model/DeployServiceBatchDetail.h>
#include <tencentcloud/tem/v20210701/model/DescribeRunPodPage.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 分批发布详情
                */
                class TemDeployApplicationDetailInfo : public AbstractModel
                {
                public:
                    TemDeployApplicationDetailInfo();
                    ~TemDeployApplicationDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分批发布策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployStrategyConf 分批发布策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeployStrategyConf GetDeployStrategyConf() const;

                    /**
                     * 设置分批发布策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeployStrategyConf 分批发布策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeployStrategyConf(const DeployStrategyConf& _deployStrategyConf);

                    /**
                     * 判断参数 DeployStrategyConf 是否已赋值
                     * @return DeployStrategyConf 是否已赋值
                     */
                    bool DeployStrategyConfHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取当前状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 当前状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置当前状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 当前状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取beta分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BetaBatchDetail beta分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeployServiceBatchDetail GetBetaBatchDetail() const;

                    /**
                     * 设置beta分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BetaBatchDetail beta分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBetaBatchDetail(const DeployServiceBatchDetail& _betaBatchDetail);

                    /**
                     * 判断参数 BetaBatchDetail 是否已赋值
                     * @return BetaBatchDetail 是否已赋值
                     */
                    bool BetaBatchDetailHasBeenSet() const;

                    /**
                     * 获取其他分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherBatchDetail 其他分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeployServiceBatchDetail> GetOtherBatchDetail() const;

                    /**
                     * 设置其他分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OtherBatchDetail 其他分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOtherBatchDetail(const std::vector<DeployServiceBatchDetail>& _otherBatchDetail);

                    /**
                     * 判断参数 OtherBatchDetail 是否已赋值
                     * @return OtherBatchDetail 是否已赋值
                     */
                    bool OtherBatchDetailHasBeenSet() const;

                    /**
                     * 获取老版本pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldVersionPodList 老版本pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeRunPodPage GetOldVersionPodList() const;

                    /**
                     * 设置老版本pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OldVersionPodList 老版本pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOldVersionPodList(const DescribeRunPodPage& _oldVersionPodList);

                    /**
                     * 判断参数 OldVersionPodList 是否已赋值
                     * @return OldVersionPodList 是否已赋值
                     */
                    bool OldVersionPodListHasBeenSet() const;

                    /**
                     * 获取当前批次id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentBatchIndex 当前批次id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCurrentBatchIndex() const;

                    /**
                     * 设置当前批次id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CurrentBatchIndex 当前批次id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCurrentBatchIndex(const int64_t& _currentBatchIndex);

                    /**
                     * 判断参数 CurrentBatchIndex 是否已赋值
                     * @return CurrentBatchIndex 是否已赋值
                     */
                    bool CurrentBatchIndexHasBeenSet() const;

                    /**
                     * 获取错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorMessage 错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取当前批次状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentBatchStatus 当前批次状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCurrentBatchStatus() const;

                    /**
                     * 设置当前批次状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CurrentBatchStatus 当前批次状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCurrentBatchStatus(const std::string& _currentBatchStatus);

                    /**
                     * 判断参数 CurrentBatchStatus 是否已赋值
                     * @return CurrentBatchStatus 是否已赋值
                     */
                    bool CurrentBatchStatusHasBeenSet() const;

                private:

                    /**
                     * 分批发布策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeployStrategyConf m_deployStrategyConf;
                    bool m_deployStrategyConfHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 当前状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * beta分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeployServiceBatchDetail m_betaBatchDetail;
                    bool m_betaBatchDetailHasBeenSet;

                    /**
                     * 其他分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeployServiceBatchDetail> m_otherBatchDetail;
                    bool m_otherBatchDetailHasBeenSet;

                    /**
                     * 老版本pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeRunPodPage m_oldVersionPodList;
                    bool m_oldVersionPodListHasBeenSet;

                    /**
                     * 当前批次id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentBatchIndex;
                    bool m_currentBatchIndexHasBeenSet;

                    /**
                     * 错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 当前批次状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currentBatchStatus;
                    bool m_currentBatchStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMDEPLOYAPPLICATIONDETAILINFO_H_
