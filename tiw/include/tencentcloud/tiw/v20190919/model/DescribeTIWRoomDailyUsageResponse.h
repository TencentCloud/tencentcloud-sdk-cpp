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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWROOMDAILYUSAGERESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWROOMDAILYUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/RoomUsageDataItem.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeTIWRoomDailyUsage返回参数结构体
                */
                class DescribeTIWRoomDailyUsageResponse : public AbstractModel
                {
                public:
                    DescribeTIWRoomDailyUsageResponse();
                    ~DescribeTIWRoomDailyUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指定区间指定产品的房间用量列表
                     * @return Usages 指定区间指定产品的房间用量列表
                     */
                    std::vector<RoomUsageDataItem> GetUsages() const;

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     */
                    bool UsagesHasBeenSet() const;

                    /**
                     * 获取用量列表总数
                     * @return Total 用量列表总数
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 指定区间指定产品的房间用量列表
                     */
                    std::vector<RoomUsageDataItem> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * 用量列表总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWROOMDAILYUSAGERESPONSE_H_
