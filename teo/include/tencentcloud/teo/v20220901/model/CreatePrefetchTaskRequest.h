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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Header.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreatePrefetchTask请求参数结构体
                */
                class CreatePrefetchTaskRequest : public AbstractModel
                {
                public:
                    CreatePrefetchTaskRequest();
                    ~CreatePrefetchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
若您希望快速提交不同站点下的 Targets Url，可以将其填写为 *，但前提是调用该 API 的账号必须具备主账号下全部站点资源的权限。
                     * @return ZoneId 站点 ID。
若您希望快速提交不同站点下的 Targets Url，可以将其填写为 *，但前提是调用该 API 的账号必须具备主账号下全部站点资源的权限。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
若您希望快速提交不同站点下的 Targets Url，可以将其填写为 *，但前提是调用该 API 的账号必须具备主账号下全部站点资源的权限。
                     * @param _zoneId 站点 ID。
若您希望快速提交不同站点下的 Targets Url，可以将其填写为 *，但前提是调用该 API 的账号必须具备主账号下全部站点资源的权限。
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
                     * 获取要预热的资源列表，每个元素格式类似如下:
http://www.example.com/example.txt。参数值当前必填。
注意：提交任务数受计费套餐配额限制，请查看 [EO计费套餐](https://cloud.tencent.com/document/product/1552/77380)。
                     * @return Targets 要预热的资源列表，每个元素格式类似如下:
http://www.example.com/example.txt。参数值当前必填。
注意：提交任务数受计费套餐配额限制，请查看 [EO计费套餐](https://cloud.tencent.com/document/product/1552/77380)。
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置要预热的资源列表，每个元素格式类似如下:
http://www.example.com/example.txt。参数值当前必填。
注意：提交任务数受计费套餐配额限制，请查看 [EO计费套餐](https://cloud.tencent.com/document/product/1552/77380)。
                     * @param _targets 要预热的资源列表，每个元素格式类似如下:
http://www.example.com/example.txt。参数值当前必填。
注意：提交任务数受计费套餐配额限制，请查看 [EO计费套餐](https://cloud.tencent.com/document/product/1552/77380)。
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
                     * 获取是否对url进行encode，若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     * @return EncodeUrl 是否对url进行encode，若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     * @deprecated
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置是否对url进行encode，若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     * @param _encodeUrl 是否对url进行encode，若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     * @deprecated
                     */
                    void SetEncodeUrl(const bool& _encodeUrl);

                    /**
                     * 判断参数 EncodeUrl 是否已赋值
                     * @return EncodeUrl 是否已赋值
                     * @deprecated
                     */
                    bool EncodeUrlHasBeenSet() const;

                    /**
                     * 获取附带的http头部信息。
                     * @return Headers 附带的http头部信息。
                     * 
                     */
                    std::vector<Header> GetHeaders() const;

                    /**
                     * 设置附带的http头部信息。
                     * @param _headers 附带的http头部信息。
                     * 
                     */
                    void SetHeaders(const std::vector<Header>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取媒体分片预热控制，取值有：
<li>on：开启分片预热，预热描述文件，并递归解析描述文件分片进行预热；</li>
<li>off：仅预热提交的描述文件；</li>不填写时，默认值为 off。

注意事项：
1. 支持的描述文件为 M3U8，对应分片为 TS；
2. 要求描述文件能正常请求，并按行业标准描述分片路径；
3. 递归解析深度不超过 3 层；
4. 解析获取的分片会正常累加每日预热用量，当用量超出配额时，会静默处理，不再执行预热。

该参数为白名单功能，如有需要，请联系腾讯云工程师处理。
                     * @return PrefetchMediaSegments 媒体分片预热控制，取值有：
<li>on：开启分片预热，预热描述文件，并递归解析描述文件分片进行预热；</li>
<li>off：仅预热提交的描述文件；</li>不填写时，默认值为 off。

注意事项：
1. 支持的描述文件为 M3U8，对应分片为 TS；
2. 要求描述文件能正常请求，并按行业标准描述分片路径；
3. 递归解析深度不超过 3 层；
4. 解析获取的分片会正常累加每日预热用量，当用量超出配额时，会静默处理，不再执行预热。

该参数为白名单功能，如有需要，请联系腾讯云工程师处理。
                     * 
                     */
                    std::string GetPrefetchMediaSegments() const;

                    /**
                     * 设置媒体分片预热控制，取值有：
<li>on：开启分片预热，预热描述文件，并递归解析描述文件分片进行预热；</li>
<li>off：仅预热提交的描述文件；</li>不填写时，默认值为 off。

注意事项：
1. 支持的描述文件为 M3U8，对应分片为 TS；
2. 要求描述文件能正常请求，并按行业标准描述分片路径；
3. 递归解析深度不超过 3 层；
4. 解析获取的分片会正常累加每日预热用量，当用量超出配额时，会静默处理，不再执行预热。

该参数为白名单功能，如有需要，请联系腾讯云工程师处理。
                     * @param _prefetchMediaSegments 媒体分片预热控制，取值有：
<li>on：开启分片预热，预热描述文件，并递归解析描述文件分片进行预热；</li>
<li>off：仅预热提交的描述文件；</li>不填写时，默认值为 off。

注意事项：
1. 支持的描述文件为 M3U8，对应分片为 TS；
2. 要求描述文件能正常请求，并按行业标准描述分片路径；
3. 递归解析深度不超过 3 层；
4. 解析获取的分片会正常累加每日预热用量，当用量超出配额时，会静默处理，不再执行预热。

该参数为白名单功能，如有需要，请联系腾讯云工程师处理。
                     * 
                     */
                    void SetPrefetchMediaSegments(const std::string& _prefetchMediaSegments);

                    /**
                     * 判断参数 PrefetchMediaSegments 是否已赋值
                     * @return PrefetchMediaSegments 是否已赋值
                     * 
                     */
                    bool PrefetchMediaSegmentsHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
若您希望快速提交不同站点下的 Targets Url，可以将其填写为 *，但前提是调用该 API 的账号必须具备主账号下全部站点资源的权限。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 要预热的资源列表，每个元素格式类似如下:
http://www.example.com/example.txt。参数值当前必填。
注意：提交任务数受计费套餐配额限制，请查看 [EO计费套餐](https://cloud.tencent.com/document/product/1552/77380)。
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 是否对url进行encode，若内容含有非 ASCII 字符集的字符，请开启此开关进行编码转换（编码规则遵循 RFC3986）。
                     */
                    bool m_encodeUrl;
                    bool m_encodeUrlHasBeenSet;

                    /**
                     * 附带的http头部信息。
                     */
                    std::vector<Header> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 媒体分片预热控制，取值有：
<li>on：开启分片预热，预热描述文件，并递归解析描述文件分片进行预热；</li>
<li>off：仅预热提交的描述文件；</li>不填写时，默认值为 off。

注意事项：
1. 支持的描述文件为 M3U8，对应分片为 TS；
2. 要求描述文件能正常请求，并按行业标准描述分片路径；
3. 递归解析深度不超过 3 层；
4. 解析获取的分片会正常累加每日预热用量，当用量超出配额时，会静默处理，不再执行预热。

该参数为白名单功能，如有需要，请联系腾讯云工程师处理。
                     */
                    std::string m_prefetchMediaSegments;
                    bool m_prefetchMediaSegmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_
