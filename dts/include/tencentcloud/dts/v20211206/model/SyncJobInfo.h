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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SYNCJOBINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SYNCJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Options.h>
#include <tencentcloud/dts/v20211206/model/Objects.h>
#include <tencentcloud/dts/v20211206/model/Endpoint.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>
#include <tencentcloud/dts/v20211206/model/SyncDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 同步任务信息
                */
                class SyncJobInfo : public AbstractModel
                {
                public:
                    SyncJobInfo();
                    ~SyncJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取同步任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 同步任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置同步任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param JobId 同步任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取同步任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobName 同步任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置同步任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param JobName 同步任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取付款方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 付款方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付款方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PayMode 付款方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取运行模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunMode 运行模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置运行模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunMode 运行模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取期待运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpectRunTime 期待运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置期待运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpectRunTime 期待运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取支持的所有操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllActions 支持的所有操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetAllActions() const;

                    /**
                     * 设置支持的所有操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AllActions 支持的所有操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAllActions(const std::vector<std::string>& _allActions);

                    /**
                     * 判断参数 AllActions 是否已赋值
                     * @return AllActions 是否已赋值
                     */
                    bool AllActionsHasBeenSet() const;

                    /**
                     * 获取当前状态能进行的操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Actions 当前状态能进行的操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetActions() const;

                    /**
                     * 设置当前状态能进行的操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Actions 当前状态能进行的操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetActions(const std::vector<std::string>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取同步选项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Options 同步选项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Options GetOptions() const;

                    /**
                     * 设置同步选项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Options 同步选项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOptions(const Options& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取同步库表对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Objects 同步库表对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Objects GetObjects() const;

                    /**
                     * 设置同步库表对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Objects 同步库表对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetObjects(const Objects& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取任务规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Specification 任务规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置任务规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Specification 任务规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取源端地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcRegion 源端地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置源端地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SrcRegion 源端地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取源端数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcDatabaseType 源端数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置源端数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SrcDatabaseType 源端数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取源端接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcAccessType 源端接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置源端接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SrcAccessType 源端接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取源端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcInfo 源端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Endpoint GetSrcInfo() const;

                    /**
                     * 设置源端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SrcInfo 源端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrcInfo(const Endpoint& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取目标端地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstRegion 目标端地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置目标端地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DstRegion 目标端地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取目标端数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstDatabaseType 目标端数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置目标端数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DstDatabaseType 目标端数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取目标端接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstAccessType 目标端接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置目标端接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DstAccessType 目标端接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取目标端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstInfo 目标端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Endpoint GetDstInfo() const;

                    /**
                     * 设置目标端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DstInfo 目标端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDstInfo(const Endpoint& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

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
                     * 获取任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取标签相关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签相关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置标签相关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签相关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取同步任务运行步骤信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 同步任务运行步骤信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SyncDetailInfo GetDetail() const;

                    /**
                     * 设置同步任务运行步骤信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Detail 同步任务运行步骤信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetail(const SyncDetailInfo& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 同步任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 同步任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 付款方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 运行模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 期待运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * 支持的所有操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_allActions;
                    bool m_allActionsHasBeenSet;

                    /**
                     * 当前状态能进行的操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 同步选项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Options m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * 同步库表对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Objects m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * 任务规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 源端地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * 源端数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * 源端接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * 源端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Endpoint m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 目标端地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * 目标端数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * 目标端接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * 目标端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Endpoint m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

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
                     * 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 标签相关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 同步任务运行步骤信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SyncDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SYNCJOBINFO_H_
