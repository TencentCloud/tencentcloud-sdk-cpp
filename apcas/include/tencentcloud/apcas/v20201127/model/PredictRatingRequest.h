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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_PREDICTRATINGREQUEST_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_PREDICTRATINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * PredictRating请求参数结构体
                */
                class PredictRatingRequest : public AbstractModel
                {
                public:
                    PredictRatingRequest();
                    ~PredictRatingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID标志的类型，0:IMEI 7:IDFA 8:MD5(imei) 100: 手机号明文 101: 手机号md5加密
                     * @return Type ID标志的类型，0:IMEI 7:IDFA 8:MD5(imei) 100: 手机号明文 101: 手机号md5加密
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置ID标志的类型，0:IMEI 7:IDFA 8:MD5(imei) 100: 手机号明文 101: 手机号md5加密
                     * @param _type ID标志的类型，0:IMEI 7:IDFA 8:MD5(imei) 100: 手机号明文 101: 手机号md5加密
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取请求唯一标志ID
                     * @return Id 请求唯一标志ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置请求唯一标志ID
                     * @param _id 请求唯一标志ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * ID标志的类型，0:IMEI 7:IDFA 8:MD5(imei) 100: 手机号明文 101: 手机号md5加密
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 请求唯一标志ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_PREDICTRATINGREQUEST_H_
