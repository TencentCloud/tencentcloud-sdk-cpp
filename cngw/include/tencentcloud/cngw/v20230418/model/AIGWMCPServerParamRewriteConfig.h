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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERPARAMREWRITECONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERPARAMREWRITECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWMCPServerRequestRewriteConfig.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关 HTTP 转 MCP 参数改写配置
                */
                class AIGWMCPServerParamRewriteConfig : public AbstractModel
                {
                public:
                    AIGWMCPServerParamRewriteConfig();
                    ~AIGWMCPServerParamRewriteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启服务级参数重写</p>
                     * @return Enable <p>是否开启服务级参数重写</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否开启服务级参数重写</p>
                     * @param _enable <p>是否开启服务级参数重写</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>服务级请求参数重写配置</p>
                     * @return Request <p>服务级请求参数重写配置</p>
                     * 
                     */
                    AIGWMCPServerRequestRewriteConfig GetRequest() const;

                    /**
                     * 设置<p>服务级请求参数重写配置</p>
                     * @param _request <p>服务级请求参数重写配置</p>
                     * 
                     */
                    void SetRequest(const AIGWMCPServerRequestRewriteConfig& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启服务级参数重写</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>服务级请求参数重写配置</p>
                     */
                    AIGWMCPServerRequestRewriteConfig m_request;
                    bool m_requestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERPARAMREWRITECONFIG_H_
