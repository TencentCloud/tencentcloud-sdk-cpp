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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_DEVICEREPORT_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_DEVICEREPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * 设备上报信息
                */
                class DeviceReport : public AbstractModel
                {
                public:
                    DeviceReport();
                    ~DeviceReport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取移动设备ID
                     * @return Imei 移动设备ID
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置移动设备ID
                     * @param _imei 移动设备ID
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取经度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lng 经度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLng() const;

                    /**
                     * 设置经度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lng 经度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLng(const std::string& _lng);

                    /**
                     * 判断参数 Lng 是否已赋值
                     * @return Lng 是否已赋值
                     * 
                     */
                    bool LngHasBeenSet() const;

                    /**
                     * 获取维度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lat 维度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLat() const;

                    /**
                     * 设置维度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lat 维度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLat(const std::string& _lat);

                    /**
                     * 判断参数 Lat 是否已赋值
                     * @return Lat 是否已赋值
                     * 
                     */
                    bool LatHasBeenSet() const;

                    /**
                     * 获取运营商基站ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lac 运营商基站ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLac() const;

                    /**
                     * 设置运营商基站ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lac 运营商基站ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLac(const std::string& _lac);

                    /**
                     * 判断参数 Lac 是否已赋值
                     * @return Lac 是否已赋值
                     * 
                     */
                    bool LacHasBeenSet() const;

                    /**
                     * 获取小区CellID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cell 小区CellID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCell() const;

                    /**
                     * 设置小区CellID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cell 小区CellID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCell(const std::string& _cell);

                    /**
                     * 判断参数 Cell 是否已赋值
                     * @return Cell 是否已赋值
                     * 
                     */
                    bool CellHasBeenSet() const;

                    /**
                     * 获取当前上报运营商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Iccid 当前上报运营商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIccid() const;

                    /**
                     * 设置当前上报运营商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iccid 当前上报运营商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIccid(const std::string& _iccid);

                    /**
                     * 判断参数 Iccid 是否已赋值
                     * @return Iccid 是否已赋值
                     * 
                     */
                    bool IccidHasBeenSet() const;

                    /**
                     * 获取信号强度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rss 信号强度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRss() const;

                    /**
                     * 设置信号强度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rss 信号强度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRss(const int64_t& _rss);

                    /**
                     * 判断参数 Rss 是否已赋值
                     * @return Rss 是否已赋值
                     * 
                     */
                    bool RssHasBeenSet() const;

                    /**
                     * 获取运营商: 1 移动 2 联通 3 电信
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tele 运营商: 1 移动 2 联通 3 电信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTele() const;

                    /**
                     * 设置运营商: 1 移动 2 联通 3 电信
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tele 运营商: 1 移动 2 联通 3 电信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTele(const int64_t& _tele);

                    /**
                     * 判断参数 Tele 是否已赋值
                     * @return Tele 是否已赋值
                     * 
                     */
                    bool TeleHasBeenSet() const;

                    /**
                     * 获取当前设备策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tid 当前设备策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTid() const;

                    /**
                     * 设置当前设备策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tid 当前设备策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTid(const int64_t& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取心跳间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ping 心跳间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPing() const;

                    /**
                     * 设置心跳间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ping 心跳间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPing(const int64_t& _ping);

                    /**
                     * 判断参数 Ping 是否已赋值
                     * @return Ping 是否已赋值
                     * 
                     */
                    bool PingHasBeenSet() const;

                    /**
                     * 获取网络延迟,单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Delay 网络延迟,单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDelay() const;

                    /**
                     * 设置网络延迟,单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delay 网络延迟,单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDelay(const int64_t& _delay);

                    /**
                     * 判断参数 Delay 是否已赋值
                     * @return Delay 是否已赋值
                     * 
                     */
                    bool DelayHasBeenSet() const;

                    /**
                     * 获取高级日志启停状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Log 高级日志启停状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLog() const;

                    /**
                     * 设置高级日志启停状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _log 高级日志启停状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLog(const int64_t& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DevType 设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDevType() const;

                    /**
                     * 设置设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _devType 设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDevType(const std::string& _devType);

                    /**
                     * 判断参数 DevType 是否已赋值
                     * @return DevType 是否已赋值
                     * 
                     */
                    bool DevTypeHasBeenSet() const;

                    /**
                     * 获取设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DevModel 设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDevModel() const;

                    /**
                     * 设置设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _devModel 设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDevModel(const std::string& _devModel);

                    /**
                     * 判断参数 DevModel 是否已赋值
                     * @return DevModel 是否已赋值
                     * 
                     */
                    bool DevModelHasBeenSet() const;

                    /**
                     * 获取设备版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 设备版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置设备版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 设备版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取设备刷新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UploadTime 设备刷新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUploadTime() const;

                    /**
                     * 设置设备刷新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uploadTime 设备刷新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUploadTime(const std::string& _uploadTime);

                    /**
                     * 判断参数 UploadTime 是否已赋值
                     * @return UploadTime 是否已赋值
                     * 
                     */
                    bool UploadTimeHasBeenSet() const;

                    /**
                     * 获取网络环境: 0 正常 1 弱网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 网络环境: 0 正常 1 弱网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置网络环境: 0 正常 1 弱网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 网络环境: 0 正常 1 弱网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取每月第一次上报心跳时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonthFirstTime 每月第一次上报心跳时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMonthFirstTime() const;

                    /**
                     * 设置每月第一次上报心跳时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monthFirstTime 每月第一次上报心跳时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonthFirstTime(const std::string& _monthFirstTime);

                    /**
                     * 判断参数 MonthFirstTime 是否已赋值
                     * @return MonthFirstTime 是否已赋值
                     * 
                     */
                    bool MonthFirstTimeHasBeenSet() const;

                private:

                    /**
                     * 移动设备ID
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * 经度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lng;
                    bool m_lngHasBeenSet;

                    /**
                     * 维度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lat;
                    bool m_latHasBeenSet;

                    /**
                     * 运营商基站ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lac;
                    bool m_lacHasBeenSet;

                    /**
                     * 小区CellID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cell;
                    bool m_cellHasBeenSet;

                    /**
                     * 当前上报运营商ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iccid;
                    bool m_iccidHasBeenSet;

                    /**
                     * 信号强度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rss;
                    bool m_rssHasBeenSet;

                    /**
                     * 运营商: 1 移动 2 联通 3 电信
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tele;
                    bool m_teleHasBeenSet;

                    /**
                     * 当前设备策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 心跳间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ping;
                    bool m_pingHasBeenSet;

                    /**
                     * 网络延迟,单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_delay;
                    bool m_delayHasBeenSet;

                    /**
                     * 高级日志启停状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_log;
                    bool m_logHasBeenSet;

                    /**
                     * 设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_devType;
                    bool m_devTypeHasBeenSet;

                    /**
                     * 设备型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_devModel;
                    bool m_devModelHasBeenSet;

                    /**
                     * 设备版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 设备刷新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uploadTime;
                    bool m_uploadTimeHasBeenSet;

                    /**
                     * 网络环境: 0 正常 1 弱网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 每月第一次上报心跳时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_monthFirstTime;
                    bool m_monthFirstTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_DEVICEREPORT_H_
