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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTIPACCESSCONTROLRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTIPACCESSCONTROLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * UpsertIpAccessControl返回参数结构体
                */
                class UpsertIpAccessControlResponse : public AbstractModel
                {
                public:
                    UpsertIpAccessControlResponse();
                    ~UpsertIpAccessControlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取添加或修改失败的条目
                     * @return FailedItems 添加或修改失败的条目
                     * 
                     */
                    std::string GetFailedItems() const;

                    /**
                     * 判断参数 FailedItems 是否已赋值
                     * @return FailedItems 是否已赋值
                     * 
                     */
                    bool FailedItemsHasBeenSet() const;

                    /**
                     * 获取添加或修改失败的数目
                     * @return FailedCount 添加或修改失败的数目
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取添加或修改的IP数据Id列表
                     * @return Ids 添加或修改的IP数据Id列表
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * 添加或修改失败的条目
                     */
                    std::string m_failedItems;
                    bool m_failedItemsHasBeenSet;

                    /**
                     * 添加或修改失败的数目
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * 添加或修改的IP数据Id列表
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTIPACCESSCONTROLRESPONSE_H_
