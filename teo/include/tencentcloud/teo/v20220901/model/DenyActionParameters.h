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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DENYACTIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DENYACTIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 安全执行动作为拦截时的附加参数。

该参数用于指定在命中安全规则并执行拦截动作时，系统所采取的附加处置动作。
不同处置动作由不同且固定的参数组合进行配置，系统将根据所配置的参数组合判定实际生效的处置动作类型。
在同一次拦截执行过程中，仅允许配置并生效一种处置动作，多个处置动作对应的参数组合不可同时出现，否则视为非法配置。为空则采用默认拦截处置动作。
DenyActionParameters 支持以下附加处置动作：<li>默认：当 DenyActionParameters 为空，或未启用任何附加处置动作时，系统将执行默认拦截处置，即响应拦截页面。</li><li>IP 封禁：对触发规则的客户端来源 IP 进行持续封禁。对应参数 BlockIp、BlockIpDuration。</li><li>自定义页面拦截：使用指定的自定义页面内容响应请求。对应参数 ReturnCustomPage、ResponseCode、ErrorPageId。</li><li>静默：接受客户端请求但不返回。对应参数 Stall。</li>
                */
                class DenyActionParameters : public AbstractModel
                {
                public:
                    DenyActionParameters();
                    ~DenyActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否对来源 IP 延长封禁。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，对触发规则的客户端 IP 持续拦截。当启用该选项时，必须同时指定 BlockIpDuration 参数。
注意：该选项不可与 ReturnCustomPage 或 Stall 选项同时启用。
                     * @return BlockIp 是否对来源 IP 延长封禁。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，对触发规则的客户端 IP 持续拦截。当启用该选项时，必须同时指定 BlockIpDuration 参数。
注意：该选项不可与 ReturnCustomPage 或 Stall 选项同时启用。
                     * 
                     */
                    std::string GetBlockIp() const;

                    /**
                     * 设置是否对来源 IP 延长封禁。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，对触发规则的客户端 IP 持续拦截。当启用该选项时，必须同时指定 BlockIpDuration 参数。
注意：该选项不可与 ReturnCustomPage 或 Stall 选项同时启用。
                     * @param _blockIp 是否对来源 IP 延长封禁。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，对触发规则的客户端 IP 持续拦截。当启用该选项时，必须同时指定 BlockIpDuration 参数。
注意：该选项不可与 ReturnCustomPage 或 Stall 选项同时启用。
                     * 
                     */
                    void SetBlockIp(const std::string& _blockIp);

                    /**
                     * 判断参数 BlockIp 是否已赋值
                     * @return BlockIp 是否已赋值
                     * 
                     */
                    bool BlockIpHasBeenSet() const;

                    /**
                     * 获取当 BlockIP 为 on 时IP 的封禁时长。
                     * @return BlockIpDuration 当 BlockIP 为 on 时IP 的封禁时长。
                     * 
                     */
                    std::string GetBlockIpDuration() const;

                    /**
                     * 设置当 BlockIP 为 on 时IP 的封禁时长。
                     * @param _blockIpDuration 当 BlockIP 为 on 时IP 的封禁时长。
                     * 
                     */
                    void SetBlockIpDuration(const std::string& _blockIpDuration);

                    /**
                     * 判断参数 BlockIpDuration 是否已赋值
                     * @return BlockIpDuration 是否已赋值
                     * 
                     */
                    bool BlockIpDurationHasBeenSet() const;

                    /**
                     * 获取是否使用自定义页面。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，使用自定义页面内容拦截（响应）请求，当启用该选项时，必须同时指定 ResponseCode 和 ErrorPageId 参数。
注意：该选项不可与 BlockIp 或 Stall 选项同时启用。

                     * @return ReturnCustomPage 是否使用自定义页面。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，使用自定义页面内容拦截（响应）请求，当启用该选项时，必须同时指定 ResponseCode 和 ErrorPageId 参数。
注意：该选项不可与 BlockIp 或 Stall 选项同时启用。

                     * 
                     */
                    std::string GetReturnCustomPage() const;

                    /**
                     * 设置是否使用自定义页面。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，使用自定义页面内容拦截（响应）请求，当启用该选项时，必须同时指定 ResponseCode 和 ErrorPageId 参数。
注意：该选项不可与 BlockIp 或 Stall 选项同时启用。

                     * @param _returnCustomPage 是否使用自定义页面。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，使用自定义页面内容拦截（响应）请求，当启用该选项时，必须同时指定 ResponseCode 和 ErrorPageId 参数。
注意：该选项不可与 BlockIp 或 Stall 选项同时启用。

                     * 
                     */
                    void SetReturnCustomPage(const std::string& _returnCustomPage);

                    /**
                     * 判断参数 ReturnCustomPage 是否已赋值
                     * @return ReturnCustomPage 是否已赋值
                     * 
                     */
                    bool ReturnCustomPageHasBeenSet() const;

                    /**
                     * 获取自定义页面的状态码。
                     * @return ResponseCode 自定义页面的状态码。
                     * 
                     */
                    std::string GetResponseCode() const;

                    /**
                     * 设置自定义页面的状态码。
                     * @param _responseCode 自定义页面的状态码。
                     * 
                     */
                    void SetResponseCode(const std::string& _responseCode);

                    /**
                     * 判断参数 ResponseCode 是否已赋值
                     * @return ResponseCode 是否已赋值
                     * 
                     */
                    bool ResponseCodeHasBeenSet() const;

                    /**
                     * 获取自定义页面的PageId。
                     * @return ErrorPageId 自定义页面的PageId。
                     * 
                     */
                    std::string GetErrorPageId() const;

                    /**
                     * 设置自定义页面的PageId。
                     * @param _errorPageId 自定义页面的PageId。
                     * 
                     */
                    void SetErrorPageId(const std::string& _errorPageId);

                    /**
                     * 判断参数 ErrorPageId 是否已赋值
                     * @return ErrorPageId 是否已赋值
                     * 
                     */
                    bool ErrorPageIdHasBeenSet() const;

                    /**
                     * 获取是否对请求来源挂起不予处理。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，不再响应当前连接会话内请求，且不会主动断开连接。用于爬虫对抗时，消耗客户端连接资源。
注意：该选项不可与 BlockIp 或 ReturnCustomPage 选项同时启用。
                     * @return Stall 是否对请求来源挂起不予处理。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，不再响应当前连接会话内请求，且不会主动断开连接。用于爬虫对抗时，消耗客户端连接资源。
注意：该选项不可与 BlockIp 或 ReturnCustomPage 选项同时启用。
                     * 
                     */
                    std::string GetStall() const;

                    /**
                     * 设置是否对请求来源挂起不予处理。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，不再响应当前连接会话内请求，且不会主动断开连接。用于爬虫对抗时，消耗客户端连接资源。
注意：该选项不可与 BlockIp 或 ReturnCustomPage 选项同时启用。
                     * @param _stall 是否对请求来源挂起不予处理。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，不再响应当前连接会话内请求，且不会主动断开连接。用于爬虫对抗时，消耗客户端连接资源。
注意：该选项不可与 BlockIp 或 ReturnCustomPage 选项同时启用。
                     * 
                     */
                    void SetStall(const std::string& _stall);

                    /**
                     * 判断参数 Stall 是否已赋值
                     * @return Stall 是否已赋值
                     * 
                     */
                    bool StallHasBeenSet() const;

                private:

                    /**
                     * 是否对来源 IP 延长封禁。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，对触发规则的客户端 IP 持续拦截。当启用该选项时，必须同时指定 BlockIpDuration 参数。
注意：该选项不可与 ReturnCustomPage 或 Stall 选项同时启用。
                     */
                    std::string m_blockIp;
                    bool m_blockIpHasBeenSet;

                    /**
                     * 当 BlockIP 为 on 时IP 的封禁时长。
                     */
                    std::string m_blockIpDuration;
                    bool m_blockIpDurationHasBeenSet;

                    /**
                     * 是否使用自定义页面。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，使用自定义页面内容拦截（响应）请求，当启用该选项时，必须同时指定 ResponseCode 和 ErrorPageId 参数。
注意：该选项不可与 BlockIp 或 Stall 选项同时启用。

                     */
                    std::string m_returnCustomPage;
                    bool m_returnCustomPageHasBeenSet;

                    /**
                     * 自定义页面的状态码。
                     */
                    std::string m_responseCode;
                    bool m_responseCodeHasBeenSet;

                    /**
                     * 自定义页面的PageId。
                     */
                    std::string m_errorPageId;
                    bool m_errorPageIdHasBeenSet;

                    /**
                     * 是否对请求来源挂起不予处理。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
启用后，不再响应当前连接会话内请求，且不会主动断开连接。用于爬虫对抗时，消耗客户端连接资源。
注意：该选项不可与 BlockIp 或 ReturnCustomPage 选项同时启用。
                     */
                    std::string m_stall;
                    bool m_stallHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DENYACTIONPARAMETERS_H_
