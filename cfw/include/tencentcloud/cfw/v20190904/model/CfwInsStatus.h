/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CFWINSSTATUS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CFWINSSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 防火墙实例运行状态
                */
                class CfwInsStatus : public AbstractModel
                {
                public:
                    CfwInsStatus();
                    ~CfwInsStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>防火墙实例id</p>
                     * @return CfwInsId <p>防火墙实例id</p>
                     * 
                     */
                    std::string GetCfwInsId() const;

                    /**
                     * 设置<p>防火墙实例id</p>
                     * @param _cfwInsId <p>防火墙实例id</p>
                     * 
                     */
                    void SetCfwInsId(const std::string& _cfwInsId);

                    /**
                     * 判断参数 CfwInsId 是否已赋值
                     * @return CfwInsId 是否已赋值
                     * 
                     */
                    bool CfwInsIdHasBeenSet() const;

                    /**
                     * 获取<p>防火墙类型，nat：nat防火墙；ew：vpc间防火墙</p>
                     * @return FwType <p>防火墙类型，nat：nat防火墙；ew：vpc间防火墙</p>
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置<p>防火墙类型，nat：nat防火墙；ew：vpc间防火墙</p>
                     * @param _fwType <p>防火墙类型，nat：nat防火墙；ew：vpc间防火墙</p>
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例所属地域</p>
                     * @return Region <p>实例所属地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>实例所属地域</p>
                     * @param _region <p>实例所属地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>实例运行状态，Running：正常运行；BypassAutoFix：bypass修复；Updating：升级中；Expand：扩容中；BypassManual：手动触发bypass中；BypassAuto：自动触发bypass中；BypassTcDrop：丢包触发bypass中</p><p>枚举值：</p><ul><li>Running： 正常运行</li><li>BypassAutoFix： 自动bypass已修复</li><li>Updating： 实例升级中</li><li>Expand： 实例扩容中</li><li>BypassManual： 手动触发bypass中</li><li>BypassAuto： 自动触发bypass中</li><li>BypassTcDrop： 丢包触发bypass中</li></ul>
                     * @return Status <p>实例运行状态，Running：正常运行；BypassAutoFix：bypass修复；Updating：升级中；Expand：扩容中；BypassManual：手动触发bypass中；BypassAuto：自动触发bypass中；BypassTcDrop：丢包触发bypass中</p><p>枚举值：</p><ul><li>Running： 正常运行</li><li>BypassAutoFix： 自动bypass已修复</li><li>Updating： 实例升级中</li><li>Expand： 实例扩容中</li><li>BypassManual： 手动触发bypass中</li><li>BypassAuto： 自动触发bypass中</li><li>BypassTcDrop： 丢包触发bypass中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>实例运行状态，Running：正常运行；BypassAutoFix：bypass修复；Updating：升级中；Expand：扩容中；BypassManual：手动触发bypass中；BypassAuto：自动触发bypass中；BypassTcDrop：丢包触发bypass中</p><p>枚举值：</p><ul><li>Running： 正常运行</li><li>BypassAutoFix： 自动bypass已修复</li><li>Updating： 实例升级中</li><li>Expand： 实例扩容中</li><li>BypassManual： 手动触发bypass中</li><li>BypassAuto： 自动触发bypass中</li><li>BypassTcDrop： 丢包触发bypass中</li></ul>
                     * @param _status <p>实例运行状态，Running：正常运行；BypassAutoFix：bypass修复；Updating：升级中；Expand：扩容中；BypassManual：手动触发bypass中；BypassAuto：自动触发bypass中；BypassTcDrop：丢包触发bypass中</p><p>枚举值：</p><ul><li>Running： 正常运行</li><li>BypassAutoFix： 自动bypass已修复</li><li>Updating： 实例升级中</li><li>Expand： 实例扩容中</li><li>BypassManual： 手动触发bypass中</li><li>BypassAuto： 自动触发bypass中</li><li>BypassTcDrop： 丢包触发bypass中</li></ul>
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
                     * 获取<p>事件时间</p>
                     * @return EventTime <p>事件时间</p>
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置<p>事件时间</p>
                     * @param _eventTime <p>事件时间</p>
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取<p>恢复时间</p>
                     * @return RecoverTime <p>恢复时间</p>
                     * 
                     */
                    std::string GetRecoverTime() const;

                    /**
                     * 设置<p>恢复时间</p>
                     * @param _recoverTime <p>恢复时间</p>
                     * 
                     */
                    void SetRecoverTime(const std::string& _recoverTime);

                    /**
                     * 判断参数 RecoverTime 是否已赋值
                     * @return RecoverTime 是否已赋值
                     * 
                     */
                    bool RecoverTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return CfwInsName <p>实例名称</p>
                     * 
                     */
                    std::string GetCfwInsName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _cfwInsName <p>实例名称</p>
                     * 
                     */
                    void SetCfwInsName(const std::string& _cfwInsName);

                    /**
                     * 判断参数 CfwInsName 是否已赋值
                     * @return CfwInsName 是否已赋值
                     * 
                     */
                    bool CfwInsNameHasBeenSet() const;

                    /**
                     * 获取<p>Normal: 正常模式<br>OnlyRoute: 透明模式</p>
                     * @return TrafficMode <p>Normal: 正常模式<br>OnlyRoute: 透明模式</p>
                     * 
                     */
                    std::string GetTrafficMode() const;

                    /**
                     * 设置<p>Normal: 正常模式<br>OnlyRoute: 透明模式</p>
                     * @param _trafficMode <p>Normal: 正常模式<br>OnlyRoute: 透明模式</p>
                     * 
                     */
                    void SetTrafficMode(const std::string& _trafficMode);

                    /**
                     * 判断参数 TrafficMode 是否已赋值
                     * @return TrafficMode 是否已赋值
                     * 
                     */
                    bool TrafficModeHasBeenSet() const;

                private:

                    /**
                     * <p>防火墙实例id</p>
                     */
                    std::string m_cfwInsId;
                    bool m_cfwInsIdHasBeenSet;

                    /**
                     * <p>防火墙类型，nat：nat防火墙；ew：vpc间防火墙</p>
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * <p>实例所属地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>实例运行状态，Running：正常运行；BypassAutoFix：bypass修复；Updating：升级中；Expand：扩容中；BypassManual：手动触发bypass中；BypassAuto：自动触发bypass中；BypassTcDrop：丢包触发bypass中</p><p>枚举值：</p><ul><li>Running： 正常运行</li><li>BypassAutoFix： 自动bypass已修复</li><li>Updating： 实例升级中</li><li>Expand： 实例扩容中</li><li>BypassManual： 手动触发bypass中</li><li>BypassAuto： 自动触发bypass中</li><li>BypassTcDrop： 丢包触发bypass中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>事件时间</p>
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * <p>恢复时间</p>
                     */
                    std::string m_recoverTime;
                    bool m_recoverTimeHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_cfwInsName;
                    bool m_cfwInsNameHasBeenSet;

                    /**
                     * <p>Normal: 正常模式<br>OnlyRoute: 透明模式</p>
                     */
                    std::string m_trafficMode;
                    bool m_trafficModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CFWINSSTATUS_H_
