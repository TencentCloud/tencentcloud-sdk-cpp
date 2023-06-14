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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_SECURITYPOLICYDATABASE_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_SECURITYPOLICYDATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * SecurityPolicyDatabase策略
                */
                class SecurityPolicyDatabase : public AbstractModel
                {
                public:
                    SecurityPolicyDatabase();
                    ~SecurityPolicyDatabase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本端网段
                     * @return LocalCidrBlock 本端网段
                     * 
                     */
                    std::string GetLocalCidrBlock() const;

                    /**
                     * 设置本端网段
                     * @param _localCidrBlock 本端网段
                     * 
                     */
                    void SetLocalCidrBlock(const std::string& _localCidrBlock);

                    /**
                     * 判断参数 LocalCidrBlock 是否已赋值
                     * @return LocalCidrBlock 是否已赋值
                     * 
                     */
                    bool LocalCidrBlockHasBeenSet() const;

                    /**
                     * 获取对端网段
                     * @return RemoteCidrBlock 对端网段
                     * 
                     */
                    std::vector<std::string> GetRemoteCidrBlock() const;

                    /**
                     * 设置对端网段
                     * @param _remoteCidrBlock 对端网段
                     * 
                     */
                    void SetRemoteCidrBlock(const std::vector<std::string>& _remoteCidrBlock);

                    /**
                     * 判断参数 RemoteCidrBlock 是否已赋值
                     * @return RemoteCidrBlock 是否已赋值
                     * 
                     */
                    bool RemoteCidrBlockHasBeenSet() const;

                private:

                    /**
                     * 本端网段
                     */
                    std::string m_localCidrBlock;
                    bool m_localCidrBlockHasBeenSet;

                    /**
                     * 对端网段
                     */
                    std::vector<std::string> m_remoteCidrBlock;
                    bool m_remoteCidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_SECURITYPOLICYDATABASE_H_
