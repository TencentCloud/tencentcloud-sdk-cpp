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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GETGAMESERVERINSTANCELOGURLRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GETGAMESERVERINSTANCELOGURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * GetGameServerInstanceLogUrl返回参数结构体
                */
                class GetGameServerInstanceLogUrlResponse : public AbstractModel
                {
                public:
                    GetGameServerInstanceLogUrlResponse();
                    ~GetGameServerInstanceLogUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志下载URL的数组，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PresignedUrls 日志下载URL的数组，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPresignedUrls() const;

                    /**
                     * 判断参数 PresignedUrls 是否已赋值
                     * @return PresignedUrls 是否已赋值
                     * 
                     */
                    bool PresignedUrlsHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return Total 总条数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取是否还有没拉取完的
                     * @return HasNext 是否还有没拉取完的
                     * 
                     */
                    bool GetHasNext() const;

                    /**
                     * 判断参数 HasNext 是否已赋值
                     * @return HasNext 是否已赋值
                     * 
                     */
                    bool HasNextHasBeenSet() const;

                private:

                    /**
                     * 日志下载URL的数组，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_presignedUrls;
                    bool m_presignedUrlsHasBeenSet;

                    /**
                     * 总条数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 是否还有没拉取完的
                     */
                    bool m_hasNext;
                    bool m_hasNextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GETGAMESERVERINSTANCELOGURLRESPONSE_H_
