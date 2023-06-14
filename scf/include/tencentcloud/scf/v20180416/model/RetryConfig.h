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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_RETRYCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_RETRYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 异步重试配置
                */
                class RetryConfig : public AbstractModel
                {
                public:
                    RetryConfig();
                    ~RetryConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重试次数
                     * @return RetryNum 重试次数
                     * 
                     */
                    int64_t GetRetryNum() const;

                    /**
                     * 设置重试次数
                     * @param _retryNum 重试次数
                     * 
                     */
                    void SetRetryNum(const int64_t& _retryNum);

                    /**
                     * 判断参数 RetryNum 是否已赋值
                     * @return RetryNum 是否已赋值
                     * 
                     */
                    bool RetryNumHasBeenSet() const;

                private:

                    /**
                     * 重试次数
                     */
                    int64_t m_retryNum;
                    bool m_retryNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_RETRYCONFIG_H_
