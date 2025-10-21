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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_GATEWAYREGION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_GATEWAYREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 多通道安全网关可用地域
                */
                class GatewayRegion : public AbstractModel
                {
                public:
                    GatewayRegion();
                    ~GatewayRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域 ID 。
                     * @return RegionId 地域 ID 。
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置地域 ID 。
                     * @param _regionId 地域 ID 。
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取中文地域名称。
                     * @return CNName 中文地域名称。
                     * 
                     */
                    std::string GetCNName() const;

                    /**
                     * 设置中文地域名称。
                     * @param _cNName 中文地域名称。
                     * 
                     */
                    void SetCNName(const std::string& _cNName);

                    /**
                     * 判断参数 CNName 是否已赋值
                     * @return CNName 是否已赋值
                     * 
                     */
                    bool CNNameHasBeenSet() const;

                    /**
                     * 获取英文地域名称。
                     * @return ENName 英文地域名称。
                     * 
                     */
                    std::string GetENName() const;

                    /**
                     * 设置英文地域名称。
                     * @param _eNName 英文地域名称。
                     * 
                     */
                    void SetENName(const std::string& _eNName);

                    /**
                     * 判断参数 ENName 是否已赋值
                     * @return ENName 是否已赋值
                     * 
                     */
                    bool ENNameHasBeenSet() const;

                private:

                    /**
                     * 地域 ID 。
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 中文地域名称。
                     */
                    std::string m_cNName;
                    bool m_cNNameHasBeenSet;

                    /**
                     * 英文地域名称。
                     */
                    std::string m_eNName;
                    bool m_eNNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_GATEWAYREGION_H_
