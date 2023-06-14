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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_UPLOADIMAGERESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_UPLOADIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * UploadImage返回参数结构体
                */
                class UploadImageResponse : public AbstractModel
                {
                public:
                    UploadImageResponse();
                    ~UploadImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资质照片地址。
                     * @return AccessUrl 资质照片地址。
                     * 
                     */
                    std::string GetAccessUrl() const;

                    /**
                     * 判断参数 AccessUrl 是否已赋值
                     * @return AccessUrl 是否已赋值
                     * 
                     */
                    bool AccessUrlHasBeenSet() const;

                private:

                    /**
                     * 资质照片地址。
                     */
                    std::string m_accessUrl;
                    bool m_accessUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_UPLOADIMAGERESPONSE_H_
