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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYRECORDSSTATUSREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYRECORDSSTATUSREQUEST_H_

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
                * ModifyRecordsStatus请求参数结构体
                */
                class ModifyRecordsStatusRequest : public AbstractModel
                {
                public:
                    ModifyRecordsStatusRequest();
                    ~ModifyRecordsStatusRequest() = default;
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
                     * 获取解析记录ID列表
                     * @return RecordIds 解析记录ID列表
                     * 
                     */
                    std::vector<int64_t> GetRecordIds() const;

                    /**
                     * 设置解析记录ID列表
                     * @param _recordIds 解析记录ID列表
                     * 
                     */
                    void SetRecordIds(const std::vector<int64_t>& _recordIds);

                    /**
                     * 判断参数 RecordIds 是否已赋值
                     * @return RecordIds 是否已赋值
                     * 
                     */
                    bool RecordIdsHasBeenSet() const;

                    /**
                     * 获取enabled：生效，disabled：失效
                     * @return Status enabled：生效，disabled：失效
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置enabled：生效，disabled：失效
                     * @param _status enabled：生效，disabled：失效
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 私有域ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 解析记录ID列表
                     */
                    std::vector<int64_t> m_recordIds;
                    bool m_recordIdsHasBeenSet;

                    /**
                     * enabled：生效，disabled：失效
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYRECORDSSTATUSREQUEST_H_
