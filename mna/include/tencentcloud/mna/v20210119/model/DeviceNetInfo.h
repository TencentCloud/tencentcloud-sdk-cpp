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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DEVICENETINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DEVICENETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 设备网络状态信息
                */
                class DeviceNetInfo : public AbstractModel
                {
                public:
                    DeviceNetInfo();
                    ~DeviceNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络类型：
0:数据
1:Wi-Fi
2:有线
                     * @return Type 网络类型：
0:数据
1:Wi-Fi
2:有线
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置网络类型：
0:数据
1:Wi-Fi
2:有线
                     * @param _type 网络类型：
0:数据
1:Wi-Fi
2:有线
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取启用/禁用
                     * @return DataEnable 启用/禁用
                     * 
                     */
                    bool GetDataEnable() const;

                    /**
                     * 设置启用/禁用
                     * @param _dataEnable 启用/禁用
                     * 
                     */
                    void SetDataEnable(const bool& _dataEnable);

                    /**
                     * 判断参数 DataEnable 是否已赋值
                     * @return DataEnable 是否已赋值
                     * 
                     */
                    bool DataEnableHasBeenSet() const;

                    /**
                     * 获取上行限速
                     * @return UploadLimit 上行限速
                     * 
                     */
                    std::string GetUploadLimit() const;

                    /**
                     * 设置上行限速
                     * @param _uploadLimit 上行限速
                     * 
                     */
                    void SetUploadLimit(const std::string& _uploadLimit);

                    /**
                     * 判断参数 UploadLimit 是否已赋值
                     * @return UploadLimit 是否已赋值
                     * 
                     */
                    bool UploadLimitHasBeenSet() const;

                    /**
                     * 获取下行限速
                     * @return DownloadLimit 下行限速
                     * 
                     */
                    std::string GetDownloadLimit() const;

                    /**
                     * 设置下行限速
                     * @param _downloadLimit 下行限速
                     * 
                     */
                    void SetDownloadLimit(const std::string& _downloadLimit);

                    /**
                     * 判断参数 DownloadLimit 是否已赋值
                     * @return DownloadLimit 是否已赋值
                     * 
                     */
                    bool DownloadLimitHasBeenSet() const;

                    /**
                     * 获取接收实时速率
                     * @return DataRx 接收实时速率
                     * 
                     */
                    uint64_t GetDataRx() const;

                    /**
                     * 设置接收实时速率
                     * @param _dataRx 接收实时速率
                     * 
                     */
                    void SetDataRx(const uint64_t& _dataRx);

                    /**
                     * 判断参数 DataRx 是否已赋值
                     * @return DataRx 是否已赋值
                     * 
                     */
                    bool DataRxHasBeenSet() const;

                    /**
                     * 获取发送实时速率
                     * @return DataTx 发送实时速率
                     * 
                     */
                    uint64_t GetDataTx() const;

                    /**
                     * 设置发送实时速率
                     * @param _dataTx 发送实时速率
                     * 
                     */
                    void SetDataTx(const uint64_t& _dataTx);

                    /**
                     * 判断参数 DataTx 是否已赋值
                     * @return DataTx 是否已赋值
                     * 
                     */
                    bool DataTxHasBeenSet() const;

                    /**
                     * 获取运营商类型：
1: 中国移动；
2: 中国电信; 
3: 中国联通
                     * @return Vendor 运营商类型：
1: 中国移动；
2: 中国电信; 
3: 中国联通
                     * 
                     */
                    int64_t GetVendor() const;

                    /**
                     * 设置运营商类型：
1: 中国移动；
2: 中国电信; 
3: 中国联通
                     * @param _vendor 运营商类型：
1: 中国移动；
2: 中国电信; 
3: 中国联通
                     * 
                     */
                    void SetVendor(const int64_t& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取连接状态：
0:无连接
1:连接中
2:已连接
                     * @return State 连接状态：
0:无连接
1:连接中
2:已连接
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置连接状态：
0:无连接
1:连接中
2:已连接
                     * @param _state 连接状态：
0:无连接
1:连接中
2:已连接
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取信号强度/单位：dbm
                     * @return SignalStrength 信号强度/单位：dbm
                     * 
                     */
                    int64_t GetSignalStrength() const;

                    /**
                     * 设置信号强度/单位：dbm
                     * @param _signalStrength 信号强度/单位：dbm
                     * 
                     */
                    void SetSignalStrength(const int64_t& _signalStrength);

                    /**
                     * 判断参数 SignalStrength 是否已赋值
                     * @return SignalStrength 是否已赋值
                     * 
                     */
                    bool SignalStrengthHasBeenSet() const;

                    /**
                     * 获取数据网络类型：
-1 ：无效值   
2：2G 
3：3G 
4：4G 
5：5G
                     * @return Rat 数据网络类型：
-1 ：无效值   
2：2G 
3：3G 
4：4G 
5：5G
                     * 
                     */
                    int64_t GetRat() const;

                    /**
                     * 设置数据网络类型：
-1 ：无效值   
2：2G 
3：3G 
4：4G 
5：5G
                     * @param _rat 数据网络类型：
-1 ：无效值   
2：2G 
3：3G 
4：4G 
5：5G
                     * 
                     */
                    void SetRat(const int64_t& _rat);

                    /**
                     * 判断参数 Rat 是否已赋值
                     * @return Rat 是否已赋值
                     * 
                     */
                    bool RatHasBeenSet() const;

                    /**
                     * 获取网卡名
                     * @return NetInfoName 网卡名
                     * 
                     */
                    std::string GetNetInfoName() const;

                    /**
                     * 设置网卡名
                     * @param _netInfoName 网卡名
                     * 
                     */
                    void SetNetInfoName(const std::string& _netInfoName);

                    /**
                     * 判断参数 NetInfoName 是否已赋值
                     * @return NetInfoName 是否已赋值
                     * 
                     */
                    bool NetInfoNameHasBeenSet() const;

                    /**
                     * 获取下行实时速率（浮点数类型代替上一版本DataRx的整型）
                     * @return DownRate 下行实时速率（浮点数类型代替上一版本DataRx的整型）
                     * 
                     */
                    double GetDownRate() const;

                    /**
                     * 设置下行实时速率（浮点数类型代替上一版本DataRx的整型）
                     * @param _downRate 下行实时速率（浮点数类型代替上一版本DataRx的整型）
                     * 
                     */
                    void SetDownRate(const double& _downRate);

                    /**
                     * 判断参数 DownRate 是否已赋值
                     * @return DownRate 是否已赋值
                     * 
                     */
                    bool DownRateHasBeenSet() const;

                    /**
                     * 获取上行实时速率（浮点数类型代替上一版本TxRate的整型）
                     * @return UpRate 上行实时速率（浮点数类型代替上一版本TxRate的整型）
                     * 
                     */
                    double GetUpRate() const;

                    /**
                     * 设置上行实时速率（浮点数类型代替上一版本TxRate的整型）
                     * @param _upRate 上行实时速率（浮点数类型代替上一版本TxRate的整型）
                     * 
                     */
                    void SetUpRate(const double& _upRate);

                    /**
                     * 判断参数 UpRate 是否已赋值
                     * @return UpRate 是否已赋值
                     * 
                     */
                    bool UpRateHasBeenSet() const;

                private:

                    /**
                     * 网络类型：
0:数据
1:Wi-Fi
2:有线
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 启用/禁用
                     */
                    bool m_dataEnable;
                    bool m_dataEnableHasBeenSet;

                    /**
                     * 上行限速
                     */
                    std::string m_uploadLimit;
                    bool m_uploadLimitHasBeenSet;

                    /**
                     * 下行限速
                     */
                    std::string m_downloadLimit;
                    bool m_downloadLimitHasBeenSet;

                    /**
                     * 接收实时速率
                     */
                    uint64_t m_dataRx;
                    bool m_dataRxHasBeenSet;

                    /**
                     * 发送实时速率
                     */
                    uint64_t m_dataTx;
                    bool m_dataTxHasBeenSet;

                    /**
                     * 运营商类型：
1: 中国移动；
2: 中国电信; 
3: 中国联通
                     */
                    int64_t m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * 连接状态：
0:无连接
1:连接中
2:已连接
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 信号强度/单位：dbm
                     */
                    int64_t m_signalStrength;
                    bool m_signalStrengthHasBeenSet;

                    /**
                     * 数据网络类型：
-1 ：无效值   
2：2G 
3：3G 
4：4G 
5：5G
                     */
                    int64_t m_rat;
                    bool m_ratHasBeenSet;

                    /**
                     * 网卡名
                     */
                    std::string m_netInfoName;
                    bool m_netInfoNameHasBeenSet;

                    /**
                     * 下行实时速率（浮点数类型代替上一版本DataRx的整型）
                     */
                    double m_downRate;
                    bool m_downRateHasBeenSet;

                    /**
                     * 上行实时速率（浮点数类型代替上一版本TxRate的整型）
                     */
                    double m_upRate;
                    bool m_upRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DEVICENETINFO_H_
