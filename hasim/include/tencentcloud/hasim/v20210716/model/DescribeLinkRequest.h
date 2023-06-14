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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBELINKREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBELINKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * DescribeLink请求参数结构体
                */
                class DescribeLinkRequest : public AbstractModel
                {
                public:
                    DescribeLinkRequest();
                    ~DescribeLinkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云兔卡ID
                     * @return LinkID 云兔卡ID
                     * 
                     */
                    int64_t GetLinkID() const;

                    /**
                     * 设置云兔卡ID
                     * @param _linkID 云兔卡ID
                     * 
                     */
                    void SetLinkID(const int64_t& _linkID);

                    /**
                     * 判断参数 LinkID 是否已赋值
                     * @return LinkID 是否已赋值
                     * 
                     */
                    bool LinkIDHasBeenSet() const;

                    /**
                     * 获取具体的账号
                     * @return UinAccount 具体的账号
                     * 
                     */
                    std::string GetUinAccount() const;

                    /**
                     * 设置具体的账号
                     * @param _uinAccount 具体的账号
                     * 
                     */
                    void SetUinAccount(const std::string& _uinAccount);

                    /**
                     * 判断参数 UinAccount 是否已赋值
                     * @return UinAccount 是否已赋值
                     * 
                     */
                    bool UinAccountHasBeenSet() const;

                private:

                    /**
                     * 云兔卡ID
                     */
                    int64_t m_linkID;
                    bool m_linkIDHasBeenSet;

                    /**
                     * 具体的账号
                     */
                    std::string m_uinAccount;
                    bool m_uinAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBELINKREQUEST_H_
