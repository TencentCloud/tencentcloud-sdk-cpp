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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRADERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRADERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QueryTradeData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 贸易材料明细查询结果
                */
                class QueryTradeResult : public AbstractModel
                {
                public:
                    QueryTradeResult();
                    ~QueryTradeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取贸易材料明细查询数据
                     * @return Data 贸易材料明细查询数据
                     * 
                     */
                    QueryTradeData GetData() const;

                    /**
                     * 设置贸易材料明细查询数据
                     * @param _data 贸易材料明细查询数据
                     * 
                     */
                    void SetData(const QueryTradeData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取错误码
                     * @return Code 错误码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置错误码
                     * @param _code 错误码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * 贸易材料明细查询数据
                     */
                    QueryTradeData m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 错误码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRADERESULT_H_
