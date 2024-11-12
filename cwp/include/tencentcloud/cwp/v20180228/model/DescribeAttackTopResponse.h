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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTOPRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTOPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/NetAttackTopInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAttackTop返回参数结构体
                */
                class DescribeAttackTopResponse : public AbstractModel
                {
                public:
                    DescribeAttackTopResponse();
                    ~DescribeAttackTopResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取top统计数据
                     * @return NetAttackTopInfo top统计数据
                     * 
                     */
                    NetAttackTopInfo GetNetAttackTopInfo() const;

                    /**
                     * 判断参数 NetAttackTopInfo 是否已赋值
                     * @return NetAttackTopInfo 是否已赋值
                     * 
                     */
                    bool NetAttackTopInfoHasBeenSet() const;

                private:

                    /**
                     * top统计数据
                     */
                    NetAttackTopInfo m_netAttackTopInfo;
                    bool m_netAttackTopInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTOPRESPONSE_H_
