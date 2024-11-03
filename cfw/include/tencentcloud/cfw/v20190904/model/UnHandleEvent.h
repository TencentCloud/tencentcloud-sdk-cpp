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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_UNHANDLEEVENT_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_UNHANDLEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/UnHandleEventDetail.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 未处置事件详情
                */
                class UnHandleEvent : public AbstractModel
                {
                public:
                    UnHandleEvent();
                    ~UnHandleEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伪攻击链类型
                     * @return EventTableListStruct 伪攻击链类型
                     * 
                     */
                    std::vector<UnHandleEventDetail> GetEventTableListStruct() const;

                    /**
                     * 设置伪攻击链类型
                     * @param _eventTableListStruct 伪攻击链类型
                     * 
                     */
                    void SetEventTableListStruct(const std::vector<UnHandleEventDetail>& _eventTableListStruct);

                    /**
                     * 判断参数 EventTableListStruct 是否已赋值
                     * @return EventTableListStruct 是否已赋值
                     * 
                     */
                    bool EventTableListStructHasBeenSet() const;

                    /**
                     * 获取1 是  0否
                     * @return BaseLineUser 1 是  0否
                     * 
                     */
                    uint64_t GetBaseLineUser() const;

                    /**
                     * 设置1 是  0否
                     * @param _baseLineUser 1 是  0否
                     * 
                     */
                    void SetBaseLineUser(const uint64_t& _baseLineUser);

                    /**
                     * 判断参数 BaseLineUser 是否已赋值
                     * @return BaseLineUser 是否已赋值
                     * 
                     */
                    bool BaseLineUserHasBeenSet() const;

                    /**
                     * 获取1 打开 0 关闭
                     * @return BaseLineInSwitch 1 打开 0 关闭
                     * 
                     */
                    uint64_t GetBaseLineInSwitch() const;

                    /**
                     * 设置1 打开 0 关闭
                     * @param _baseLineInSwitch 1 打开 0 关闭
                     * 
                     */
                    void SetBaseLineInSwitch(const uint64_t& _baseLineInSwitch);

                    /**
                     * 判断参数 BaseLineInSwitch 是否已赋值
                     * @return BaseLineInSwitch 是否已赋值
                     * 
                     */
                    bool BaseLineInSwitchHasBeenSet() const;

                    /**
                     * 获取1 打开 0 关闭
                     * @return BaseLineOutSwitch 1 打开 0 关闭
                     * 
                     */
                    uint64_t GetBaseLineOutSwitch() const;

                    /**
                     * 设置1 打开 0 关闭
                     * @param _baseLineOutSwitch 1 打开 0 关闭
                     * 
                     */
                    void SetBaseLineOutSwitch(const uint64_t& _baseLineOutSwitch);

                    /**
                     * 判断参数 BaseLineOutSwitch 是否已赋值
                     * @return BaseLineOutSwitch 是否已赋值
                     * 
                     */
                    bool BaseLineOutSwitchHasBeenSet() const;

                    /**
                     * 获取vpc间防火墙实例数量
                     * @return VpcFwCount vpc间防火墙实例数量
                     * 
                     */
                    uint64_t GetVpcFwCount() const;

                    /**
                     * 设置vpc间防火墙实例数量
                     * @param _vpcFwCount vpc间防火墙实例数量
                     * 
                     */
                    void SetVpcFwCount(const uint64_t& _vpcFwCount);

                    /**
                     * 判断参数 VpcFwCount 是否已赋值
                     * @return VpcFwCount 是否已赋值
                     * 
                     */
                    bool VpcFwCountHasBeenSet() const;

                private:

                    /**
                     * 伪攻击链类型
                     */
                    std::vector<UnHandleEventDetail> m_eventTableListStruct;
                    bool m_eventTableListStructHasBeenSet;

                    /**
                     * 1 是  0否
                     */
                    uint64_t m_baseLineUser;
                    bool m_baseLineUserHasBeenSet;

                    /**
                     * 1 打开 0 关闭
                     */
                    uint64_t m_baseLineInSwitch;
                    bool m_baseLineInSwitchHasBeenSet;

                    /**
                     * 1 打开 0 关闭
                     */
                    uint64_t m_baseLineOutSwitch;
                    bool m_baseLineOutSwitchHasBeenSet;

                    /**
                     * vpc间防火墙实例数量
                     */
                    uint64_t m_vpcFwCount;
                    bool m_vpcFwCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_UNHANDLEEVENT_H_
