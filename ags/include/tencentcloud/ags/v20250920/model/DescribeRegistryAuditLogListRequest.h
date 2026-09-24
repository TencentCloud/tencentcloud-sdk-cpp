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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYAUDITLOGLISTREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYAUDITLOGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeRegistryAuditLogList请求参数结构体
                */
                class DescribeRegistryAuditLogListRequest : public AbstractModel
                {
                public:
                    DescribeRegistryAuditLogListRequest();
                    ~DescribeRegistryAuditLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>父 Registry ID。</p>
                     * @return RegistryId <p>父 Registry ID。</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>父 Registry ID。</p>
                     * @param _registryId <p>父 Registry ID。</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>Record ID。</p>
                     * @return RecordId <p>Record ID。</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>Record ID。</p>
                     * @param _recordId <p>Record ID。</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>Version ID；仅过滤 Version 维度动作，可选。</p>
                     * @return VersionId <p>Version ID；仅过滤 Version 维度动作，可选。</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>Version ID；仅过滤 Version 维度动作，可选。</p>
                     * @param _versionId <p>Version ID；仅过滤 Version 维度动作，可选。</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>Action 精确过滤（如 <code>record.version.create</code>），可选。</p>
                     * @return ActionFilter <p>Action 精确过滤（如 <code>record.version.create</code>），可选。</p>
                     * 
                     */
                    std::string GetActionFilter() const;

                    /**
                     * 设置<p>Action 精确过滤（如 <code>record.version.create</code>），可选。</p>
                     * @param _actionFilter <p>Action 精确过滤（如 <code>record.version.create</code>），可选。</p>
                     * 
                     */
                    void SetActionFilter(const std::string& _actionFilter);

                    /**
                     * 判断参数 ActionFilter 是否已赋值
                     * @return ActionFilter 是否已赋值
                     * 
                     */
                    bool ActionFilterHasBeenSet() const;

                    /**
                     * 获取<p>发起者过滤（主账号 UIN 或子账号 UIN），可选。</p>
                     * @return Actor <p>发起者过滤（主账号 UIN 或子账号 UIN），可选。</p>
                     * 
                     */
                    std::string GetActor() const;

                    /**
                     * 设置<p>发起者过滤（主账号 UIN 或子账号 UIN），可选。</p>
                     * @param _actor <p>发起者过滤（主账号 UIN 或子账号 UIN），可选。</p>
                     * 
                     */
                    void SetActor(const std::string& _actor);

                    /**
                     * 判断参数 Actor 是否已赋值
                     * @return Actor 是否已赋值
                     * 
                     */
                    bool ActorHasBeenSet() const;

                    /**
                     * 获取<p>起始时间；ISO 8601，可选。</p>
                     * @return StartTime <p>起始时间；ISO 8601，可选。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>起始时间；ISO 8601，可选。</p>
                     * @param _startTime <p>起始时间；ISO 8601，可选。</p>
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
                     * 获取<p>结束时间；ISO 8601，可选。</p>
                     * @return EndTime <p>结束时间；ISO 8601，可选。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间；ISO 8601，可选。</p>
                     * @param _endTime <p>结束时间；ISO 8601，可选。</p>
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
                     * 获取<p>分页起始偏移，默认 0。</p>
                     * @return Offset <p>分页起始偏移，默认 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页起始偏移，默认 0。</p>
                     * @param _offset <p>分页起始偏移，默认 0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页条数，默认 20，最大 100。</p>
                     * @return Limit <p>分页条数，默认 20，最大 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页条数，默认 20，最大 100。</p>
                     * @param _limit <p>分页条数，默认 20，最大 100。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>父 Registry ID。</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Record ID。</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>Version ID；仅过滤 Version 维度动作，可选。</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>Action 精确过滤（如 <code>record.version.create</code>），可选。</p>
                     */
                    std::string m_actionFilter;
                    bool m_actionFilterHasBeenSet;

                    /**
                     * <p>发起者过滤（主账号 UIN 或子账号 UIN），可选。</p>
                     */
                    std::string m_actor;
                    bool m_actorHasBeenSet;

                    /**
                     * <p>起始时间；ISO 8601，可选。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间；ISO 8601，可选。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>分页起始偏移，默认 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页条数，默认 20，最大 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYAUDITLOGLISTREQUEST_H_
