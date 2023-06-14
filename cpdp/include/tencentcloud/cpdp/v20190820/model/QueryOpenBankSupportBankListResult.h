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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUPPORTBANKLISTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUPPORTBANKLISTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/SupportBankInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 查询支持的银行列表返回结果
                */
                class QueryOpenBankSupportBankListResult : public AbstractModel
                {
                public:
                    QueryOpenBankSupportBankListResult();
                    ~QueryOpenBankSupportBankListResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持的银行列表
                     * @return SupportBankList 支持的银行列表
                     * 
                     */
                    std::vector<SupportBankInfo> GetSupportBankList() const;

                    /**
                     * 设置支持的银行列表
                     * @param _supportBankList 支持的银行列表
                     * 
                     */
                    void SetSupportBankList(const std::vector<SupportBankInfo>& _supportBankList);

                    /**
                     * 判断参数 SupportBankList 是否已赋值
                     * @return SupportBankList 是否已赋值
                     * 
                     */
                    bool SupportBankListHasBeenSet() const;

                private:

                    /**
                     * 支持的银行列表
                     */
                    std::vector<SupportBankInfo> m_supportBankList;
                    bool m_supportBankListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUPPORTBANKLISTRESULT_H_
