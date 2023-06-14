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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPBRANDRESPONSE_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPBRANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * CreateBPBrand返回参数结构体
                */
                class CreateBPBrandResponse : public AbstractModel
                {
                public:
                    CreateBPBrandResponse();
                    ~CreateBPBrandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业id
                     * @return CompanyId 企业id
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                private:

                    /**
                     * 企业id
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPBRANDRESPONSE_H_
