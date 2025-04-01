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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPENDPOINTINFO_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPENDPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * 增量迁移源站地址信息。
                */
                class IncrementalMigrationHttpEndpointInfo : public AbstractModel
                {
                public:
                    IncrementalMigrationHttpEndpointInfo();
                    ~IncrementalMigrationHttpEndpointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地址信息，支持域名或 IP 地址。
                     * @return Endpoint 地址信息，支持域名或 IP 地址。
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置地址信息，支持域名或 IP 地址。
                     * @param _endpoint 地址信息，支持域名或 IP 地址。
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取备份地址信息。
                     * @return StandbyEndpointSet 备份地址信息。
                     * 
                     */
                    std::vector<std::string> GetStandbyEndpointSet() const;

                    /**
                     * 设置备份地址信息。
                     * @param _standbyEndpointSet 备份地址信息。
                     * 
                     */
                    void SetStandbyEndpointSet(const std::vector<std::string>& _standbyEndpointSet);

                    /**
                     * 判断参数 StandbyEndpointSet 是否已赋值
                     * @return StandbyEndpointSet 是否已赋值
                     * 
                     */
                    bool StandbyEndpointSetHasBeenSet() const;

                private:

                    /**
                     * 地址信息，支持域名或 IP 地址。
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 备份地址信息。
                     */
                    std::vector<std::string> m_standbyEndpointSet;
                    bool m_standbyEndpointSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPENDPOINTINFO_H_
