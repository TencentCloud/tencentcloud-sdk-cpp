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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_EXPORTCONTRACTCOMPARISONTASKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_EXPORTCONTRACTCOMPARISONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * ExportContractComparisonTask返回参数结构体
                */
                class ExportContractComparisonTaskResponse : public AbstractModel
                {
                public:
                    ExportContractComparisonTaskResponse();
                    ~ExportContractComparisonTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取对比任务详情下载链接。
                     * @return ResourceUrl 对比任务详情下载链接。
                     * 
                     */
                    std::string GetResourceUrl() const;

                    /**
                     * 判断参数 ResourceUrl 是否已赋值
                     * @return ResourceUrl 是否已赋值
                     * 
                     */
                    bool ResourceUrlHasBeenSet() const;

                    /**
                     * 获取下载链接有效截止时间。
                     * @return ExpireTime 下载链接有效截止时间。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 对比任务详情下载链接。
                     */
                    std::string m_resourceUrl;
                    bool m_resourceUrlHasBeenSet;

                    /**
                     * 下载链接有效截止时间。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EXPORTCONTRACTCOMPARISONTASKRESPONSE_H_
