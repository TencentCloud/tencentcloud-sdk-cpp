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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_IDLERESPONSEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_IDLERESPONSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 空闲检测配置信息。
                */
                class IdleResponseInfo : public AbstractModel
                {
                public:
                    IdleResponseInfo();
                    ~IdleResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重试次数（1-3）
                     * @return RetryCount 重试次数（1-3）
                     * 
                     */
                    int64_t GetRetryCount() const;

                    /**
                     * 设置重试次数（1-3）
                     * @param _retryCount 重试次数（1-3）
                     * 
                     */
                    void SetRetryCount(const int64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取响应信息
                     * @return Message 响应信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置响应信息
                     * @param _message 响应信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 重试次数（1-3）
                     */
                    int64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * 响应信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_IDLERESPONSEINFO_H_
