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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPTABLESRESPONSE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPTABLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/BackupTableContent.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeBackUpTables返回参数结构体
                */
                class DescribeBackUpTablesResponse : public AbstractModel
                {
                public:
                    DescribeBackUpTablesResponse();
                    ~DescribeBackUpTablesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可备份表列表
                     * @return AvailableTables 可备份表列表
                     * 
                     */
                    std::vector<BackupTableContent> GetAvailableTables() const;

                    /**
                     * 判断参数 AvailableTables 是否已赋值
                     * @return AvailableTables 是否已赋值
                     * 
                     */
                    bool AvailableTablesHasBeenSet() const;

                    /**
                     * 获取错误描述
                     * @return ErrorMsg 错误描述
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 可备份表列表
                     */
                    std::vector<BackupTableContent> m_availableTables;
                    bool m_availableTablesHasBeenSet;

                    /**
                     * 错误描述
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPTABLESRESPONSE_H_
