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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYJAVAMEMSHELLPLUGINSWITCHREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYJAVAMEMSHELLPLUGINSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyJavaMemShellPluginSwitch请求参数结构体
                */
                class ModifyJavaMemShellPluginSwitchRequest : public AbstractModel
                {
                public:
                    ModifyJavaMemShellPluginSwitchRequest();
                    ~ModifyJavaMemShellPluginSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机quuid数组
                     * @return Quuids 主机quuid数组
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置主机quuid数组
                     * @param _quuids 主机quuid数组
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取插件目标状态：0: 关闭 1: 开启
                     * @return JavaShellStatus 插件目标状态：0: 关闭 1: 开启
                     * 
                     */
                    uint64_t GetJavaShellStatus() const;

                    /**
                     * 设置插件目标状态：0: 关闭 1: 开启
                     * @param _javaShellStatus 插件目标状态：0: 关闭 1: 开启
                     * 
                     */
                    void SetJavaShellStatus(const uint64_t& _javaShellStatus);

                    /**
                     * 判断参数 JavaShellStatus 是否已赋值
                     * @return JavaShellStatus 是否已赋值
                     * 
                     */
                    bool JavaShellStatusHasBeenSet() const;

                private:

                    /**
                     * 主机quuid数组
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 插件目标状态：0: 关闭 1: 开启
                     */
                    uint64_t m_javaShellStatus;
                    bool m_javaShellStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYJAVAMEMSHELLPLUGINSWITCHREQUEST_H_
