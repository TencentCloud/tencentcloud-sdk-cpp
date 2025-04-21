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
                     * 获取防火墙实例id
                     * @return CfwInsId 防火墙实例id
                     * 
                     */
                    std::string GetCfwInsId() const;

                    /**
                     * 设置防火墙实例id
                     * @param _cfwInsId 防火墙实例id
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
                     * 获取防火墙类型，nat：nat防火墙；ew：vpc间防火墙
                     * @return FwType 防火墙类型，nat：nat防火墙；ew：vpc间防火墙
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置防火墙类型，nat：nat防火墙；ew：vpc间防火墙
                     * @param _fwType 防火墙类型，nat：nat防火墙；ew：vpc间防火墙
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
                     * 获取实例所属地域
                     * @return Region 实例所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所属地域
                     * @param _region 实例所属地域
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
                     * 获取实例运行状态，Running：正常运行；BypassAutoFix：bypass修复；Updating：升级中；Expand：扩容中；BypassManual：手动触发bypass中；BypassAuto：自动触发bypass中
                     * @return Status 实例运行状态，Running：正常运行；BypassAutoFix：bypass修复；Updating：升级中；Expand：扩容中；BypassManual：手动触发bypass中；BypassAuto：自动触发bypass中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例运行状态，Running：正常运行；BypassAutoFix：bypass修复；Updating：升级中；Expand：扩容中；BypassManual：手动触发bypass中；BypassAuto：自动触发bypass中
                     * @param _status 实例运行状态，Running：正常运行；BypassAutoFix：bypass修复；Updating：升级中；Expand：扩容中；BypassManual：手动触发bypass中；BypassAuto：自动触发bypass中
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
                     * 获取事件时间
                     * @return EventTime 事件时间
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置事件时间
                     * @param _eventTime 事件时间
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
                     * 获取恢复时间
                     * @return RecoverTime 恢复时间
                     * 
                     */
                    std::string GetRecoverTime() const;

                    /**
                     * 设置恢复时间
                     * @param _recoverTime 恢复时间
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
                     * 获取实例名称
                     * @return CfwInsName 实例名称
                     * 
                     */
                    std::string GetCfwInsName() const;

                    /**
                     * 设置实例名称
                     * @param _cfwInsName 实例名称
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
                     * 获取Normal: 正常模式
OnlyRoute: 透明模式
                     * @return TrafficMode Normal: 正常模式
OnlyRoute: 透明模式
                     * 
                     */
                    std::string GetTrafficMode() const;

                    /**
                     * 设置Normal: 正常模式
OnlyRoute: 透明模式
                     * @param _trafficMode Normal: 正常模式
OnlyRoute: 透明模式
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
                     * 防火墙实例id
                     */
                    std::string m_cfwInsId;
                    bool m_cfwInsIdHasBeenSet;

                    /**
                     * 防火墙类型，nat：nat防火墙；ew：vpc间防火墙
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 实例所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例运行状态，Running：正常运行；BypassAutoFix：bypass修复；Updating：升级中；Expand：扩容中；BypassManual：手动触发bypass中；BypassAuto：自动触发bypass中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件时间
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 恢复时间
                     */
                    std::string m_recoverTime;
                    bool m_recoverTimeHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_cfwInsName;
                    bool m_cfwInsNameHasBeenSet;

                    /**
                     * Normal: 正常模式
OnlyRoute: 透明模式
                     */
                    std::string m_trafficMode;
                    bool m_trafficModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CFWINSSTATUS_H_
