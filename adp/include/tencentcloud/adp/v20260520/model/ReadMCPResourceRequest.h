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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_READMCPRESOURCEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_READMCPRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ReadMCPResource请求参数结构体
                */
                class ReadMCPResourceRequest : public AbstractModel
                {
                public:
                    ReadMCPResourceRequest();
                    ~ReadMCPResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>能力边界：一次请求只能读该 plugin 的资源</p>
                     * @return PluginId <p>能力边界：一次请求只能读该 plugin 的资源</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>能力边界：一次请求只能读该 plugin 的资源</p>
                     * @param _pluginId <p>能力边界：一次请求只能读该 plugin 的资源</p>
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取<p>agent-exec 侧 thread</p>
                     * @return ThreadId <p>agent-exec 侧 thread</p>
                     * 
                     */
                    std::string GetThreadId() const;

                    /**
                     * 设置<p>agent-exec 侧 thread</p>
                     * @param _threadId <p>agent-exec 侧 thread</p>
                     * 
                     */
                    void SetThreadId(const std::string& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取<p>资源 URI，来源 tool 的 _meta.ui.resourceUri</p>
                     * @return Uri <p>资源 URI，来源 tool 的 _meta.ui.resourceUri</p>
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置<p>资源 URI，来源 tool 的 _meta.ui.resourceUri</p>
                     * @param _uri <p>资源 URI，来源 tool 的 _meta.ui.resourceUri</p>
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                private:

                    /**
                     * <p>能力边界：一次请求只能读该 plugin 的资源</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>agent-exec 侧 thread</p>
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>资源 URI，来源 tool 的 _meta.ui.resourceUri</p>
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_READMCPRESOURCEREQUEST_H_
