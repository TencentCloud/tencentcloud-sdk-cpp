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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORK_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 峰值网络数据
                */
                class PeakNetwork : public AbstractModel
                {
                public:
                    PeakNetwork();
                    ~PeakNetwork() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录时间。
                     * @return RecordTime 记录时间。
                     * 
                     */
                    std::string GetRecordTime() const;

                    /**
                     * 设置记录时间。
                     * @param _recordTime 记录时间。
                     * 
                     */
                    void SetRecordTime(const std::string& _recordTime);

                    /**
                     * 判断参数 RecordTime 是否已赋值
                     * @return RecordTime 是否已赋值
                     * 
                     */
                    bool RecordTimeHasBeenSet() const;

                    /**
                     * 获取入带宽数据。
                     * @return PeakInNetwork 入带宽数据。
                     * 
                     */
                    std::string GetPeakInNetwork() const;

                    /**
                     * 设置入带宽数据。
                     * @param _peakInNetwork 入带宽数据。
                     * 
                     */
                    void SetPeakInNetwork(const std::string& _peakInNetwork);

                    /**
                     * 判断参数 PeakInNetwork 是否已赋值
                     * @return PeakInNetwork 是否已赋值
                     * 
                     */
                    bool PeakInNetworkHasBeenSet() const;

                    /**
                     * 获取出带宽数据。
                     * @return PeakOutNetwork 出带宽数据。
                     * 
                     */
                    std::string GetPeakOutNetwork() const;

                    /**
                     * 设置出带宽数据。
                     * @param _peakOutNetwork 出带宽数据。
                     * 
                     */
                    void SetPeakOutNetwork(const std::string& _peakOutNetwork);

                    /**
                     * 判断参数 PeakOutNetwork 是否已赋值
                     * @return PeakOutNetwork 是否已赋值
                     * 
                     */
                    bool PeakOutNetworkHasBeenSet() const;

                    /**
                     * 获取计费带宽。单位bps
                     * @return ChargeNetwork 计费带宽。单位bps
                     * 
                     */
                    std::string GetChargeNetwork() const;

                    /**
                     * 设置计费带宽。单位bps
                     * @param _chargeNetwork 计费带宽。单位bps
                     * 
                     */
                    void SetChargeNetwork(const std::string& _chargeNetwork);

                    /**
                     * 判断参数 ChargeNetwork 是否已赋值
                     * @return ChargeNetwork 是否已赋值
                     * 
                     */
                    bool ChargeNetworkHasBeenSet() const;

                private:

                    /**
                     * 记录时间。
                     */
                    std::string m_recordTime;
                    bool m_recordTimeHasBeenSet;

                    /**
                     * 入带宽数据。
                     */
                    std::string m_peakInNetwork;
                    bool m_peakInNetworkHasBeenSet;

                    /**
                     * 出带宽数据。
                     */
                    std::string m_peakOutNetwork;
                    bool m_peakOutNetworkHasBeenSet;

                    /**
                     * 计费带宽。单位bps
                     */
                    std::string m_chargeNetwork;
                    bool m_chargeNetworkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORK_H_
