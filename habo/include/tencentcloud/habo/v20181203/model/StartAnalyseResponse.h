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

#ifndef TENCENTCLOUD_HABO_V20181203_MODEL_STARTANALYSERESPONSE_H_
#define TENCENTCLOUD_HABO_V20181203_MODEL_STARTANALYSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Habo
    {
        namespace V20181203
        {
            namespace Model
            {
                /**
                * StartAnalyse返回参数结构体
                */
                class StartAnalyseResponse : public AbstractModel
                {
                public:
                    StartAnalyseResponse();
                    ~StartAnalyseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接口调用状态，1表示成功，非1表示失败
                     * @return Status 接口调用状态，1表示成功，非1表示失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取成功时返回success，失败时返回具体的失败原因
                     * @return Info 成功时返回success，失败时返回具体的失败原因
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取保留字段
                     * @return Data 保留字段
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 接口调用状态，1表示成功，非1表示失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 成功时返回success，失败时返回具体的失败原因
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 保留字段
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HABO_V20181203_MODEL_STARTANALYSERESPONSE_H_
