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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENDUSERLOGINSTATISTICREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENDUSERLOGINSTATISTICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeEndUserLoginStatistic请求参数结构体
                */
                class DescribeEndUserLoginStatisticRequest : public AbstractModel
                {
                public:
                    DescribeEndUserLoginStatisticRequest();
                    ~DescribeEndUserLoginStatisticRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取终端用户来源
<li> qcloud </li>
<li>miniapp</li>
                     * @return Source 终端用户来源
<li> qcloud </li>
<li>miniapp</li>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置终端用户来源
<li> qcloud </li>
<li>miniapp</li>
                     * @param _source 终端用户来源
<li> qcloud </li>
<li>miniapp</li>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 终端用户来源
<li> qcloud </li>
<li>miniapp</li>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENDUSERLOGINSTATISTICREQUEST_H_
