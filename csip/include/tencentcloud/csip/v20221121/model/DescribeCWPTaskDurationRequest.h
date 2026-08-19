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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPTASKDURATIONREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPTASKDURATIONREQUEST_H_

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
                * DescribeCWPTaskDuration请求参数结构体
                */
                class DescribeCWPTaskDurationRequest : public AbstractModel
                {
                public:
                    DescribeCWPTaskDurationRequest();
                    ~DescribeCWPTaskDurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要执行任务的主机数
                     * @return UuidCnt 需要执行任务的主机数
                     * 
                     */
                    uint64_t GetUuidCnt() const;

                    /**
                     * 设置需要执行任务的主机数
                     * @param _uuidCnt 需要执行任务的主机数
                     * 
                     */
                    void SetUuidCnt(const uint64_t& _uuidCnt);

                    /**
                     * 判断参数 UuidCnt 是否已赋值
                     * @return UuidCnt 是否已赋值
                     * 
                     */
                    bool UuidCntHasBeenSet() const;

                    /**
                     * 获取是否定时扫描
                     * @return TimingScan 是否定时扫描
                     * 
                     */
                    bool GetTimingScan() const;

                    /**
                     * 设置是否定时扫描
                     * @param _timingScan 是否定时扫描
                     * 
                     */
                    void SetTimingScan(const bool& _timingScan);

                    /**
                     * 判断参数 TimingScan 是否已赋值
                     * @return TimingScan 是否已赋值
                     * 
                     */
                    bool TimingScanHasBeenSet() const;

                private:

                    /**
                     * 需要执行任务的主机数
                     */
                    uint64_t m_uuidCnt;
                    bool m_uuidCntHasBeenSet;

                    /**
                     * 是否定时扫描
                     */
                    bool m_timingScan;
                    bool m_timingScanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPTASKDURATIONREQUEST_H_
