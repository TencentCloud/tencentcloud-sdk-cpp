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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GROUPDEVICEITEM_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GROUPDEVICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 分组下设备信息
                */
                class GroupDeviceItem : public AbstractModel
                {
                public:
                    GroupDeviceItem();
                    ~GroupDeviceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备唯一标识
                     * @return DeviceId 设备唯一标识
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备唯一标识
                     * @param _deviceId 设备唯一标识
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return NickName 设备名称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置设备名称
                     * @param _nickName 设备名称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取设备状态
                     * @return Status 设备状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置设备状态
                     * @param _status 设备状态
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
                     * 获取扩展信息
                     * @return ExtraInformation 扩展信息
                     * 
                     */
                    std::string GetExtraInformation() const;

                    /**
                     * 设置扩展信息
                     * @param _extraInformation 扩展信息
                     * 
                     */
                    void SetExtraInformation(const std::string& _extraInformation);

                    /**
                     * 判断参数 ExtraInformation 是否已赋值
                     * @return ExtraInformation 是否已赋值
                     * 
                     */
                    bool ExtraInformationHasBeenSet() const;

                    /**
                     * 获取设备类型
                     * @return DeviceType 设备类型
                     * 
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置设备类型
                     * @param _deviceType 设备类型
                     * 
                     */
                    void SetDeviceType(const int64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取rtsp地址
                     * @return RTSPUrl rtsp地址
                     * 
                     */
                    std::string GetRTSPUrl() const;

                    /**
                     * 设置rtsp地址
                     * @param _rTSPUrl rtsp地址
                     * 
                     */
                    void SetRTSPUrl(const std::string& _rTSPUrl);

                    /**
                     * 判断参数 RTSPUrl 是否已赋值
                     * @return RTSPUrl 是否已赋值
                     * 
                     */
                    bool RTSPUrlHasBeenSet() const;

                    /**
                     * 获取设备编码
                     * @return DeviceCode 设备编码
                     * 
                     */
                    std::string GetDeviceCode() const;

                    /**
                     * 设置设备编码
                     * @param _deviceCode 设备编码
                     * 
                     */
                    void SetDeviceCode(const std::string& _deviceCode);

                    /**
                     * 判断参数 DeviceCode 是否已赋值
                     * @return DeviceCode 是否已赋值
                     * 
                     */
                    bool DeviceCodeHasBeenSet() const;

                    /**
                     * 获取是否存在录像
                     * @return IsRecord 是否存在录像
                     * 
                     */
                    int64_t GetIsRecord() const;

                    /**
                     * 设置是否存在录像
                     * @param _isRecord 是否存在录像
                     * 
                     */
                    void SetIsRecord(const int64_t& _isRecord);

                    /**
                     * 判断参数 IsRecord 是否已赋值
                     * @return IsRecord 是否已赋值
                     * 
                     */
                    bool IsRecordHasBeenSet() const;

                    /**
                     * 获取该设备是否可录制
                     * @return Recordable 该设备是否可录制
                     * 
                     */
                    int64_t GetRecordable() const;

                    /**
                     * 设置该设备是否可录制
                     * @param _recordable 该设备是否可录制
                     * 
                     */
                    void SetRecordable(const int64_t& _recordable);

                    /**
                     * 判断参数 Recordable 是否已赋值
                     * @return Recordable 是否已赋值
                     * 
                     */
                    bool RecordableHasBeenSet() const;

                    /**
                     * 获取设备接入协议
                     * @return Protocol 设备接入协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置设备接入协议
                     * @param _protocol 设备接入协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取设备创建时间
                     * @return CreateTime 设备创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置设备创建时间
                     * @param _createTime 设备创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取设备通道总数
                     * @return ChannelNum 设备通道总数
                     * 
                     */
                    int64_t GetChannelNum() const;

                    /**
                     * 设置设备通道总数
                     * @param _channelNum 设备通道总数
                     * 
                     */
                    void SetChannelNum(const int64_t& _channelNum);

                    /**
                     * 判断参数 ChannelNum 是否已赋值
                     * @return ChannelNum 是否已赋值
                     * 
                     */
                    bool ChannelNumHasBeenSet() const;

                    /**
                     * 获取设备视频通道总数
                     * @return VideoChannelNum 设备视频通道总数
                     * 
                     */
                    int64_t GetVideoChannelNum() const;

                    /**
                     * 设置设备视频通道总数
                     * @param _videoChannelNum 设备视频通道总数
                     * 
                     */
                    void SetVideoChannelNum(const int64_t& _videoChannelNum);

                    /**
                     * 判断参数 VideoChannelNum 是否已赋值
                     * @return VideoChannelNum 是否已赋值
                     * 
                     */
                    bool VideoChannelNumHasBeenSet() const;

                private:

                    /**
                     * 设备唯一标识
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 设备状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 扩展信息
                     */
                    std::string m_extraInformation;
                    bool m_extraInformationHasBeenSet;

                    /**
                     * 设备类型
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * rtsp地址
                     */
                    std::string m_rTSPUrl;
                    bool m_rTSPUrlHasBeenSet;

                    /**
                     * 设备编码
                     */
                    std::string m_deviceCode;
                    bool m_deviceCodeHasBeenSet;

                    /**
                     * 是否存在录像
                     */
                    int64_t m_isRecord;
                    bool m_isRecordHasBeenSet;

                    /**
                     * 该设备是否可录制
                     */
                    int64_t m_recordable;
                    bool m_recordableHasBeenSet;

                    /**
                     * 设备接入协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 设备创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 设备通道总数
                     */
                    int64_t m_channelNum;
                    bool m_channelNumHasBeenSet;

                    /**
                     * 设备视频通道总数
                     */
                    int64_t m_videoChannelNum;
                    bool m_videoChannelNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GROUPDEVICEITEM_H_
