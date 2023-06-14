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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYRECONCILIATIONDOCUMENTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYRECONCILIATIONDOCUMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * QueryReconciliationDocument请求参数结构体
                */
                class QueryReconciliationDocumentRequest : public AbstractModel
                {
                public:
                    QueryReconciliationDocumentRequest();
                    ~QueryReconciliationDocumentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取String(22)，商户号
                     * @return MrchCode String(22)，商户号
                     * 
                     */
                    std::string GetMrchCode() const;

                    /**
                     * 设置String(22)，商户号
                     * @param _mrchCode String(22)，商户号
                     * 
                     */
                    void SetMrchCode(const std::string& _mrchCode);

                    /**
                     * 判断参数 MrchCode 是否已赋值
                     * @return MrchCode 是否已赋值
                     * 
                     */
                    bool MrchCodeHasBeenSet() const;

                    /**
                     * 获取STRING(10)，文件类型（充值文件-CZ; 提现文件-TX; 交易文件-JY; 余额文件-YE; 合约文件-HY）
                     * @return FileType STRING(10)，文件类型（充值文件-CZ; 提现文件-TX; 交易文件-JY; 余额文件-YE; 合约文件-HY）
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置STRING(10)，文件类型（充值文件-CZ; 提现文件-TX; 交易文件-JY; 余额文件-YE; 合约文件-HY）
                     * @param _fileType STRING(10)，文件类型（充值文件-CZ; 提现文件-TX; 交易文件-JY; 余额文件-YE; 合约文件-HY）
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取STRING(8)，文件日期（格式：20190101）
                     * @return FileDate STRING(8)，文件日期（格式：20190101）
                     * 
                     */
                    std::string GetFileDate() const;

                    /**
                     * 设置STRING(8)，文件日期（格式：20190101）
                     * @param _fileDate STRING(8)，文件日期（格式：20190101）
                     * 
                     */
                    void SetFileDate(const std::string& _fileDate);

                    /**
                     * 判断参数 FileDate 是否已赋值
                     * @return FileDate 是否已赋值
                     * 
                     */
                    bool FileDateHasBeenSet() const;

                    /**
                     * 获取STRING(1027)，保留域
                     * @return ReservedMsg STRING(1027)，保留域
                     * 
                     */
                    std::string GetReservedMsg() const;

                    /**
                     * 设置STRING(1027)，保留域
                     * @param _reservedMsg STRING(1027)，保留域
                     * 
                     */
                    void SetReservedMsg(const std::string& _reservedMsg);

                    /**
                     * 判断参数 ReservedMsg 是否已赋值
                     * @return ReservedMsg 是否已赋值
                     * 
                     */
                    bool ReservedMsgHasBeenSet() const;

                    /**
                     * 获取STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * @return Profile STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * @param _profile STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * String(22)，商户号
                     */
                    std::string m_mrchCode;
                    bool m_mrchCodeHasBeenSet;

                    /**
                     * STRING(10)，文件类型（充值文件-CZ; 提现文件-TX; 交易文件-JY; 余额文件-YE; 合约文件-HY）
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * STRING(8)，文件日期（格式：20190101）
                     */
                    std::string m_fileDate;
                    bool m_fileDateHasBeenSet;

                    /**
                     * STRING(1027)，保留域
                     */
                    std::string m_reservedMsg;
                    bool m_reservedMsgHasBeenSet;

                    /**
                     * STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYRECONCILIATIONDOCUMENTREQUEST_H_
