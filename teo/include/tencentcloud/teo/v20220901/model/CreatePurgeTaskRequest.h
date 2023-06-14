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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPURGETASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPURGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreatePurgeTask请求参数结构体
                */
                class CreatePurgeTaskRequest : public AbstractModel
                {
                public:
                    CreatePurgeTaskRequest();
                    ~CreatePurgeTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取清除缓存类型，取值有：
<li>purge_url：URL；</li>
<li>purge_prefix：前缀；</li>
<li>purge_host：Hostname；</li>
<li>purge_all：全部缓存；</li>
<li>purge_cache_tag：cache-tag刷新。</li>
                     * @return Type 清除缓存类型，取值有：
<li>purge_url：URL；</li>
<li>purge_prefix：前缀；</li>
<li>purge_host：Hostname；</li>
<li>purge_all：全部缓存；</li>
<li>purge_cache_tag：cache-tag刷新。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置清除缓存类型，取值有：
<li>purge_url：URL；</li>
<li>purge_prefix：前缀；</li>
<li>purge_host：Hostname；</li>
<li>purge_all：全部缓存；</li>
<li>purge_cache_tag：cache-tag刷新。</li>
                     * @param _type 清除缓存类型，取值有：
<li>purge_url：URL；</li>
<li>purge_prefix：前缀；</li>
<li>purge_host：Hostname；</li>
<li>purge_all：全部缓存；</li>
<li>purge_cache_tag：cache-tag刷新。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取要清除缓存的资源列表，每个元素格式依据Type而定：
1) Type = purge_host 时：
形如：www.example.com 或 foo.bar.example.com。
2) Type = purge_prefix 时：
形如：http://www.example.com/example。
3) Type = purge_url 时：
形如：https://www.example.com/example.jpg。
4）Type = purge_all 时：
Targets可为空，不需要填写。
5）Type = purge_cache_tag 时：
形如：tag1。
                     * @return Targets 要清除缓存的资源列表，每个元素格式依据Type而定：
1) Type = purge_host 时：
形如：www.example.com 或 foo.bar.example.com。
2) Type = purge_prefix 时：
形如：http://www.example.com/example。
3) Type = purge_url 时：
形如：https://www.example.com/example.jpg。
4）Type = purge_all 时：
Targets可为空，不需要填写。
5）Type = purge_cache_tag 时：
形如：tag1。
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置要清除缓存的资源列表，每个元素格式依据Type而定：
1) Type = purge_host 时：
形如：www.example.com 或 foo.bar.example.com。
2) Type = purge_prefix 时：
形如：http://www.example.com/example。
3) Type = purge_url 时：
形如：https://www.example.com/example.jpg。
4）Type = purge_all 时：
Targets可为空，不需要填写。
5）Type = purge_cache_tag 时：
形如：tag1。
                     * @param _targets 要清除缓存的资源列表，每个元素格式依据Type而定：
1) Type = purge_host 时：
形如：www.example.com 或 foo.bar.example.com。
2) Type = purge_prefix 时：
形如：http://www.example.com/example。
3) Type = purge_url 时：
形如：https://www.example.com/example.jpg。
4）Type = purge_all 时：
Targets可为空，不需要填写。
5）Type = purge_cache_tag 时：
形如：tag1。
                     * 
                     */
                    void SetTargets(const std::vector<std::string>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取若有编码转换，仅清除编码转换后匹配的资源。
若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     * @return EncodeUrl 若有编码转换，仅清除编码转换后匹配的资源。
若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     * 
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置若有编码转换，仅清除编码转换后匹配的资源。
若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     * @param _encodeUrl 若有编码转换，仅清除编码转换后匹配的资源。
若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     * 
                     */
                    void SetEncodeUrl(const bool& _encodeUrl);

                    /**
                     * 判断参数 EncodeUrl 是否已赋值
                     * @return EncodeUrl 是否已赋值
                     * 
                     */
                    bool EncodeUrlHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 清除缓存类型，取值有：
<li>purge_url：URL；</li>
<li>purge_prefix：前缀；</li>
<li>purge_host：Hostname；</li>
<li>purge_all：全部缓存；</li>
<li>purge_cache_tag：cache-tag刷新。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 要清除缓存的资源列表，每个元素格式依据Type而定：
1) Type = purge_host 时：
形如：www.example.com 或 foo.bar.example.com。
2) Type = purge_prefix 时：
形如：http://www.example.com/example。
3) Type = purge_url 时：
形如：https://www.example.com/example.jpg。
4）Type = purge_all 时：
Targets可为空，不需要填写。
5）Type = purge_cache_tag 时：
形如：tag1。
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 若有编码转换，仅清除编码转换后匹配的资源。
若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     */
                    bool m_encodeUrl;
                    bool m_encodeUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPURGETASKREQUEST_H_
