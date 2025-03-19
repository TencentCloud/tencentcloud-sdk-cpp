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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ACTIONOBJ_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ACTIONOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 动作对象
                */
                class ActionObj : public AbstractModel
                {
                public:
                    ActionObj();
                    ~ActionObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作id
                     * @return Id 动作id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置动作id
                     * @param _id 动作id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取动作名称
                     * @return Name 动作名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置动作名称
                     * @param _name 动作名称
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
                     * 获取动作类型。（app/推送消息至应用-携带空间设备：无,appWithNearbyDevices/推送至应用-携带空间设备：携带,device/推送消息至设备-指定设备,nearbyDevices/推送消息至设备-事件所在范围内的设备,toAlarm/转换为告警,toNotification/转换为通知）
                     * @return Type 动作类型。（app/推送消息至应用-携带空间设备：无,appWithNearbyDevices/推送至应用-携带空间设备：携带,device/推送消息至设备-指定设备,nearbyDevices/推送消息至设备-事件所在范围内的设备,toAlarm/转换为告警,toNotification/转换为通知）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置动作类型。（app/推送消息至应用-携带空间设备：无,appWithNearbyDevices/推送至应用-携带空间设备：携带,device/推送消息至设备-指定设备,nearbyDevices/推送消息至设备-事件所在范围内的设备,toAlarm/转换为告警,toNotification/转换为通知）
                     * @param _type 动作类型。（app/推送消息至应用-携带空间设备：无,appWithNearbyDevices/推送至应用-携带空间设备：携带,device/推送消息至设备-指定设备,nearbyDevices/推送消息至设备-事件所在范围内的设备,toAlarm/转换为告警,toNotification/转换为通知）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取动作说明
                     * @return Desc 动作说明
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置动作说明
                     * @param _desc 动作说明
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取消息类型，orgin/custom/model
                     * @return MsgType 消息类型，orgin/custom/model
                     * 
                     */
                    std::string GetMsgType() const;

                    /**
                     * 设置消息类型，orgin/custom/model
                     * @param _msgType 消息类型，orgin/custom/model
                     * 
                     */
                    void SetMsgType(const std::string& _msgType);

                    /**
                     * 判断参数 MsgType 是否已赋值
                     * @return MsgType 是否已赋值
                     * 
                     */
                    bool MsgTypeHasBeenSet() const;

                    /**
                     * 获取消息内容
                     * @return MsgContent 消息内容
                     * 
                     */
                    std::string GetMsgContent() const;

                    /**
                     * 设置消息内容
                     * @param _msgContent 消息内容
                     * 
                     */
                    void SetMsgContent(const std::string& _msgContent);

                    /**
                     * 判断参数 MsgContent 是否已赋值
                     * @return MsgContent 是否已赋值
                     * 
                     */
                    bool MsgContentHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取动作下沉配置
                     * @return SinkConfig 动作下沉配置
                     * 
                     */
                    std::string GetSinkConfig() const;

                    /**
                     * 设置动作下沉配置
                     * @param _sinkConfig 动作下沉配置
                     * 
                     */
                    void SetSinkConfig(const std::string& _sinkConfig);

                    /**
                     * 判断参数 SinkConfig 是否已赋值
                     * @return SinkConfig 是否已赋值
                     * 
                     */
                    bool SinkConfigHasBeenSet() const;

                    /**
                     * 获取 具体应用（appid）/具体设备（DIN/subID）
                     * @return ApplyDevice  具体应用（appid）/具体设备（DIN/subID）
                     * 
                     */
                    std::string GetApplyDevice() const;

                    /**
                     * 设置 具体应用（appid）/具体设备（DIN/subID）
                     * @param _applyDevice  具体应用（appid）/具体设备（DIN/subID）
                     * 
                     */
                    void SetApplyDevice(const std::string& _applyDevice);

                    /**
                     * 判断参数 ApplyDevice 是否已赋值
                     * @return ApplyDevice 是否已赋值
                     * 
                     */
                    bool ApplyDeviceHasBeenSet() const;

                private:

                    /**
                     * 动作id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 动作名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 动作类型。（app/推送消息至应用-携带空间设备：无,appWithNearbyDevices/推送至应用-携带空间设备：携带,device/推送消息至设备-指定设备,nearbyDevices/推送消息至设备-事件所在范围内的设备,toAlarm/转换为告警,toNotification/转换为通知）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 动作说明
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 消息类型，orgin/custom/model
                     */
                    std::string m_msgType;
                    bool m_msgTypeHasBeenSet;

                    /**
                     * 消息内容
                     */
                    std::string m_msgContent;
                    bool m_msgContentHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 动作下沉配置
                     */
                    std::string m_sinkConfig;
                    bool m_sinkConfigHasBeenSet;

                    /**
                     *  具体应用（appid）/具体设备（DIN/subID）
                     */
                    std::string m_applyDevice;
                    bool m_applyDeviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ACTIONOBJ_H_
