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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPOSTPAYPACKAGEFREEQUOTASREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPOSTPAYPACKAGEFREEQUOTASREQUEST_H_

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
                * DescribePostpayPackageFreeQuotas请求参数结构体
                */
                class DescribePostpayPackageFreeQuotasRequest : public AbstractModel
                {
                public:
                    DescribePostpayPackageFreeQuotasRequest();
                    ~DescribePostpayPackageFreeQuotasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
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
                     * 获取免费额度类型标识
                     * @return FreeQuotaType 免费额度类型标识
                     * 
                     */
                    std::string GetFreeQuotaType() const;

                    /**
                     * 设置免费额度类型标识
                     * @param _freeQuotaType 免费额度类型标识
                     * 
                     */
                    void SetFreeQuotaType(const std::string& _freeQuotaType);

                    /**
                     * 判断参数 FreeQuotaType 是否已赋值
                     * @return FreeQuotaType 是否已赋值
                     * 
                     */
                    bool FreeQuotaTypeHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 免费额度类型标识
                     */
                    std::string m_freeQuotaType;
                    bool m_freeQuotaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPOSTPAYPACKAGEFREEQUOTASREQUEST_H_
