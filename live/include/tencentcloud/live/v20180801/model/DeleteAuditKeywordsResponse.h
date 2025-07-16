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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETEAUDITKEYWORDSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETEAUDITKEYWORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AuditKeywordDeleteDetail.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DeleteAuditKeywords返回参数结构体
                */
                class DeleteAuditKeywordsResponse : public AbstractModel
                {
                public:
                    DeleteAuditKeywordsResponse();
                    ~DeleteAuditKeywordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功删除关键词的数量。
                     * @return SuccessCount 成功删除关键词的数量。
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取关键词详情列表。
                     * @return Infos 关键词详情列表。
                     * 
                     */
                    std::vector<AuditKeywordDeleteDetail> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * 成功删除关键词的数量。
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 关键词详情列表。
                     */
                    std::vector<AuditKeywordDeleteDetail> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETEAUDITKEYWORDSRESPONSE_H_
