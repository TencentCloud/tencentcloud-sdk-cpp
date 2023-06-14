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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCALERTDETAILSREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCALERTDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeSocAlertDetails请求参数结构体
                */
                class DescribeSocAlertDetailsRequest : public AbstractModel
                {
                public:
                    DescribeSocAlertDetailsRequest();
                    ~DescribeSocAlertDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警id
                     * @return AlertId 告警id
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置告警id
                     * @param _alertId 告警id
                     * 
                     */
                    void SetAlertId(const std::string& _alertId);

                    /**
                     * 判断参数 AlertId 是否已赋值
                     * @return AlertId 是否已赋值
                     * 
                     */
                    bool AlertIdHasBeenSet() const;

                    /**
                     * 获取告警时间，取Timestamp字段
                     * @return AlertTimestamp 告警时间，取Timestamp字段
                     * 
                     */
                    std::string GetAlertTimestamp() const;

                    /**
                     * 设置告警时间，取Timestamp字段
                     * @param _alertTimestamp 告警时间，取Timestamp字段
                     * 
                     */
                    void SetAlertTimestamp(const std::string& _alertTimestamp);

                    /**
                     * 判断参数 AlertTimestamp 是否已赋值
                     * @return AlertTimestamp 是否已赋值
                     * 
                     */
                    bool AlertTimestampHasBeenSet() const;

                private:

                    /**
                     * 告警id
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * 告警时间，取Timestamp字段
                     */
                    std::string m_alertTimestamp;
                    bool m_alertTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCALERTDETAILSREQUEST_H_
