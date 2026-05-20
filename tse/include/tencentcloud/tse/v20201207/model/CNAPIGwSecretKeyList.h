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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWSECRETKEYLIST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWSECRETKEYLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CNAPIGwSecretKey.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 密钥列表
                */
                class CNAPIGwSecretKeyList : public AbstractModel
                {
                public:
                    CNAPIGwSecretKeyList();
                    ~CNAPIGwSecretKeyList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总数
                     * @param _totalCount 总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取密钥列表
                     * @return SecretKeys 密钥列表
                     * 
                     */
                    std::vector<CNAPIGwSecretKey> GetSecretKeys() const;

                    /**
                     * 设置密钥列表
                     * @param _secretKeys 密钥列表
                     * 
                     */
                    void SetSecretKeys(const std::vector<CNAPIGwSecretKey>& _secretKeys);

                    /**
                     * 判断参数 SecretKeys 是否已赋值
                     * @return SecretKeys 是否已赋值
                     * 
                     */
                    bool SecretKeysHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 密钥列表
                     */
                    std::vector<CNAPIGwSecretKey> m_secretKeys;
                    bool m_secretKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWSECRETKEYLIST_H_
