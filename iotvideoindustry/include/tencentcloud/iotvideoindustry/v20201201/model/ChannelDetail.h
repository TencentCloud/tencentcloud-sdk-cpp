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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CHANNELDETAIL_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CHANNELDETAIL_H_

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
                * 国标通道详细信息
                */
                class ChannelDetail : public AbstractModel
                {
                public:
                    ChannelDetail();
                    ~ChannelDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道名称
                     * @return ChannelName 通道名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置通道名称
                     * @param _channelName 通道名称
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取通道唯一标识
                     * @return ChannelId 通道唯一标识
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道唯一标识
                     * @param _channelId 通道唯一标识
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取通道类型 0：未知；1：视频通道；2：音频通道；3：告警通道
                     * @return ChannelType 通道类型 0：未知；1：视频通道；2：音频通道；3：告警通道
                     * 
                     */
                    int64_t GetChannelType() const;

                    /**
                     * 设置通道类型 0：未知；1：视频通道；2：音频通道；3：告警通道
                     * @param _channelType 通道类型 0：未知；1：视频通道；2：音频通道；3：告警通道
                     * 
                     */
                    void SetChannelType(const int64_t& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                    /**
                     * 获取20位国标通道编码
                     * @return ChannelCode 20位国标通道编码
                     * 
                     */
                    std::string GetChannelCode() const;

                    /**
                     * 设置20位国标通道编码
                     * @param _channelCode 20位国标通道编码
                     * 
                     */
                    void SetChannelCode(const std::string& _channelCode);

                    /**
                     * 判断参数 ChannelCode 是否已赋值
                     * @return ChannelCode 是否已赋值
                     * 
                     */
                    bool ChannelCodeHasBeenSet() const;

                    /**
                     * 获取通道扩展信息
                     * @return ExtraInformation 通道扩展信息
                     * 
                     */
                    std::string GetExtraInformation() const;

                    /**
                     * 设置通道扩展信息
                     * @param _extraInformation 通道扩展信息
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
                     * 获取通道在线状态
                     * @return Status 通道在线状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置通道在线状态
                     * @param _status 通道在线状态
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
                     * 获取通道是否存在录像标识 0：无录像；1：有录像
                     * @return IsRecord 通道是否存在录像标识 0：无录像；1：有录像
                     * 
                     */
                    int64_t GetIsRecord() const;

                    /**
                     * 设置通道是否存在录像标识 0：无录像；1：有录像
                     * @param _isRecord 通道是否存在录像标识 0：无录像；1：有录像
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
                     * 获取通道所属设备唯一标识
                     * @return DeviceId 通道所属设备唯一标识
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置通道所属设备唯一标识
                     * @param _deviceId 通道所属设备唯一标识
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
                     * 获取通道所属虚拟组织的ID
                     * @return BusinessGroupId 通道所属虚拟组织的ID
                     * 
                     */
                    std::string GetBusinessGroupId() const;

                    /**
                     * 设置通道所属虚拟组织的ID
                     * @param _businessGroupId 通道所属虚拟组织的ID
                     * 
                     */
                    void SetBusinessGroupId(const std::string& _businessGroupId);

                    /**
                     * 判断参数 BusinessGroupId 是否已赋值
                     * @return BusinessGroupId 是否已赋值
                     * 
                     */
                    bool BusinessGroupIdHasBeenSet() const;

                private:

                    /**
                     * 通道名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 通道唯一标识
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 通道类型 0：未知；1：视频通道；2：音频通道；3：告警通道
                     */
                    int64_t m_channelType;
                    bool m_channelTypeHasBeenSet;

                    /**
                     * 20位国标通道编码
                     */
                    std::string m_channelCode;
                    bool m_channelCodeHasBeenSet;

                    /**
                     * 通道扩展信息
                     */
                    std::string m_extraInformation;
                    bool m_extraInformationHasBeenSet;

                    /**
                     * 通道在线状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 通道是否存在录像标识 0：无录像；1：有录像
                     */
                    int64_t m_isRecord;
                    bool m_isRecordHasBeenSet;

                    /**
                     * 通道所属设备唯一标识
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 通道所属虚拟组织的ID
                     */
                    std::string m_businessGroupId;
                    bool m_businessGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CHANNELDETAIL_H_
