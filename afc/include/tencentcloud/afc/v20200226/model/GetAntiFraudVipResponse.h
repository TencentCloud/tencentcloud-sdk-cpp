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

#ifndef TENCENTCLOUD_AFC_V20200226_MODEL_GETANTIFRAUDVIPRESPONSE_H_
#define TENCENTCLOUD_AFC_V20200226_MODEL_GETANTIFRAUDVIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/afc/v20200226/model/AntiFraudVipRecord.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * GetAntiFraudVip返回参数结构体
                */
                class GetAntiFraudVipResponse : public AbstractModel
                {
                public:
                    GetAntiFraudVipResponse();
                    ~GetAntiFraudVipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取反欺诈评分接口结果
                     * @return Data 反欺诈评分接口结果
                     * 
                     */
                    AntiFraudVipRecord GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 反欺诈评分接口结果
                     */
                    AntiFraudVipRecord m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_MODEL_GETANTIFRAUDVIPRESPONSE_H_
