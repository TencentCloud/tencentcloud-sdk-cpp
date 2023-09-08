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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYFWGROUPSWITCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYFWGROUPSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/FwGroupSwitch.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyFwGroupSwitch请求参数结构体
                */
                class ModifyFwGroupSwitchRequest : public AbstractModel
                {
                public:
                    ModifyFwGroupSwitchRequest();
                    ~ModifyFwGroupSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取打开或关闭开关
0：关闭开关
1：打开开关
                     * @return Enable 打开或关闭开关
0：关闭开关
1：打开开关
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置打开或关闭开关
0：关闭开关
1：打开开关
                     * @param _enable 打开或关闭开关
0：关闭开关
1：打开开关
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取是否操作全部开关 0 不操作全部开关，1 操作全部开关
                     * @return AllSwitch 是否操作全部开关 0 不操作全部开关，1 操作全部开关
                     * 
                     */
                    int64_t GetAllSwitch() const;

                    /**
                     * 设置是否操作全部开关 0 不操作全部开关，1 操作全部开关
                     * @param _allSwitch 是否操作全部开关 0 不操作全部开关，1 操作全部开关
                     * 
                     */
                    void SetAllSwitch(const int64_t& _allSwitch);

                    /**
                     * 判断参数 AllSwitch 是否已赋值
                     * @return AllSwitch 是否已赋值
                     * 
                     */
                    bool AllSwitchHasBeenSet() const;

                    /**
                     * 获取开关列表
                     * @return SwitchList 开关列表
                     * 
                     */
                    std::vector<FwGroupSwitch> GetSwitchList() const;

                    /**
                     * 设置开关列表
                     * @param _switchList 开关列表
                     * 
                     */
                    void SetSwitchList(const std::vector<FwGroupSwitch>& _switchList);

                    /**
                     * 判断参数 SwitchList 是否已赋值
                     * @return SwitchList 是否已赋值
                     * 
                     */
                    bool SwitchListHasBeenSet() const;

                private:

                    /**
                     * 打开或关闭开关
0：关闭开关
1：打开开关
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 是否操作全部开关 0 不操作全部开关，1 操作全部开关
                     */
                    int64_t m_allSwitch;
                    bool m_allSwitchHasBeenSet;

                    /**
                     * 开关列表
                     */
                    std::vector<FwGroupSwitch> m_switchList;
                    bool m_switchListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYFWGROUPSWITCHREQUEST_H_
