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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_EVENTDETAIL_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_EVENTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/LinkRule.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 事件详细信息
                */
                class EventDetail : public AbstractModel
                {
                public:
                    EventDetail();
                    ~EventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件id
                     * @return Id 事件id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置事件id
                     * @param _id 事件id
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
                     * 获取事件名
                     * @return Name 事件名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置事件名
                     * @param _name 事件名
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
                     * 获取事件触发类型
                     * @return TriggerType 事件触发类型
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置事件触发类型
                     * @param _triggerType 事件触发类型
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取事件触发条件，返回为x-json后的字段
                     * @return TriggerCondition 事件触发条件，返回为x-json后的字段
                     * 
                     */
                    std::string GetTriggerCondition() const;

                    /**
                     * 设置事件触发条件，返回为x-json后的字段
                     * @param _triggerCondition 事件触发条件，返回为x-json后的字段
                     * 
                     */
                    void SetTriggerCondition(const std::string& _triggerCondition);

                    /**
                     * 判断参数 TriggerCondition 是否已赋值
                     * @return TriggerCondition 是否已赋值
                     * 
                     */
                    bool TriggerConditionHasBeenSet() const;

                    /**
                     * 获取有效期
                     * @return ValidPeriod 有效期
                     * 
                     */
                    std::string GetValidPeriod() const;

                    /**
                     * 设置有效期
                     * @param _validPeriod 有效期
                     * 
                     */
                    void SetValidPeriod(const std::string& _validPeriod);

                    /**
                     * 判断参数 ValidPeriod 是否已赋值
                     * @return ValidPeriod 是否已赋值
                     * 
                     */
                    bool ValidPeriodHasBeenSet() const;

                    /**
                     * 获取关联规则列表
                     * @return LinkRuleSet 关联规则列表
                     * 
                     */
                    std::vector<LinkRule> GetLinkRuleSet() const;

                    /**
                     * 设置关联规则列表
                     * @param _linkRuleSet 关联规则列表
                     * 
                     */
                    void SetLinkRuleSet(const std::vector<LinkRule>& _linkRuleSet);

                    /**
                     * 判断参数 LinkRuleSet 是否已赋值
                     * @return LinkRuleSet 是否已赋值
                     * 
                     */
                    bool LinkRuleSetHasBeenSet() const;

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
                     * 获取设备类型，当触发类型为deviceType时返回
                     * @return DeviceType 设备类型，当触发类型为deviceType时返回
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型，当触发类型为deviceType时返回
                     * @param _deviceType 设备类型，当触发类型为deviceType时返回
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取设备的wid，当触发类型是device返回
                     * @return WID 设备的wid，当触发类型是device返回
                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备的wid，当触发类型是device返回
                     * @param _wID 设备的wid，当触发类型是device返回
                     * 
                     */
                    void SetWID(const std::string& _wID);

                    /**
                     * 判断参数 WID 是否已赋值
                     * @return WID 是否已赋值
                     * 
                     */
                    bool WIDHasBeenSet() const;

                private:

                    /**
                     * 事件id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 事件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件触发类型
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 事件触发条件，返回为x-json后的字段
                     */
                    std::string m_triggerCondition;
                    bool m_triggerConditionHasBeenSet;

                    /**
                     * 有效期
                     */
                    std::string m_validPeriod;
                    bool m_validPeriodHasBeenSet;

                    /**
                     * 关联规则列表
                     */
                    std::vector<LinkRule> m_linkRuleSet;
                    bool m_linkRuleSetHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 设备类型，当触发类型为deviceType时返回
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 设备的wid，当触发类型是device返回
                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_EVENTDETAIL_H_
