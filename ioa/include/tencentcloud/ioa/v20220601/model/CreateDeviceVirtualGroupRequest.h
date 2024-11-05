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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDEVICEVIRTUALGROUPREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDEVICEVIRTUALGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/ComplexRule.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * CreateDeviceVirtualGroup请求参数结构体
                */
                class CreateDeviceVirtualGroupRequest : public AbstractModel
                {
                public:
                    CreateDeviceVirtualGroupRequest();
                    ~CreateDeviceVirtualGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取必填，终端自定义分组名
                     * @return DeviceVirtualGroupName 必填，终端自定义分组名
                     * 
                     */
                    std::string GetDeviceVirtualGroupName() const;

                    /**
                     * 设置必填，终端自定义分组名
                     * @param _deviceVirtualGroupName 必填，终端自定义分组名
                     * 
                     */
                    void SetDeviceVirtualGroupName(const std::string& _deviceVirtualGroupName);

                    /**
                     * 判断参数 DeviceVirtualGroupName 是否已赋值
                     * @return DeviceVirtualGroupName 是否已赋值
                     * 
                     */
                    bool DeviceVirtualGroupNameHasBeenSet() const;

                    /**
                     * 获取详情
                     * @return Description 详情
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置详情
                     * @param _description 详情
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取必填，系统类型（0: win，1：linux，2: mac，3: win_srv，4：android，5：ios ）(只支持32位)
                     * @return OsType 必填，系统类型（0: win，1：linux，2: mac，3: win_srv，4：android，5：ios ）(只支持32位)
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置必填，系统类型（0: win，1：linux，2: mac，3: win_srv，4：android，5：ios ）(只支持32位)
                     * @param _osType 必填，系统类型（0: win，1：linux，2: mac，3: win_srv，4：android，5：ios ）(只支持32位)
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取必填，分组类型（0:手动分组；非0为自动划分分组；具体枚举值为：1:自动每小时划分分组、2:自动每天划分分组、3:自定义时间划分分组）(只支持32位)
                     * @return TimeType 必填，分组类型（0:手动分组；非0为自动划分分组；具体枚举值为：1:自动每小时划分分组、2:自动每天划分分组、3:自定义时间划分分组）(只支持32位)
                     * 
                     */
                    int64_t GetTimeType() const;

                    /**
                     * 设置必填，分组类型（0:手动分组；非0为自动划分分组；具体枚举值为：1:自动每小时划分分组、2:自动每天划分分组、3:自定义时间划分分组）(只支持32位)
                     * @param _timeType 必填，分组类型（0:手动分组；非0为自动划分分组；具体枚举值为：1:自动每小时划分分组、2:自动每天划分分组、3:自定义时间划分分组）(只支持32位)
                     * 
                     */
                    void SetTimeType(const int64_t& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                    /**
                     * 获取选填，TimeType=3时的自动划分时间，其他情况为0（单位min）(只支持32位)
                     * @return AutoMinute 选填，TimeType=3时的自动划分时间，其他情况为0（单位min）(只支持32位)
                     * 
                     */
                    int64_t GetAutoMinute() const;

                    /**
                     * 设置选填，TimeType=3时的自动划分时间，其他情况为0（单位min）(只支持32位)
                     * @param _autoMinute 选填，TimeType=3时的自动划分时间，其他情况为0（单位min）(只支持32位)
                     * 
                     */
                    void SetAutoMinute(const int64_t& _autoMinute);

                    /**
                     * 判断参数 AutoMinute 是否已赋值
                     * @return AutoMinute 是否已赋值
                     * 
                     */
                    bool AutoMinuteHasBeenSet() const;

                    /**
                     * 获取选填，手动分组不填，自动划分分组的划分规则数据
                     * @return AutoRules 选填，手动分组不填，自动划分分组的划分规则数据
                     * 
                     */
                    ComplexRule GetAutoRules() const;

                    /**
                     * 设置选填，手动分组不填，自动划分分组的划分规则数据
                     * @param _autoRules 选填，手动分组不填，自动划分分组的划分规则数据
                     * 
                     */
                    void SetAutoRules(const ComplexRule& _autoRules);

                    /**
                     * 判断参数 AutoRules 是否已赋值
                     * @return AutoRules 是否已赋值
                     * 
                     */
                    bool AutoRulesHasBeenSet() const;

                private:

                    /**
                     * 必填，终端自定义分组名
                     */
                    std::string m_deviceVirtualGroupName;
                    bool m_deviceVirtualGroupNameHasBeenSet;

                    /**
                     * 详情
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 必填，系统类型（0: win，1：linux，2: mac，3: win_srv，4：android，5：ios ）(只支持32位)
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 必填，分组类型（0:手动分组；非0为自动划分分组；具体枚举值为：1:自动每小时划分分组、2:自动每天划分分组、3:自定义时间划分分组）(只支持32位)
                     */
                    int64_t m_timeType;
                    bool m_timeTypeHasBeenSet;

                    /**
                     * 选填，TimeType=3时的自动划分时间，其他情况为0（单位min）(只支持32位)
                     */
                    int64_t m_autoMinute;
                    bool m_autoMinuteHasBeenSet;

                    /**
                     * 选填，手动分组不填，自动划分分组的划分规则数据
                     */
                    ComplexRule m_autoRules;
                    bool m_autoRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDEVICEVIRTUALGROUPREQUEST_H_
