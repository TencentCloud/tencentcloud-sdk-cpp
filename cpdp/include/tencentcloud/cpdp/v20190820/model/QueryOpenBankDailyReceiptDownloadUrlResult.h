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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDAILYRECEIPTDOWNLOADURLRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDAILYRECEIPTDOWNLOADURLRESULT_H_

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
                * 云企付-按日期查询回单下载地址
                */
                class QueryOpenBankDailyReceiptDownloadUrlResult : public AbstractModel
                {
                public:
                    QueryOpenBankDailyReceiptDownloadUrlResult();
                    ~QueryOpenBankDailyReceiptDownloadUrlResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回单文件下载链接
                     * @return DownloadUrl 回单文件下载链接
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置回单文件下载链接
                     * @param _downloadUrl 回单文件下载链接
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取回单状态
PENDING: 处理中
READY: 可以下载
                     * @return ReceiptStatus 回单状态
PENDING: 处理中
READY: 可以下载
                     * 
                     */
                    std::string GetReceiptStatus() const;

                    /**
                     * 设置回单状态
PENDING: 处理中
READY: 可以下载
                     * @param _receiptStatus 回单状态
PENDING: 处理中
READY: 可以下载
                     * 
                     */
                    void SetReceiptStatus(const std::string& _receiptStatus);

                    /**
                     * 判断参数 ReceiptStatus 是否已赋值
                     * @return ReceiptStatus 是否已赋值
                     * 
                     */
                    bool ReceiptStatusHasBeenSet() const;

                private:

                    /**
                     * 回单文件下载链接
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 回单状态
PENDING: 处理中
READY: 可以下载
                     */
                    std::string m_receiptStatus;
                    bool m_receiptStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDAILYRECEIPTDOWNLOADURLRESULT_H_
