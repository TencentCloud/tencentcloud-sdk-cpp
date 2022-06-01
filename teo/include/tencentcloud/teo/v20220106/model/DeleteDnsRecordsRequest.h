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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DELETEDNSRECORDSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DELETEDNSRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DeleteDnsRecords请求参数结构体
                */
                class DeleteDnsRecordsRequest : public AbstractModel
                {
                public:
                    DeleteDnsRecordsRequest();
                    ~DeleteDnsRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID
                     * @return ZoneId 站点 ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID
                     * @param ZoneId 站点 ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取记录 ID
                     * @return Ids 记录 ID
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置记录 ID
                     * @param Ids 记录 ID
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * 站点 ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 记录 ID
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DELETEDNSRECORDSREQUEST_H_
