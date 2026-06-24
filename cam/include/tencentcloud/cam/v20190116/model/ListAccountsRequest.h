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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAccounts请求参数结构体
                */
                class ListAccountsRequest : public AbstractModel
                {
                public:
                    ListAccountsRequest();
                    ~ListAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回结果的条数，当返回结果达到 MaxItems 限制被截断时，返回参数IsTruncated将等于true。</p><p>取值范围：[1, 100]</p>
                     * @return MaxItems <p>返回结果的条数，当返回结果达到 MaxItems 限制被截断时，返回参数IsTruncated将等于true。</p><p>取值范围：[1, 100]</p>
                     * 
                     */
                    int64_t GetMaxItems() const;

                    /**
                     * 设置<p>返回结果的条数，当返回结果达到 MaxItems 限制被截断时，返回参数IsTruncated将等于true。</p><p>取值范围：[1, 100]</p>
                     * @param _maxItems <p>返回结果的条数，当返回结果达到 MaxItems 限制被截断时，返回参数IsTruncated将等于true。</p><p>取值范围：[1, 100]</p>
                     * 
                     */
                    void SetMaxItems(const int64_t& _maxItems);

                    /**
                     * 判断参数 MaxItems 是否已赋值
                     * @return MaxItems 是否已赋值
                     * 
                     */
                    bool MaxItemsHasBeenSet() const;

                    /**
                     * 获取<p>当请求的返回结果被截断时，可以使用Marker获取从当前截断位置之后的内容。</p>
                     * @return Marker <p>当请求的返回结果被截断时，可以使用Marker获取从当前截断位置之后的内容。</p>
                     * 
                     */
                    std::string GetMarker() const;

                    /**
                     * 设置<p>当请求的返回结果被截断时，可以使用Marker获取从当前截断位置之后的内容。</p>
                     * @param _marker <p>当请求的返回结果被截断时，可以使用Marker获取从当前截断位置之后的内容。</p>
                     * 
                     */
                    void SetMarker(const std::string& _marker);

                    /**
                     * 判断参数 Marker 是否已赋值
                     * @return Marker 是否已赋值
                     * 
                     */
                    bool MarkerHasBeenSet() const;

                    /**
                     * 获取<p>用户类型</p><p>枚举值：</p><ul><li>Owner： 主账号</li><li>SubUser： 普通子用户</li><li>CICUser： CIC 子用户</li><li>WechatCorpUser： 企业微信子用户</li><li>AgentIdentity： AgentIdentity子用户</li><li>Collaborator： 协作者</li><li>MessageReceiver： 消息接收者</li></ul>
                     * @return UserType <p>用户类型</p><p>枚举值：</p><ul><li>Owner： 主账号</li><li>SubUser： 普通子用户</li><li>CICUser： CIC 子用户</li><li>WechatCorpUser： 企业微信子用户</li><li>AgentIdentity： AgentIdentity子用户</li><li>Collaborator： 协作者</li><li>MessageReceiver： 消息接收者</li></ul>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>用户类型</p><p>枚举值：</p><ul><li>Owner： 主账号</li><li>SubUser： 普通子用户</li><li>CICUser： CIC 子用户</li><li>WechatCorpUser： 企业微信子用户</li><li>AgentIdentity： AgentIdentity子用户</li><li>Collaborator： 协作者</li><li>MessageReceiver： 消息接收者</li></ul>
                     * @param _userType <p>用户类型</p><p>枚举值：</p><ul><li>Owner： 主账号</li><li>SubUser： 普通子用户</li><li>CICUser： CIC 子用户</li><li>WechatCorpUser： 企业微信子用户</li><li>AgentIdentity： AgentIdentity子用户</li><li>Collaborator： 协作者</li><li>MessageReceiver： 消息接收者</li></ul>
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                private:

                    /**
                     * <p>返回结果的条数，当返回结果达到 MaxItems 限制被截断时，返回参数IsTruncated将等于true。</p><p>取值范围：[1, 100]</p>
                     */
                    int64_t m_maxItems;
                    bool m_maxItemsHasBeenSet;

                    /**
                     * <p>当请求的返回结果被截断时，可以使用Marker获取从当前截断位置之后的内容。</p>
                     */
                    std::string m_marker;
                    bool m_markerHasBeenSet;

                    /**
                     * <p>用户类型</p><p>枚举值：</p><ul><li>Owner： 主账号</li><li>SubUser： 普通子用户</li><li>CICUser： CIC 子用户</li><li>WechatCorpUser： 企业微信子用户</li><li>AgentIdentity： AgentIdentity子用户</li><li>Collaborator： 协作者</li><li>MessageReceiver： 消息接收者</li></ul>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSREQUEST_H_
