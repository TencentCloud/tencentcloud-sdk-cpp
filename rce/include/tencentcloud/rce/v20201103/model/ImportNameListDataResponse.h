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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_IMPORTNAMELISTDATARESPONSE_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_IMPORTNAMELISTDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/OutputImportNameListDataFront.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * ImportNameListData返回参数结构体
                */
                class ImportNameListDataResponse : public AbstractModel
                {
                public:
                    ImportNameListDataResponse();
                    ~ImportNameListDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取业务出参
                     * @return Data 业务出参
                     * 
                     */
                    OutputImportNameListDataFront GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 业务出参
                     */
                    OutputImportNameListDataFront m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_IMPORTNAMELISTDATARESPONSE_H_
