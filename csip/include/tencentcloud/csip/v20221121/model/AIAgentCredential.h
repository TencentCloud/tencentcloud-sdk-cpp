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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTCREDENTIAL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTCREDENTIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AIAgentCredentialLocation.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * AIAgent 资产凭据详情
                */
                class AIAgentCredential : public AbstractModel
                {
                public:
                    AIAgentCredential();
                    ~AIAgentCredential() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>凭据 ID</p>
                     * @return ID <p>凭据 ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>凭据 ID</p>
                     * @param _iD <p>凭据 ID</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>凭据名称</p>
                     * @return CredName <p>凭据名称</p>
                     * 
                     */
                    std::string GetCredName() const;

                    /**
                     * 设置<p>凭据名称</p>
                     * @param _credName <p>凭据名称</p>
                     * 
                     */
                    void SetCredName(const std::string& _credName);

                    /**
                     * 判断参数 CredName 是否已赋值
                     * @return CredName 是否已赋值
                     * 
                     */
                    bool CredNameHasBeenSet() const;

                    /**
                     * 获取<p>凭据类型</p><p>枚举值：</p><ul><li>OAUTH： oauth 类型凭据</li><li>API_TOKEN： token 类型凭据</li><li>CLOUD_AK： aksk 类型凭据</li></ul>
                     * @return CredType <p>凭据类型</p><p>枚举值：</p><ul><li>OAUTH： oauth 类型凭据</li><li>API_TOKEN： token 类型凭据</li><li>CLOUD_AK： aksk 类型凭据</li></ul>
                     * 
                     */
                    std::string GetCredType() const;

                    /**
                     * 设置<p>凭据类型</p><p>枚举值：</p><ul><li>OAUTH： oauth 类型凭据</li><li>API_TOKEN： token 类型凭据</li><li>CLOUD_AK： aksk 类型凭据</li></ul>
                     * @param _credType <p>凭据类型</p><p>枚举值：</p><ul><li>OAUTH： oauth 类型凭据</li><li>API_TOKEN： token 类型凭据</li><li>CLOUD_AK： aksk 类型凭据</li></ul>
                     * 
                     */
                    void SetCredType(const std::string& _credType);

                    /**
                     * 判断参数 CredType 是否已赋值
                     * @return CredType 是否已赋值
                     * 
                     */
                    bool CredTypeHasBeenSet() const;

                    /**
                     * 获取<p>凭据所在位置标识</p>
                     * @return Locations <p>凭据所在位置标识</p>
                     * 
                     */
                    std::vector<AIAgentCredentialLocation> GetLocations() const;

                    /**
                     * 设置<p>凭据所在位置标识</p>
                     * @param _locations <p>凭据所在位置标识</p>
                     * 
                     */
                    void SetLocations(const std::vector<AIAgentCredentialLocation>& _locations);

                    /**
                     * 判断参数 Locations 是否已赋值
                     * @return Locations 是否已赋值
                     * 
                     */
                    bool LocationsHasBeenSet() const;

                    /**
                     * 获取<p>最近扫描发现时间</p>
                     * @return DetectTime <p>最近扫描发现时间</p>
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置<p>最近扫描发现时间</p>
                     * @param _detectTime <p>最近扫描发现时间</p>
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>该凭据的泄露位置总数</p>
                     * @return HitCount <p>该凭据的泄露位置总数</p>
                     * 
                     */
                    int64_t GetHitCount() const;

                    /**
                     * 设置<p>该凭据的泄露位置总数</p>
                     * @param _hitCount <p>该凭据的泄露位置总数</p>
                     * 
                     */
                    void SetHitCount(const int64_t& _hitCount);

                    /**
                     * 判断参数 HitCount 是否已赋值
                     * @return HitCount 是否已赋值
                     * 
                     */
                    bool HitCountHasBeenSet() const;

                private:

                    /**
                     * <p>凭据 ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>凭据名称</p>
                     */
                    std::string m_credName;
                    bool m_credNameHasBeenSet;

                    /**
                     * <p>凭据类型</p><p>枚举值：</p><ul><li>OAUTH： oauth 类型凭据</li><li>API_TOKEN： token 类型凭据</li><li>CLOUD_AK： aksk 类型凭据</li></ul>
                     */
                    std::string m_credType;
                    bool m_credTypeHasBeenSet;

                    /**
                     * <p>凭据所在位置标识</p>
                     */
                    std::vector<AIAgentCredentialLocation> m_locations;
                    bool m_locationsHasBeenSet;

                    /**
                     * <p>最近扫描发现时间</p>
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * <p>该凭据的泄露位置总数</p>
                     */
                    int64_t m_hitCount;
                    bool m_hitCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTCREDENTIAL_H_
