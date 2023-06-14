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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_GETATTRIBUTEKEYREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_GETATTRIBUTEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * GetAttributeKey请求参数结构体
                */
                class GetAttributeKeyRequest : public AbstractModel
                {
                public:
                    GetAttributeKeyRequest();
                    ~GetAttributeKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网站类型，取值范围是zh和en。如果不传值默认zh
                     * @return WebsiteType 网站类型，取值范围是zh和en。如果不传值默认zh
                     * 
                     */
                    std::string GetWebsiteType() const;

                    /**
                     * 设置网站类型，取值范围是zh和en。如果不传值默认zh
                     * @param _websiteType 网站类型，取值范围是zh和en。如果不传值默认zh
                     * 
                     */
                    void SetWebsiteType(const std::string& _websiteType);

                    /**
                     * 判断参数 WebsiteType 是否已赋值
                     * @return WebsiteType 是否已赋值
                     * 
                     */
                    bool WebsiteTypeHasBeenSet() const;

                private:

                    /**
                     * 网站类型，取值范围是zh和en。如果不传值默认zh
                     */
                    std::string m_websiteType;
                    bool m_websiteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_GETATTRIBUTEKEYREQUEST_H_
