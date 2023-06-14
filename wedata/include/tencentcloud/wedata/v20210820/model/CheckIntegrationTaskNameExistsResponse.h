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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKINTEGRATIONTASKNAMEEXISTSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKINTEGRATIONTASKNAMEEXISTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CheckIntegrationTaskNameExists返回参数结构体
                */
                class CheckIntegrationTaskNameExistsResponse : public AbstractModel
                {
                public:
                    CheckIntegrationTaskNameExistsResponse();
                    ~CheckIntegrationTaskNameExistsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取true表示存在，false表示不存在
                     * @return Data true表示存在，false表示不存在
                     * 
                     */
                    bool GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取任务名重复类型（0:未重复, 1:开发态重复, 2:生产态重复）
                     * @return ExistsType 任务名重复类型（0:未重复, 1:开发态重复, 2:生产态重复）
                     * 
                     */
                    int64_t GetExistsType() const;

                    /**
                     * 判断参数 ExistsType 是否已赋值
                     * @return ExistsType 是否已赋值
                     * 
                     */
                    bool ExistsTypeHasBeenSet() const;

                private:

                    /**
                     * true表示存在，false表示不存在
                     */
                    bool m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 任务名重复类型（0:未重复, 1:开发态重复, 2:生产态重复）
                     */
                    int64_t m_existsType;
                    bool m_existsTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKINTEGRATIONTASKNAMEEXISTSRESPONSE_H_
