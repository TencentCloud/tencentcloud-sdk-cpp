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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULFIXSTATUSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULFIXSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulFixStatusSnapshotInfo.h>
#include <tencentcloud/cwp/v20180228/model/VulFixStatusInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulFixStatus返回参数结构体
                */
                class DescribeVulFixStatusResponse : public AbstractModel
                {
                public:
                    DescribeVulFixStatusResponse();
                    ~DescribeVulFixStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取开始修复时间
                     * @return FixStartTime 开始修复时间
                     * 
                     */
                    std::string GetFixStartTime() const;

                    /**
                     * 判断参数 FixStartTime 是否已赋值
                     * @return FixStartTime 是否已赋值
                     * 
                     */
                    bool FixStartTimeHasBeenSet() const;

                    /**
                     * 获取修复结束时间，为空表示还没结束
                     * @return FixEndTime 修复结束时间，为空表示还没结束
                     * 
                     */
                    std::string GetFixEndTime() const;

                    /**
                     * 判断参数 FixEndTime 是否已赋值
                     * @return FixEndTime 是否已赋值
                     * 
                     */
                    bool FixEndTimeHasBeenSet() const;

                    /**
                     * 获取修复成功的主机数
                     * @return FixSuccessCnt 修复成功的主机数
                     * 
                     */
                    uint64_t GetFixSuccessCnt() const;

                    /**
                     * 判断参数 FixSuccessCnt 是否已赋值
                     * @return FixSuccessCnt 是否已赋值
                     * 
                     */
                    bool FixSuccessCntHasBeenSet() const;

                    /**
                     * 获取修复失败的主机数
                     * @return FixFailCnt 修复失败的主机数
                     * 
                     */
                    uint64_t GetFixFailCnt() const;

                    /**
                     * 判断参数 FixFailCnt 是否已赋值
                     * @return FixFailCnt 是否已赋值
                     * 
                     */
                    bool FixFailCntHasBeenSet() const;

                    /**
                     * 获取主机总数
                     * @return HostCnt 主机总数
                     * 
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     * 
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取修复的任务id
                     * @return FixId 修复的任务id
                     * 
                     */
                    uint64_t GetFixId() const;

                    /**
                     * 判断参数 FixId 是否已赋值
                     * @return FixId 是否已赋值
                     * 
                     */
                    bool FixIdHasBeenSet() const;

                    /**
                     * 获取修复快照状态列表
                     * @return SnapshotList 修复快照状态列表
                     * 
                     */
                    std::vector<VulFixStatusSnapshotInfo> GetSnapshotList() const;

                    /**
                     * 判断参数 SnapshotList 是否已赋值
                     * @return SnapshotList 是否已赋值
                     * 
                     */
                    bool SnapshotListHasBeenSet() const;

                    /**
                     * 获取修复漏洞详情列表
                     * @return VulFixList 修复漏洞详情列表
                     * 
                     */
                    std::vector<VulFixStatusInfo> GetVulFixList() const;

                    /**
                     * 判断参数 VulFixList 是否已赋值
                     * @return VulFixList 是否已赋值
                     * 
                     */
                    bool VulFixListHasBeenSet() const;

                    /**
                     * 获取快照创建进度0-100
                     * @return SnapshotProgress 快照创建进度0-100
                     * 
                     */
                    uint64_t GetSnapshotProgress() const;

                    /**
                     * 判断参数 SnapshotProgress 是否已赋值
                     * @return SnapshotProgress 是否已赋值
                     * 
                     */
                    bool SnapshotProgressHasBeenSet() const;

                    /**
                     * 获取修复进度 0-100
                     * @return FixProgress 修复进度 0-100
                     * 
                     */
                    uint64_t GetFixProgress() const;

                    /**
                     * 判断参数 FixProgress 是否已赋值
                     * @return FixProgress 是否已赋值
                     * 
                     */
                    bool FixProgressHasBeenSet() const;

                    /**
                     * 获取预计剩余时间（单位秒）
                     * @return RemainingTime 预计剩余时间（单位秒）
                     * 
                     */
                    uint64_t GetRemainingTime() const;

                    /**
                     * 判断参数 RemainingTime 是否已赋值
                     * @return RemainingTime 是否已赋值
                     * 
                     */
                    bool RemainingTimeHasBeenSet() const;

                    /**
                     * 获取快照是否是重试状态 0=非重试  1=重试
                     * @return IsRetrySnapshot 快照是否是重试状态 0=非重试  1=重试
                     * 
                     */
                    uint64_t GetIsRetrySnapshot() const;

                    /**
                     * 判断参数 IsRetrySnapshot 是否已赋值
                     * @return IsRetrySnapshot 是否已赋值
                     * 
                     */
                    bool IsRetrySnapshotHasBeenSet() const;

                    /**
                     * 获取快照创建失败数
                     * @return SnapshotFailCnt 快照创建失败数
                     * 
                     */
                    uint64_t GetSnapshotFailCnt() const;

                    /**
                     * 判断参数 SnapshotFailCnt 是否已赋值
                     * @return SnapshotFailCnt 是否已赋值
                     * 
                     */
                    bool SnapshotFailCntHasBeenSet() const;

                    /**
                     * 获取是否允许重试 0:不允许 1：允许
                     * @return IsAllowRetry 是否允许重试 0:不允许 1：允许
                     * 
                     */
                    uint64_t GetIsAllowRetry() const;

                    /**
                     * 判断参数 IsAllowRetry 是否已赋值
                     * @return IsAllowRetry 是否已赋值
                     * 
                     */
                    bool IsAllowRetryHasBeenSet() const;

                private:

                    /**
                     * 开始修复时间
                     */
                    std::string m_fixStartTime;
                    bool m_fixStartTimeHasBeenSet;

                    /**
                     * 修复结束时间，为空表示还没结束
                     */
                    std::string m_fixEndTime;
                    bool m_fixEndTimeHasBeenSet;

                    /**
                     * 修复成功的主机数
                     */
                    uint64_t m_fixSuccessCnt;
                    bool m_fixSuccessCntHasBeenSet;

                    /**
                     * 修复失败的主机数
                     */
                    uint64_t m_fixFailCnt;
                    bool m_fixFailCntHasBeenSet;

                    /**
                     * 主机总数
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * 修复的任务id
                     */
                    uint64_t m_fixId;
                    bool m_fixIdHasBeenSet;

                    /**
                     * 修复快照状态列表
                     */
                    std::vector<VulFixStatusSnapshotInfo> m_snapshotList;
                    bool m_snapshotListHasBeenSet;

                    /**
                     * 修复漏洞详情列表
                     */
                    std::vector<VulFixStatusInfo> m_vulFixList;
                    bool m_vulFixListHasBeenSet;

                    /**
                     * 快照创建进度0-100
                     */
                    uint64_t m_snapshotProgress;
                    bool m_snapshotProgressHasBeenSet;

                    /**
                     * 修复进度 0-100
                     */
                    uint64_t m_fixProgress;
                    bool m_fixProgressHasBeenSet;

                    /**
                     * 预计剩余时间（单位秒）
                     */
                    uint64_t m_remainingTime;
                    bool m_remainingTimeHasBeenSet;

                    /**
                     * 快照是否是重试状态 0=非重试  1=重试
                     */
                    uint64_t m_isRetrySnapshot;
                    bool m_isRetrySnapshotHasBeenSet;

                    /**
                     * 快照创建失败数
                     */
                    uint64_t m_snapshotFailCnt;
                    bool m_snapshotFailCntHasBeenSet;

                    /**
                     * 是否允许重试 0:不允许 1：允许
                     */
                    uint64_t m_isAllowRetry;
                    bool m_isAllowRetryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULFIXSTATUSRESPONSE_H_
