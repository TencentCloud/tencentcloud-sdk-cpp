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

#ifndef TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_BATCHCONTENT_H_
#define TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_BATCHCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataintegration
    {
        namespace V20220613
        {
            namespace Model
            {
                /**
                * 批量消息
                */
                class BatchContent : public AbstractModel
                {
                public:
                    BatchContent();
                    ~BatchContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息体
                     * @return Body 消息体
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置消息体
                     * @param _body 消息体
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取消息的键名
                     * @return Key 消息的键名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置消息的键名
                     * @param _key 消息的键名
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * 消息体
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 消息的键名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_BATCHCONTENT_H_
