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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/ListAllUser.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAccounts返回参数结构体
                */
                class ListAccountsResponse : public AbstractModel
                {
                public:
                    ListAccountsResponse();
                    ~ListAccountsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>子账号列表。</p>
                     * @return Users <p>子账号列表。</p>
                     * 
                     */
                    std::vector<ListAllUser> GetUsers() const;

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取<p>当IsTruncated为true时才有此字段，当返回true时，需要继续调用此接口，并且使用Marker获取截断后的内容 。</p>
                     * @return Marker <p>当IsTruncated为true时才有此字段，当返回true时，需要继续调用此接口，并且使用Marker获取截断后的内容 。</p>
                     * 
                     */
                    std::string GetMarker() const;

                    /**
                     * 判断参数 Marker 是否已赋值
                     * @return Marker 是否已赋值
                     * 
                     */
                    bool MarkerHasBeenSet() const;

                    /**
                     * 获取<p>请求返回结果是否被截断。</p>
                     * @return IsTruncated <p>请求返回结果是否被截断。</p>
                     * 
                     */
                    bool GetIsTruncated() const;

                    /**
                     * 判断参数 IsTruncated 是否已赋值
                     * @return IsTruncated 是否已赋值
                     * 
                     */
                    bool IsTruncatedHasBeenSet() const;

                private:

                    /**
                     * <p>子账号列表。</p>
                     */
                    std::vector<ListAllUser> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * <p>当IsTruncated为true时才有此字段，当返回true时，需要继续调用此接口，并且使用Marker获取截断后的内容 。</p>
                     */
                    std::string m_marker;
                    bool m_markerHasBeenSet;

                    /**
                     * <p>请求返回结果是否被截断。</p>
                     */
                    bool m_isTruncated;
                    bool m_isTruncatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSRESPONSE_H_
