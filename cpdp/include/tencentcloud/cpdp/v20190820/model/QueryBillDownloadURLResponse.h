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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBILLDOWNLOADURLRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBILLDOWNLOADURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBillDownloadURLData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryBillDownloadURL返回参数结构体
                */
                class QueryBillDownloadURLResponse : public AbstractModel
                {
                public:
                    QueryBillDownloadURLResponse();
                    ~QueryBillDownloadURLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取错误码。响应成功："SUCCESS"，其他为不成功
                     * @return ErrCode 错误码。响应成功："SUCCESS"，其他为不成功
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取响应消息
                     * @return ErrMessage 响应消息
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 判断参数 ErrMessage 是否已赋值
                     * @return ErrMessage 是否已赋值
                     * 
                     */
                    bool ErrMessageHasBeenSet() const;

                    /**
                     * 获取返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QueryBillDownloadURLData GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 错误码。响应成功："SUCCESS"，其他为不成功
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 响应消息
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                    /**
                     * 返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QueryBillDownloadURLData m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBILLDOWNLOADURLRESPONSE_H_
