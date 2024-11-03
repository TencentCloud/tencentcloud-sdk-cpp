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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APIDETAILSAMPLEHISTORY_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APIDETAILSAMPLEHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * api历史样例返回结构体
                */
                class ApiDetailSampleHistory : public AbstractModel
                {
                public:
                    ApiDetailSampleHistory();
                    ~ApiDetailSampleHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取样例名称
                     * @return SampleNme 样例名称
                     * 
                     */
                    std::string GetSampleNme() const;

                    /**
                     * 设置样例名称
                     * @param _sampleNme 样例名称
                     * 
                     */
                    void SetSampleNme(const std::string& _sampleNme);

                    /**
                     * 判断参数 SampleNme 是否已赋值
                     * @return SampleNme 是否已赋值
                     * 
                     */
                    bool SampleNmeHasBeenSet() const;

                    /**
                     * 获取请求样例
                     * @return RepLog 请求样例
                     * 
                     */
                    std::string GetRepLog() const;

                    /**
                     * 设置请求样例
                     * @param _repLog 请求样例
                     * 
                     */
                    void SetRepLog(const std::string& _repLog);

                    /**
                     * 判断参数 RepLog 是否已赋值
                     * @return RepLog 是否已赋值
                     * 
                     */
                    bool RepLogHasBeenSet() const;

                    /**
                     * 获取响应样例
                     * @return RspLog 响应样例
                     * 
                     */
                    std::string GetRspLog() const;

                    /**
                     * 设置响应样例
                     * @param _rspLog 响应样例
                     * 
                     */
                    void SetRspLog(const std::string& _rspLog);

                    /**
                     * 判断参数 RspLog 是否已赋值
                     * @return RspLog 是否已赋值
                     * 
                     */
                    bool RspLogHasBeenSet() const;

                private:

                    /**
                     * 样例名称
                     */
                    std::string m_sampleNme;
                    bool m_sampleNmeHasBeenSet;

                    /**
                     * 请求样例
                     */
                    std::string m_repLog;
                    bool m_repLogHasBeenSet;

                    /**
                     * 响应样例
                     */
                    std::string m_rspLog;
                    bool m_rspLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APIDETAILSAMPLEHISTORY_H_
