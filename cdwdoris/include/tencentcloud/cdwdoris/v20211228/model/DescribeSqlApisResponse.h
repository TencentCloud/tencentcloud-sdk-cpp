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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeSqlApis返回参数结构体
                */
                class DescribeSqlApisResponse : public AbstractModel
                {
                public:
                    DescribeSqlApisResponse();
                    ~DescribeSqlApisResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的查询数据，大部分情况是list，也可能是bool
                     * @return ReturnData 返回的查询数据，大部分情况是list，也可能是bool
                     * 
                     */
                    std::string GetReturnData() const;

                    /**
                     * 判断参数 ReturnData 是否已赋值
                     * @return ReturnData 是否已赋值
                     * 
                     */
                    bool ReturnDataHasBeenSet() const;

                    /**
                     * 获取错误消息
                     * @return ErrorMsg 错误消息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 返回的查询数据，大部分情况是list，也可能是bool
                     */
                    std::string m_returnData;
                    bool m_returnDataHasBeenSet;

                    /**
                     * 错误消息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISRESPONSE_H_
