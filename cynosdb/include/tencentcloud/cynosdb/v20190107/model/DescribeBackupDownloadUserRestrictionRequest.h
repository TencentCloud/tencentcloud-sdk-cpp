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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADUSERRESTRICTIONREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADUSERRESTRICTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadUserRestriction请求参数结构体
                */
                class DescribeBackupDownloadUserRestrictionRequest : public AbstractModel
                {
                public:
                    DescribeBackupDownloadUserRestrictionRequest();
                    ~DescribeBackupDownloadUserRestrictionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页大小
                     * @return Limit 分页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param _limit 分页大小
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取是否只查询用户级别下载限制，true-是，false-否
                     * @return OnlyUserRestriction 是否只查询用户级别下载限制，true-是，false-否
                     * 
                     */
                    bool GetOnlyUserRestriction() const;

                    /**
                     * 设置是否只查询用户级别下载限制，true-是，false-否
                     * @param _onlyUserRestriction 是否只查询用户级别下载限制，true-是，false-否
                     * 
                     */
                    void SetOnlyUserRestriction(const bool& _onlyUserRestriction);

                    /**
                     * 判断参数 OnlyUserRestriction 是否已赋值
                     * @return OnlyUserRestriction 是否已赋值
                     * 
                     */
                    bool OnlyUserRestrictionHasBeenSet() const;

                private:

                    /**
                     * 分页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 是否只查询用户级别下载限制，true-是，false-否
                     */
                    bool m_onlyUserRestriction;
                    bool m_onlyUserRestrictionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADUSERRESTRICTIONREQUEST_H_
