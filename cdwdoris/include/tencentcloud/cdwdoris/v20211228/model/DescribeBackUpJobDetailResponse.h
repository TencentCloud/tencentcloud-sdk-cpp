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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPJOBDETAILRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPJOBDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/BackupTableContent.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeBackUpJobDetail返回参数结构体
                */
                class DescribeBackUpJobDetailResponse : public AbstractModel
                {
                public:
                    DescribeBackUpJobDetailResponse();
                    ~DescribeBackUpJobDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份表详情
                     * @return TableContents 备份表详情
                     * 
                     */
                    std::vector<BackupTableContent> GetTableContents() const;

                    /**
                     * 判断参数 TableContents 是否已赋值
                     * @return TableContents 是否已赋值
                     * 
                     */
                    bool TableContentsHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrorMsg 错误信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取是否是未知版本
                     * @return IsUnknownVersion 是否是未知版本
                     * 
                     */
                    bool GetIsUnknownVersion() const;

                    /**
                     * 判断参数 IsUnknownVersion 是否已赋值
                     * @return IsUnknownVersion 是否已赋值
                     * 
                     */
                    bool IsUnknownVersionHasBeenSet() const;

                    /**
                     * 获取返回对象用字符串表示
                     * @return Msg 返回对象用字符串表示
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 备份表详情
                     */
                    std::vector<BackupTableContent> m_tableContents;
                    bool m_tableContentsHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 是否是未知版本
                     */
                    bool m_isUnknownVersion;
                    bool m_isUnknownVersionHasBeenSet;

                    /**
                     * 返回对象用字符串表示
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPJOBDETAILRESPONSE_H_
