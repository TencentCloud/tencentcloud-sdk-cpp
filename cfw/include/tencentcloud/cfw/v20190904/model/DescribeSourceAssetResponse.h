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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/InstanceInfo.h>
#include <tencentcloud/cfw/v20190904/model/AssetZone.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSourceAsset返回参数结构体
                */
                class DescribeSourceAssetResponse : public AbstractModel
                {
                public:
                    DescribeSourceAssetResponse();
                    ~DescribeSourceAssetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据
                     * @return Data 数据
                     * 
                     */
                    std::vector<InstanceInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取返回数据总数
                     * @return Total 返回数据总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取地域集合
                     * @return ZoneList 地域集合
                     * 
                     */
                    std::vector<AssetZone> GetZoneList() const;

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                private:

                    /**
                     * 数据
                     */
                    std::vector<InstanceInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 返回数据总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 地域集合
                     */
                    std::vector<AssetZone> m_zoneList;
                    bool m_zoneListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESOURCEASSETRESPONSE_H_
