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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWARNINGLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWARNINGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/WarningInfoObj.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWarningList返回参数结构体
                */
                class DescribeWarningListResponse : public AbstractModel
                {
                public:
                    DescribeWarningListResponse();
                    ~DescribeWarningListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取获取告警列表
                     * @return WarningInfoList 获取告警列表
                     * 
                     */
                    std::vector<WarningInfoObj> GetWarningInfoList() const;

                    /**
                     * 判断参数 WarningInfoList 是否已赋值
                     * @return WarningInfoList 是否已赋值
                     * 
                     */
                    bool WarningInfoListHasBeenSet() const;

                private:

                    /**
                     * 获取告警列表
                     */
                    std::vector<WarningInfoObj> m_warningInfoList;
                    bool m_warningInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWARNINGLISTRESPONSE_H_
