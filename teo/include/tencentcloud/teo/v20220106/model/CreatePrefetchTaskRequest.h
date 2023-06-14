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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATEPREFETCHTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATEPREFETCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Header.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
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
                     * 获取Zone ID
                     * @return ZoneId Zone ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID
                     * @param _zoneId Zone ID
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
http://www.example.com/example.txt
                     * @return Targets 要预热的资源列表，每个元素格式类似如下:
http://www.example.com/example.txt
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置要预热的资源列表，每个元素格式类似如下:
http://www.example.com/example.txt
                     * @param _targets 要预热的资源列表，每个元素格式类似如下:
http://www.example.com/example.txt
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
                     * 获取是否对url进行encode
若内容含有非 ASCII 字符集的字符，请开启此开关，编码转换（编码规则遵循 RFC3986）
                     * @return EncodeUrl 是否对url进行encode
若内容含有非 ASCII 字符集的字符，请开启此开关，编码转换（编码规则遵循 RFC3986）
                     * 
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置是否对url进行encode
若内容含有非 ASCII 字符集的字符，请开启此开关，编码转换（编码规则遵循 RFC3986）
                     * @param _encodeUrl 是否对url进行encode
若内容含有非 ASCII 字符集的字符，请开启此开关，编码转换（编码规则遵循 RFC3986）
                     * 
                     */
                    void SetEncodeUrl(const bool& _encodeUrl);

                    /**
                     * 判断参数 EncodeUrl 是否已赋值
                     * @return EncodeUrl 是否已赋值
                     * 
                     */
                    bool EncodeUrlHasBeenSet() const;

                    /**
                     * 获取附带的http头部信息
                     * @return Headers 附带的http头部信息
                     * 
                     */
                    std::vector<Header> GetHeaders() const;

                    /**
                     * 设置附带的http头部信息
                     * @param _headers 附带的http头部信息
                     * 
                     */
                    void SetHeaders(const std::vector<Header>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * Zone ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 要预热的资源列表，每个元素格式类似如下:
http://www.example.com/example.txt
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 是否对url进行encode
若内容含有非 ASCII 字符集的字符，请开启此开关，编码转换（编码规则遵循 RFC3986）
                     */
                    bool m_encodeUrl;
                    bool m_encodeUrlHasBeenSet;

                    /**
                     * 附带的http头部信息
                     */
                    std::vector<Header> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATEPREFETCHTASKREQUEST_H_
