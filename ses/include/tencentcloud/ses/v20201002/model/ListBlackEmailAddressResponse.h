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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTBLACKEMAILADDRESSRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTBLACKEMAILADDRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/BlackEmailAddress.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListBlackEmailAddress返回参数结构体
                */
                class ListBlackEmailAddressResponse : public AbstractModel
                {
                public:
                    ListBlackEmailAddressResponse();
                    ~ListBlackEmailAddressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取黑名单列表
                     * @return BlackList 黑名单列表
                     * 
                     */
                    std::vector<BlackEmailAddress> GetBlackList() const;

                    /**
                     * 判断参数 BlackList 是否已赋值
                     * @return BlackList 是否已赋值
                     * 
                     */
                    bool BlackListHasBeenSet() const;

                    /**
                     * 获取黑名单总数
                     * @return TotalCount 黑名单总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 黑名单列表
                     */
                    std::vector<BlackEmailAddress> m_blackList;
                    bool m_blackListHasBeenSet;

                    /**
                     * 黑名单总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTBLACKEMAILADDRESSRESPONSE_H_
