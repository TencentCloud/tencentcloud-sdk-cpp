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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADBILLRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADBILLRESPONSE_H_

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
                * DownloadBill返回参数结构体
                */
                class DownloadBillResponse : public AbstractModel
                {
                public:
                    DownloadBillResponse();
                    ~DownloadBillResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账单文件名
                     * @return FileName 账单文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取账单文件的MD5值
                     * @return FileMD5 账单文件的MD5值
                     * 
                     */
                    std::string GetFileMD5() const;

                    /**
                     * 判断参数 FileMD5 是否已赋值
                     * @return FileMD5 是否已赋值
                     * 
                     */
                    bool FileMD5HasBeenSet() const;

                    /**
                     * 获取账单文件的真实下载地址
                     * @return DownloadUrl 账单文件的真实下载地址
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取账单类型
TRADE，对账单
FUND，资金账单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateType 账单类型
TRADE，对账单
FUND，资金账单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStateType() const;

                    /**
                     * 判断参数 StateType 是否已赋值
                     * @return StateType 是否已赋值
                     * 
                     */
                    bool StateTypeHasBeenSet() const;

                private:

                    /**
                     * 账单文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 账单文件的MD5值
                     */
                    std::string m_fileMD5;
                    bool m_fileMD5HasBeenSet;

                    /**
                     * 账单文件的真实下载地址
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 账单类型
TRADE，对账单
FUND，资金账单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stateType;
                    bool m_stateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADBILLRESPONSE_H_
