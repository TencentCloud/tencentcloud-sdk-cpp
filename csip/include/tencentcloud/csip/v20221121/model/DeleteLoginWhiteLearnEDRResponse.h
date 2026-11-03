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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITELEARNEDRRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITELEARNEDRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteLoginWhiteLearnEDR返回参数结构体
                */
                class DeleteLoginWhiteLearnEDRResponse : public AbstractModel
                {
                public:
                    DeleteLoginWhiteLearnEDRResponse();
                    ~DeleteLoginWhiteLearnEDRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>删除的主机记录行数（一个规则组可能含多行，与自定义白名单接口按规则条数统计的口径不同）</p>
                     * @return DeletedCount <p>删除的主机记录行数（一个规则组可能含多行，与自定义白名单接口按规则条数统计的口径不同）</p>
                     * 
                     */
                    int64_t GetDeletedCount() const;

                    /**
                     * 判断参数 DeletedCount 是否已赋值
                     * @return DeletedCount 是否已赋值
                     * 
                     */
                    bool DeletedCountHasBeenSet() const;

                    /**
                     * 获取<p>删除失败的账号 AppId 列表；仅当全部失败时才返回错误</p>
                     * @return FailedAppIds <p>删除失败的账号 AppId 列表；仅当全部失败时才返回错误</p>
                     * 
                     */
                    std::vector<uint64_t> GetFailedAppIds() const;

                    /**
                     * 判断参数 FailedAppIds 是否已赋值
                     * @return FailedAppIds 是否已赋值
                     * 
                     */
                    bool FailedAppIdsHasBeenSet() const;

                private:

                    /**
                     * <p>删除的主机记录行数（一个规则组可能含多行，与自定义白名单接口按规则条数统计的口径不同）</p>
                     */
                    int64_t m_deletedCount;
                    bool m_deletedCountHasBeenSet;

                    /**
                     * <p>删除失败的账号 AppId 列表；仅当全部失败时才返回错误</p>
                     */
                    std::vector<uint64_t> m_failedAppIds;
                    bool m_failedAppIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITELEARNEDRRESPONSE_H_
