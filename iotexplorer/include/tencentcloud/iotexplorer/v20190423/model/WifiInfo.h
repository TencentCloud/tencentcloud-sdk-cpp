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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_WIFIINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_WIFIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * wifi定位信息
                */
                class WifiInfo : public AbstractModel
                {
                public:
                    WifiInfo();
                    ~WifiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取mac地址
                     * @return MAC mac地址
                     * 
                     */
                    std::string GetMAC() const;

                    /**
                     * 设置mac地址
                     * @param _mAC mac地址
                     * 
                     */
                    void SetMAC(const std::string& _mAC);

                    /**
                     * 判断参数 MAC 是否已赋值
                     * @return MAC 是否已赋值
                     * 
                     */
                    bool MACHasBeenSet() const;

                    /**
                     * 获取信号强度
                     * @return RSSI 信号强度
                     * 
                     */
                    int64_t GetRSSI() const;

                    /**
                     * 设置信号强度
                     * @param _rSSI 信号强度
                     * 
                     */
                    void SetRSSI(const int64_t& _rSSI);

                    /**
                     * 判断参数 RSSI 是否已赋值
                     * @return RSSI 是否已赋值
                     * 
                     */
                    bool RSSIHasBeenSet() const;

                private:

                    /**
                     * mac地址
                     */
                    std::string m_mAC;
                    bool m_mACHasBeenSet;

                    /**
                     * 信号强度
                     */
                    int64_t m_rSSI;
                    bool m_rSSIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_WIFIINFO_H_
