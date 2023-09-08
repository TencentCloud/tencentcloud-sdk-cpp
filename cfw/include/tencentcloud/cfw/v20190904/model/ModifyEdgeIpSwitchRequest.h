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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYEDGEIPSWITCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYEDGEIPSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/EdgeIpSwitch.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyEdgeIpSwitch请求参数结构体
                */
                class ModifyEdgeIpSwitchRequest : public AbstractModel
                {
                public:
                    ModifyEdgeIpSwitchRequest();
                    ~ModifyEdgeIpSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0 关闭开关
1 打开开关
                     * @return Enable 0 关闭开关
1 打开开关
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置0 关闭开关
1 打开开关
                     * @param _enable 0 关闭开关
1 打开开关
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
                     * 获取操作开关详情
                     * @return EdgeIpSwitchLst 操作开关详情
                     * 
                     */
                    std::vector<EdgeIpSwitch> GetEdgeIpSwitchLst() const;

                    /**
                     * 设置操作开关详情
                     * @param _edgeIpSwitchLst 操作开关详情
                     * 
                     */
                    void SetEdgeIpSwitchLst(const std::vector<EdgeIpSwitch>& _edgeIpSwitchLst);

                    /**
                     * 判断参数 EdgeIpSwitchLst 是否已赋值
                     * @return EdgeIpSwitchLst 是否已赋值
                     * 
                     */
                    bool EdgeIpSwitchLstHasBeenSet() const;

                private:

                    /**
                     * 0 关闭开关
1 打开开关
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 操作开关详情
                     */
                    std::vector<EdgeIpSwitch> m_edgeIpSwitchLst;
                    bool m_edgeIpSwitchLstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYEDGEIPSWITCHREQUEST_H_
