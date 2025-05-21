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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESETGENERALCONFIGRESPONSE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESETGENERALCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * DescribeFilesetGeneralConfig返回参数结构体
                */
                class DescribeFilesetGeneralConfigResponse : public AbstractModel
                {
                public:
                    DescribeFilesetGeneralConfigResponse();
                    ~DescribeFilesetGeneralConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配额对root用户生效
                     * @return EnforceQuotaOnRoot 配额对root用户生效
                     * 
                     */
                    std::string GetEnforceQuotaOnRoot() const;

                    /**
                     * 判断参数 EnforceQuotaOnRoot 是否已赋值
                     * @return EnforceQuotaOnRoot 是否已赋值
                     * 
                     */
                    bool EnforceQuotaOnRootHasBeenSet() const;

                    /**
                     * 获取配置状态
                     * @return Status 配置状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 配额对root用户生效
                     */
                    std::string m_enforceQuotaOnRoot;
                    bool m_enforceQuotaOnRootHasBeenSet;

                    /**
                     * 配置状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESETGENERALCONFIGRESPONSE_H_
