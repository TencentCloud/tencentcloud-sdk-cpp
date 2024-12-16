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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRASPMAXCPUREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRASPMAXCPUREQUEST_H_

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
                * ModifyRaspMaxCpu请求参数结构体
                */
                class ModifyRaspMaxCpuRequest : public AbstractModel
                {
                public:
                    ModifyRaspMaxCpuRequest();
                    ~ModifyRaspMaxCpuRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取rasp当前最大cpu限制，0<cpu<=100，默认100表示不限制
                     * @return RaspMaxCpu rasp当前最大cpu限制，0<cpu<=100，默认100表示不限制
                     * 
                     */
                    uint64_t GetRaspMaxCpu() const;

                    /**
                     * 设置rasp当前最大cpu限制，0<cpu<=100，默认100表示不限制
                     * @param _raspMaxCpu rasp当前最大cpu限制，0<cpu<=100，默认100表示不限制
                     * 
                     */
                    void SetRaspMaxCpu(const uint64_t& _raspMaxCpu);

                    /**
                     * 判断参数 RaspMaxCpu 是否已赋值
                     * @return RaspMaxCpu 是否已赋值
                     * 
                     */
                    bool RaspMaxCpuHasBeenSet() const;

                private:

                    /**
                     * rasp当前最大cpu限制，0<cpu<=100，默认100表示不限制
                     */
                    uint64_t m_raspMaxCpu;
                    bool m_raspMaxCpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRASPMAXCPUREQUEST_H_
