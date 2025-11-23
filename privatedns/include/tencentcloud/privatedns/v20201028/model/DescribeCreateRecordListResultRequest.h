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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBECREATERECORDLISTRESULTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBECREATERECORDLISTRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/RecordsInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeCreateRecordListResult请求参数结构体
                */
                class DescribeCreateRecordListResultRequest : public AbstractModel
                {
                public:
                    DescribeCreateRecordListResultRequest();
                    ~DescribeCreateRecordListResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域ID数组
                     * @return ZoneIds 私有域ID数组
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置私有域ID数组
                     * @param _zoneIds 私有域ID数组
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取私有域解析记录数据
                     * @return RecordsInfo 私有域解析记录数据
                     * 
                     */
                    std::vector<RecordsInfo> GetRecordsInfo() const;

                    /**
                     * 设置私有域解析记录数据
                     * @param _recordsInfo 私有域解析记录数据
                     * 
                     */
                    void SetRecordsInfo(const std::vector<RecordsInfo>& _recordsInfo);

                    /**
                     * 判断参数 RecordsInfo 是否已赋值
                     * @return RecordsInfo 是否已赋值
                     * 
                     */
                    bool RecordsInfoHasBeenSet() const;

                private:

                    /**
                     * 私有域ID数组
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 私有域解析记录数据
                     */
                    std::vector<RecordsInfo> m_recordsInfo;
                    bool m_recordsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBECREATERECORDLISTRESULTREQUEST_H_
