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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENGENERALSTATRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENGENERALSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ScreenNameValue.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScreenGeneralStat返回参数结构体
                */
                class DescribeScreenGeneralStatResponse : public AbstractModel
                {
                public:
                    DescribeScreenGeneralStatResponse();
                    ~DescribeScreenGeneralStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取name 的值: 在线，关机/离线,未安装，
value : 表示对应的数量
                     * @return Machines name 的值: 在线，关机/离线,未安装，
value : 表示对应的数量
                     * 
                     */
                    std::vector<ScreenNameValue> GetMachines() const;

                    /**
                     * 判断参数 Machines 是否已赋值
                     * @return Machines 是否已赋值
                     * 
                     */
                    bool MachinesHasBeenSet() const;

                    /**
                     * 获取name 的值: 旗舰版，专业版，基础版
value : 表示对应的数量
                     * @return Protection name 的值: 旗舰版，专业版，基础版
value : 表示对应的数量
                     * 
                     */
                    std::vector<ScreenNameValue> GetProtection() const;

                    /**
                     * 判断参数 Protection 是否已赋值
                     * @return Protection 是否已赋值
                     * 
                     */
                    bool ProtectionHasBeenSet() const;

                private:

                    /**
                     * name 的值: 在线，关机/离线,未安装，
value : 表示对应的数量
                     */
                    std::vector<ScreenNameValue> m_machines;
                    bool m_machinesHasBeenSet;

                    /**
                     * name 的值: 旗舰版，专业版，基础版
value : 表示对应的数量
                     */
                    std::vector<ScreenNameValue> m_protection;
                    bool m_protectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENGENERALSTATRESPONSE_H_
