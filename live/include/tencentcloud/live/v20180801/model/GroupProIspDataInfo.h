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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_GROUPPROISPDATAINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_GROUPPROISPDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CdnPlayStatData.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 某省份某运营商在某段时间内的带宽，流量，请求数和并发数
                */
                class GroupProIspDataInfo : public AbstractModel
                {
                public:
                    GroupProIspDataInfo();
                    ~GroupProIspDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取省份。
                     * @return ProvinceName 省份。
                     * 
                     */
                    std::string GetProvinceName() const;

                    /**
                     * 设置省份。
                     * @param _provinceName 省份。
                     * 
                     */
                    void SetProvinceName(const std::string& _provinceName);

                    /**
                     * 判断参数 ProvinceName 是否已赋值
                     * @return ProvinceName 是否已赋值
                     * 
                     */
                    bool ProvinceNameHasBeenSet() const;

                    /**
                     * 获取运营商。
                     * @return IspName 运营商。
                     * 
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置运营商。
                     * @param _ispName 运营商。
                     * 
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     * 
                     */
                    bool IspNameHasBeenSet() const;

                    /**
                     * 获取分钟维度的明细数据。
                     * @return DetailInfoList 分钟维度的明细数据。
                     * 
                     */
                    std::vector<CdnPlayStatData> GetDetailInfoList() const;

                    /**
                     * 设置分钟维度的明细数据。
                     * @param _detailInfoList 分钟维度的明细数据。
                     * 
                     */
                    void SetDetailInfoList(const std::vector<CdnPlayStatData>& _detailInfoList);

                    /**
                     * 判断参数 DetailInfoList 是否已赋值
                     * @return DetailInfoList 是否已赋值
                     * 
                     */
                    bool DetailInfoListHasBeenSet() const;

                private:

                    /**
                     * 省份。
                     */
                    std::string m_provinceName;
                    bool m_provinceNameHasBeenSet;

                    /**
                     * 运营商。
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                    /**
                     * 分钟维度的明细数据。
                     */
                    std::vector<CdnPlayStatData> m_detailInfoList;
                    bool m_detailInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_GROUPPROISPDATAINFO_H_
