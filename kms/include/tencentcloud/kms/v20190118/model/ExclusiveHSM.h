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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_EXCLUSIVEHSM_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_EXCLUSIVEHSM_H_

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
                * 独享版集群
                */
                class ExclusiveHSM : public AbstractModel
                {
                public:
                    ExclusiveHSM();
                    ~ExclusiveHSM() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>独享集群Id</p>
                     * @return HsmClusterId <p>独享集群Id</p>
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置<p>独享集群Id</p>
                     * @param _hsmClusterId <p>独享集群Id</p>
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>独享集群名称</p>
                     * @return HsmClusterName <p>独享集群名称</p>
                     * 
                     */
                    std::string GetHsmClusterName() const;

                    /**
                     * 设置<p>独享集群名称</p>
                     * @param _hsmClusterName <p>独享集群名称</p>
                     * 
                     */
                    void SetHsmClusterName(const std::string& _hsmClusterName);

                    /**
                     * 判断参数 HsmClusterName 是否已赋值
                     * @return HsmClusterName 是否已赋值
                     * 
                     */
                    bool HsmClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>根密钥的使用量</p><p>单位：个</p>
                     * @return CmkUserCount <p>根密钥的使用量</p><p>单位：个</p>
                     * 
                     */
                    uint64_t GetCmkUserCount() const;

                    /**
                     * 设置<p>根密钥的使用量</p><p>单位：个</p>
                     * @param _cmkUserCount <p>根密钥的使用量</p><p>单位：个</p>
                     * 
                     */
                    void SetCmkUserCount(const uint64_t& _cmkUserCount);

                    /**
                     * 判断参数 CmkUserCount 是否已赋值
                     * @return CmkUserCount 是否已赋值
                     * 
                     */
                    bool CmkUserCountHasBeenSet() const;

                    /**
                     * 获取<p>根密钥的额度</p><p>单位：个</p>
                     * @return CmkLimit <p>根密钥的额度</p><p>单位：个</p>
                     * 
                     */
                    uint64_t GetCmkLimit() const;

                    /**
                     * 设置<p>根密钥的额度</p><p>单位：个</p>
                     * @param _cmkLimit <p>根密钥的额度</p><p>单位：个</p>
                     * 
                     */
                    void SetCmkLimit(const uint64_t& _cmkLimit);

                    /**
                     * 判断参数 CmkLimit 是否已赋值
                     * @return CmkLimit 是否已赋值
                     * 
                     */
                    bool CmkLimitHasBeenSet() const;

                private:

                    /**
                     * <p>独享集群Id</p>
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * <p>独享集群名称</p>
                     */
                    std::string m_hsmClusterName;
                    bool m_hsmClusterNameHasBeenSet;

                    /**
                     * <p>根密钥的使用量</p><p>单位：个</p>
                     */
                    uint64_t m_cmkUserCount;
                    bool m_cmkUserCountHasBeenSet;

                    /**
                     * <p>根密钥的额度</p><p>单位：个</p>
                     */
                    uint64_t m_cmkLimit;
                    bool m_cmkLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_EXCLUSIVEHSM_H_
