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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SENDSTATUSSTATISTICS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SENDSTATUSSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * 发送数据统计响应包体
                */
                class SendStatusStatistics : public AbstractModel
                {
                public:
                    SendStatusStatistics();
                    ~SendStatusStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取短信计费条数统计，例如提交成功量为100条，其中有20条是长短信（长度为80字）被拆分成2条，则计费条数为： ```80 * 1 + 20 * 2 = 120``` 条。
                     * @return FeeCount 短信计费条数统计，例如提交成功量为100条，其中有20条是长短信（长度为80字）被拆分成2条，则计费条数为： ```80 * 1 + 20 * 2 = 120``` 条。
                     * 
                     */
                    uint64_t GetFeeCount() const;

                    /**
                     * 设置短信计费条数统计，例如提交成功量为100条，其中有20条是长短信（长度为80字）被拆分成2条，则计费条数为： ```80 * 1 + 20 * 2 = 120``` 条。
                     * @param _feeCount 短信计费条数统计，例如提交成功量为100条，其中有20条是长短信（长度为80字）被拆分成2条，则计费条数为： ```80 * 1 + 20 * 2 = 120``` 条。
                     * 
                     */
                    void SetFeeCount(const uint64_t& _feeCount);

                    /**
                     * 判断参数 FeeCount 是否已赋值
                     * @return FeeCount 是否已赋值
                     * 
                     */
                    bool FeeCountHasBeenSet() const;

                    /**
                     * 获取短信提交量统计。
                     * @return RequestCount 短信提交量统计。
                     * 
                     */
                    uint64_t GetRequestCount() const;

                    /**
                     * 设置短信提交量统计。
                     * @param _requestCount 短信提交量统计。
                     * 
                     */
                    void SetRequestCount(const uint64_t& _requestCount);

                    /**
                     * 判断参数 RequestCount 是否已赋值
                     * @return RequestCount 是否已赋值
                     * 
                     */
                    bool RequestCountHasBeenSet() const;

                    /**
                     * 获取短信提交成功量统计。
                     * @return RequestSuccessCount 短信提交成功量统计。
                     * 
                     */
                    uint64_t GetRequestSuccessCount() const;

                    /**
                     * 设置短信提交成功量统计。
                     * @param _requestSuccessCount 短信提交成功量统计。
                     * 
                     */
                    void SetRequestSuccessCount(const uint64_t& _requestSuccessCount);

                    /**
                     * 判断参数 RequestSuccessCount 是否已赋值
                     * @return RequestSuccessCount 是否已赋值
                     * 
                     */
                    bool RequestSuccessCountHasBeenSet() const;

                private:

                    /**
                     * 短信计费条数统计，例如提交成功量为100条，其中有20条是长短信（长度为80字）被拆分成2条，则计费条数为： ```80 * 1 + 20 * 2 = 120``` 条。
                     */
                    uint64_t m_feeCount;
                    bool m_feeCountHasBeenSet;

                    /**
                     * 短信提交量统计。
                     */
                    uint64_t m_requestCount;
                    bool m_requestCountHasBeenSet;

                    /**
                     * 短信提交成功量统计。
                     */
                    uint64_t m_requestSuccessCount;
                    bool m_requestSuccessCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SENDSTATUSSTATISTICS_H_
