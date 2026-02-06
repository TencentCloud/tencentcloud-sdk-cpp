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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DELETEDBSBACKUPSETSRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DELETEDBSBACKUPSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DeleteDBSBackupSets返回参数结构体
                */
                class DeleteDBSBackupSetsResponse : public AbstractModel
                {
                public:
                    DeleteDBSBackupSetsResponse();
                    ~DeleteDBSBackupSetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>本次实际删除的备份数量</p>
                     * @return Deleted <p>本次实际删除的备份数量</p>
                     * 
                     */
                    int64_t GetDeleted() const;

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取<p>是否全部删除成功</p>
                     * @return IsSuccess <p>是否全部删除成功</p>
                     * 
                     */
                    bool GetIsSuccess() const;

                    /**
                     * 判断参数 IsSuccess 是否已赋值
                     * @return IsSuccess 是否已赋值
                     * 
                     */
                    bool IsSuccessHasBeenSet() const;

                    /**
                     * 获取<p>需要删除的备份总数</p>
                     * @return Total <p>需要删除的备份总数</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * <p>本次实际删除的备份数量</p>
                     */
                    int64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * <p>是否全部删除成功</p>
                     */
                    bool m_isSuccess;
                    bool m_isSuccessHasBeenSet;

                    /**
                     * <p>需要删除的备份总数</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DELETEDBSBACKUPSETSRESPONSE_H_
