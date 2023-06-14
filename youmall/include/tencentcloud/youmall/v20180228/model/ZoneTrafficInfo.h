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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONETRAFFICINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONETRAFFICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/ZoneTrafficInfoDetail.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 门店区域客流信息
                */
                class ZoneTrafficInfo : public AbstractModel
                {
                public:
                    ZoneTrafficInfo();
                    ~ZoneTrafficInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取门店区域客流详细信息
                     * @return ZoneTrafficInfoDetailSet 门店区域客流详细信息
                     * 
                     */
                    std::vector<ZoneTrafficInfoDetail> GetZoneTrafficInfoDetailSet() const;

                    /**
                     * 设置门店区域客流详细信息
                     * @param _zoneTrafficInfoDetailSet 门店区域客流详细信息
                     * 
                     */
                    void SetZoneTrafficInfoDetailSet(const std::vector<ZoneTrafficInfoDetail>& _zoneTrafficInfoDetailSet);

                    /**
                     * 判断参数 ZoneTrafficInfoDetailSet 是否已赋值
                     * @return ZoneTrafficInfoDetailSet 是否已赋值
                     * 
                     */
                    bool ZoneTrafficInfoDetailSetHasBeenSet() const;

                private:

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 门店区域客流详细信息
                     */
                    std::vector<ZoneTrafficInfoDetail> m_zoneTrafficInfoDetailSet;
                    bool m_zoneTrafficInfoDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONETRAFFICINFO_H_
