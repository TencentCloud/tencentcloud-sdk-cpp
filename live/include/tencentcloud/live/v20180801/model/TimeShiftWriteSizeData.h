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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTWRITESIZEDATA_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTWRITESIZEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播时移写入量数据。
                */
                class TimeShiftWriteSizeData : public AbstractModel
                {
                public:
                    TimeShiftWriteSizeData();
                    ~TimeShiftWriteSizeData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域。
                     * @return Area 区域。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置区域。
                     * @param _area 区域。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取时间，格式为：yyyy-mm-ddTHH:MM:SSZ。
                     * @return Time 时间，格式为：yyyy-mm-ddTHH:MM:SSZ。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间，格式为：yyyy-mm-ddTHH:MM:SSZ。
                     * @param _time 时间，格式为：yyyy-mm-ddTHH:MM:SSZ。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取写入量（单位：字节）
                     * @return WriteSize 写入量（单位：字节）
                     * 
                     */
                    double GetWriteSize() const;

                    /**
                     * 设置写入量（单位：字节）
                     * @param _writeSize 写入量（单位：字节）
                     * 
                     */
                    void SetWriteSize(const double& _writeSize);

                    /**
                     * 判断参数 WriteSize 是否已赋值
                     * @return WriteSize 是否已赋值
                     * 
                     */
                    bool WriteSizeHasBeenSet() const;

                    /**
                     * 获取域名。
                     * @return Domain 域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名。
                     * @param _domain 域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取时移天数。
                     * @return StorageDays 时移天数。
                     * 
                     */
                    int64_t GetStorageDays() const;

                    /**
                     * 设置时移天数。
                     * @param _storageDays 时移天数。
                     * 
                     */
                    void SetStorageDays(const int64_t& _storageDays);

                    /**
                     * 判断参数 StorageDays 是否已赋值
                     * @return StorageDays 是否已赋值
                     * 
                     */
                    bool StorageDaysHasBeenSet() const;

                private:

                    /**
                     * 区域。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 时间，格式为：yyyy-mm-ddTHH:MM:SSZ。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 写入量（单位：字节）
                     */
                    double m_writeSize;
                    bool m_writeSizeHasBeenSet;

                    /**
                     * 域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 时移天数。
                     */
                    int64_t m_storageDays;
                    bool m_storageDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTWRITESIZEDATA_H_
