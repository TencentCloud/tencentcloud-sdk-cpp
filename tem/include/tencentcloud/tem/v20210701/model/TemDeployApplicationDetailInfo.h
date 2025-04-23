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
                     * 
                     */
                    DeployStrategyConf GetDeployStrategyConf() const;

                    /**
                     * 设置分批发布策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployStrategyConf 分批发布策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployStrategyConf(const DeployStrategyConf& _deployStrategyConf);

                    /**
                     * 判断参数 DeployStrategyConf 是否已赋值
                     * @return DeployStrategyConf 是否已赋值
                     * 
                     */
                    bool DeployStrategyConfHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取当前状态
                     * @return Status 当前状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置当前状态
                     * @param _status 当前状态
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
                     * 获取beta分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BetaBatchDetail beta分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DeployServiceBatchDetail GetBetaBatchDetail() const;

                    /**
                     * 设置beta分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _betaBatchDetail beta分批详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBetaBatchDetail(const DeployServiceBatchDetail& _betaBatchDetail);

                    /**
                     * 判断参数 BetaBatchDetail 是否已赋值
                     * @return BetaBatchDetail 是否已赋值
                     * 
                     */
                    bool BetaBatchDetailHasBeenSet() const;

                    /**
                     * 获取其他分批详情
                     * @return OtherBatchDetail 其他分批详情
                     * 
                     */
                    std::vector<DeployServiceBatchDetail> GetOtherBatchDetail() const;

                    /**
                     * 设置其他分批详情
                     * @param _otherBatchDetail 其他分批详情
                     * 
                     */
                    void SetOtherBatchDetail(const std::vector<DeployServiceBatchDetail>& _otherBatchDetail);

                    /**
                     * 判断参数 OtherBatchDetail 是否已赋值
                     * @return OtherBatchDetail 是否已赋值
                     * 
                     */
                    bool OtherBatchDetailHasBeenSet() const;

                    /**
                     * 获取老版本pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldVersionPodList 老版本pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeRunPodPage GetOldVersionPodList() const;

                    /**
                     * 设置老版本pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldVersionPodList 老版本pod列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldVersionPodList(const DescribeRunPodPage& _oldVersionPodList);

                    /**
                     * 判断参数 OldVersionPodList 是否已赋值
                     * @return OldVersionPodList 是否已赋值
                     * 
                     */
                    bool OldVersionPodListHasBeenSet() const;

                    /**
                     * 获取当前批次id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentBatchIndex 当前批次id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCurrentBatchIndex() const;

                    /**
                     * 设置当前批次id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentBatchIndex 当前批次id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentBatchIndex(const int64_t& _currentBatchIndex);

                    /**
                     * 判断参数 CurrentBatchIndex 是否已赋值
                     * @return CurrentBatchIndex 是否已赋值
                     * 
                     */
                    bool CurrentBatchIndexHasBeenSet() const;

                    /**
                     * 获取错误原因
                     * @return ErrorMessage 错误原因
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误原因
                     * @param _errorMessage 错误原因
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取当前批次状态
                     * @return CurrentBatchStatus 当前批次状态
                     * 
                     */
                    std::string GetCurrentBatchStatus() const;

                    /**
                     * 设置当前批次状态
                     * @param _currentBatchStatus 当前批次状态
                     * 
                     */
                    void SetCurrentBatchStatus(const std::string& _currentBatchStatus);

                    /**
                     * 判断参数 CurrentBatchStatus 是否已赋值
                     * @return CurrentBatchStatus 是否已赋值
                     * 
                     */
                    bool CurrentBatchStatusHasBeenSet() const;

                    /**
                     * 获取新版本version
                     * @return NewDeployVersion 新版本version
                     * 
                     */
                    std::string GetNewDeployVersion() const;

                    /**
                     * 设置新版本version
                     * @param _newDeployVersion 新版本version
                     * 
                     */
                    void SetNewDeployVersion(const std::string& _newDeployVersion);

                    /**
                     * 判断参数 NewDeployVersion 是否已赋值
                     * @return NewDeployVersion 是否已赋值
                     * 
                     */
                    bool NewDeployVersionHasBeenSet() const;

                    /**
                     * 获取旧版本version
                     * @return OldDeployVersion 旧版本version
                     * 
                     */
                    std::string GetOldDeployVersion() const;

                    /**
                     * 设置旧版本version
                     * @param _oldDeployVersion 旧版本version
                     * 
                     */
                    void SetOldDeployVersion(const std::string& _oldDeployVersion);

                    /**
                     * 判断参数 OldDeployVersion 是否已赋值
                     * @return OldDeployVersion 是否已赋值
                     * 
                     */
                    bool OldDeployVersionHasBeenSet() const;

                    /**
                     * 获取包名称
                     * @return NewVersionPackageInfo 包名称
                     * 
                     */
                    std::string GetNewVersionPackageInfo() const;

                    /**
                     * 设置包名称
                     * @param _newVersionPackageInfo 包名称
                     * 
                     */
                    void SetNewVersionPackageInfo(const std::string& _newVersionPackageInfo);

                    /**
                     * 判断参数 NewVersionPackageInfo 是否已赋值
                     * @return NewVersionPackageInfo 是否已赋值
                     * 
                     */
                    bool NewVersionPackageInfoHasBeenSet() const;

                    /**
                     * 获取下一批次开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextBatchStartTime 下一批次开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNextBatchStartTime() const;

                    /**
                     * 设置下一批次开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextBatchStartTime 下一批次开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextBatchStartTime(const int64_t& _nextBatchStartTime);

                    /**
                     * 判断参数 NextBatchStartTime 是否已赋值
                     * @return NextBatchStartTime 是否已赋值
                     * 
                     */
                    bool NextBatchStartTimeHasBeenSet() const;

                private:

                    /**
                     * 分批发布策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeployStrategyConf m_deployStrategyConf;
                    bool m_deployStrategyConfHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 当前状态
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
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 当前批次状态
                     */
                    std::string m_currentBatchStatus;
                    bool m_currentBatchStatusHasBeenSet;

                    /**
                     * 新版本version
                     */
                    std::string m_newDeployVersion;
                    bool m_newDeployVersionHasBeenSet;

                    /**
                     * 旧版本version
                     */
                    std::string m_oldDeployVersion;
                    bool m_oldDeployVersionHasBeenSet;

                    /**
                     * 包名称
                     */
                    std::string m_newVersionPackageInfo;
                    bool m_newVersionPackageInfoHasBeenSet;

                    /**
                     * 下一批次开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nextBatchStartTime;
                    bool m_nextBatchStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMDEPLOYAPPLICATIONDETAILINFO_H_
