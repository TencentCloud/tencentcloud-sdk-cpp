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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_APIKEY_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_APIKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * API密钥数据列表
                */
                class ApiKey : public AbstractModel
                {
                public:
                    ApiKey();
                    ~ApiKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密钥ID
                     * @return SecretId 密钥ID
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置密钥ID
                     * @param _secretId 密钥ID
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取创建时间(时间戳)
                     * @return CreateTime 创建时间(时间戳)
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间(时间戳)
                     * @param _createTime 创建时间(时间戳)
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取状态(2:有效, 3:禁用, 4:已删除)
                     * @return Status 状态(2:有效, 3:禁用, 4:已删除)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态(2:有效, 3:禁用, 4:已删除)
                     * @param _status 状态(2:有效, 3:禁用, 4:已删除)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 密钥ID
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * 创建时间(时间戳)
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 状态(2:有效, 3:禁用, 4:已删除)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_APIKEY_H_
