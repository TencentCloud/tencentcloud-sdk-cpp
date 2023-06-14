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

#ifndef TENCENTCLOUD_RKP_V20191209_MODEL_QUERYDEVANDRISKREQUEST_H_
#define TENCENTCLOUD_RKP_V20191209_MODEL_QUERYDEVANDRISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rkp
    {
        namespace V20191209
        {
            namespace Model
            {
                /**
                * QueryDevAndRisk请求参数结构体
                */
                class QueryDevAndRiskRequest : public AbstractModel
                {
                public:
                    QueryDevAndRiskRequest();
                    ~QueryDevAndRiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备类型 0表示Android， 1表示IOS
                     * @return DevType 设备类型 0表示Android， 1表示IOS
                     * 
                     */
                    int64_t GetDevType() const;

                    /**
                     * 设置设备类型 0表示Android， 1表示IOS
                     * @param _devType 设备类型 0表示Android， 1表示IOS
                     * 
                     */
                    void SetDevType(const int64_t& _devType);

                    /**
                     * 判断参数 DevType 是否已赋值
                     * @return DevType 是否已赋值
                     * 
                     */
                    bool DevTypeHasBeenSet() const;

                    /**
                     * 获取Android Imei号
                     * @return Imei Android Imei号
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置Android Imei号
                     * @param _imei Android Imei号
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
                     * 获取Mac地址
                     * @return Mac Mac地址
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置Mac地址
                     * @param _mac Mac地址
                     * 
                     */
                    void SetMac(const std::string& _mac);

                    /**
                     * 判断参数 Mac 是否已赋值
                     * @return Mac 是否已赋值
                     * 
                     */
                    bool MacHasBeenSet() const;

                    /**
                     * 获取android  Aid
                     * @return Aid android  Aid
                     * 
                     */
                    std::string GetAid() const;

                    /**
                     * 设置android  Aid
                     * @param _aid android  Aid
                     * 
                     */
                    void SetAid(const std::string& _aid);

                    /**
                     * 判断参数 Aid 是否已赋值
                     * @return Aid 是否已赋值
                     * 
                     */
                    bool AidHasBeenSet() const;

                    /**
                     * 获取Android Cid
                     * @return Cid Android Cid
                     * 
                     */
                    std::string GetCid() const;

                    /**
                     * 设置Android Cid
                     * @param _cid Android Cid
                     * 
                     */
                    void SetCid(const std::string& _cid);

                    /**
                     * 判断参数 Cid 是否已赋值
                     * @return Cid 是否已赋值
                     * 
                     */
                    bool CidHasBeenSet() const;

                    /**
                     * 获取手机Imsi
                     * @return Imsi 手机Imsi
                     * 
                     */
                    std::string GetImsi() const;

                    /**
                     * 设置手机Imsi
                     * @param _imsi 手机Imsi
                     * 
                     */
                    void SetImsi(const std::string& _imsi);

                    /**
                     * 判断参数 Imsi 是否已赋值
                     * @return Imsi 是否已赋值
                     * 
                     */
                    bool ImsiHasBeenSet() const;

                    /**
                     * 获取Df 磁盘分区信息
                     * @return Df Df 磁盘分区信息
                     * 
                     */
                    std::string GetDf() const;

                    /**
                     * 设置Df 磁盘分区信息
                     * @param _df Df 磁盘分区信息
                     * 
                     */
                    void SetDf(const std::string& _df);

                    /**
                     * 判断参数 Df 是否已赋值
                     * @return Df 是否已赋值
                     * 
                     */
                    bool DfHasBeenSet() const;

                    /**
                     * 获取内核版本
                     * @return KernelVer 内核版本
                     * 
                     */
                    std::string GetKernelVer() const;

                    /**
                     * 设置内核版本
                     * @param _kernelVer 内核版本
                     * 
                     */
                    void SetKernelVer(const std::string& _kernelVer);

                    /**
                     * 判断参数 KernelVer 是否已赋值
                     * @return KernelVer 是否已赋值
                     * 
                     */
                    bool KernelVerHasBeenSet() const;

                    /**
                     * 获取存储大小
                     * @return Storage 存储大小
                     * 
                     */
                    std::string GetStorage() const;

                    /**
                     * 设置存储大小
                     * @param _storage 存储大小
                     * 
                     */
                    void SetStorage(const std::string& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取设备驱动指纹
                     * @return Dfp 设备驱动指纹
                     * 
                     */
                    std::string GetDfp() const;

                    /**
                     * 设置设备驱动指纹
                     * @param _dfp 设备驱动指纹
                     * 
                     */
                    void SetDfp(const std::string& _dfp);

                    /**
                     * 判断参数 Dfp 是否已赋值
                     * @return Dfp 是否已赋值
                     * 
                     */
                    bool DfpHasBeenSet() const;

                    /**
                     * 获取启动时间
                     * @return BootTime 启动时间
                     * 
                     */
                    std::string GetBootTime() const;

                    /**
                     * 设置启动时间
                     * @param _bootTime 启动时间
                     * 
                     */
                    void SetBootTime(const std::string& _bootTime);

                    /**
                     * 判断参数 BootTime 是否已赋值
                     * @return BootTime 是否已赋值
                     * 
                     */
                    bool BootTimeHasBeenSet() const;

                    /**
                     * 获取分辨率 水平*垂直 格式
                     * @return Resolution 分辨率 水平*垂直 格式
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率 水平*垂直 格式
                     * @param _resolution 分辨率 水平*垂直 格式
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取铃声列表
                     * @return RingList 铃声列表
                     * 
                     */
                    std::string GetRingList() const;

                    /**
                     * 设置铃声列表
                     * @param _ringList 铃声列表
                     * 
                     */
                    void SetRingList(const std::string& _ringList);

                    /**
                     * 判断参数 RingList 是否已赋值
                     * @return RingList 是否已赋值
                     * 
                     */
                    bool RingListHasBeenSet() const;

                    /**
                     * 获取字体列表
                     * @return FontList 字体列表
                     * 
                     */
                    std::string GetFontList() const;

                    /**
                     * 设置字体列表
                     * @param _fontList 字体列表
                     * 
                     */
                    void SetFontList(const std::string& _fontList);

                    /**
                     * 判断参数 FontList 是否已赋值
                     * @return FontList 是否已赋值
                     * 
                     */
                    bool FontListHasBeenSet() const;

                    /**
                     * 获取传感器列表
                     * @return SensorList 传感器列表
                     * 
                     */
                    std::string GetSensorList() const;

                    /**
                     * 设置传感器列表
                     * @param _sensorList 传感器列表
                     * 
                     */
                    void SetSensorList(const std::string& _sensorList);

                    /**
                     * 判断参数 SensorList 是否已赋值
                     * @return SensorList 是否已赋值
                     * 
                     */
                    bool SensorListHasBeenSet() const;

                    /**
                     * 获取CPU型号
                     * @return CpuType CPU型号
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置CPU型号
                     * @param _cpuType CPU型号
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取电池容量
                     * @return Battery 电池容量
                     * 
                     */
                    std::string GetBattery() const;

                    /**
                     * 设置电池容量
                     * @param _battery 电池容量
                     * 
                     */
                    void SetBattery(const std::string& _battery);

                    /**
                     * 判断参数 Battery 是否已赋值
                     * @return Battery 是否已赋值
                     * 
                     */
                    bool BatteryHasBeenSet() const;

                    /**
                     * 获取信通院广告ID
                     * @return Oaid 信通院广告ID
                     * 
                     */
                    std::string GetOaid() const;

                    /**
                     * 设置信通院广告ID
                     * @param _oaid 信通院广告ID
                     * 
                     */
                    void SetOaid(const std::string& _oaid);

                    /**
                     * 判断参数 Oaid 是否已赋值
                     * @return Oaid 是否已赋值
                     * 
                     */
                    bool OaidHasBeenSet() const;

                    /**
                     * 获取IOS 广告ID
                     * @return Idfa IOS 广告ID
                     * 
                     */
                    std::string GetIdfa() const;

                    /**
                     * 设置IOS 广告ID
                     * @param _idfa IOS 广告ID
                     * 
                     */
                    void SetIdfa(const std::string& _idfa);

                    /**
                     * 判断参数 Idfa 是否已赋值
                     * @return Idfa 是否已赋值
                     * 
                     */
                    bool IdfaHasBeenSet() const;

                    /**
                     * 获取IOS 应用ID
                     * @return Idfv IOS 应用ID
                     * 
                     */
                    std::string GetIdfv() const;

                    /**
                     * 设置IOS 应用ID
                     * @param _idfv IOS 应用ID
                     * 
                     */
                    void SetIdfv(const std::string& _idfv);

                    /**
                     * 判断参数 Idfv 是否已赋值
                     * @return Idfv 是否已赋值
                     * 
                     */
                    bool IdfvHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取IOS手机型号
                     * @return IphoneModel IOS手机型号
                     * 
                     */
                    std::string GetIphoneModel() const;

                    /**
                     * 设置IOS手机型号
                     * @param _iphoneModel IOS手机型号
                     * 
                     */
                    void SetIphoneModel(const std::string& _iphoneModel);

                    /**
                     * 判断参数 IphoneModel 是否已赋值
                     * @return IphoneModel 是否已赋值
                     * 
                     */
                    bool IphoneModelHasBeenSet() const;

                    /**
                     * 获取Android 指纹
                     * @return Fingerprint Android 指纹
                     * 
                     */
                    std::string GetFingerprint() const;

                    /**
                     * 设置Android 指纹
                     * @param _fingerprint Android 指纹
                     * 
                     */
                    void SetFingerprint(const std::string& _fingerprint);

                    /**
                     * 判断参数 Fingerprint 是否已赋值
                     * @return Fingerprint 是否已赋值
                     * 
                     */
                    bool FingerprintHasBeenSet() const;

                    /**
                     * 获取Android序列号
                     * @return SerialId Android序列号
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置Android序列号
                     * @param _serialId Android序列号
                     * 
                     */
                    void SetSerialId(const std::string& _serialId);

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                private:

                    /**
                     * 设备类型 0表示Android， 1表示IOS
                     */
                    int64_t m_devType;
                    bool m_devTypeHasBeenSet;

                    /**
                     * Android Imei号
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * Mac地址
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * android  Aid
                     */
                    std::string m_aid;
                    bool m_aidHasBeenSet;

                    /**
                     * Android Cid
                     */
                    std::string m_cid;
                    bool m_cidHasBeenSet;

                    /**
                     * 手机Imsi
                     */
                    std::string m_imsi;
                    bool m_imsiHasBeenSet;

                    /**
                     * Df 磁盘分区信息
                     */
                    std::string m_df;
                    bool m_dfHasBeenSet;

                    /**
                     * 内核版本
                     */
                    std::string m_kernelVer;
                    bool m_kernelVerHasBeenSet;

                    /**
                     * 存储大小
                     */
                    std::string m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 设备驱动指纹
                     */
                    std::string m_dfp;
                    bool m_dfpHasBeenSet;

                    /**
                     * 启动时间
                     */
                    std::string m_bootTime;
                    bool m_bootTimeHasBeenSet;

                    /**
                     * 分辨率 水平*垂直 格式
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 铃声列表
                     */
                    std::string m_ringList;
                    bool m_ringListHasBeenSet;

                    /**
                     * 字体列表
                     */
                    std::string m_fontList;
                    bool m_fontListHasBeenSet;

                    /**
                     * 传感器列表
                     */
                    std::string m_sensorList;
                    bool m_sensorListHasBeenSet;

                    /**
                     * CPU型号
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * 电池容量
                     */
                    std::string m_battery;
                    bool m_batteryHasBeenSet;

                    /**
                     * 信通院广告ID
                     */
                    std::string m_oaid;
                    bool m_oaidHasBeenSet;

                    /**
                     * IOS 广告ID
                     */
                    std::string m_idfa;
                    bool m_idfaHasBeenSet;

                    /**
                     * IOS 应用ID
                     */
                    std::string m_idfv;
                    bool m_idfvHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * IOS手机型号
                     */
                    std::string m_iphoneModel;
                    bool m_iphoneModelHasBeenSet;

                    /**
                     * Android 指纹
                     */
                    std::string m_fingerprint;
                    bool m_fingerprintHasBeenSet;

                    /**
                     * Android序列号
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RKP_V20191209_MODEL_QUERYDEVANDRISKREQUEST_H_
