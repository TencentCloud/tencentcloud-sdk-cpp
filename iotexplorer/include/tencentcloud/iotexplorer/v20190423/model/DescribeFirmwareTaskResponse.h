/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEFIRMWARETASKRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEFIRMWARETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeFirmwareTask返回参数结构体
                */
                class DescribeFirmwareTaskResponse : public AbstractModel
                {
                public:
                    DescribeFirmwareTaskResponse();
                    ~DescribeFirmwareTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>固件任务ID</p>
                     * @return TaskId <p>固件任务ID</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>固件任务状态</p>
                     * @return Status <p>固件任务状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>固件任务创建时间，单位：秒</p>
                     * @return CreateTime <p>固件任务创建时间，单位：秒</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>固件任务升级类型</p>
                     * @return Type <p>固件任务升级类型</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>产品名称</p>
                     * @return ProductName <p>产品名称</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取<p>固件任务升级模式。originalVersion（按版本号升级）、filename（提交文件升级）、devicenames（按设备名称升级）</p>
                     * @return UpgradeMode <p>固件任务升级模式。originalVersion（按版本号升级）、filename（提交文件升级）、devicenames（按设备名称升级）</p>
                     * 
                     */
                    std::string GetUpgradeMode() const;

                    /**
                     * 判断参数 UpgradeMode 是否已赋值
                     * @return UpgradeMode 是否已赋值
                     * 
                     */
                    bool UpgradeModeHasBeenSet() const;

                    /**
                     * 获取<p>产品ID</p>
                     * @return ProductId <p>产品ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>原始固件版本号，在UpgradeMode是originalVersion升级模式下会返回</p>
                     * @return OriginalVersion <p>原始固件版本号，在UpgradeMode是originalVersion升级模式下会返回</p>
                     * 
                     */
                    std::string GetOriginalVersion() const;

                    /**
                     * 判断参数 OriginalVersion 是否已赋值
                     * @return OriginalVersion 是否已赋值
                     * 
                     */
                    bool OriginalVersionHasBeenSet() const;

                    /**
                     * 获取<p>创建账号ID</p>
                     * @return CreateUserId <p>创建账号ID</p>
                     * 
                     */
                    uint64_t GetCreateUserId() const;

                    /**
                     * 判断参数 CreateUserId 是否已赋值
                     * @return CreateUserId 是否已赋值
                     * 
                     */
                    bool CreateUserIdHasBeenSet() const;

                    /**
                     * 获取<p>创建账号ID昵称</p>
                     * @return CreatorNickName <p>创建账号ID昵称</p>
                     * 
                     */
                    std::string GetCreatorNickName() const;

                    /**
                     * 判断参数 CreatorNickName 是否已赋值
                     * @return CreatorNickName 是否已赋值
                     * 
                     */
                    bool CreatorNickNameHasBeenSet() const;

                    /**
                     * 获取<p>延迟时间</p>
                     * @return DelayTime <p>延迟时间</p>
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>超时时间</p>
                     * @return TimeoutInterval <p>超时时间</p>
                     * 
                     */
                    uint64_t GetTimeoutInterval() const;

                    /**
                     * 判断参数 TimeoutInterval 是否已赋值
                     * @return TimeoutInterval 是否已赋值
                     * 
                     */
                    bool TimeoutIntervalHasBeenSet() const;

                    /**
                     * 获取<p>静默升级or用户确认升级</p>
                     * @return UpgradeMethod <p>静默升级or用户确认升级</p>
                     * 
                     */
                    uint64_t GetUpgradeMethod() const;

                    /**
                     * 判断参数 UpgradeMethod 是否已赋值
                     * @return UpgradeMethod 是否已赋值
                     * 
                     */
                    bool UpgradeMethodHasBeenSet() const;

                    /**
                     * 获取<p>最大重试次数</p>
                     * @return MaxRetryNum <p>最大重试次数</p>
                     * 
                     */
                    uint64_t GetMaxRetryNum() const;

                    /**
                     * 判断参数 MaxRetryNum 是否已赋值
                     * @return MaxRetryNum 是否已赋值
                     * 
                     */
                    bool MaxRetryNumHasBeenSet() const;

                    /**
                     * 获取<p>固件类型</p>
                     * @return FwType <p>固件类型</p>
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取<p>重试间隔时间单位min</p>
                     * @return RetryInterval <p>重试间隔时间单位min</p>
                     * 
                     */
                    uint64_t GetRetryInterval() const;

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

                    /**
                     * 获取<p>是否覆盖任务</p>
                     * @return OverrideMode <p>是否覆盖任务</p>
                     * 
                     */
                    uint64_t GetOverrideMode() const;

                    /**
                     * 判断参数 OverrideMode 是否已赋值
                     * @return OverrideMode 是否已赋值
                     * 
                     */
                    bool OverrideModeHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义消息</p>
                     * @return TaskUserDefine <p>用户自定义消息</p>
                     * 
                     */
                    std::string GetTaskUserDefine() const;

                    /**
                     * 判断参数 TaskUserDefine 是否已赋值
                     * @return TaskUserDefine 是否已赋值
                     * 
                     */
                    bool TaskUserDefineHasBeenSet() const;

                    /**
                     * 获取<p>每分钟发送设备量</p>
                     * @return RateLimit <p>每分钟发送设备量</p>
                     * 
                     */
                    int64_t GetRateLimit() const;

                    /**
                     * 判断参数 RateLimit 是否已赋值
                     * @return RateLimit 是否已赋值
                     * 
                     */
                    bool RateLimitHasBeenSet() const;

                    /**
                     * 获取<p>任务截止时间，Unix 时间戳（单位：秒）。传入 0 或不传表示不设截止，任务按原重试/超时策略执行完毕。 </p><p>单位：秒</p>
                     * @return EndTime <p>任务截止时间，Unix 时间戳（单位：秒）。传入 0 或不传表示不设截止，任务按原重试/超时策略执行完毕。 </p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务开始调度时间，Unix 时间戳（单位：秒）。传入 0 或不传时任务立即创建执行，与 DelayTime 同时传入时，本参数优先生效。 </p><p>单位：秒</p>
                     * @return StartTime <p>任务开始调度时间，Unix 时间戳（单位：秒）。传入 0 或不传时任务立即创建执行，与 DelayTime 同时传入时，本参数优先生效。 </p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>固件任务ID</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>固件任务状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>固件任务创建时间，单位：秒</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>固件任务升级类型</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>产品名称</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>固件任务升级模式。originalVersion（按版本号升级）、filename（提交文件升级）、devicenames（按设备名称升级）</p>
                     */
                    std::string m_upgradeMode;
                    bool m_upgradeModeHasBeenSet;

                    /**
                     * <p>产品ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>原始固件版本号，在UpgradeMode是originalVersion升级模式下会返回</p>
                     */
                    std::string m_originalVersion;
                    bool m_originalVersionHasBeenSet;

                    /**
                     * <p>创建账号ID</p>
                     */
                    uint64_t m_createUserId;
                    bool m_createUserIdHasBeenSet;

                    /**
                     * <p>创建账号ID昵称</p>
                     */
                    std::string m_creatorNickName;
                    bool m_creatorNickNameHasBeenSet;

                    /**
                     * <p>延迟时间</p>
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>超时时间</p>
                     */
                    uint64_t m_timeoutInterval;
                    bool m_timeoutIntervalHasBeenSet;

                    /**
                     * <p>静默升级or用户确认升级</p>
                     */
                    uint64_t m_upgradeMethod;
                    bool m_upgradeMethodHasBeenSet;

                    /**
                     * <p>最大重试次数</p>
                     */
                    uint64_t m_maxRetryNum;
                    bool m_maxRetryNumHasBeenSet;

                    /**
                     * <p>固件类型</p>
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * <p>重试间隔时间单位min</p>
                     */
                    uint64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * <p>是否覆盖任务</p>
                     */
                    uint64_t m_overrideMode;
                    bool m_overrideModeHasBeenSet;

                    /**
                     * <p>用户自定义消息</p>
                     */
                    std::string m_taskUserDefine;
                    bool m_taskUserDefineHasBeenSet;

                    /**
                     * <p>每分钟发送设备量</p>
                     */
                    int64_t m_rateLimit;
                    bool m_rateLimitHasBeenSet;

                    /**
                     * <p>任务截止时间，Unix 时间戳（单位：秒）。传入 0 或不传表示不设截止，任务按原重试/超时策略执行完毕。 </p><p>单位：秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>任务开始调度时间，Unix 时间戳（单位：秒）。传入 0 或不传时任务立即创建执行，与 DelayTime 同时传入时，本参数优先生效。 </p><p>单位：秒</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEFIRMWARETASKRESPONSE_H_
