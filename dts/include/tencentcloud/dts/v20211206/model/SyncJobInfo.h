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
#include <tencentcloud/dts/v20211206/model/SyncDBEndpointInfos.h>
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
                     * 获取同步任务id，如：sync-btso140
                     * @return JobId 同步任务id，如：sync-btso140
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置同步任务id，如：sync-btso140
                     * @param _jobId 同步任务id，如：sync-btso140
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取同步任务名
                     * @return JobName 同步任务名
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置同步任务名
                     * @param _jobName 同步任务名
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取付款方式，PostPay(按量付费)、PrePay(包年包月)
                     * @return PayMode 付款方式，PostPay(按量付费)、PrePay(包年包月)
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付款方式，PostPay(按量付费)、PrePay(包年包月)
                     * @param _payMode 付款方式，PostPay(按量付费)、PrePay(包年包月)
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取运行模式，Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     * @return RunMode 运行模式，Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置运行模式，Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     * @param _runMode 运行模式，Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取期待运行时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @return ExpectRunTime 期待运行时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置期待运行时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @param _expectRunTime 期待运行时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     * 
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取支持的所有操作
                     * @return AllActions 支持的所有操作
                     * 
                     */
                    std::vector<std::string> GetAllActions() const;

                    /**
                     * 设置支持的所有操作
                     * @param _allActions 支持的所有操作
                     * 
                     */
                    void SetAllActions(const std::vector<std::string>& _allActions);

                    /**
                     * 判断参数 AllActions 是否已赋值
                     * @return AllActions 是否已赋值
                     * 
                     */
                    bool AllActionsHasBeenSet() const;

                    /**
                     * 获取当前状态能进行的操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Actions 当前状态能进行的操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetActions() const;

                    /**
                     * 设置当前状态能进行的操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actions 当前状态能进行的操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActions(const std::vector<std::string>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取同步选项
                     * @return Options 同步选项
                     * 
                     */
                    Options GetOptions() const;

                    /**
                     * 设置同步选项
                     * @param _options 同步选项
                     * 
                     */
                    void SetOptions(const Options& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取同步库表对象
                     * @return Objects 同步库表对象
                     * 
                     */
                    Objects GetObjects() const;

                    /**
                     * 设置同步库表对象
                     * @param _objects 同步库表对象
                     * 
                     */
                    void SetObjects(const Objects& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取任务规格
                     * @return Specification 任务规格
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置任务规格
                     * @param _specification 任务规格
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取过期时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @return ExpireTime 过期时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @param _expireTime 过期时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取源端地域，如：ap-guangzhou等
                     * @return SrcRegion 源端地域，如：ap-guangzhou等
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置源端地域，如：ap-guangzhou等
                     * @param _srcRegion 源端地域，如：ap-guangzhou等
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取源端数据库类型，mysql,cynosdbmysql,tdapg,tdpg,tdsqlmysql等
                     * @return SrcDatabaseType 源端数据库类型，mysql,cynosdbmysql,tdapg,tdpg,tdsqlmysql等
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置源端数据库类型，mysql,cynosdbmysql,tdapg,tdpg,tdsqlmysql等
                     * @param _srcDatabaseType 源端数据库类型，mysql,cynosdbmysql,tdapg,tdpg,tdsqlmysql等
                     * 
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     * 
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)
                     * @return SrcAccessType 源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)
                     * 
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)
                     * @param _srcAccessType 源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)
                     * 
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     * 
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取源端信息，单节点数据库使用
                     * @return SrcInfo 源端信息，单节点数据库使用
                     * 
                     */
                    Endpoint GetSrcInfo() const;

                    /**
                     * 设置源端信息，单节点数据库使用
                     * @param _srcInfo 源端信息，单节点数据库使用
                     * 
                     */
                    void SetSrcInfo(const Endpoint& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster
                     * @return SrcNodeType 枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster
                     * 
                     */
                    std::string GetSrcNodeType() const;

                    /**
                     * 设置枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster
                     * @param _srcNodeType 枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster
                     * 
                     */
                    void SetSrcNodeType(const std::string& _srcNodeType);

                    /**
                     * 判断参数 SrcNodeType 是否已赋值
                     * @return SrcNodeType 是否已赋值
                     * 
                     */
                    bool SrcNodeTypeHasBeenSet() const;

                    /**
                     * 获取源端信息，多节点数据库使用
                     * @return SrcInfos 源端信息，多节点数据库使用
                     * 
                     */
                    SyncDBEndpointInfos GetSrcInfos() const;

                    /**
                     * 设置源端信息，多节点数据库使用
                     * @param _srcInfos 源端信息，多节点数据库使用
                     * 
                     */
                    void SetSrcInfos(const SyncDBEndpointInfos& _srcInfos);

                    /**
                     * 判断参数 SrcInfos 是否已赋值
                     * @return SrcInfos 是否已赋值
                     * 
                     */
                    bool SrcInfosHasBeenSet() const;

                    /**
                     * 获取目标端地域，如：ap-guangzhou等
                     * @return DstRegion 目标端地域，如：ap-guangzhou等
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置目标端地域，如：ap-guangzhou等
                     * @param _dstRegion 目标端地域，如：ap-guangzhou等
                     * 
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     * 
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取目标端数据库类型，mysql,cynosdbmysql,tdapg,tdpg,tdsqlmysql等
                     * @return DstDatabaseType 目标端数据库类型，mysql,cynosdbmysql,tdapg,tdpg,tdsqlmysql等
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置目标端数据库类型，mysql,cynosdbmysql,tdapg,tdpg,tdsqlmysql等
                     * @param _dstDatabaseType 目标端数据库类型，mysql,cynosdbmysql,tdapg,tdpg,tdsqlmysql等
                     * 
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)
                     * @return DstAccessType 目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)
                     * 
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)
                     * @param _dstAccessType 目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)
                     * 
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     * 
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取目标端信息，单节点数据库使用
                     * @return DstInfo 目标端信息，单节点数据库使用
                     * 
                     */
                    Endpoint GetDstInfo() const;

                    /**
                     * 设置目标端信息，单节点数据库使用
                     * @param _dstInfo 目标端信息，单节点数据库使用
                     * 
                     */
                    void SetDstInfo(const Endpoint& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster
                     * @return DstNodeType 枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster
                     * 
                     */
                    std::string GetDstNodeType() const;

                    /**
                     * 设置枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster
                     * @param _dstNodeType 枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster
                     * 
                     */
                    void SetDstNodeType(const std::string& _dstNodeType);

                    /**
                     * 判断参数 DstNodeType 是否已赋值
                     * @return DstNodeType 是否已赋值
                     * 
                     */
                    bool DstNodeTypeHasBeenSet() const;

                    /**
                     * 获取目标端信息，多节点数据库使用
                     * @return DstInfos 目标端信息，多节点数据库使用
                     * 
                     */
                    SyncDBEndpointInfos GetDstInfos() const;

                    /**
                     * 设置目标端信息，多节点数据库使用
                     * @param _dstInfos 目标端信息，多节点数据库使用
                     * 
                     */
                    void SetDstInfos(const SyncDBEndpointInfos& _dstInfos);

                    /**
                     * 判断参数 DstInfos 是否已赋值
                     * @return DstInfos 是否已赋值
                     * 
                     */
                    bool DstInfosHasBeenSet() const;

                    /**
                     * 获取创建时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @return CreateTime 创建时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @param _createTime 创建时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取开始时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @return StartTime 开始时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @param _startTime 开始时间，格式为 yyyy-mm-dd hh:mm:ss
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
                     * 获取任务状态，UnInitialized(未初始化)、Initialized(已初始化)、Checking(校验中)、CheckPass(校验通过)、CheckNotPass(校验不通过)、ReadyRunning(准备运行)、Running(运行中)、Pausing(暂停中)、Paused(已暂停)、Stopping(停止中)、Stopped(已结束)、ResumableErr(任务错误)、Resuming(恢复中)、Failed(失败)、Released(已释放)、Resetting(重置中)、Unknown(未知)
                     * @return Status 任务状态，UnInitialized(未初始化)、Initialized(已初始化)、Checking(校验中)、CheckPass(校验通过)、CheckNotPass(校验不通过)、ReadyRunning(准备运行)、Running(运行中)、Pausing(暂停中)、Paused(已暂停)、Stopping(停止中)、Stopped(已结束)、ResumableErr(任务错误)、Resuming(恢复中)、Failed(失败)、Released(已释放)、Resetting(重置中)、Unknown(未知)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，UnInitialized(未初始化)、Initialized(已初始化)、Checking(校验中)、CheckPass(校验通过)、CheckNotPass(校验不通过)、ReadyRunning(准备运行)、Running(运行中)、Pausing(暂停中)、Paused(已暂停)、Stopping(停止中)、Stopped(已结束)、ResumableErr(任务错误)、Resuming(恢复中)、Failed(失败)、Released(已释放)、Resetting(重置中)、Unknown(未知)
                     * @param _status 任务状态，UnInitialized(未初始化)、Initialized(已初始化)、Checking(校验中)、CheckPass(校验通过)、CheckNotPass(校验不通过)、ReadyRunning(准备运行)、Running(运行中)、Pausing(暂停中)、Paused(已暂停)、Stopping(停止中)、Stopped(已结束)、ResumableErr(任务错误)、Resuming(恢复中)、Failed(失败)、Released(已释放)、Resetting(重置中)、Unknown(未知)
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
                     * 获取结束时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @return EndTime 结束时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @param _endTime 结束时间，格式为 yyyy-mm-dd hh:mm:ss
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
                     * 获取标签相关信息
                     * @return Tags 标签相关信息
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置标签相关信息
                     * @param _tags 标签相关信息
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取同步任务运行步骤信息
                     * @return Detail 同步任务运行步骤信息
                     * 
                     */
                    SyncDetailInfo GetDetail() const;

                    /**
                     * 设置同步任务运行步骤信息
                     * @param _detail 同步任务运行步骤信息
                     * 
                     */
                    void SetDetail(const SyncDetailInfo& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取用于计费的状态，可能取值有：Normal(正常状态)、Resizing(变配中)、Renewing(续费中)、Isolating(隔离中)、Isolated(已隔离)、Offlining(下线中)、Offlined(已下线)、NotBilled(未计费)、Recovering(解隔离)、PostPay2Prepaying(按量计费转包年包月中)、PrePay2Postpaying(包年包月转按量计费中)
                     * @return TradeStatus 用于计费的状态，可能取值有：Normal(正常状态)、Resizing(变配中)、Renewing(续费中)、Isolating(隔离中)、Isolated(已隔离)、Offlining(下线中)、Offlined(已下线)、NotBilled(未计费)、Recovering(解隔离)、PostPay2Prepaying(按量计费转包年包月中)、PrePay2Postpaying(包年包月转按量计费中)
                     * 
                     */
                    std::string GetTradeStatus() const;

                    /**
                     * 设置用于计费的状态，可能取值有：Normal(正常状态)、Resizing(变配中)、Renewing(续费中)、Isolating(隔离中)、Isolated(已隔离)、Offlining(下线中)、Offlined(已下线)、NotBilled(未计费)、Recovering(解隔离)、PostPay2Prepaying(按量计费转包年包月中)、PrePay2Postpaying(包年包月转按量计费中)
                     * @param _tradeStatus 用于计费的状态，可能取值有：Normal(正常状态)、Resizing(变配中)、Renewing(续费中)、Isolating(隔离中)、Isolated(已隔离)、Offlining(下线中)、Offlined(已下线)、NotBilled(未计费)、Recovering(解隔离)、PostPay2Prepaying(按量计费转包年包月中)、PrePay2Postpaying(包年包月转按量计费中)
                     * 
                     */
                    void SetTradeStatus(const std::string& _tradeStatus);

                    /**
                     * 判断参数 TradeStatus 是否已赋值
                     * @return TradeStatus 是否已赋值
                     * 
                     */
                    bool TradeStatusHasBeenSet() const;

                    /**
                     * 获取同步链路规格，如micro,small,medium,large
                     * @return InstanceClass 同步链路规格，如micro,small,medium,large
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置同步链路规格，如micro,small,medium,large
                     * @param _instanceClass 同步链路规格，如micro,small,medium,large
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费）
                     * @return AutoRenew 自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费）
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费）
                     * @param _autoRenew 自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费）
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取下线时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @return OfflineTime 下线时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置下线时间，格式为 yyyy-mm-dd hh:mm:ss
                     * @param _offlineTime 下线时间，格式为 yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取动态修改对象，修改任务的状态等
                     * @return OptObjStatus 动态修改对象，修改任务的状态等
                     * 
                     */
                    std::string GetOptObjStatus() const;

                    /**
                     * 设置动态修改对象，修改任务的状态等
                     * @param _optObjStatus 动态修改对象，修改任务的状态等
                     * 
                     */
                    void SetOptObjStatus(const std::string& _optObjStatus);

                    /**
                     * 判断参数 OptObjStatus 是否已赋值
                     * @return OptObjStatus 是否已赋值
                     * 
                     */
                    bool OptObjStatusHasBeenSet() const;

                    /**
                     * 获取自动重试时间段设置
                     * @return AutoRetryTimeRangeMinutes 自动重试时间段设置
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置自动重试时间段设置
                     * @param _autoRetryTimeRangeMinutes 自动重试时间段设置
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                    /**
                     * 获取全量导出可重入标识：enum::"yes"/"no"。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传
                     * @return DumperResumeCtrl 全量导出可重入标识：enum::"yes"/"no"。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传
                     * 
                     */
                    std::string GetDumperResumeCtrl() const;

                    /**
                     * 设置全量导出可重入标识：enum::"yes"/"no"。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传
                     * @param _dumperResumeCtrl 全量导出可重入标识：enum::"yes"/"no"。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传
                     * 
                     */
                    void SetDumperResumeCtrl(const std::string& _dumperResumeCtrl);

                    /**
                     * 判断参数 DumperResumeCtrl 是否已赋值
                     * @return DumperResumeCtrl 是否已赋值
                     * 
                     */
                    bool DumperResumeCtrlHasBeenSet() const;

                private:

                    /**
                     * 同步任务id，如：sync-btso140
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 同步任务名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 付款方式，PostPay(按量付费)、PrePay(包年包月)
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 运行模式，Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 期待运行时间，格式为 yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * 支持的所有操作
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
                     */
                    Options m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * 同步库表对象
                     */
                    Objects m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * 任务规格
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 过期时间，格式为 yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 源端地域，如：ap-guangzhou等
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * 源端数据库类型，mysql,cynosdbmysql,tdapg,tdpg,tdsqlmysql等
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * 源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * 源端信息，单节点数据库使用
                     */
                    Endpoint m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster
                     */
                    std::string m_srcNodeType;
                    bool m_srcNodeTypeHasBeenSet;

                    /**
                     * 源端信息，多节点数据库使用
                     */
                    SyncDBEndpointInfos m_srcInfos;
                    bool m_srcInfosHasBeenSet;

                    /**
                     * 目标端地域，如：ap-guangzhou等
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * 目标端数据库类型，mysql,cynosdbmysql,tdapg,tdpg,tdsqlmysql等
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * 目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * 目标端信息，单节点数据库使用
                     */
                    Endpoint m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster
                     */
                    std::string m_dstNodeType;
                    bool m_dstNodeTypeHasBeenSet;

                    /**
                     * 目标端信息，多节点数据库使用
                     */
                    SyncDBEndpointInfos m_dstInfos;
                    bool m_dstInfosHasBeenSet;

                    /**
                     * 创建时间，格式为 yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 开始时间，格式为 yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务状态，UnInitialized(未初始化)、Initialized(已初始化)、Checking(校验中)、CheckPass(校验通过)、CheckNotPass(校验不通过)、ReadyRunning(准备运行)、Running(运行中)、Pausing(暂停中)、Paused(已暂停)、Stopping(停止中)、Stopped(已结束)、ResumableErr(任务错误)、Resuming(恢复中)、Failed(失败)、Released(已释放)、Resetting(重置中)、Unknown(未知)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 结束时间，格式为 yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 标签相关信息
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 同步任务运行步骤信息
                     */
                    SyncDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 用于计费的状态，可能取值有：Normal(正常状态)、Resizing(变配中)、Renewing(续费中)、Isolating(隔离中)、Isolated(已隔离)、Offlining(下线中)、Offlined(已下线)、NotBilled(未计费)、Recovering(解隔离)、PostPay2Prepaying(按量计费转包年包月中)、PrePay2Postpaying(包年包月转按量计费中)
                     */
                    std::string m_tradeStatus;
                    bool m_tradeStatusHasBeenSet;

                    /**
                     * 同步链路规格，如micro,small,medium,large
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * 自动续费标识，当PayMode值为PrePay则此项配置有意义，取值为：1（表示自动续费）、0（不自动续费）
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 下线时间，格式为 yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 动态修改对象，修改任务的状态等
                     */
                    std::string m_optObjStatus;
                    bool m_optObjStatusHasBeenSet;

                    /**
                     * 自动重试时间段设置
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                    /**
                     * 全量导出可重入标识：enum::"yes"/"no"。yes表示当前任务可重入、no表示当前任务处于全量导出且不可重入阶段；如果在该值为no时重启任务导出流程不支持断点续传
                     */
                    std::string m_dumperResumeCtrl;
                    bool m_dumperResumeCtrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SYNCJOBINFO_H_
