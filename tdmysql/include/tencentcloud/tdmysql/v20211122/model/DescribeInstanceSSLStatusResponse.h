/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEINSTANCESSLSTATUSRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEINSTANCESSLSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeInstanceSSLStatus返回参数结构体
                */
                class DescribeInstanceSSLStatusResponse : public AbstractModel
                {
                public:
                    DescribeInstanceSSLStatusResponse();
                    ~DescribeInstanceSSLStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>SSL启用状态</p><p>枚举值：</p><ul><li>Enabled： SSL已开启</li><li>Disabled： SSL已关闭</li><li>Enabling： SSL开启中</li><li>Disabling： SSL关闭中</li></ul>
                     * @return SSLStatus <p>SSL启用状态</p><p>枚举值：</p><ul><li>Enabled： SSL已开启</li><li>Disabled： SSL已关闭</li><li>Enabling： SSL开启中</li><li>Disabling： SSL关闭中</li></ul>
                     * 
                     */
                    std::string GetSSLStatus() const;

                    /**
                     * 判断参数 SSLStatus 是否已赋值
                     * @return SSLStatus 是否已赋值
                     * 
                     */
                    bool SSLStatusHasBeenSet() const;

                private:

                    /**
                     * <p>SSL启用状态</p><p>枚举值：</p><ul><li>Enabled： SSL已开启</li><li>Disabled： SSL已关闭</li><li>Enabling： SSL开启中</li><li>Disabling： SSL关闭中</li></ul>
                     */
                    std::string m_sSLStatus;
                    bool m_sSLStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEINSTANCESSLSTATUSRESPONSE_H_
