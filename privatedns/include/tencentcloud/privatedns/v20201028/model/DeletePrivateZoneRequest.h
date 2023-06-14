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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEZONEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DeletePrivateZone请求参数结构体
                */
                class DeletePrivateZoneRequest : public AbstractModel
                {
                public:
                    DeletePrivateZoneRequest();
                    ~DeletePrivateZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域ID
                     * @return ZoneId 私有域ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置私有域ID
                     * @param _zoneId 私有域ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取私有域ID数组，ZoneId 优先
                     * @return ZoneIdSet 私有域ID数组，ZoneId 优先
                     * 
                     */
                    std::vector<std::string> GetZoneIdSet() const;

                    /**
                     * 设置私有域ID数组，ZoneId 优先
                     * @param _zoneIdSet 私有域ID数组，ZoneId 优先
                     * 
                     */
                    void SetZoneIdSet(const std::vector<std::string>& _zoneIdSet);

                    /**
                     * 判断参数 ZoneIdSet 是否已赋值
                     * @return ZoneIdSet 是否已赋值
                     * 
                     */
                    bool ZoneIdSetHasBeenSet() const;

                private:

                    /**
                     * 私有域ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 私有域ID数组，ZoneId 优先
                     */
                    std::vector<std::string> m_zoneIdSet;
                    bool m_zoneIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEZONEREQUEST_H_
