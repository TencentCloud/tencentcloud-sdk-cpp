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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHARTIFACTSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHARTIFACTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ListAIWorkbenchArtifacts请求参数结构体
                */
                class ListAIWorkbenchArtifactsRequest : public AbstractModel
                {
                public:
                    ListAIWorkbenchArtifactsRequest();
                    ~ListAIWorkbenchArtifactsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>每页数量</p>
                     * @return PerPage <p>每页数量</p>
                     * 
                     */
                    int64_t GetPerPage() const;

                    /**
                     * 设置<p>每页数量</p>
                     * @param _perPage <p>每页数量</p>
                     * 
                     */
                    void SetPerPage(const int64_t& _perPage);

                    /**
                     * 判断参数 PerPage 是否已赋值
                     * @return PerPage 是否已赋值
                     * 
                     */
                    bool PerPageHasBeenSet() const;

                    /**
                     * 获取<p>页码</p>
                     * @return PageNo <p>页码</p>
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置<p>页码</p>
                     * @param _pageNo <p>页码</p>
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取<p>会话ID</p>
                     * @return SessionIds <p>会话ID</p>
                     * 
                     */
                    std::vector<std::string> GetSessionIds() const;

                    /**
                     * 设置<p>会话ID</p>
                     * @param _sessionIds <p>会话ID</p>
                     * 
                     */
                    void SetSessionIds(const std::vector<std::string>& _sessionIds);

                    /**
                     * 判断参数 SessionIds 是否已赋值
                     * @return SessionIds 是否已赋值
                     * 
                     */
                    bool SessionIdsHasBeenSet() const;

                    /**
                     * 获取<p>消息内容类型</p>
                     * @return MimeTypes <p>消息内容类型</p>
                     * 
                     */
                    std::vector<std::string> GetMimeTypes() const;

                    /**
                     * 设置<p>消息内容类型</p>
                     * @param _mimeTypes <p>消息内容类型</p>
                     * 
                     */
                    void SetMimeTypes(const std::vector<std::string>& _mimeTypes);

                    /**
                     * 判断参数 MimeTypes 是否已赋值
                     * @return MimeTypes 是否已赋值
                     * 
                     */
                    bool MimeTypesHasBeenSet() const;

                    /**
                     * 获取<p>排序</p><p>枚举值：</p><ul><li>ASC： 正序</li><li>DESC： 倒序</li></ul>
                     * @return OrderDirection <p>排序</p><p>枚举值：</p><ul><li>ASC： 正序</li><li>DESC： 倒序</li></ul>
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置<p>排序</p><p>枚举值：</p><ul><li>ASC： 正序</li><li>DESC： 倒序</li></ul>
                     * @param _orderDirection <p>排序</p><p>枚举值：</p><ul><li>ASC： 正序</li><li>DESC： 倒序</li></ul>
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * <p>每页数量</p>
                     */
                    int64_t m_perPage;
                    bool m_perPageHasBeenSet;

                    /**
                     * <p>页码</p>
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * <p>会话ID</p>
                     */
                    std::vector<std::string> m_sessionIds;
                    bool m_sessionIdsHasBeenSet;

                    /**
                     * <p>消息内容类型</p>
                     */
                    std::vector<std::string> m_mimeTypes;
                    bool m_mimeTypesHasBeenSet;

                    /**
                     * <p>排序</p><p>枚举值：</p><ul><li>ASC： 正序</li><li>DESC： 倒序</li></ul>
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHARTIFACTSREQUEST_H_
