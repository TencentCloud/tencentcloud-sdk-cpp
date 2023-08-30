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
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取节点缓存清除类型，取值有：
<li>purge_url：URL刷新；</li>
<li>purge_prefix：目录刷新；</li>
<li>purge_host：Hostname 刷新；</li>
<li>purge_all：站点下全部缓存刷新；</li>
<li>purge_cache_tag：cache-tag 刷新。</li>缓存清除类型详情请查看[清除缓存](https://cloud.tencent.com/document/product/1552/70759)。
                     * @return Type 节点缓存清除类型，取值有：
<li>purge_url：URL刷新；</li>
<li>purge_prefix：目录刷新；</li>
<li>purge_host：Hostname 刷新；</li>
<li>purge_all：站点下全部缓存刷新；</li>
<li>purge_cache_tag：cache-tag 刷新。</li>缓存清除类型详情请查看[清除缓存](https://cloud.tencent.com/document/product/1552/70759)。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点缓存清除类型，取值有：
<li>purge_url：URL刷新；</li>
<li>purge_prefix：目录刷新；</li>
<li>purge_host：Hostname 刷新；</li>
<li>purge_all：站点下全部缓存刷新；</li>
<li>purge_cache_tag：cache-tag 刷新。</li>缓存清除类型详情请查看[清除缓存](https://cloud.tencent.com/document/product/1552/70759)。
                     * @param _type 节点缓存清除类型，取值有：
<li>purge_url：URL刷新；</li>
<li>purge_prefix：目录刷新；</li>
<li>purge_host：Hostname 刷新；</li>
<li>purge_all：站点下全部缓存刷新；</li>
<li>purge_cache_tag：cache-tag 刷新。</li>缓存清除类型详情请查看[清除缓存](https://cloud.tencent.com/document/product/1552/70759)。
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
                     * 获取节点缓存清除方法，针对目录刷新、Hostname刷新以及刷新全部缓存 类型有效，取值有：<li> invalidate：仅刷新目录下产生了更新的资源；</li><li> delete：无论目录下资源是否更新都刷新节点资源。</li>注意：使用目录刷新时，默认值： invalidate。
                     * @return Method 节点缓存清除方法，针对目录刷新、Hostname刷新以及刷新全部缓存 类型有效，取值有：<li> invalidate：仅刷新目录下产生了更新的资源；</li><li> delete：无论目录下资源是否更新都刷新节点资源。</li>注意：使用目录刷新时，默认值： invalidate。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置节点缓存清除方法，针对目录刷新、Hostname刷新以及刷新全部缓存 类型有效，取值有：<li> invalidate：仅刷新目录下产生了更新的资源；</li><li> delete：无论目录下资源是否更新都刷新节点资源。</li>注意：使用目录刷新时，默认值： invalidate。
                     * @param _method 节点缓存清除方法，针对目录刷新、Hostname刷新以及刷新全部缓存 类型有效，取值有：<li> invalidate：仅刷新目录下产生了更新的资源；</li><li> delete：无论目录下资源是否更新都刷新节点资源。</li>注意：使用目录刷新时，默认值： invalidate。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取要清除缓存的资源列表。每个元素格式依据清除缓存类型而定，可参考接口示例。<li>EO 默认针对内容含有非 ASCII 字符集的字符进行转义，编码规则遵循 RFC3986；</li><li>单次提交的任务数受计费套餐配额限制，请查看 [EO计费套餐](https://cloud.tencent.com/document/product/1552/77380)。</li>
                     * @return Targets 要清除缓存的资源列表。每个元素格式依据清除缓存类型而定，可参考接口示例。<li>EO 默认针对内容含有非 ASCII 字符集的字符进行转义，编码规则遵循 RFC3986；</li><li>单次提交的任务数受计费套餐配额限制，请查看 [EO计费套餐](https://cloud.tencent.com/document/product/1552/77380)。</li>
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置要清除缓存的资源列表。每个元素格式依据清除缓存类型而定，可参考接口示例。<li>EO 默认针对内容含有非 ASCII 字符集的字符进行转义，编码规则遵循 RFC3986；</li><li>单次提交的任务数受计费套餐配额限制，请查看 [EO计费套餐](https://cloud.tencent.com/document/product/1552/77380)。</li>
                     * @param _targets 要清除缓存的资源列表。每个元素格式依据清除缓存类型而定，可参考接口示例。<li>EO 默认针对内容含有非 ASCII 字符集的字符进行转义，编码规则遵循 RFC3986；</li><li>单次提交的任务数受计费套餐配额限制，请查看 [EO计费套餐](https://cloud.tencent.com/document/product/1552/77380)。</li>
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
                     * @deprecated
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置若有编码转换，仅清除编码转换后匹配的资源。
若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     * @param _encodeUrl 若有编码转换，仅清除编码转换后匹配的资源。
若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     * @deprecated
                     */
                    void SetEncodeUrl(const bool& _encodeUrl);

                    /**
                     * 判断参数 EncodeUrl 是否已赋值
                     * @return EncodeUrl 是否已赋值
                     * @deprecated
                     */
                    bool EncodeUrlHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 节点缓存清除类型，取值有：
<li>purge_url：URL刷新；</li>
<li>purge_prefix：目录刷新；</li>
<li>purge_host：Hostname 刷新；</li>
<li>purge_all：站点下全部缓存刷新；</li>
<li>purge_cache_tag：cache-tag 刷新。</li>缓存清除类型详情请查看[清除缓存](https://cloud.tencent.com/document/product/1552/70759)。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 节点缓存清除方法，针对目录刷新、Hostname刷新以及刷新全部缓存 类型有效，取值有：<li> invalidate：仅刷新目录下产生了更新的资源；</li><li> delete：无论目录下资源是否更新都刷新节点资源。</li>注意：使用目录刷新时，默认值： invalidate。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 要清除缓存的资源列表。每个元素格式依据清除缓存类型而定，可参考接口示例。<li>EO 默认针对内容含有非 ASCII 字符集的字符进行转义，编码规则遵循 RFC3986；</li><li>单次提交的任务数受计费套餐配额限制，请查看 [EO计费套餐](https://cloud.tencent.com/document/product/1552/77380)。</li>
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
