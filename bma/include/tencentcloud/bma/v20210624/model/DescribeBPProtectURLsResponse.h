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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPPROTECTURLSRESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPPROTECTURLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bma/v20210624/model/ProtectURLInfo.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * DescribeBPProtectURLs返回参数结构体
                */
                class DescribeBPProtectURLsResponse : public AbstractModel
                {
                public:
                    DescribeBPProtectURLsResponse();
                    ~DescribeBPProtectURLsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取保护网址列表
                     * @return ProtectURLInfos 保护网址列表
                     * 
                     */
                    std::vector<ProtectURLInfo> GetProtectURLInfos() const;

                    /**
                     * 判断参数 ProtectURLInfos 是否已赋值
                     * @return ProtectURLInfos 是否已赋值
                     * 
                     */
                    bool ProtectURLInfosHasBeenSet() const;

                    /**
                     * 获取总量
                     * @return TotalCount 总量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 保护网址列表
                     */
                    std::vector<ProtectURLInfo> m_protectURLInfos;
                    bool m_protectURLInfosHasBeenSet;

                    /**
                     * 总量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPPROTECTURLSRESPONSE_H_
