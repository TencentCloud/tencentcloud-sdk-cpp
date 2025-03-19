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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ReportImg.h>
#include <tencentcloud/weilingwith/v20230427/model/HandlerPersonInfo.h>
#include <tencentcloud/weilingwith/v20230427/model/HandleRecordInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 告警信息
                */
                class AlarmInfo : public AbstractModel
                {
                public:
                    AlarmInfo();
                    ~AlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间id
                     * @return WorkspaceId 工作空间id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间id
                     * @param _workspaceId 工作空间id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取告警ID
                     * @return Id 告警ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置告警ID
                     * @param _id 告警ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取告警状态
                     * @return Status 告警状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置告警状态
                     * @param _status 告警状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取告警时间
                     * @return Time 告警时间
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置告警时间
                     * @param _time 告警时间
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取告警业务类型
                     * @return Type 告警业务类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置告警业务类型
                     * @param _type 告警业务类型
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
                     * 获取告警业务类型名称
                     * @return TypeName 告警业务类型名称
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置告警业务类型名称
                     * @param _typeName 告警业务类型名称
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取子告警类型
                     * @return SubType 子告警类型
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置子告警类型
                     * @param _subType 子告警类型
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取子告警类型名称
                     * @return SubTypeName 子告警类型名称
                     * 
                     */
                    std::string GetSubTypeName() const;

                    /**
                     * 设置子告警类型名称
                     * @param _subTypeName 子告警类型名称
                     * 
                     */
                    void SetSubTypeName(const std::string& _subTypeName);

                    /**
                     * 判断参数 SubTypeName 是否已赋值
                     * @return SubTypeName 是否已赋值
                     * 
                     */
                    bool SubTypeNameHasBeenSet() const;

                    /**
                     * 获取告警级别id
                     * @return Level 告警级别id
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置告警级别id
                     * @param _level 告警级别id
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取告警级别名称
                     * @return LevelName 告警级别名称
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置告警级别名称
                     * @param _levelName 告警级别名称
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                    /**
                     * 获取上报应用appid
                     * @return AppId 上报应用appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置上报应用appid
                     * @param _appId 上报应用appid
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取设备wid
                     * @return WID 设备wid
                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备wid
                     * @param _wID 设备wid
                     * 
                     */
                    void SetWID(const std::string& _wID);

                    /**
                     * 判断参数 WID 是否已赋值
                     * @return WID 是否已赋值
                     * 
                     */
                    bool WIDHasBeenSet() const;

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
                     * 获取空间位置
                     * @return Position 空间位置
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置空间位置
                     * @param _position 空间位置
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取上报图片
                     * @return ReportImg 上报图片
                     * 
                     */
                    ReportImg GetReportImg() const;

                    /**
                     * 设置上报图片
                     * @param _reportImg 上报图片
                     * 
                     */
                    void SetReportImg(const ReportImg& _reportImg);

                    /**
                     * 判断参数 ReportImg 是否已赋值
                     * @return ReportImg 是否已赋值
                     * 
                     */
                    bool ReportImgHasBeenSet() const;

                    /**
                     * 获取告警描述
                     * @return Desc 告警描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置告警描述
                     * @param _desc 告警描述
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
                     * 获取处理人
                     * @return HandlePersonSet 处理人
                     * 
                     */
                    std::vector<HandlerPersonInfo> GetHandlePersonSet() const;

                    /**
                     * 设置处理人
                     * @param _handlePersonSet 处理人
                     * 
                     */
                    void SetHandlePersonSet(const std::vector<HandlerPersonInfo>& _handlePersonSet);

                    /**
                     * 判断参数 HandlePersonSet 是否已赋值
                     * @return HandlePersonSet 是否已赋值
                     * 
                     */
                    bool HandlePersonSetHasBeenSet() const;

                    /**
                     * 获取处理记录
                     * @return HandleRecordSet 处理记录
                     * 
                     */
                    std::vector<HandleRecordInfo> GetHandleRecordSet() const;

                    /**
                     * 设置处理记录
                     * @param _handleRecordSet 处理记录
                     * 
                     */
                    void SetHandleRecordSet(const std::vector<HandleRecordInfo>& _handleRecordSet);

                    /**
                     * 判断参数 HandleRecordSet 是否已赋值
                     * @return HandleRecordSet 是否已赋值
                     * 
                     */
                    bool HandleRecordSetHasBeenSet() const;

                    /**
                     * 获取扩展信息
                     * @return Extend 扩展信息
                     * 
                     */
                    std::string GetExtend() const;

                    /**
                     * 设置扩展信息
                     * @param _extend 扩展信息
                     * 
                     */
                    void SetExtend(const std::string& _extend);

                    /**
                     * 判断参数 Extend 是否已赋值
                     * @return Extend 是否已赋值
                     * 
                     */
                    bool ExtendHasBeenSet() const;

                    /**
                     * 获取应用扩展字段1
                     * @return ExtendOne 应用扩展字段1
                     * 
                     */
                    std::string GetExtendOne() const;

                    /**
                     * 设置应用扩展字段1
                     * @param _extendOne 应用扩展字段1
                     * 
                     */
                    void SetExtendOne(const std::string& _extendOne);

                    /**
                     * 判断参数 ExtendOne 是否已赋值
                     * @return ExtendOne 是否已赋值
                     * 
                     */
                    bool ExtendOneHasBeenSet() const;

                    /**
                     * 获取应用扩展字段2
                     * @return ExtendTwo 应用扩展字段2
                     * 
                     */
                    std::string GetExtendTwo() const;

                    /**
                     * 设置应用扩展字段2
                     * @param _extendTwo 应用扩展字段2
                     * 
                     */
                    void SetExtendTwo(const std::string& _extendTwo);

                    /**
                     * 判断参数 ExtendTwo 是否已赋值
                     * @return ExtendTwo 是否已赋值
                     * 
                     */
                    bool ExtendTwoHasBeenSet() const;

                    /**
                     * 获取应用透传字段,有效字段为x-json后的字段
                     * @return Echo 应用透传字段,有效字段为x-json后的字段
                     * 
                     */
                    std::string GetEcho() const;

                    /**
                     * 设置应用透传字段,有效字段为x-json后的字段
                     * @param _echo 应用透传字段,有效字段为x-json后的字段
                     * 
                     */
                    void SetEcho(const std::string& _echo);

                    /**
                     * 判断参数 Echo 是否已赋值
                     * @return Echo 是否已赋值
                     * 
                     */
                    bool EchoHasBeenSet() const;

                private:

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 告警ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 告警状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 告警时间
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 告警业务类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警业务类型名称
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 子告警类型
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 子告警类型名称
                     */
                    std::string m_subTypeName;
                    bool m_subTypeNameHasBeenSet;

                    /**
                     * 告警级别id
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 告警级别名称
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * 上报应用appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 设备wid
                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 空间位置
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 上报图片
                     */
                    ReportImg m_reportImg;
                    bool m_reportImgHasBeenSet;

                    /**
                     * 告警描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 处理人
                     */
                    std::vector<HandlerPersonInfo> m_handlePersonSet;
                    bool m_handlePersonSetHasBeenSet;

                    /**
                     * 处理记录
                     */
                    std::vector<HandleRecordInfo> m_handleRecordSet;
                    bool m_handleRecordSetHasBeenSet;

                    /**
                     * 扩展信息
                     */
                    std::string m_extend;
                    bool m_extendHasBeenSet;

                    /**
                     * 应用扩展字段1
                     */
                    std::string m_extendOne;
                    bool m_extendOneHasBeenSet;

                    /**
                     * 应用扩展字段2
                     */
                    std::string m_extendTwo;
                    bool m_extendTwoHasBeenSet;

                    /**
                     * 应用透传字段,有效字段为x-json后的字段
                     */
                    std::string m_echo;
                    bool m_echoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMINFO_H_
