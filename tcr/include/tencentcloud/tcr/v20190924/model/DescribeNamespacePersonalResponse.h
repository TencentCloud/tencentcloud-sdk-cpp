/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACEPERSONALRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACEPERSONALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/NamespaceInfoResp.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeNamespacePersonal返回参数结构体
                */
                class DescribeNamespacePersonalResponse : public AbstractModel
                {
                public:
                    DescribeNamespacePersonalResponse();
                    ~DescribeNamespacePersonalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户命名空间返回信息
                     * @return Data 用户命名空间返回信息
                     * 
                     */
                    NamespaceInfoResp GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 用户命名空间返回信息
                     */
                    NamespaceInfoResp m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACEPERSONALRESPONSE_H_
