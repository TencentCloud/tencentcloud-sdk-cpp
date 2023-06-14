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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBESTATIONSRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBESTATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/Station.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeStations返回参数结构体
                */
                class DescribeStationsResponse : public AbstractModel
                {
                public:
                    DescribeStationsResponse();
                    ~DescribeStationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数量
                     * @return Total 总数量
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取当前页station数量
                     * @return Size 当前页station数量
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取剩余数量（total-offset-size），通过这个值判断是否还有下一页
                     * @return HaveMore 剩余数量（total-offset-size），通过这个值判断是否还有下一页
                     * 
                     */
                    uint64_t GetHaveMore() const;

                    /**
                     * 判断参数 HaveMore 是否已赋值
                     * @return HaveMore 是否已赋值
                     * 
                     */
                    bool HaveMoreHasBeenSet() const;

                    /**
                     * 获取Stations 素材库列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Stations Stations 素材库列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Station> GetStations() const;

                    /**
                     * 判断参数 Stations 是否已赋值
                     * @return Stations 是否已赋值
                     * 
                     */
                    bool StationsHasBeenSet() const;

                private:

                    /**
                     * 总数量
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 当前页station数量
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 剩余数量（total-offset-size），通过这个值判断是否还有下一页
                     */
                    uint64_t m_haveMore;
                    bool m_haveMoreHasBeenSet;

                    /**
                     * Stations 素材库列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Station> m_stations;
                    bool m_stationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBESTATIONSRESPONSE_H_
