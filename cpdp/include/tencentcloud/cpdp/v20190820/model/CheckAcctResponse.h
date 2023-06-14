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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CHECKACCTRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CHECKACCTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CheckAcct返回参数结构体
                */
                class CheckAcctResponse : public AbstractModel
                {
                public:
                    CheckAcctResponse();
                    ~CheckAcctResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取前置流水号，请保存
                     * @return FrontSeqNo 前置流水号，请保存
                     * 
                     */
                    std::string GetFrontSeqNo() const;

                    /**
                     * 判断参数 FrontSeqNo 是否已赋值
                     * @return FrontSeqNo 是否已赋值
                     * 
                     */
                    bool FrontSeqNoHasBeenSet() const;

                private:

                    /**
                     * 前置流水号，请保存
                     */
                    std::string m_frontSeqNo;
                    bool m_frontSeqNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CHECKACCTRESPONSE_H_
