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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_BILLCOUNTRYINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_BILLCOUNTRYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/BillDataInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 海外分区直播带宽出参国家带宽信息
                */
                class BillCountryInfo : public AbstractModel
                {
                public:
                    BillCountryInfo();
                    ~BillCountryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取国家名称
                     * @return Name 国家名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置国家名称
                     * @param _name 国家名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取带宽明细数据信息。
                     * @return BandInfoList 带宽明细数据信息。
                     * 
                     */
                    std::vector<BillDataInfo> GetBandInfoList() const;

                    /**
                     * 设置带宽明细数据信息。
                     * @param _bandInfoList 带宽明细数据信息。
                     * 
                     */
                    void SetBandInfoList(const std::vector<BillDataInfo>& _bandInfoList);

                    /**
                     * 判断参数 BandInfoList 是否已赋值
                     * @return BandInfoList 是否已赋值
                     * 
                     */
                    bool BandInfoListHasBeenSet() const;

                private:

                    /**
                     * 国家名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 带宽明细数据信息。
                     */
                    std::vector<BillDataInfo> m_bandInfoList;
                    bool m_bandInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_BILLCOUNTRYINFO_H_
