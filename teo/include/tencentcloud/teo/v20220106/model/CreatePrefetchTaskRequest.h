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
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID
                     * @param ZoneId Zone ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取预热的资源列表
                     * @return Targets 预热的资源列表
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置预热的资源列表
                     * @param Targets 预热的资源列表
                     */
                    void SetTargets(const std::vector<std::string>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取是否对url进行encode
                     * @return EncodeUrl 是否对url进行encode
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置是否对url进行encode
                     * @param EncodeUrl 是否对url进行encode
                     */
                    void SetEncodeUrl(const bool& _encodeUrl);

                    /**
                     * 判断参数 EncodeUrl 是否已赋值
                     * @return EncodeUrl 是否已赋值
                     */
                    bool EncodeUrlHasBeenSet() const;

                    /**
                     * 获取附带的http头部信息
                     * @return Headers 附带的http头部信息
                     */
                    std::vector<Header> GetHeaders() const;

                    /**
                     * 设置附带的http头部信息
                     * @param Headers 附带的http头部信息
                     */
                    void SetHeaders(const std::vector<Header>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * Zone ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 预热的资源列表
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 是否对url进行encode
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
