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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PATHRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PATHRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/HttpHeaderRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 分路径回源配置规则。
                */
                class PathRule : public AbstractModel
                {
                public:
                    PathRule();
                    ~PathRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否是正则匹配。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Regex 是否是正则匹配。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetRegex() const;

                    /**
                     * 设置是否是正则匹配。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Regex 是否是正则匹配。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegex(const bool& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取URL路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path URL路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPath() const;

                    /**
                     * 设置URL路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Path URL路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取路径匹配时的回源源站。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Origin 路径匹配时的回源源站。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置路径匹配时的回源源站。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Origin 路径匹配时的回源源站。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取路径匹配时的回源Host头部。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerName 路径匹配时的回源Host头部。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置路径匹配时的回源Host头部。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServerName 路径匹配时的回源Host头部。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取源站所属区域，支持CN，OV。分别表示国内或海外。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginArea 源站所属区域，支持CN，OV。分别表示国内或海外。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOriginArea() const;

                    /**
                     * 设置源站所属区域，支持CN，OV。分别表示国内或海外。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OriginArea 源站所属区域，支持CN，OV。分别表示国内或海外。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOriginArea(const std::string& _originArea);

                    /**
                     * 判断参数 OriginArea 是否已赋值
                     * @return OriginArea 是否已赋值
                     */
                    bool OriginAreaHasBeenSet() const;

                    /**
                     * 获取路径匹配时的回源URI路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForwardUri 路径匹配时的回源URI路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetForwardUri() const;

                    /**
                     * 设置路径匹配时的回源URI路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ForwardUri 路径匹配时的回源URI路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetForwardUri(const std::string& _forwardUri);

                    /**
                     * 判断参数 ForwardUri 是否已赋值
                     * @return ForwardUri 是否已赋值
                     */
                    bool ForwardUriHasBeenSet() const;

                    /**
                     * 获取路径匹配时的回源头部设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestHeaders 路径匹配时的回源头部设置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HttpHeaderRule> GetRequestHeaders() const;

                    /**
                     * 设置路径匹配时的回源头部设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RequestHeaders 路径匹配时的回源头部设置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRequestHeaders(const std::vector<HttpHeaderRule>& _requestHeaders);

                    /**
                     * 判断参数 RequestHeaders 是否已赋值
                     * @return RequestHeaders 是否已赋值
                     */
                    bool RequestHeadersHasBeenSet() const;

                private:

                    /**
                     * 是否是正则匹配。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * URL路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 路径匹配时的回源源站。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 路径匹配时的回源Host头部。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 源站所属区域，支持CN，OV。分别表示国内或海外。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originArea;
                    bool m_originAreaHasBeenSet;

                    /**
                     * 路径匹配时的回源URI路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_forwardUri;
                    bool m_forwardUriHasBeenSet;

                    /**
                     * 路径匹配时的回源头部设置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HttpHeaderRule> m_requestHeaders;
                    bool m_requestHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PATHRULE_H_
