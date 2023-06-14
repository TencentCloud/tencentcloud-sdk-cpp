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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESCHEDULESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESCHEDULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeSchedules请求参数结构体
                */
                class DescribeSchedulesRequest : public AbstractModel
                {
                public:
                    DescribeSchedulesRequest();
                    ~DescribeSchedulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取编排 ID 过滤条件，数组长度限制：100。
                     * @return ScheduleIds 编排 ID 过滤条件，数组长度限制：100。
                     * 
                     */
                    std::vector<int64_t> GetScheduleIds() const;

                    /**
                     * 设置编排 ID 过滤条件，数组长度限制：100。
                     * @param _scheduleIds 编排 ID 过滤条件，数组长度限制：100。
                     * 
                     */
                    void SetScheduleIds(const std::vector<int64_t>& _scheduleIds);

                    /**
                     * 判断参数 ScheduleIds 是否已赋值
                     * @return ScheduleIds 是否已赋值
                     * 
                     */
                    bool ScheduleIdsHasBeenSet() const;

                    /**
                     * 获取编排触发类型，可选值：
<li>CosFileUpload： 腾讯云 COS 文件上传触发</li>
<li>AwsS3FileUpload：Aws S3 文件上传触发。</li>
不填或者为空表示全部。
                     * @return TriggerType 编排触发类型，可选值：
<li>CosFileUpload： 腾讯云 COS 文件上传触发</li>
<li>AwsS3FileUpload：Aws S3 文件上传触发。</li>
不填或者为空表示全部。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置编排触发类型，可选值：
<li>CosFileUpload： 腾讯云 COS 文件上传触发</li>
<li>AwsS3FileUpload：Aws S3 文件上传触发。</li>
不填或者为空表示全部。
                     * @param _triggerType 编排触发类型，可选值：
<li>CosFileUpload： 腾讯云 COS 文件上传触发</li>
<li>AwsS3FileUpload：Aws S3 文件上传触发。</li>
不填或者为空表示全部。
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
不填此参数，则不区编排状态。
                     * @return Status 状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
不填此参数，则不区编排状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
不填此参数，则不区编排状态。
                     * @param _status 状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
不填此参数，则不区编排状态。
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
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param _offset 分页偏移量，默认值：0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：10，最大值：100。
                     * @return Limit 返回记录条数，默认值：10，最大值：100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：10，最大值：100。
                     * @param _limit 返回记录条数，默认值：10，最大值：100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 编排 ID 过滤条件，数组长度限制：100。
                     */
                    std::vector<int64_t> m_scheduleIds;
                    bool m_scheduleIdsHasBeenSet;

                    /**
                     * 编排触发类型，可选值：
<li>CosFileUpload： 腾讯云 COS 文件上传触发</li>
<li>AwsS3FileUpload：Aws S3 文件上传触发。</li>
不填或者为空表示全部。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
不填此参数，则不区编排状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：10，最大值：100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESCHEDULESREQUEST_H_
