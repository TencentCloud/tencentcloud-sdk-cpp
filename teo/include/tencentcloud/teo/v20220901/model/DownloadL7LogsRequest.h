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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DOWNLOADL7LOGSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DOWNLOADL7LOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DownloadL7Logs请求参数结构体
                */
                class DownloadL7LogsRequest : public AbstractModel
                {
                public:
                    DownloadL7LogsRequest();
                    ~DownloadL7LogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间。
                     * @return StartTime 开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
                     * @param _startTime 开始时间。
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
                     * 获取结束时间。
                     * @return EndTime 结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。
                     * @param _endTime 结束时间。
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
                     * 获取站点ID集合，此参数必填。
                     * @return ZoneIds 站点ID集合，此参数必填。
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点ID集合，此参数必填。
                     * @param _zoneIds 站点ID集合，此参数必填。
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取子域名集合，不填默认选择全部子域名。
                     * @return Domains 子域名集合，不填默认选择全部子域名。
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置子域名集合，不填默认选择全部子域名。
                     * @param _domains 子域名集合，不填默认选择全部子域名。
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取分页查询的限制数目，默认值为 20，最大查询条目为 300。
                     * @return Limit 分页查询的限制数目，默认值为 20，最大查询条目为 300。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询的限制数目，默认值为 20，最大查询条目为 300。
                     * @param _limit 分页查询的限制数目，默认值为 20，最大查询条目为 300。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页的偏移量，默认值为 0。
                     * @return Offset 分页的偏移量，默认值为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为 0。
                     * @param _offset 分页的偏移量，默认值为 0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 站点ID集合，此参数必填。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 子域名集合，不填默认选择全部子域名。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 分页查询的限制数目，默认值为 20，最大查询条目为 300。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页的偏移量，默认值为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DOWNLOADL7LOGSREQUEST_H_
