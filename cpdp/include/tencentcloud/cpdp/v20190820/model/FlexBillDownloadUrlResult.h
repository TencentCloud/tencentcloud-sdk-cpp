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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_FLEXBILLDOWNLOADURLRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_FLEXBILLDOWNLOADURLRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 对账单文件下载链接
                */
                class FlexBillDownloadUrlResult : public AbstractModel
                {
                public:
                    FlexBillDownloadUrlResult();
                    ~FlexBillDownloadUrlResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对账单文件下载链接
                     * @return Url 对账单文件下载链接
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置对账单文件下载链接
                     * @param _url 对账单文件下载链接
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取下载链接过期时间
                     * @return ExpireTime 下载链接过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置下载链接过期时间
                     * @param _expireTime 下载链接过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 对账单文件下载链接
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 下载链接过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_FLEXBILLDOWNLOADURLRESULT_H_
