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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERESOLVECOUNTRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERESOLVECOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/ResolveCountDataItem.h>
#include <tencentcloud/dnspod/v20210323/model/ResolveCountInfo.h>
#include <tencentcloud/dnspod/v20210323/model/ResolveCountAliasItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeResolveCount返回参数结构体
                */
                class DescribeResolveCountResponse : public AbstractModel
                {
                public:
                    DescribeResolveCountResponse();
                    ~DescribeResolveCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取解析量明细
                     * @return Data 解析量明细
                     * 
                     */
                    std::vector<ResolveCountDataItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取解析量统计信息
                     * @return Info 解析量统计信息
                     * 
                     */
                    ResolveCountInfo GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取别名解析量明细
                     * @return AliasData 别名解析量明细
                     * 
                     */
                    std::vector<ResolveCountAliasItem> GetAliasData() const;

                    /**
                     * 判断参数 AliasData 是否已赋值
                     * @return AliasData 是否已赋值
                     * 
                     */
                    bool AliasDataHasBeenSet() const;

                private:

                    /**
                     * 解析量明细
                     */
                    std::vector<ResolveCountDataItem> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 解析量统计信息
                     */
                    ResolveCountInfo m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 别名解析量明细
                     */
                    std::vector<ResolveCountAliasItem> m_aliasData;
                    bool m_aliasDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERESOLVECOUNTRESPONSE_H_
