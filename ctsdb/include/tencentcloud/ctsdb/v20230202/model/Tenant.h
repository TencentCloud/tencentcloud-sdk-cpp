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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_TENANT_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_TENANT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * 产品内部特性
                */
                class Tenant : public AbstractModel
                {
                public:
                    Tenant();
                    ~Tenant() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密码是否已加密
                     * @return IsPasswordEncrypted 密码是否已加密
                     * 
                     */
                    bool GetIsPasswordEncrypted() const;

                    /**
                     * 设置密码是否已加密
                     * @param _isPasswordEncrypted 密码是否已加密
                     * 
                     */
                    void SetIsPasswordEncrypted(const bool& _isPasswordEncrypted);

                    /**
                     * 判断参数 IsPasswordEncrypted 是否已赋值
                     * @return IsPasswordEncrypted 是否已赋值
                     * 
                     */
                    bool IsPasswordEncryptedHasBeenSet() const;

                private:

                    /**
                     * 密码是否已加密
                     */
                    bool m_isPasswordEncrypted;
                    bool m_isPasswordEncryptedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_TENANT_H_
