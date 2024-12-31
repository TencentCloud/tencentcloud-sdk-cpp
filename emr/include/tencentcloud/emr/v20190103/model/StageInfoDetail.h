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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STAGEINFODETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STAGEINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 任务步骤详情
                */
                class StageInfoDetail : public AbstractModel
                {
                public:
                    StageInfoDetail();
                    ~StageInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤
                     * @return Stage 步骤
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置步骤
                     * @param _stage 步骤
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取步骤名
                     * @return Name 步骤名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置步骤名
                     * @param _name 步骤名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否展示
                     * @return IsShow 是否展示
                     * 
                     */
                    bool GetIsShow() const;

                    /**
                     * 设置是否展示
                     * @param _isShow 是否展示
                     * 
                     */
                    void SetIsShow(const bool& _isShow);

                    /**
                     * 判断参数 IsShow 是否已赋值
                     * @return IsShow 是否已赋值
                     * 
                     */
                    bool IsShowHasBeenSet() const;

                    /**
                     * 获取是否子流程
                     * @return IsSubFlow 是否子流程
                     * 
                     */
                    bool GetIsSubFlow() const;

                    /**
                     * 设置是否子流程
                     * @param _isSubFlow 是否子流程
                     * 
                     */
                    void SetIsSubFlow(const bool& _isSubFlow);

                    /**
                     * 判断参数 IsSubFlow 是否已赋值
                     * @return IsSubFlow 是否已赋值
                     * 
                     */
                    bool IsSubFlowHasBeenSet() const;

                    /**
                     * 获取子流程标签
                     * @return SubFlowFlag 子流程标签
                     * 
                     */
                    std::string GetSubFlowFlag() const;

                    /**
                     * 设置子流程标签
                     * @param _subFlowFlag 子流程标签
                     * 
                     */
                    void SetSubFlowFlag(const std::string& _subFlowFlag);

                    /**
                     * 判断参数 SubFlowFlag 是否已赋值
                     * @return SubFlowFlag 是否已赋值
                     * 
                     */
                    bool SubFlowFlagHasBeenSet() const;

                    /**
                     * 获取步骤运行状态：0:未开始 1:进行中 2:已完成 3:部分完成  -1:失败
                     * @return Status 步骤运行状态：0:未开始 1:进行中 2:已完成 3:部分完成  -1:失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置步骤运行状态：0:未开始 1:进行中 2:已完成 3:部分完成  -1:失败
                     * @param _status 步骤运行状态：0:未开始 1:进行中 2:已完成 3:部分完成  -1:失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取步骤运行状态描述
                     * @return Desc 步骤运行状态描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置步骤运行状态描述
                     * @param _desc 步骤运行状态描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取运行进度
                     * @return Progress 运行进度
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置运行进度
                     * @param _progress 运行进度
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Starttime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStarttime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _starttime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStarttime(const std::string& _starttime);

                    /**
                     * 判断参数 Starttime 是否已赋值
                     * @return Starttime 是否已赋值
                     * 
                     */
                    bool StarttimeHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endtime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndtime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endtime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndtime(const std::string& _endtime);

                    /**
                     * 判断参数 Endtime 是否已赋值
                     * @return Endtime 是否已赋值
                     * 
                     */
                    bool EndtimeHasBeenSet() const;

                    /**
                     * 获取是否有详情信息
                     * @return HadWoodDetail 是否有详情信息
                     * 
                     */
                    bool GetHadWoodDetail() const;

                    /**
                     * 设置是否有详情信息
                     * @param _hadWoodDetail 是否有详情信息
                     * 
                     */
                    void SetHadWoodDetail(const bool& _hadWoodDetail);

                    /**
                     * 判断参数 HadWoodDetail 是否已赋值
                     * @return HadWoodDetail 是否已赋值
                     * 
                     */
                    bool HadWoodDetailHasBeenSet() const;

                    /**
                     * 获取Wood子流程Id
                     * @return WoodJobId Wood子流程Id
                     * 
                     */
                    uint64_t GetWoodJobId() const;

                    /**
                     * 设置Wood子流程Id
                     * @param _woodJobId Wood子流程Id
                     * 
                     */
                    void SetWoodJobId(const uint64_t& _woodJobId);

                    /**
                     * 判断参数 WoodJobId 是否已赋值
                     * @return WoodJobId 是否已赋值
                     * 
                     */
                    bool WoodJobIdHasBeenSet() const;

                    /**
                     * 获取多语言版本Key
                     * @return LanguageKey 多语言版本Key
                     * 
                     */
                    std::string GetLanguageKey() const;

                    /**
                     * 设置多语言版本Key
                     * @param _languageKey 多语言版本Key
                     * 
                     */
                    void SetLanguageKey(const std::string& _languageKey);

                    /**
                     * 判断参数 LanguageKey 是否已赋值
                     * @return LanguageKey 是否已赋值
                     * 
                     */
                    bool LanguageKeyHasBeenSet() const;

                    /**
                     * 获取如果stage失败，失败原因
                     * @return FailedReason 如果stage失败，失败原因
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置如果stage失败，失败原因
                     * @param _failedReason 如果stage失败，失败原因
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取步骤耗时
                     * @return TimeConsuming 步骤耗时
                     * 
                     */
                    std::string GetTimeConsuming() const;

                    /**
                     * 设置步骤耗时
                     * @param _timeConsuming 步骤耗时
                     * 
                     */
                    void SetTimeConsuming(const std::string& _timeConsuming);

                    /**
                     * 判断参数 TimeConsuming 是否已赋值
                     * @return TimeConsuming 是否已赋值
                     * 
                     */
                    bool TimeConsumingHasBeenSet() const;

                private:

                    /**
                     * 步骤
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 步骤名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否展示
                     */
                    bool m_isShow;
                    bool m_isShowHasBeenSet;

                    /**
                     * 是否子流程
                     */
                    bool m_isSubFlow;
                    bool m_isSubFlowHasBeenSet;

                    /**
                     * 子流程标签
                     */
                    std::string m_subFlowFlag;
                    bool m_subFlowFlagHasBeenSet;

                    /**
                     * 步骤运行状态：0:未开始 1:进行中 2:已完成 3:部分完成  -1:失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 步骤运行状态描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 运行进度
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_starttime;
                    bool m_starttimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endtime;
                    bool m_endtimeHasBeenSet;

                    /**
                     * 是否有详情信息
                     */
                    bool m_hadWoodDetail;
                    bool m_hadWoodDetailHasBeenSet;

                    /**
                     * Wood子流程Id
                     */
                    uint64_t m_woodJobId;
                    bool m_woodJobIdHasBeenSet;

                    /**
                     * 多语言版本Key
                     */
                    std::string m_languageKey;
                    bool m_languageKeyHasBeenSet;

                    /**
                     * 如果stage失败，失败原因
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * 步骤耗时
                     */
                    std::string m_timeConsuming;
                    bool m_timeConsumingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STAGEINFODETAIL_H_
