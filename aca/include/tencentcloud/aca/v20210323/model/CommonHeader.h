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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_COMMONHEADER_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_COMMONHEADER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 业务接口请求头
                */
                class CommonHeader : public AbstractModel
                {
                public:
                    CommonHeader();
                    ~CommonHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机构ID
                     * @return HospitalId 机构ID
                     * 
                     */
                    std::string GetHospitalId() const;

                    /**
                     * 设置机构ID
                     * @param _hospitalId 机构ID
                     * 
                     */
                    void SetHospitalId(const std::string& _hospitalId);

                    /**
                     * 判断参数 HospitalId 是否已赋值
                     * @return HospitalId 是否已赋值
                     * 
                     */
                    bool HospitalIdHasBeenSet() const;

                    /**
                     * 获取token
                     * @return Token token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置token
                     * @param _token token
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * 机构ID
                     */
                    std::string m_hospitalId;
                    bool m_hospitalIdHasBeenSet;

                    /**
                     * token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_COMMONHEADER_H_
