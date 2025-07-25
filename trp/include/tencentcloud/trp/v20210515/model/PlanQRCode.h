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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_PLANQRCODE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_PLANQRCODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 安心计划二维码
                */
                class PlanQRCode : public AbstractModel
                {
                public:
                    PlanQRCode();
                    ~PlanQRCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取二维码
                     * @return Url 二维码
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置二维码
                     * @param _url 二维码
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
                     * 获取状态，0:未激活 1:已激活 2:已冻结
                     * @return Status 状态，0:未激活 1:已激活 2:已冻结
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态，0:未激活 1:已激活 2:已冻结
                     * @param _status 状态，0:未激活 1:已激活 2:已冻结
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 二维码
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 状态，0:未激活 1:已激活 2:已冻结
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_PLANQRCODE_H_
