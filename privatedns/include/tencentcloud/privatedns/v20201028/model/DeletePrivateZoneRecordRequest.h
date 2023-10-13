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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEZONERECORDREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEZONERECORDREQUEST_H_

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
                * DeletePrivateZoneRecord请求参数结构体
                */
                class DeletePrivateZoneRecordRequest : public AbstractModel
                {
                public:
                    DeletePrivateZoneRecordRequest();
                    ~DeletePrivateZoneRecordRequest() = default;
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
                     * 获取记录ID（调用DescribePrivateZoneRecordList可获取到RecordId）
                     * @return RecordId 记录ID（调用DescribePrivateZoneRecordList可获取到RecordId）
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置记录ID（调用DescribePrivateZoneRecordList可获取到RecordId）
                     * @param _recordId 记录ID（调用DescribePrivateZoneRecordList可获取到RecordId）
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取记录ID数组，RecordId 优先
                     * @return RecordIdSet 记录ID数组，RecordId 优先
                     * 
                     */
                    std::vector<std::string> GetRecordIdSet() const;

                    /**
                     * 设置记录ID数组，RecordId 优先
                     * @param _recordIdSet 记录ID数组，RecordId 优先
                     * 
                     */
                    void SetRecordIdSet(const std::vector<std::string>& _recordIdSet);

                    /**
                     * 判断参数 RecordIdSet 是否已赋值
                     * @return RecordIdSet 是否已赋值
                     * 
                     */
                    bool RecordIdSetHasBeenSet() const;

                private:

                    /**
                     * 私有域ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 记录ID（调用DescribePrivateZoneRecordList可获取到RecordId）
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 记录ID数组，RecordId 优先
                     */
                    std::vector<std::string> m_recordIdSet;
                    bool m_recordIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEZONERECORDREQUEST_H_
