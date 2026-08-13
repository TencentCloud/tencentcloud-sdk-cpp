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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANCSIPTASKAGAINREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANCSIPTASKAGAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ScanCSIPTaskAgain请求参数结构体
                */
                class ScanCSIPTaskAgainRequest : public AbstractModel
                {
                public:
                    ScanCSIPTaskAgainRequest();
                    ~ScanCSIPTaskAgainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>扫描任务ID</p>
                     * @return TaskId <p>扫描任务ID</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>扫描任务ID</p>
                     * @param _taskId <p>扫描任务ID</p>
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>限定本次重扫的目标主机列表；为空时取主表对应子表的全量 实例ID；长度上限 1000</p>
                     * @return InstanceIDList <p>限定本次重扫的目标主机列表；为空时取主表对应子表的全量 实例ID；长度上限 1000</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDList() const;

                    /**
                     * 设置<p>限定本次重扫的目标主机列表；为空时取主表对应子表的全量 实例ID；长度上限 1000</p>
                     * @param _instanceIDList <p>限定本次重扫的目标主机列表；为空时取主表对应子表的全量 实例ID；长度上限 1000</p>
                     * 
                     */
                    void SetInstanceIDList(const std::vector<std::string>& _instanceIDList);

                    /**
                     * 判断参数 InstanceIDList 是否已赋值
                     * @return InstanceIDList 是否已赋值
                     * 
                     */
                    bool InstanceIDListHasBeenSet() const;

                    /**
                     * 获取<p>扫描超时时长（秒），可选。非零时更新一键扫描超时配置并同步更新子表 timeout 字段。上限 7200 秒（2小时），超出返回 InvalidParameter。</p>
                     * @return TimeoutPeriod <p>扫描超时时长（秒），可选。非零时更新一键扫描超时配置并同步更新子表 timeout 字段。上限 7200 秒（2小时），超出返回 InvalidParameter。</p>
                     * 
                     */
                    uint64_t GetTimeoutPeriod() const;

                    /**
                     * 设置<p>扫描超时时长（秒），可选。非零时更新一键扫描超时配置并同步更新子表 timeout 字段。上限 7200 秒（2小时），超出返回 InvalidParameter。</p>
                     * @param _timeoutPeriod <p>扫描超时时长（秒），可选。非零时更新一键扫描超时配置并同步更新子表 timeout 字段。上限 7200 秒（2小时），超出返回 InvalidParameter。</p>
                     * 
                     */
                    void SetTimeoutPeriod(const uint64_t& _timeoutPeriod);

                    /**
                     * 判断参数 TimeoutPeriod 是否已赋值
                     * @return TimeoutPeriod 是否已赋值
                     * 
                     */
                    bool TimeoutPeriodHasBeenSet() const;

                private:

                    /**
                     * <p>扫描任务ID</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>限定本次重扫的目标主机列表；为空时取主表对应子表的全量 实例ID；长度上限 1000</p>
                     */
                    std::vector<std::string> m_instanceIDList;
                    bool m_instanceIDListHasBeenSet;

                    /**
                     * <p>扫描超时时长（秒），可选。非零时更新一键扫描超时配置并同步更新子表 timeout 字段。上限 7200 秒（2小时），超出返回 InvalidParameter。</p>
                     */
                    uint64_t m_timeoutPeriod;
                    bool m_timeoutPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANCSIPTASKAGAINREQUEST_H_
