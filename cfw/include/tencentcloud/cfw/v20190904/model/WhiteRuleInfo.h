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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_WHITERULEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_WHITERULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 白名单匹配条件；各字段的适用 RuleType 和取值要求见字段说明。
                */
                class WhiteRuleInfo : public AbstractModel
                {
                public:
                    WhiteRuleInfo();
                    ~WhiteRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问目的。RuleType=2：本字段与 SrcIP 两个字段中恰好填写一个，值为精确 IP；RuleType=5：本字段与 SrcIP 两个字段中恰好填写一个，值为资产 instance_id；RuleType=6：与 SrcIP 至少一项为具体 IP，另一项可省略或使用同 IP 版本的 0.0.0.0/0、::/0，两项均为具体 IP 时使用相同 IP 版本；FwType=16 时具体目的 IPv4 可带端口。RuleType=8：IP、CIDR、IP:端口或 CIDR:端口，可与 SrcIP 组合；RuleType=9：IP、CIDR 或带端口地址，可与 NDR 专属条件组合；搭配 IdsRuleId 时使用 IPv4 或 IPv4:端口。IPv6 带端口时使用 [IPv6]:端口；已选字段的多值用逗号分隔。
                     * @return DstIP 访问目的。RuleType=2：本字段与 SrcIP 两个字段中恰好填写一个，值为精确 IP；RuleType=5：本字段与 SrcIP 两个字段中恰好填写一个，值为资产 instance_id；RuleType=6：与 SrcIP 至少一项为具体 IP，另一项可省略或使用同 IP 版本的 0.0.0.0/0、::/0，两项均为具体 IP 时使用相同 IP 版本；FwType=16 时具体目的 IPv4 可带端口。RuleType=8：IP、CIDR、IP:端口或 CIDR:端口，可与 SrcIP 组合；RuleType=9：IP、CIDR 或带端口地址，可与 NDR 专属条件组合；搭配 IdsRuleId 时使用 IPv4 或 IPv4:端口。IPv6 带端口时使用 [IPv6]:端口；已选字段的多值用逗号分隔。
                     * 
                     */
                    std::string GetDstIP() const;

                    /**
                     * 设置访问目的。RuleType=2：本字段与 SrcIP 两个字段中恰好填写一个，值为精确 IP；RuleType=5：本字段与 SrcIP 两个字段中恰好填写一个，值为资产 instance_id；RuleType=6：与 SrcIP 至少一项为具体 IP，另一项可省略或使用同 IP 版本的 0.0.0.0/0、::/0，两项均为具体 IP 时使用相同 IP 版本；FwType=16 时具体目的 IPv4 可带端口。RuleType=8：IP、CIDR、IP:端口或 CIDR:端口，可与 SrcIP 组合；RuleType=9：IP、CIDR 或带端口地址，可与 NDR 专属条件组合；搭配 IdsRuleId 时使用 IPv4 或 IPv4:端口。IPv6 带端口时使用 [IPv6]:端口；已选字段的多值用逗号分隔。
                     * @param _dstIP 访问目的。RuleType=2：本字段与 SrcIP 两个字段中恰好填写一个，值为精确 IP；RuleType=5：本字段与 SrcIP 两个字段中恰好填写一个，值为资产 instance_id；RuleType=6：与 SrcIP 至少一项为具体 IP，另一项可省略或使用同 IP 版本的 0.0.0.0/0、::/0，两项均为具体 IP 时使用相同 IP 版本；FwType=16 时具体目的 IPv4 可带端口。RuleType=8：IP、CIDR、IP:端口或 CIDR:端口，可与 SrcIP 组合；RuleType=9：IP、CIDR 或带端口地址，可与 NDR 专属条件组合；搭配 IdsRuleId 时使用 IPv4 或 IPv4:端口。IPv6 带端口时使用 [IPv6]:端口；已选字段的多值用逗号分隔。
                     * 
                     */
                    void SetDstIP(const std::string& _dstIP);

                    /**
                     * 判断参数 DstIP 是否已赋值
                     * @return DstIP 是否已赋值
                     * 
                     */
                    bool DstIPHasBeenSet() const;

                    /**
                     * 获取文件 MD5，仅 RuleType=9。32 位十六进制；多值逗号分隔，最多 10 个。
                     * @return FileMd5 文件 MD5，仅 RuleType=9。32 位十六进制；多值逗号分隔，最多 10 个。
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置文件 MD5，仅 RuleType=9。32 位十六进制；多值逗号分隔，最多 10 个。
                     * @param _fileMd5 文件 MD5，仅 RuleType=9。32 位十六进制；多值逗号分隔，最多 10 个。
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取文件名，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；多值用逗号分隔，最多 10 个。
                     * @return FileName 文件名，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；多值用逗号分隔，最多 10 个。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；多值用逗号分隔，最多 10 个。
                     * @param _fileName 文件名，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；多值用逗号分隔，最多 10 个。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取HTTP Host，仅 RuleType=9；填写主机名或 IP，支持 ?、* 通配符并区分大小写；多值用逗号分隔。
                     * @return HostName HTTP Host，仅 RuleType=9；填写主机名或 IP，支持 ?、* 通配符并区分大小写；多值用逗号分隔。
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置HTTP Host，仅 RuleType=9；填写主机名或 IP，支持 ?、* 通配符并区分大小写；多值用逗号分隔。
                     * @param _hostName HTTP Host，仅 RuleType=9；填写主机名或 IP，支持 ?、* 通配符并区分大小写；多值用逗号分隔。
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取服务端内部字段。
                     * @return Id 服务端内部字段。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置服务端内部字段。
                     * @param _id 服务端内部字段。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取IPS 规则 ID，取自 DescribeIpsRuleListNew.Data[].RuleID。RuleType=6 必填；RuleType=9 可选，填写时同时填写 SrcIP 或 DstIP。
                     * @return IdsRuleId IPS 规则 ID，取自 DescribeIpsRuleListNew.Data[].RuleID。RuleType=6 必填；RuleType=9 可选，填写时同时填写 SrcIP 或 DstIP。
                     * 
                     */
                    std::string GetIdsRuleId() const;

                    /**
                     * 设置IPS 规则 ID，取自 DescribeIpsRuleListNew.Data[].RuleID。RuleType=6 必填；RuleType=9 可选，填写时同时填写 SrcIP 或 DstIP。
                     * @param _idsRuleId IPS 规则 ID，取自 DescribeIpsRuleListNew.Data[].RuleID。RuleType=6 必填；RuleType=9 可选，填写时同时填写 SrcIP 或 DstIP。
                     * 
                     */
                    void SetIdsRuleId(const std::string& _idsRuleId);

                    /**
                     * 判断参数 IdsRuleId 是否已赋值
                     * @return IdsRuleId 是否已赋值
                     * 
                     */
                    bool IdsRuleIdHasBeenSet() const;

                    /**
                     * 获取服务端保留字段。
                     * @return IdsRuleName 服务端保留字段。
                     * 
                     */
                    std::string GetIdsRuleName() const;

                    /**
                     * 设置服务端保留字段。
                     * @param _idsRuleName 服务端保留字段。
                     * 
                     */
                    void SetIdsRuleName(const std::string& _idsRuleName);

                    /**
                     * 判断参数 IdsRuleName 是否已赋值
                     * @return IdsRuleName 是否已赋值
                     * 
                     */
                    bool IdsRuleNameHasBeenSet() const;

                    /**
                     * 获取RuleType=3 填一个合法域名；RuleType=4 填情报 IP、CIDR 或域名。
                     * @return Ioc RuleType=3 填一个合法域名；RuleType=4 填情报 IP、CIDR 或域名。
                     * 
                     */
                    std::string GetIoc() const;

                    /**
                     * 设置RuleType=3 填一个合法域名；RuleType=4 填情报 IP、CIDR 或域名。
                     * @param _ioc RuleType=3 填一个合法域名；RuleType=4 填情报 IP、CIDR 或域名。
                     * 
                     */
                    void SetIoc(const std::string& _ioc);

                    /**
                     * 判断参数 Ioc 是否已赋值
                     * @return Ioc 是否已赋值
                     * 
                     */
                    bool IocHasBeenSet() const;

                    /**
                     * 获取访问源。RuleType=2：本字段与 DstIP 两个字段中恰好填写一个，值为精确 IP；RuleType=5：本字段与 DstIP 两个字段中恰好填写一个，值为资产 instance_id；RuleType=6：与 DstIP 至少一项为具体 IP，另一项可省略或使用同 IP 版本的 0.0.0.0/0、::/0，两项均为具体 IP 时使用相同 IP 版本；RuleType=8：IP 或 CIDR；RuleType=9：IP 或 CIDR，可与 NDR 专属条件组合；搭配 IdsRuleId 时使用 IPv4。源地址使用无端口格式；已选字段的多值用逗号分隔。
                     * @return SrcIP 访问源。RuleType=2：本字段与 DstIP 两个字段中恰好填写一个，值为精确 IP；RuleType=5：本字段与 DstIP 两个字段中恰好填写一个，值为资产 instance_id；RuleType=6：与 DstIP 至少一项为具体 IP，另一项可省略或使用同 IP 版本的 0.0.0.0/0、::/0，两项均为具体 IP 时使用相同 IP 版本；RuleType=8：IP 或 CIDR；RuleType=9：IP 或 CIDR，可与 NDR 专属条件组合；搭配 IdsRuleId 时使用 IPv4。源地址使用无端口格式；已选字段的多值用逗号分隔。
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置访问源。RuleType=2：本字段与 DstIP 两个字段中恰好填写一个，值为精确 IP；RuleType=5：本字段与 DstIP 两个字段中恰好填写一个，值为资产 instance_id；RuleType=6：与 DstIP 至少一项为具体 IP，另一项可省略或使用同 IP 版本的 0.0.0.0/0、::/0，两项均为具体 IP 时使用相同 IP 版本；RuleType=8：IP 或 CIDR；RuleType=9：IP 或 CIDR，可与 NDR 专属条件组合；搭配 IdsRuleId 时使用 IPv4。源地址使用无端口格式；已选字段的多值用逗号分隔。
                     * @param _srcIP 访问源。RuleType=2：本字段与 DstIP 两个字段中恰好填写一个，值为精确 IP；RuleType=5：本字段与 DstIP 两个字段中恰好填写一个，值为资产 instance_id；RuleType=6：与 DstIP 至少一项为具体 IP，另一项可省略或使用同 IP 版本的 0.0.0.0/0、::/0，两项均为具体 IP 时使用相同 IP 版本；RuleType=8：IP 或 CIDR；RuleType=9：IP 或 CIDR，可与 NDR 专属条件组合；搭配 IdsRuleId 时使用 IPv4。源地址使用无端口格式；已选字段的多值用逗号分隔。
                     * 
                     */
                    void SetSrcIP(const std::string& _srcIP);

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                    /**
                     * 获取HTTP URL，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；多值用逗号分隔，最多 10 个。
                     * @return Url HTTP URL，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；多值用逗号分隔，最多 10 个。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置HTTP URL，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；多值用逗号分隔，最多 10 个。
                     * @param _url HTTP URL，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；多值用逗号分隔，最多 10 个。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取HTTP User-Agent，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；单值少于 255 个字符，最多 2 个，多值用 <#cfw-splite#> 分隔。
                     * @return UserAgent HTTP User-Agent，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；单值少于 255 个字符，最多 2 个，多值用 <#cfw-splite#> 分隔。
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置HTTP User-Agent，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；单值少于 255 个字符，最多 2 个，多值用 <#cfw-splite#> 分隔。
                     * @param _userAgent HTTP User-Agent，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；单值少于 255 个字符，最多 2 个，多值用 <#cfw-splite#> 分隔。
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取白名单策略唯一 ID。
                     * @return WhiteId 白名单策略唯一 ID。
                     * 
                     */
                    std::string GetWhiteId() const;

                    /**
                     * 设置白名单策略唯一 ID。
                     * @param _whiteId 白名单策略唯一 ID。
                     * 
                     */
                    void SetWhiteId(const std::string& _whiteId);

                    /**
                     * 判断参数 WhiteId 是否已赋值
                     * @return WhiteId 是否已赋值
                     * 
                     */
                    bool WhiteIdHasBeenSet() const;

                    /**
                     * 获取HTTP X-Forwarded-For，仅 RuleType=9；精确 IP，多值逗号分隔，最多 50 个。
                     * @return XForwardedFor HTTP X-Forwarded-For，仅 RuleType=9；精确 IP，多值逗号分隔，最多 50 个。
                     * 
                     */
                    std::string GetXForwardedFor() const;

                    /**
                     * 设置HTTP X-Forwarded-For，仅 RuleType=9；精确 IP，多值逗号分隔，最多 50 个。
                     * @param _xForwardedFor HTTP X-Forwarded-For，仅 RuleType=9；精确 IP，多值逗号分隔，最多 50 个。
                     * 
                     */
                    void SetXForwardedFor(const std::string& _xForwardedFor);

                    /**
                     * 判断参数 XForwardedFor 是否已赋值
                     * @return XForwardedFor 是否已赋值
                     * 
                     */
                    bool XForwardedForHasBeenSet() const;

                private:

                    /**
                     * 访问目的。RuleType=2：本字段与 SrcIP 两个字段中恰好填写一个，值为精确 IP；RuleType=5：本字段与 SrcIP 两个字段中恰好填写一个，值为资产 instance_id；RuleType=6：与 SrcIP 至少一项为具体 IP，另一项可省略或使用同 IP 版本的 0.0.0.0/0、::/0，两项均为具体 IP 时使用相同 IP 版本；FwType=16 时具体目的 IPv4 可带端口。RuleType=8：IP、CIDR、IP:端口或 CIDR:端口，可与 SrcIP 组合；RuleType=9：IP、CIDR 或带端口地址，可与 NDR 专属条件组合；搭配 IdsRuleId 时使用 IPv4 或 IPv4:端口。IPv6 带端口时使用 [IPv6]:端口；已选字段的多值用逗号分隔。
                     */
                    std::string m_dstIP;
                    bool m_dstIPHasBeenSet;

                    /**
                     * 文件 MD5，仅 RuleType=9。32 位十六进制；多值逗号分隔，最多 10 个。
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 文件名，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；多值用逗号分隔，最多 10 个。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * HTTP Host，仅 RuleType=9；填写主机名或 IP，支持 ?、* 通配符并区分大小写；多值用逗号分隔。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 服务端内部字段。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * IPS 规则 ID，取自 DescribeIpsRuleListNew.Data[].RuleID。RuleType=6 必填；RuleType=9 可选，填写时同时填写 SrcIP 或 DstIP。
                     */
                    std::string m_idsRuleId;
                    bool m_idsRuleIdHasBeenSet;

                    /**
                     * 服务端保留字段。
                     */
                    std::string m_idsRuleName;
                    bool m_idsRuleNameHasBeenSet;

                    /**
                     * RuleType=3 填一个合法域名；RuleType=4 填情报 IP、CIDR 或域名。
                     */
                    std::string m_ioc;
                    bool m_iocHasBeenSet;

                    /**
                     * 访问源。RuleType=2：本字段与 DstIP 两个字段中恰好填写一个，值为精确 IP；RuleType=5：本字段与 DstIP 两个字段中恰好填写一个，值为资产 instance_id；RuleType=6：与 DstIP 至少一项为具体 IP，另一项可省略或使用同 IP 版本的 0.0.0.0/0、::/0，两项均为具体 IP 时使用相同 IP 版本；RuleType=8：IP 或 CIDR；RuleType=9：IP 或 CIDR，可与 NDR 专属条件组合；搭配 IdsRuleId 时使用 IPv4。源地址使用无端口格式；已选字段的多值用逗号分隔。
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * HTTP URL，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；多值用逗号分隔，最多 10 个。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * HTTP User-Agent，仅 RuleType=9；支持精确匹配及 ?、* 通配符，区分大小写；单值少于 255 个字符，最多 2 个，多值用 <#cfw-splite#> 分隔。
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 白名单策略唯一 ID。
                     */
                    std::string m_whiteId;
                    bool m_whiteIdHasBeenSet;

                    /**
                     * HTTP X-Forwarded-For，仅 RuleType=9；精确 IP，多值逗号分隔，最多 50 个。
                     */
                    std::string m_xForwardedFor;
                    bool m_xForwardedForHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_WHITERULEINFO_H_
