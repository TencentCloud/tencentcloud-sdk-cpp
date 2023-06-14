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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCALARMTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCALARMTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyCCAlarmThreshold请求参数结构体
                */
                class ModifyCCAlarmThresholdRequest : public AbstractModel
                {
                public:
                    ModifyCCAlarmThresholdRequest();
                    ~ModifyCCAlarmThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（shield表示棋牌；bgpip表示高防IP；bgp表示高防包；bgp-multip表示多ip高防包；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（shield表示棋牌；bgpip表示高防IP；bgp表示高防包；bgp-multip表示多ip高防包；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（shield表示棋牌；bgpip表示高防IP；bgp表示高防包；bgp-multip表示多ip高防包；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（shield表示棋牌；bgpip表示高防IP；bgp表示高防包；bgp-multip表示多ip高防包；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID,字符串类型
                     * @return RsId 资源ID,字符串类型
                     * 
                     */
                    std::string GetRsId() const;

                    /**
                     * 设置资源ID,字符串类型
                     * @param _rsId 资源ID,字符串类型
                     * 
                     */
                    void SetRsId(const std::string& _rsId);

                    /**
                     * 判断参数 RsId 是否已赋值
                     * @return RsId 是否已赋值
                     * 
                     */
                    bool RsIdHasBeenSet() const;

                    /**
                     * 获取告警阈值，大于0（目前排定的值），后台设置默认值为1000
                     * @return AlarmThreshold 告警阈值，大于0（目前排定的值），后台设置默认值为1000
                     * 
                     */
                    uint64_t GetAlarmThreshold() const;

                    /**
                     * 设置告警阈值，大于0（目前排定的值），后台设置默认值为1000
                     * @param _alarmThreshold 告警阈值，大于0（目前排定的值），后台设置默认值为1000
                     * 
                     */
                    void SetAlarmThreshold(const uint64_t& _alarmThreshold);

                    /**
                     * 判断参数 AlarmThreshold 是否已赋值
                     * @return AlarmThreshold 是否已赋值
                     * 
                     */
                    bool AlarmThresholdHasBeenSet() const;

                    /**
                     * 获取资源关联的IP列表，高防包未绑定时，传空数组，高防IP专业版传多个IP的数据
                     * @return IpList 资源关联的IP列表，高防包未绑定时，传空数组，高防IP专业版传多个IP的数据
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置资源关联的IP列表，高防包未绑定时，传空数组，高防IP专业版传多个IP的数据
                     * @param _ipList 资源关联的IP列表，高防包未绑定时，传空数组，高防IP专业版传多个IP的数据
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（shield表示棋牌；bgpip表示高防IP；bgp表示高防包；bgp-multip表示多ip高防包；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID,字符串类型
                     */
                    std::string m_rsId;
                    bool m_rsIdHasBeenSet;

                    /**
                     * 告警阈值，大于0（目前排定的值），后台设置默认值为1000
                     */
                    uint64_t m_alarmThreshold;
                    bool m_alarmThresholdHasBeenSet;

                    /**
                     * 资源关联的IP列表，高防包未绑定时，传空数组，高防IP专业版传多个IP的数据
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCALARMTHRESHOLDREQUEST_H_
