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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEADDRESSTEMPLATERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEADDRESSTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateAddressTemplate返回参数结构体
                */
                class CreateAddressTemplateResponse : public AbstractModel
                {
                public:
                    CreateAddressTemplateResponse();
                    ~CreateAddressTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建结果,0成功
                     * @return Status 创建结果,0成功
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取唯一Id
                     * @return Uuid 唯一Id
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 创建结果,0成功
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 唯一Id
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEADDRESSTEMPLATERESPONSE_H_
