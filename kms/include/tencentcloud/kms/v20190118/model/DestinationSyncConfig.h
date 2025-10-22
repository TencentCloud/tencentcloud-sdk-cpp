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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESTINATIONSYNCCONFIG_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESTINATIONSYNCCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * 同步任务的目标地域列表，包括地域和集群信息。如果集群为空，表示公有云共享集群，如果集群不为空，表示独享集群。
                */
                class DestinationSyncConfig : public AbstractModel
                {
                public:
                    DestinationSyncConfig();
                    ~DestinationSyncConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取同步任务的目标地域
                     * @return DestinationRegion 同步任务的目标地域
                     * 
                     */
                    std::string GetDestinationRegion() const;

                    /**
                     * 设置同步任务的目标地域
                     * @param _destinationRegion 同步任务的目标地域
                     * 
                     */
                    void SetDestinationRegion(const std::string& _destinationRegion);

                    /**
                     * 判断参数 DestinationRegion 是否已赋值
                     * @return DestinationRegion 是否已赋值
                     * 
                     */
                    bool DestinationRegionHasBeenSet() const;

                    /**
                     * 获取HsmClusterId为空表示公有云共享版，如果不为空表示地域下独享版集群。
                     * @return HsmClusterId HsmClusterId为空表示公有云共享版，如果不为空表示地域下独享版集群。
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置HsmClusterId为空表示公有云共享版，如果不为空表示地域下独享版集群。
                     * @param _hsmClusterId HsmClusterId为空表示公有云共享版，如果不为空表示地域下独享版集群。
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * 同步任务的目标地域
                     */
                    std::string m_destinationRegion;
                    bool m_destinationRegionHasBeenSet;

                    /**
                     * HsmClusterId为空表示公有云共享版，如果不为空表示地域下独享版集群。
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESTINATIONSYNCCONFIG_H_
