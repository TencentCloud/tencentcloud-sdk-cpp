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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGPASSIVEHEALTHCHECK_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGPASSIVEHEALTHCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Kong网关被动健康检查配置
                */
                class KongPassiveHealthCheck : public AbstractModel
                {
                public:
                    KongPassiveHealthCheck();
                    ~KongPassiveHealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后端target协议类型，被动健康检查支持http和tcp，主动健康检查支持http
                     * @return Type 后端target协议类型，被动健康检查支持http和tcp，主动健康检查支持http
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置后端target协议类型，被动健康检查支持http和tcp，主动健康检查支持http
                     * @param _type 后端target协议类型，被动健康检查支持http和tcp，主动健康检查支持http
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 后端target协议类型，被动健康检查支持http和tcp，主动健康检查支持http
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGPASSIVEHEALTHCHECK_H_
