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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYNEXTORIGINACL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYNEXTORIGINACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Addresses.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前生效的回源 IP 网段的对比。
                */
                class MultiPathGatewayNextOriginACL : public AbstractModel
                {
                public:
                    MultiPathGatewayNextOriginACL();
                    ~MultiPathGatewayNextOriginACL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本号。
                     * @return Version 版本号。
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置版本号。
                     * @param _version 版本号。
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取回源 IP 网段详情。
                     * @return EntireAddresses 回源 IP 网段详情。
                     * 
                     */
                    Addresses GetEntireAddresses() const;

                    /**
                     * 设置回源 IP 网段详情。
                     * @param _entireAddresses 回源 IP 网段详情。
                     * 
                     */
                    void SetEntireAddresses(const Addresses& _entireAddresses);

                    /**
                     * 判断参数 EntireAddresses 是否已赋值
                     * @return EntireAddresses 是否已赋值
                     * 
                     */
                    bool EntireAddressesHasBeenSet() const;

                    /**
                     * 获取最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段新增的部分。
                     * @return AddedAddresses 最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段新增的部分。
                     * 
                     */
                    Addresses GetAddedAddresses() const;

                    /**
                     * 设置最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段新增的部分。
                     * @param _addedAddresses 最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段新增的部分。
                     * 
                     */
                    void SetAddedAddresses(const Addresses& _addedAddresses);

                    /**
                     * 判断参数 AddedAddresses 是否已赋值
                     * @return AddedAddresses 是否已赋值
                     * 
                     */
                    bool AddedAddressesHasBeenSet() const;

                    /**
                     * 获取最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段删减的部分。
                     * @return RemovedAddresses 最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段删减的部分。
                     * 
                     */
                    Addresses GetRemovedAddresses() const;

                    /**
                     * 设置最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段删减的部分。
                     * @param _removedAddresses 最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段删减的部分。
                     * 
                     */
                    void SetRemovedAddresses(const Addresses& _removedAddresses);

                    /**
                     * 判断参数 RemovedAddresses 是否已赋值
                     * @return RemovedAddresses 是否已赋值
                     * 
                     */
                    bool RemovedAddressesHasBeenSet() const;

                    /**
                     * 获取最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段无变化的部分。
                     * @return NoChangeAddresses 最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段无变化的部分。
                     * 
                     */
                    Addresses GetNoChangeAddresses() const;

                    /**
                     * 设置最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段无变化的部分。
                     * @param _noChangeAddresses 最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段无变化的部分。
                     * 
                     */
                    void SetNoChangeAddresses(const Addresses& _noChangeAddresses);

                    /**
                     * 判断参数 NoChangeAddresses 是否已赋值
                     * @return NoChangeAddresses 是否已赋值
                     * 
                     */
                    bool NoChangeAddressesHasBeenSet() const;

                private:

                    /**
                     * 版本号。
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 回源 IP 网段详情。
                     */
                    Addresses m_entireAddresses;
                    bool m_entireAddressesHasBeenSet;

                    /**
                     * 最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段新增的部分。
                     */
                    Addresses m_addedAddresses;
                    bool m_addedAddressesHasBeenSet;

                    /**
                     * 最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段删减的部分。
                     */
                    Addresses m_removedAddresses;
                    bool m_removedAddressesHasBeenSet;

                    /**
                     * 最新回源 IP 网段相较于 MultiPathGatewayCurrentOrginACL 中回源 IP 网段无变化的部分。
                     */
                    Addresses m_noChangeAddresses;
                    bool m_noChangeAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYNEXTORIGINACL_H_
