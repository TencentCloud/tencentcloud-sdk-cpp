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
                     * 获取短信计费条数统计，例如提交成功量为100条，其中有20条是长短信（长度为80字）被拆分成2条，则计费条数为： ```80 * 1 + 20 * 2 = 120``` 条
                     * @return BillingStatistics 短信计费条数统计，例如提交成功量为100条，其中有20条是长短信（长度为80字）被拆分成2条，则计费条数为： ```80 * 1 + 20 * 2 = 120``` 条
                     */
                    uint64_t GetBillingStatistics() const;

                    /**
                     * 设置短信计费条数统计，例如提交成功量为100条，其中有20条是长短信（长度为80字）被拆分成2条，则计费条数为： ```80 * 1 + 20 * 2 = 120``` 条
                     * @param BillingStatistics 短信计费条数统计，例如提交成功量为100条，其中有20条是长短信（长度为80字）被拆分成2条，则计费条数为： ```80 * 1 + 20 * 2 = 120``` 条
                     */
                    void SetBillingStatistics(const uint64_t& _billingStatistics);

                    /**
                     * 判断参数 BillingStatistics 是否已赋值
                     * @return BillingStatistics 是否已赋值
                     */
                    bool BillingStatisticsHasBeenSet() const;

                    /**
                     * 获取短信提交量统计
                     * @return RequestStatistics 短信提交量统计
                     */
                    uint64_t GetRequestStatistics() const;

                    /**
                     * 设置短信提交量统计
                     * @param RequestStatistics 短信提交量统计
                     */
                    void SetRequestStatistics(const uint64_t& _requestStatistics);

                    /**
                     * 判断参数 RequestStatistics 是否已赋值
                     * @return RequestStatistics 是否已赋值
                     */
                    bool RequestStatisticsHasBeenSet() const;

                    /**
                     * 获取短信提交成功量统计
                     * @return RequestSuccessStatistics 短信提交成功量统计
                     */
                    uint64_t GetRequestSuccessStatistics() const;

                    /**
                     * 设置短信提交成功量统计
                     * @param RequestSuccessStatistics 短信提交成功量统计
                     */
                    void SetRequestSuccessStatistics(const uint64_t& _requestSuccessStatistics);

                    /**
                     * 判断参数 RequestSuccessStatistics 是否已赋值
                     * @return RequestSuccessStatistics 是否已赋值
                     */
                    bool RequestSuccessStatisticsHasBeenSet() const;

                private:

                    /**
                     * 短信计费条数统计，例如提交成功量为100条，其中有20条是长短信（长度为80字）被拆分成2条，则计费条数为： ```80 * 1 + 20 * 2 = 120``` 条
                     */
                    uint64_t m_billingStatistics;
                    bool m_billingStatisticsHasBeenSet;

                    /**
                     * 短信提交量统计
                     */
                    uint64_t m_requestStatistics;
                    bool m_requestStatisticsHasBeenSet;

                    /**
                     * 短信提交成功量统计
                     */
                    uint64_t m_requestSuccessStatistics;
                    bool m_requestSuccessStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SENDSTATUSSTATISTICS_H_
