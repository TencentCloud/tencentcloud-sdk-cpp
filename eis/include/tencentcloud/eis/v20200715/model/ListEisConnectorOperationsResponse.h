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

#ifndef TENCENTCLOUD_EIS_V20200715_MODEL_LISTEISCONNECTOROPERATIONSRESPONSE_H_
#define TENCENTCLOUD_EIS_V20200715_MODEL_LISTEISCONNECTOROPERATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eis/v20200715/model/EisConnectionOperation.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20200715
        {
            namespace Model
            {
                /**
                * ListEisConnectorOperations返回参数结构体
                */
                class ListEisConnectorOperationsResponse : public AbstractModel
                {
                public:
                    ListEisConnectorOperationsResponse();
                    ~ListEisConnectorOperationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取连接器列表
                     * @return Operations 连接器列表
                     * 
                     */
                    std::vector<EisConnectionOperation> GetOperations() const;

                    /**
                     * 判断参数 Operations 是否已赋值
                     * @return Operations 是否已赋值
                     * 
                     */
                    bool OperationsHasBeenSet() const;

                private:

                    /**
                     * 连接器列表
                     */
                    std::vector<EisConnectionOperation> m_operations;
                    bool m_operationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20200715_MODEL_LISTEISCONNECTOROPERATIONSRESPONSE_H_
